/*
 * File: CobStmtMultiply.cpp
 * Created Date: Thursday April 10th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Thursday April 10th 2014 4:35:40 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 10:31 PM
 */

#include "CobStmtMultiply.h"
#include "../util/genutil.h"

CobStmtMultiply::CobStmtMultiply() {
}
CobStmtMultiply::CobStmtMultiply(enum add_type_enum ptype, void * ptarget, void * pby, void * pgivinglst,
                        void * ponsize_error) {
    type = ptype;
    target = (struct xvaldata *)ptarget; 
    if(type == CB_MS_SIMPLE) {
        by = NULL;
        bylst = (list <struct xvaldata *> *)pby;
    } else if(type == CB_MS_GIVING) {
        by = (struct xvaldata *)pby;
        bylst = NULL;
    }
    givinglst = (list <struct xvaldata *> *)pgivinglst;
    onsize_error = (struct on_size_error_data *)ponsize_error;    
}
CobStmtMultiply::CobStmtMultiply(const CobStmtMultiply& orig) {
}

void CobStmtMultiply::dump(){
}
void CobStmtMultiply::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Multiply statement :\n";
}
void CobStmtMultiply::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Multiply statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    switch(type) {
    case CB_MS_SIMPLE: {
    //MULTIPLY xx BY yy, zz
    // yy = yy * xx;
    // zz = zz * xx;
        list <struct xvaldata *>::iterator i;
        for(i = bylst->begin(); i != bylst->end(); ++i){
            struct xvaldata * item = (struct xvaldata *)(*i);
//            t << tabstr << gen_xval(item) << " = " << gen_xval(item) << " * "
//                << gen_xval(target) << ";";
            t << tabstr << gen_arithmaticqty(item) << " = " << gen_arithmaticqty(item) << " * "
                << gen_arithmaticqty(target) << ";";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();            
        }
        break;
    }
    case CB_MS_GIVING: {
    //MULTIPLY xx BY yy GIVING aa, bb
    // aa = xx * yy 
    // bb = xx * yy
        list <struct xvaldata *>::iterator j;            
        for(j = givinglst->begin(); j != givinglst->end() ; ++j){
            struct xvaldata * givingitem = (struct xvaldata *)(*j);
//            t << tabstr << gen_xval(givingitem) << " = " 
//                << gen_xval(target) << " * " << gen_xval(by) << ";";
            t << tabstr << gen_arithmaticqty(givingitem) << " = " 
                << gen_arithmaticqty(target) << " * " << gen_arithmaticqty(by) << ";";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
        }
        break;
    }
    default:
        cerr << "Error in Multiplication statement\n";
        break;
    }
}
void CobStmtMultiply::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("multiply_statement"); 
    // TODO   
}
CobStmtMultiply::~CobStmtMultiply() {
    if(target != NULL) delete_xval(target);
    if(by != NULL) delete_xval(by);
    if(bylst != NULL) delete_xvallist(bylst);
    if(givinglst != NULL) delete_xvallist(givinglst);
    if(onsize_error != NULL) delete_on_error_data(onsize_error);
}

