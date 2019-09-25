/*
 * File: CobStmtUnlock.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 10:03:24 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:15 PM
 */

#include "CobStmtUnlock.h"

CobStmtUnlock::CobStmtUnlock() {
}

CobStmtUnlock::CobStmtUnlock(struct idvalStru * pid){
    file_name = pid;
}

CobStmtUnlock::CobStmtUnlock(const CobStmtUnlock& orig) {
}

void CobStmtUnlock::dump(){
}
void CobStmtUnlock::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Unlock statement :\n";
}
void CobStmtUnlock::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
}
void CobStmtUnlock::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("unlock_statement"); 
    // TODO
}
CobStmtUnlock::~CobStmtUnlock() {
    if(file_name != NULL) delete_id(file_name);
}

