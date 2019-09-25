/*
 * File: CobStmtEvaluate.cpp
 * Created Date: Sunday April 27th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday April 27th 2014 9:23:13 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:10 PM
 */

#include "CobStmtEvaluate.h"
#include "CobStmtAccept.h"
#include "../ast/objinc.h"
CobStmtEvaluate::CobStmtEvaluate() {
}

CobStmtEvaluate::CobStmtEvaluate(struct _eval_item * pevlitem,
                                void * palso_eval_item_lst,
                                void * pwhen_clause_lst,
                                void * popt_when_other_action){
    evalitem = pevlitem;
    also_eval_item_lst = (list <void *> *) palso_eval_item_lst;  
    when_clause_lst = (list <void *> *) pwhen_clause_lst;
    when_other_action = popt_when_other_action;
    mod_eval_item_lst = new list <void *>;
    if(evalitem) {
        mod_eval_item_lst->push_back(evalitem);
    }
    if(also_eval_item_lst) {
        list <void *>::iterator i;
        for(i = also_eval_item_lst->begin(); i != also_eval_item_lst->end(); ++i){
            mod_eval_item_lst->push_back((*i));
        }
    }
}

CobStmtEvaluate::CobStmtEvaluate(const CobStmtEvaluate& orig) {
}

void CobStmtEvaluate::dump(){
}

void CobStmtEvaluate::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Evaluate statement :\n";
}

CobSentence * CobStmtEvaluate::getStatements(){
    if(when_other_action == NULL) return NULL;
    return (CobSentence *) when_other_action;    
}

void CobStmtEvaluate::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    
    cbfile = pfile;
    
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;

    t << tabstr << "// Evaluate statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    int count = 0;
    
    if(when_clause_lst != NULL){
        list <void *>::iterator i;
        for( i = when_clause_lst->begin(); i != when_clause_lst->end(); ++i) {
            struct _when_clause_item * witem = (struct _when_clause_item *)(*i);
            // add the first item ahead of the also list. 
            // is is safe to assume that the eval and when item count is same. 
            // else it is semantic error. No need to catch it here. 
            struct _eval_item * wevalitem = witem->when_item;
            list <void *> * awitemlist = (list <void *> * )witem->when_also_item_lst;
            // if the list is empty means there is just one item.  
            // Highly unlikely however possible. 
            if(awitemlist == NULL) awitemlist = new list <void *>;
            awitemlist->push_front(wevalitem);
            
            if(count++ == 0) {
                t << tabstr << "if(";
            } else {
                t << tabstr << "else if(";
            }
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
            
            gen_list(pfile, pgen, pclass, pmethod, pisfirst, plevel+1, s, 
                                mod_eval_item_lst, awitemlist, witem->procstmt);
            //t << ") {";

            //pmethod->addStatement(t.str());

//            t << tabstr << "}";
//            pmethod->addStatement(t.str());
//            t.str(string()); t.clear();
        }
        if(when_other_action != NULL) {
            t << tabstr << "else {";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();

            ((CobSentence *)when_other_action)->gen(pfile, pgen, pclass, pmethod, pisfirst, plevel+1, s);

            t << tabstr << "}";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
        }
    }    
}

void CobStmtEvaluate::gen_list(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
                        JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s, 
                        list <void *> * pevallst, list <void *> * pwhenlst, void * pproc){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;

    list <void *>::iterator i;
    list <void *>::iterator j;
    int k = 0;
    
    for( i = pevallst->begin(), j = pwhenlst->begin();
         (i != pevallst->end()) &&  (j != pwhenlst->end()); ++i, ++j) {
        
        struct _eval_item * eitem = (struct _eval_item *)(*i);
        struct _eval_item * witem = (struct _eval_item *)(*j);
        
        t << tabstr;
        if( k++ != 0) { 
            t << " && ";
        }
        t << gen_item(plevel, eitem, witem, pproc, pmethod);
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();    
    }
    t << tabstr << ") {";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    ((CobSentence *)pproc)->gen(pfile, pgen, pclass, pmethod, 
                                    pisfirst, plevel+1, s);

    t << tabstr << "}";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();    
}

string CobStmtEvaluate::gen_item(int plevel, struct _eval_item * peitem, 
                        struct _eval_item * pwitem, void * pproc,
                        JMetaMethod * pmethod){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;

    t << evalpair(peitem, pwitem);
            
    return t.str();
}

string CobStmtEvaluate::get88typecondopt(struct _eval_item * peitem, bool pflag){
    CobDataDivision * cbdatadiv = cbfile->getDataDivision();
    
    stringstream t;
    char * parent, c1, c2;
    
    if(peitem->litval != NULL){
        // possibly at the top level. there is no through item here. 
        CobFieldRecord *  fld = cbdatadiv->findField(peitem->litval->idval->idStr);
        if(fld->level == 88) {
            if(fld->parent != NULL) {
                t << "(";
                t << getJname(fld->qualifiedname.c_str()) ;
                t << ".match(";
                t << getJname(fld->parent->qualifiedname.c_str()) << ")";
                t << ")";
            } else {
                t << getJname(fld->qualifiedname.c_str()) << "/*(XXX: 703-C-EVALUATE)*/";
            }

//            ///
//            int dataType = fld->dataType;
//            string datatypestr;
//            if(dataType == -1) {
//                datatypestr =  ".valueStr";
//            } else {
//                switch(dataType){
//                    case CB_INT:
//                        datatypestr = ".intValue"; break;
//                    case CB_FLOAT:
//                        datatypestr = ".doubleValue"; break;
//                    default:
//                        datatypestr = ".valueStr";
//                        break;
//                }
//            }
//            /// cob17
////            t << "(" << getJname(fld->parent->qualifiedname.c_str())  << datatypestr;
//            t << "(" << getJname(fld->parent->decoratedName.c_str())  << datatypestr;
////            t << "(" << gen_idarithm(peitem->litval->idval);
//            if(pflag) {
//                t << " == ";
//            } else {
//                t << " != ";
//            }
//            t << getJname(fld->qualifiedname.c_str()) << datatypestr << ")";
            
        } else {
            t << "(" << gen_value(peitem->litval) << " == ";
            if(pflag) {
                t << " TRUE ";
            } else {
                t << " FALSE ";
            }
            t << ")";
        }
    } else if(peitem->from_item) {
            if(peitem->from_item->litval != NULL) {

            // there are two possibilities. single item and double item
            if(peitem->thru_item == NULL) {
                // single item
                CobFieldRecord *  fld = cbdatadiv->findField(peitem->litval->idval->idStr);
                if(fld->level == 88) {
                    t << "(" << getJname(fld->parent->qualifiedname.c_str());
                    if(pflag) {
                        t << " == ";
                    } else {
                        t << " != ";
                    }
                    t << getJname(fld->recordname) << ")";
                } else {
                    t << "(" << gen_value(peitem->from_item->litval) << " == ";
                    if(pflag) {
                        t << " TRUE ";
                    } else {
                        t << " FALSE ";
                    }
                    t << ")";
                }           
            } else {
                // double item. does it make any sense?
    //            CobFieldRecord *  fld = cbdatadiv->findField(peitem->litval->idval->idStr);
    //            if(fld->level == 88) {
    //                t << "(" << fld->parent->recordname << 
    //                        " >= " <<  peitem->from_item->litval->idval->idStr << ") && (" 
    //                        " <= "peitem->thru_item->litval->idval->idStr            
    //            } else {
    //                // this should not happen. 
    //            }
                t << "(XXX: 125-YTI)";
            }
        }
    } else {
        // not found. 
        t << "(XXX: 126-YTI)";
    }

    return t.str();
}

string CobStmtEvaluate::evalpair(struct _eval_item * peitem, struct _eval_item * pwitem){

    stringstream t;

    switch(peitem->type) {
        
    // does't appear as per syntax
    case CB_EI_ANY : // ANY appearint in eval clause makes no sense. 
                     // the only possibly would be just ignore this and make it
                     // unconditional. 
       break;
    // does't appear as per syntax
    case CB_EI_COND: {
        // if COND appearing in eval clause could me the WHEN clause should have
        // only true or false. else makes no sense. 
        switch(pwitem->type){
            case CB_EI_TRUE:
                t << "(" << gen_condition(peitem->cond) << " == TRUE)";
                break;
            case CB_EI_FALSE:
                t << "(" << gen_condition(peitem->cond) << " == FALSE)";
                break;
            default: 
                t << "(XXX: 101-YTI)";
                break;
        }            
        break;
    }
    case CB_EI_TRUE:{
        // TRUE - TRUE, TRUE - FALSE, TRUE - ANY, will not make any sense. 
        // TRUE and eval items also will not make any sense. 
        // Arithmetic expression == true does not make any sense. 
        // TRUE and any other EVAL item in WHEN also does not make sense. 
        switch(pwitem->type){
            case CB_EI_COND: 
                t << "(" << gen_condition(pwitem->cond) << " == TRUE)";
                break;
            case CB_EI_EVAL_ITEMS:
                t << "(XXX: 102-YTI)";
                break;
            case CB_EI_LITERAL:
                t << "(" << gen_value(pwitem->litval) << " == TRUE)";
            case CB_EI_ARITHM_EXP:
                t << "(XXX: 103-YTI)";
                break;
            case CB_EI_EVAL: {
                if(pwitem->from_item != NULL) {
//                    (pwitem->from_item->type)
                    t << eval_from_item(pwitem->from_item, true);

                    // This could be a case of Level 88 field. explore. 
//                    t << get88typecondopt(pwitem->from_item, true);                    
                }
                //t << "(" << evalitemstr(pwitem->from_item) << " == TRUE)";
                //t << "(XXX: 104-YTI)";
                break;
            }
            case CB_EI_GNAME:
                t << "(" << gen_value(pwitem->litval) << " == TRUE)";
                break;
            default:
                t << "(XXX: 105-YTI)";
                break;
        }
        break;
    }            
    case CB_EI_FALSE: {
        switch(pwitem->type){
            case CB_EI_COND: 
                t << "(" << gen_condition(pwitem->cond) << " == FALSE)";
                break;
            case CB_EI_EVAL_ITEMS:
                t << "(XXX: 106-YTI)";
                break;
            case CB_EI_LITERAL:
                t << "(" << gen_value(pwitem->litval) << " == FALSE)";
            case CB_EI_ARITHM_EXP:
                t << "(XXX: 107-YTI)";
                break;
            case CB_EI_EVAL:
                if(pwitem->from_item != NULL) {
                    t << eval_from_item(pwitem->from_item, false);
                    // This could be a case of Level 88 field. explore. 
                    //t << get88typecondopt(pwitem->from_item, false);                    
                }
                //t << "(XXX: 108-YTI)";
                break;
            case CB_EI_GNAME:
                t << "(" << gen_value(pwitem->litval) << " == FALSE)";
                break;
            default:
                t << "(XXX: 109-YTI)";
                break;
        }
        break;        
    }
    // doesn't appear 
    case CB_EI_EVAL_ITEMS: {
        // it is unlikely to find the THRU type items in the EVAL clause however if any.
        t << "(XXX: 110-YTI)";        
        break;
    }
    case CB_EI_LITERAL: {
        switch(pwitem->type){
            case CB_EI_ANY:
                t << "(XXX: 111-YTI)";        
                break;
            case CB_EI_COND:
                t << "(XXX: 112-YTI)";        
                break;
            case CB_EI_TRUE:
                t << "(" << gen_value(peitem->litval) << " == TRUE)";
                break;
            case CB_EI_FALSE:
                t << "(" << gen_value(peitem->litval) << " == FALSE)";
                break;
            case CB_EI_EVAL_ITEMS:
                t << "(XXX: 113-YTI)"; // this should not appear...
                break;
            case CB_EI_ARITHM_EXP:
                t << "(" << gen_arithmetic_expression(pwitem->arithm_expr) << " == "
                        << gen_value(peitem->litval) << ")";
                break;
            case CB_EI_EVAL: {
                if(pwitem->from_item->type == CB_EI_EVAL_ITEMS) {
                    //this means the case in the example...
                    // however this will not appear with the LITERAL. It may appear with gname...
                    t << "(XXX: 118-YTI)";
                } else {
                    t << evalitemstr(pwitem->from_item) << " == " << gen_value(peitem->litval);
                }
                break;
            }
            case CB_EI_GNAME:
                t << "(" << gen_value(pwitem->litval) << " == " << gen_value(peitem->litval) << ")";
                break;
            default:
                t << "(XXX: 126-YTI)";
                break;
        }
        break;
    }
    case CB_EI_ARITHM_EXP:
        switch(pwitem->type){
            case CB_EI_ANY:
                t << "(XXX: 123-YTI)";        
                break;
            case CB_EI_TRUE:
                t << "(" << gen_arithmetic_expression(peitem->arithm_expr) << " == TRUE)";
                break;
            case CB_EI_FALSE:
                t << "(" << gen_arithmetic_expression(peitem->arithm_expr) << " == FALSE)";
                break;
            default:
                t << "(XXX: 124-YTI)";        
                break;                
        }
        break;        
    case CB_EI_EVAL:
        switch(pwitem->type){
            case CB_EI_ANY:
                t << "(XXX: 121-YTI)";        
                break;
            case CB_EI_TRUE:
                t << "(" << evalitemstr(peitem->from_item) << " == TRUE)";
                break;
            case CB_EI_FALSE:
                t << "(" << evalitemstr(peitem->from_item) << " == FALSE)";
                break;
            default:
                t << "(XXX: 122-YTI)";        
                break;                
        }
        break;
    case CB_EI_GNAME: {
        switch(pwitem->type){
            case CB_EI_ANY:
                t << " true /* ANY : (XXX: 119-YTI): may be ignored */";        
                break;
            case CB_EI_COND:
                t << "(XXX: 120-YTI)";        
                break;
            case CB_EI_TRUE:
                t << "(" << gen_value(peitem->litval) << " == AthConstants.TRUE)";
                break;
            case CB_EI_FALSE:
                t << "(" << gen_value(peitem->litval) << " == AthConstants.FALSE)";
                break;
            case CB_EI_EVAL_ITEMS:
                // though semantically correct syntactically should never reach
                t << "(XXX: 121-YTI)"; // this should not appear...
                break;
            case CB_EI_ARITHM_EXP:
                t << "(" << gen_arithmetic_expression(pwitem->arithm_expr) << " == "
                        << gen_value(peitem->litval) << ")";
                break;
            case CB_EI_EVAL: {
                if(pwitem->from_item->type == CB_EI_EVAL_ITEMS) {
                    //this means the case in the example...
                    t << "(( " << gen_value(peitem->litval) << " >= " << evalitemstr(pwitem->from_item->from_item)
                      << ") && ( " << gen_value(peitem->litval) << " <= " << evalitemstr(pwitem->from_item->thru_item)
                      << "))";                            
                } else {
                    t << evalitemstr(pwitem->from_item) << " == " << gen_value(peitem->litval);
                }
                break;
            }
            case CB_EI_GNAME:
                t << "(" << gen_value(pwitem->litval) << " == " << gen_value(peitem->litval) << ")";
                break;
            default:
                t << "(XXX: 127-YTI)";        
                break;                

        }
        break;
    }
    default:
        t << "(XXX: 128-YTI)";        
        break;                
    }
    
    return t.str();
}

string CobStmtEvaluate::eval_from_item(struct _eval_item * peitem, bool plval){
    if(peitem->litval) {
        return get88typecondopt(peitem, plval);
    }
    return evalitemstr(peitem);
}
string CobStmtEvaluate::evalitemstr(struct _eval_item * peitem){
    stringstream t;
    switch(peitem->type){
    case CB_EI_ANY:
        t << "(XXX: 114-YTI)";
        break;
    case CB_EI_COND:
        t << gen_condition(peitem->cond);
        break;
    case CB_EI_TRUE:
        t << "TRUE";
        break;
    case CB_EI_FALSE:
        t << "FALSE";
        break;
    case CB_EI_EVAL_ITEMS:    
        // don't know if this possibility will arise any time. 
        t << "(XXX: 115-YTI)";
        break;        
    case CB_EI_IDENTIFIER:
        t << gen_id(peitem->id);
        break;
    case CB_EI_LITERAL:   
        t << gen_value(peitem->litval);
        break;
    case CB_EI_ARITHM_EXP: 
        t << gen_arithmetic_expression(peitem->arithm_expr);
        break;
    case CB_EI_M_WHEN:
        t << "(XXX: 116-YTI)";
        break;                
    case CB_EI_EVAL:
        if(peitem->from_item != NULL) {
            t << evalitemstr(peitem->from_item);
        } else {
            t << "(XXX: 117-YTI)";
        }
        break;        
    case CB_EI_GNAME:
        t << gen_value(peitem->litval);
        break;
    }
    return t.str();
}
void CobStmtEvaluate::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("evaluate_statement"); 
    // TODO
}

CobStmtEvaluate::~CobStmtEvaluate() {
//    struct _eval_item * evalitem;
//    void * also_eval_item_lst;      // list of struct _eval_item *
//    void * when_clause_lst;         // list of struct _when_clause_item *
//    void * when_other_action;       // proc_statements    
    if(evalitem != NULL) delete_eval_item(evalitem);
    delete mod_eval_item_lst;
    if(also_eval_item_lst != NULL) delete_eval_item_list(also_eval_item_lst);
    if(when_clause_lst != NULL) delete_when_clause_item_list(when_clause_lst);
    if(when_other_action != NULL) delete (CobProcDivItem *)when_other_action;
}
