/*
 * File: CobStmtGenerate.cpp
 * Created Date: Thursday April 24th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Thursday April 24th 2014 11:10:03 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 13, 2014, 7:46 PM
 */

#include "CobStmtGenerate.h"

CobStmtGenerate::CobStmtGenerate() {
}
CobStmtGenerate::CobStmtGenerate(char * prepo_name){
    report_name = prepo_name;
}
void CobStmtGenerate::dump(){
    
}
void CobStmtGenerate::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Generate statement \n";    
}

void CobStmtGenerate::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Generate statement: (XXX: 923-NTI)";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
}
CobStmtGenerate::CobStmtGenerate(const CobStmtGenerate& orig) {
}
void CobStmtGenerate::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("generate_statement"); 
    // TODO        
}

CobStmtGenerate::~CobStmtGenerate() {
    if(report_name != NULL) delete report_name;
}

