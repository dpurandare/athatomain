/*
 * File: CobStmtInitiate.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 9:34:37 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 13, 2014, 5:45 PM
 */

#include "CobStmtInitiate.h"

CobStmtInitiate::CobStmtInitiate() {
}

CobStmtInitiate::CobStmtInitiate(char * preport_name){
    report_name = preport_name;
}

void CobStmtInitiate::dump(){
    
}
void CobStmtInitiate::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Initiate statement : \n";
}
void CobStmtInitiate::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Initiate statement: (XXX: 921-NTI)";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
}
CobStmtInitiate::CobStmtInitiate(const CobStmtInitiate& orig) {
}

void CobStmtInitiate::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("initiate_statement"); 
    // TODO        
}
CobStmtInitiate::~CobStmtInitiate() {
    if(report_name != NULL) delete report_name;
}

