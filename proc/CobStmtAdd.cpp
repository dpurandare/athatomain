/*
 * File: CobStmtAdd.cpp
 * Created Date: Wednesday August 27th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday August 27th 2014 11:39:12 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:15 PM
 */

#include "CobStmtAdd.h"
#include "../util/genutil.h"

CobStmtAdd::CobStmtAdd() {
}
CobStmtAdd::CobStmtAdd(enum add_type_enum ptype, void * pfromlst, void * ptolst, 
               void * pgivinglst, void * ponsize_error) {
    type = ptype;
    if(type == CB_MS_CORR) {
        fromitem    = (struct xvaldata *)pfromlst;
        toitem      = (struct xvaldata *)ptolst;
        // rounded  = prounded; does not matter. change this when required. 
    } else {
        fromlst     = (list <struct xvaldata *> *)pfromlst;
        tolst       = (list <struct xvaldata *> *)ptolst;        
    }
    givinglst   = (list <struct xvaldata *> *)pgivinglst;
    onsizeerror = (struct on_size_error_data *)ponsize_error;
}

void CobStmtAdd::dump(){
}
void CobStmtAdd::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Add statement :\n";
}
void CobStmtAdd::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    static int tmpcount = 0;
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Add statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    // add the items before TO.
    int count = 0;
    stringstream fromstr;

    if(fromlst != NULL){        
        list <struct xvaldata *>::iterator i;
        if(fromlst->size() > 1) {
            fromstr << tabstr << gen_tmpfrom_xvallst(fromlst, string("tmpa"), tmpcount);
            pmethod->addStatement(fromstr.str());
            fromstr.str(string()); fromstr.clear();
            fromstr << tabstr << "tmpa" << tmpcount << " = ";
        }
        for(i = fromlst->begin(); i != fromlst->end(); ++i){
            struct xvaldata * item = (struct xvaldata *)(*i);
            if(count++ > 0) fromstr << " + ";
//            fromstr << gen_xval(item);            
            fromstr << gen_arithmaticqty(item);            
        }
        fromstr << ";";
    }

    switch(type) {
    case CB_MS_SIMPLE: {
    // ADD aa, bb TO cc, dd
    // tmp = aa + bb;
    // cc = cc + tmp;
    // dd = dd + tmp;
        if(count  > 1 ){
            pmethod->addStatement(fromstr.str());
        }
        if(tolst != NULL){
            list <struct xvaldata *>::iterator i;
            for(i = tolst->begin(); i != tolst->end(); ++i){
                struct xvaldata * item = (struct xvaldata *)(*i);
                t << tabstr << gen_arithmaticqty(item) << " = " << gen_arithmaticqty(item) 
                            << " + " ;
                if(count > 1) { 
                    t << "tmpa" << tmpcount << ";";
                } else {
                    t << fromstr.str();
                }
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();
            }
        }
        break;
    }
    case CB_MS_GIVING: {
    // ADD aa, bb TO cc, dd GIVING ee, gg
    // tmp = aa + bb;
    // ee = cc + tmp;
    // gg = dd + tmp;
        if(count  > 1 ){
            pmethod->addStatement(fromstr.str());
        }
        if(tolst != NULL && givinglst != NULL){
            list <struct xvaldata *>::iterator i;
            list <struct xvaldata *>::iterator j;            
            for(i = tolst->begin(), j = givinglst->begin(); 
                i != tolst->end() && j != givinglst->end() ; 
                ++i, ++j){
                struct xvaldata * toitem = (struct xvaldata *)(*i);
                struct xvaldata * givingitem = (struct xvaldata *)(*j);
                t << tabstr << gen_arithmaticqty(givingitem) << " = " << gen_arithmaticqty(toitem) 
                            << " + ";
                if(count > 1) { 
                    t << "tmpa" << tmpcount << ";";
                } else {
                    list <struct xvaldata *>::iterator k;
                    k = fromlst->begin();
                    t << gen_arithmaticqty((*k));
                }
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();
            }
        }
        if(tolst == NULL){
            // assumed that the giving list is not empty...
            list <struct xvaldata *>::iterator j;            
            for(j = givinglst->begin(); j != givinglst->end() ; ++j){
                struct xvaldata * givingitem = (struct xvaldata *)(*j);
                t << tabstr << gen_arithmaticqty(givingitem) << " = ";
                if(count > 1) { 
                    t << "tmpa" << tmpcount << ";";
                } else {
                    list <struct xvaldata *>::iterator k;
                    k = fromlst->begin();
                    t << gen_arithmaticqty((*k));
                }
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();
            }
        }
        break;
    }
    case CB_MS_CORR: {
    // ADD CORR aa TO bb
    // bb.add(aa);
        t << tabstr << gen_arithmaticqty(toitem) << ".add(" << gen_arithmaticqty(fromitem) << ");";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();        
        break;
    }
    }
    tmpcount++;
}
CobStmtAdd::CobStmtAdd(const CobStmtAdd& orig) {
}
void CobStmtAdd::proc_xml(pugi::xml_node parent){
    pugi::xml_node addnode = parent.append_child(pugi::node_element);
    addnode.set_name("add_statement");
    // TODO    
}
CobStmtAdd::~CobStmtAdd() {

    if(type == CB_MS_CORR) {
        delete_xval(fromitem);
        //fromitem    = (struct xvaldata *)pfromlst;
        delete_xval(toitem);
        //toitem      = (struct xvaldata *)ptolst;
        // rounded  = prounded; does not matter. change this when required. 
    } else {
        delete_xvallist((void *)fromlst);
        //fromlst     = (list <struct xvaldata *> *)pfromlst;
        delete_xvallist((void *)tolst);
        //tolst       = (list <struct xvaldata *> *)ptolst;        
    }    
    delete_xvallist((void *)givinglst);
    delete_on_error_data(onsizeerror);
}

