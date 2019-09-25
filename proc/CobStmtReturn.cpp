/*
 * File: CobStmtReturn.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 9:49:38 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:06 PM
 */

#include "CobStmtReturn.h"
#include "../procglobal.h"
#include "../ast/CobFile.h"
#include "../proc/CobSentence.h"
#include "../util/genutil.h"

CobStmtReturn::CobStmtReturn() {
}

CobStmtReturn::CobStmtReturn(struct idvalStru * pfilename, int popt_record, 
                struct xvaldata * pinto_identifier, void * pend_action){
    file_name = pfilename;
    record_flag = popt_record;
    into_identifier = pinto_identifier;
    end_action = (struct _at_end_action *) pend_action;
}

CobStmtReturn::CobStmtReturn(const CobStmtReturn& orig) {
}

void CobStmtReturn::dump(){
}
void CobStmtReturn::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Return statement :\n";
}
void CobStmtReturn::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    // The RETURN statement reads a record from a sort- or merge file.
    // The RETURN statement is valid only within the OUTPUT PROCEDURE of a SORT or MERGE statement.
    string tabstr = "";
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Return statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    // file_name must be SD entry. 
    // into_identifier assumed to be record at level 1 in FD. 
    t << tabstr << "CobUtil.returnRecord(" << gen_id(file_name) << ", ";
    if(into_identifier) {
        t << gen_xval(into_identifier);
    } else {
        t << "null";
    }
    t << ");";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    if(end_action){
        if( end_action->at_end_action != NULL) {
            t << tabstr << "if(i == 1) {";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
            ((CobSentence *)end_action->at_end_action)->gen(pfile, pgen, pclass, pmethod, 
                                        pisfirst, plevel+1, s);
        }
        if( end_action->not_at_end_action != NULL) {
            t << tabstr << "} else {";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
            ((CobSentence *)end_action->at_end_action)->gen(pfile, pgen, pclass, pmethod, 
                                        pisfirst, plevel+1, s);                
        } 
        t << tabstr << "}";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();                            
    }
    
}
void CobStmtReturn::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("return_statement"); 
    // TODO
}
CobStmtReturn::~CobStmtReturn() {
    if(file_name != NULL) delete_id(file_name);
    if(into_identifier != NULL) delete_xval(into_identifier);
    if(end_action != NULL) delete_at_end_clause(end_action);
}

