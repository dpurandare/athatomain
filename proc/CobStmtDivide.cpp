/*
 * File: CobStmtDivide.cpp
 * Created Date: Thursday April 24th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Thursday April 24th 2014 9:49:31 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 10:31 PM
 */

#include "CobStmtDivide.h"
#include "../util/genutil.h"

CobStmtDivide::CobStmtDivide() {
}
CobStmtDivide::CobStmtDivide(enum divide_type_enum ptype, void * ptarget, void * pby_into, void * pgivinglst,
                                 void * premainder, void * ponsize_error) {
    type = ptype;
    target = (struct xvaldata *)ptarget;
    
//    by_into = pby_into; 
    
    switch(type){                                                  
        case CB_DIV_INTO:     
            byinto_lst = (list <struct xvaldata *> *) pby_into;
            break;
        case CB_DIV_INTO_GIVING:
            byinto_item = (struct xvaldata *) pby_into;
            break;
        case CB_DIV_BY_GIVING:
            byinto_item = (struct xvaldata *) pby_into;
            break;            
        case CB_DIV_INTO_GIVING_REM: 
            byinto_item = (struct xvaldata *) pby_into;
            break;            
        case CB_DIV_BY_GIVING_REM: 
            byinto_item = (struct xvaldata *) pby_into;
            break;            
    }
    
    givinglst = (list <struct xvaldata *> *) pgivinglst;
    remainder = (struct xvaldata *) premainder; 
    onsize_error = (struct on_size_error_data *)ponsize_error;    
}

CobStmtDivide::CobStmtDivide(const CobStmtDivide& orig) {
}

void CobStmtDivide::dump(){
}
void CobStmtDivide::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Divide statement :\n";
}
void CobStmtDivide::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Divide statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    switch(type){                                                  
        case CB_DIV_INTO: {
        //DIVIDE Num1 INTO Num2
        // Num2 = Num2 / Num1
	//DIVIDE Num1 INTO Num2, Num3, Num4
        // Num2 = Num2 / Num1;
        // Num3 = Num3 / Num1 ...
            list <struct xvaldata *>::iterator i;
            for(i = byinto_lst->begin(); i != byinto_lst->end(); ++i) {
                t << tabstr << gen_arithmaticqty((*i)) << " = " << gen_arithmaticqty((*i)) 
                        << " / " << gen_arithmaticqty(target) << ";";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();                
            }
            break;
        }
        case CB_DIV_INTO_GIVING: {
        //DIVIDE Num1 INTO Num2 GIVING Num3, Num4
        // Num3 = Num2 / Num1
        // Num4 = Num2 / Num1
            list <struct xvaldata *>::iterator i;
            for(i = givinglst->begin(); i != givinglst->end(); ++i) {
                t << tabstr << gen_arithmaticqty((*i)) << " = " << gen_arithmaticqty(byinto_item)
                        << " / " << gen_arithmaticqty(target) << ";";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();                
            }
            break;
        }
        case CB_DIV_BY_GIVING: {
        //DIVIDE Num1 BY Num2 GIVING Num3, Num4
        // Num3 = Num1 / Num2
        // Num4 = Num1 / Num2
            list <struct xvaldata *>::iterator i;
            for(i = givinglst->begin(); i != givinglst->end(); ++i) {
                t << tabstr << gen_arithmaticqty((*i)) << " = " << gen_arithmaticqty(target)
                        << " / " << gen_arithmaticqty(byinto_item) << ";";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();                
            }            
            break;           
        }
        case CB_DIV_INTO_GIVING_REM: {
        //DIVIDE Num1 INTO Num2 GIVING Num3 REMAINDER Num4 
        // Num3 = (int)Num2 / (int)Num1
        // Num4 = mod((int)Num2 / (int)Num1);
            list <struct xvaldata *>::iterator i;
            for(i = givinglst->begin(); i != givinglst->end(); ++i) {
                struct xvaldata * item = (*i);                
                t << tabstr << gen_arithmaticqty((*i)) << " = " 
                        << "(int)" << gen_arithmaticqty(byinto_item) 
                        << " / " << "(int)" << gen_arithmaticqty(target) << ";";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();
            }
            t << tabstr << gen_arithmaticqty(remainder) << " = "
                        << "(int)" << gen_arithmaticqty(byinto_item) 
                        << " % " << "(int)" << gen_arithmaticqty(target) << ";";                    
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
            break;
        }
        case CB_DIV_BY_GIVING_REM: {
        //DIVIDE Num1 BY Num2 GIVING Num3 REMAINDER Num4
        // Num3 = (int)Num1 / (int)Num2
        // Num4 = mod((int) Num1 / (int)Num2);
            list <struct xvaldata *>::iterator i;
            for(i = givinglst->begin(); i != givinglst->end(); ++i) {
                struct xvaldata * item = (*i);                
                t << tabstr << gen_arithmaticqty((*i)) << " = " 
                        << "(int)" <<  gen_arithmaticqty(target)
                        << " / " << "(int)" << gen_arithmaticqty(byinto_item) << ";";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();
            }
            t << tabstr << gen_arithmaticqty(remainder) << " = "
                        << "(int)" << gen_arithmaticqty(target) 
                        << " % " << "(int)" << gen_arithmaticqty(byinto_item) << ";";                    
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();            
            break;            
        }
    }
    
}
void CobStmtDivide::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("divide_statement");    
}
CobStmtDivide::~CobStmtDivide() {
    if(target != NULL) delete_xval(target);
    if(byinto_item != NULL) delete_xval(byinto_item);
    if(byinto_lst != NULL) delete_xvallist(byinto_lst);
    if(givinglst != NULL) delete_xvallist(givinglst);
    if(remainder != NULL) delete_xval(remainder);
    if(onsize_error != NULL) delete_on_error_data(onsize_error);
}

