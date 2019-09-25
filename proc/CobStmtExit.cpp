/*
 * File: CobStmtExit.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 10:28:22 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on January 7, 2014, 2:18 PM
 */

#include "CobStmtExit.h"

CobStmtExit::CobStmtExit() {
}

CobStmtExit::CobStmtExit(enum _exit_enum ptype, int pcycle){
    exit_type = ptype;
    cycleflag = pcycle;
}

CobStmtExit::CobStmtExit(const CobStmtExit& orig) {
}

void CobStmtExit::dump(){
}
void CobStmtExit::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Exit statement :\n";
    
    switch(exit_type){
        case CB_EX_SIMPLE:
            cout << tabstr << "return;";
            break;
        case CB_EX_PROGRAM:
            cout << tabstr << "System.exit(1); // forced exit.";
            break;
        case CB_EX_PERFORM:
            cout << tabstr << "break;";
            break;
        case CB_EX_PARAGRAPH:
            cout << tabstr << "return;";
            break;
        case CB_EX_SECTION:
            cout << tabstr << "return";
            break;
    }
}

void CobStmtExit::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Exit statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    switch(exit_type){
        case CB_EX_SIMPLE:
            t << tabstr << "return;";
            break;
        case CB_EX_PROGRAM:
            t << tabstr << "System.exit(1); // forced exit.";
            break;
        case CB_EX_PERFORM:
            t << tabstr << "break;";
            break;
        case CB_EX_PARAGRAPH:
            t << tabstr << "return;";
            break;
        case CB_EX_SECTION:
            t << tabstr << "return";
            break;
    }
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();    
}
void CobStmtExit::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("exit_statement"); 
    // TODO    
}

CobStmtExit::~CobStmtExit() {
}

