/*
 * File: CobStmtSubtract.cpp
 * Created Date: Sunday April 13th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday April 13th 2014 10:40:23 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 10:30 PM
 */

#include "CobStmtSubtract.h"
#include "../util/genutil.h"

CobStmtSubtract::CobStmtSubtract() {
}
CobStmtSubtract::CobStmtSubtract(enum add_type_enum ptype, void * plstfirst, void * pfromlst, 
                        void * pgiving, void * ponsize_error, int prounded){
    type = ptype;
    switch(ptype){
        case CB_MS_SIMPLE:
            firstlst = (list <struct xvaldata *> *)plstfirst;
            fromlst  = (list <struct xvaldata *> *)pfromlst;
            break;
        case CB_MS_GIVING:
            firstlst = (list <struct xvaldata *> *)plstfirst;
            fromval  = (struct xvaldata *)pfromlst; 
            break;
        case CB_MS_CORR:
            firstitem = (struct idvalStru *)plstfirst;
            fromid    = (struct idvalStru *)pfromlst;
            break;
    }
    giving      = (list <struct xvaldata *> *)pgiving;
    onsizeerror = (struct on_size_error_data *)ponsize_error;
    rounded     = prounded;
}

CobStmtSubtract::CobStmtSubtract(const CobStmtSubtract& orig) {
}

void CobStmtSubtract::dump(){
}
void CobStmtSubtract::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Subtract statement :\n";
}
void CobStmtSubtract::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    static int tmpcount = 0;
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Subtract statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    // add the items before FROM.
    int count = 0;
    stringstream firststr;

    if(firstlst != NULL){
        list <struct xvaldata *>::iterator i;
        if(firstlst->size() > 1) {
            firststr << tabstr << gen_tmpfrom_xvallst(firstlst, string("tmps"), tmpcount);
            pmethod->addStatement(firststr.str());
            firststr.str(string()); firststr.clear();
            firststr << tabstr << "tmps" << tmpcount << " = ";
        }
        for(i = firstlst->begin(); i != firstlst->end(); ++i){
            struct xvaldata * item = (struct xvaldata *)(*i);
            if(count++ > 0) firststr << " + ";
            firststr << gen_arithmaticqty(item);            
        }        
        firststr << ";";
    }   
    
    switch(type) {
    case CB_MS_SIMPLE: {
    // SUBTRACT aa, bb FROM cc, dd
    // tmp = aa + bb;
    // cc = cc - tmp;
    // dd = dd - tmp;
        if(count > 1 ){
            pmethod->addStatement(firststr.str());
        }        
        if(fromlst != NULL){
            list <struct xvaldata *>::iterator i;
            for(i = fromlst->begin(); i != fromlst->end(); ++i){
                struct xvaldata * item = (struct xvaldata *)(*i);
                t << tabstr << gen_arithmaticqty(item) << " = " << gen_arithmaticqty(item) 
                            << " - " ;
                if(count > 1) { 
                    t << "tmps" << tmpcount << ";";
                } else {
                    t << firststr.str();
                }
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();
            }
        }
        
        break;
    }
    case CB_MS_GIVING: {
    // SUBTRACT aa, bb FROM cc GIVING ee, gg
    // tmp = aa + bb;
    // ee = cc - tmp;
    // gg = dd - tmp;
        if(count > 1 ){
            pmethod->addStatement(firststr.str());
        }        
////
        list <struct xvaldata *>::iterator j;            
        for(j = giving->begin(); j != giving->end(); ++j){
            struct xvaldata * givingitem = (struct xvaldata *)(*j);
            t << tabstr << gen_arithmaticqty(givingitem) << " = " << gen_arithmaticqty(fromval) 
                        << " - ";
            if(count > 1) { 
                t << "tmps" << tmpcount << ";";
            } else {
                list <struct xvaldata *>::iterator k;
                k = firstlst->begin();
                t << gen_arithmaticqty((*k)) << ";";
            }
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
        }
////        
        break;
    }
    case CB_MS_CORR: {
    // SUBTRACT CORR aa FROM bb
    // bb.add(aa);
        t << tabstr << gen_id(fromid) << ".subtract(" << gen_id(firstitem) << ");";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();        
        break;
    }
    }
    tmpcount++;
}
void CobStmtSubtract::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("subtract_statement"); 
    // TODO
}
CobStmtSubtract::~CobStmtSubtract() {
    if(firstlst != NULL) delete_xvallist(firstlst);
    if(firstitem != NULL) delete_id(firstitem);
    if(fromlst != NULL) delete_xvallist(fromlst);
    if(fromval != NULL) delete_xval(fromval);
    if(fromid != NULL) delete_id(fromid);
    if(giving != NULL) delete_xvallist(giving);
    if(onsizeerror != NULL) delete_on_error_data(onsizeerror);
}

