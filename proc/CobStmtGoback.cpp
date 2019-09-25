/*
 * File: CobStmtGoback.cpp
 * Created Date: Wednesday March 19th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday March 19th 2014 8:42:09 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:12 PM
 */

#include "CobStmtGoback.h"

CobStmtGoback::CobStmtGoback() {
}

CobStmtGoback::CobStmtGoback(const CobStmtGoback& orig) {
}

void CobStmtGoback::dump(){
}
void CobStmtGoback::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "GoBack statement :\n";
}
void CobStmtGoback::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Goback statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    t << tabstr << "return;";
    pmethod->addStatement(t.str());    
}
void CobStmtGoback::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("goback_statement"); 
    // TODO        
}
CobStmtGoback::~CobStmtGoback() {
}

