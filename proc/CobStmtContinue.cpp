/*
 * File: CobStmtContinue.cpp
 * Created Date: Thursday April 24th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Thursday April 24th 2014 9:18:02 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:15 PM
 */

#include "CobStmtContinue.h"

CobStmtContinue::CobStmtContinue() {
}

CobStmtContinue::CobStmtContinue(const CobStmtContinue& orig) {
}

void CobStmtContinue::dump(){
}
void CobStmtContinue::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Continue statement :\n";
}
void CobStmtContinue::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Continue statement : (XXX : 902-NTI)";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
}
void CobStmtContinue::proc_xml(pugi::xml_node parent){
    pugi::xml_node continuenode = parent.append_child(pugi::node_element);
    continuenode.set_name("continue_statement");
    // TODO    
}
CobStmtContinue::~CobStmtContinue() {
    // nothing to do here. 
}

