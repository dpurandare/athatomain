/*
 * File: CobStmtIfElse.cpp
 * Created Date: Thursday April 24th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Thursday April 24th 2014 1:04:11 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:10 PM
 */

#include "CobStmtIfElse.h"
#include "CobSentence.h"
#include "../util/genutil.h"

CobStmtIfElse::CobStmtIfElse() {
}

CobStmtIfElse::CobStmtIfElse(struct _condition * pcond, struct _statements * pthen,
                          struct _statements * pelse){
    cond = pcond;
    thenstmts = pthen;
    elsestmts = pelse;
    itype = CB_PD_IFELSE;
}

CobStmtIfElse::CobStmtIfElse(const CobStmtIfElse& orig) {
}

CobSentence * CobStmtIfElse::getThenStatements(){
    CobSentence * ret = NULL;
    if(thenstmts != NULL){
        if(thenstmts->type == 2){
            ret = NULL;
        } else {
            ret = (CobSentence *)thenstmts->list;
        }
    }
    return ret;    
}

CobSentence * CobStmtIfElse::getElseStatements(){
    CobSentence * ret = NULL;
    if(elsestmts != NULL){
        if(elsestmts->type == 2){
            ret = NULL;
        } else {
            ret = (CobSentence *)elsestmts->list;
        }
    }
    return ret;    
}

void CobStmtIfElse::dump(){
}
void CobStmtIfElse::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    
    cout << tabstr << "if(";
    dump_condition(cond);
    cout << ") ";
    if(thenstmts != NULL){
        cout << "{\n";
        if(thenstmts->type == 2){
            cout << tabstr << "NEXT SENTENCE\n";
        } else {
            ((CobSentence *)thenstmts->list)->dump(plevel+1);
        }
        cout << tabstr << "} ";
    }
    if(elsestmts != NULL){
        cout << "else {\n";
        if(elsestmts->type == 2){
            cout << tabstr << "NEXT SENTENCE\n";
        } else {
            ((CobSentence *)elsestmts->list)->dump(plevel+1);
        }
        cout << tabstr << "}\n";
    } else{
        cout << "\n";
    }
}
void CobStmtIfElse::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");

    stringstream t;
    t << tabstr << "// If-Else statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    t << tabstr << "if(";
    t << gen_condition(cond);
    t << ") {";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    if(thenstmts != NULL){
        if(thenstmts->type == 2){
            t << tabstr << "Implement... NEXT SENTENCE";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
        } else {
            ((CobSentence *)thenstmts->list)->gen(pfile, pgen, pclass, pmethod, 
                                        pisfirst, plevel+1, s);
        }
        t << tabstr << "} ";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();
    }
    if(elsestmts != NULL){
        t << tabstr << "else {";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();
        if(elsestmts->type == 2){
            t << tabstr << "Implement... NEXT SENTENCE";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
        } else {
            ((CobSentence *)elsestmts->list)->gen(pfile, pgen, pclass, pmethod, 
                                        pisfirst, plevel+1, s);
        }
        t << tabstr << "} ";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();
    } 
}
void CobStmtIfElse::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("ifelse_statement"); 

    pugi::xml_node ifcondnode = stmtnode.append_child(pugi::node_element);
    ifcondnode.set_name("condition");
    ifcondnode.append_attribute("val").set_value(gen_condition(cond).c_str());
    
    if(thenstmts != NULL){
        pugi::xml_node thennode = stmtnode.append_child(pugi::node_element);
        thennode.set_name("then");
        if(thenstmts->type == 2){
            pugi::xml_node thenclausenode = thennode.append_child(pugi::node_element);
            thenclausenode.set_name("NEXT_SENTENCE");
        } else {            
            ((CobSentence *)thenstmts->list)->proc_xml(thennode);
        }
    }
    if(elsestmts != NULL){
        pugi::xml_node elsenode = stmtnode.append_child(pugi::node_element);
        elsenode.set_name("else");
        if(elsestmts->type == 2){
            pugi::xml_node elseclausenode = elsenode.append_child(pugi::node_element);
            elseclausenode.set_name("NEXT_SENTENCE");
        } else {
            ((CobSentence *)elsestmts->list)->proc_xml(elsenode);
        }
    }     
}
CobStmtIfElse::~CobStmtIfElse() {
    if(cond != NULL) delete_condition(cond);
    if(thenstmts != NULL) {
        if(thenstmts->list != NULL) delete (CobProcDivItem *) thenstmts->list;
        delete thenstmts;
        //delete_statement_list(thenstmts);
    } 
    if(elsestmts != NULL) {
        if(elsestmts->list != NULL) delete (CobProcDivItem *) elsestmts->list;
        delete elsestmts;
        //delete_statement_list(elsestmts);
    }
}

