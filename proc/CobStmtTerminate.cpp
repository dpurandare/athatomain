/*
 * File: CobStmtTerminate.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 9:59:27 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 13, 2014, 6:12 PM
 */

#include "CobStmtTerminate.h"

CobStmtTerminate::CobStmtTerminate() {
}
CobStmtTerminate::CobStmtTerminate(char * prepo_name){
    report_name = prepo_name;
}
void CobStmtTerminate::dump(){
    
}
void CobStmtTerminate::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Terminate statement \n";    
}

CobStmtTerminate::CobStmtTerminate(const CobStmtTerminate& orig) {
}
void CobStmtTerminate::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Terminate statement: (XXX: 922-NTI)";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
}
void CobStmtTerminate::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("terminate_statement"); 
    // TODO
}
CobStmtTerminate::~CobStmtTerminate() {
    if(report_name != NULL) delete report_name;
}

