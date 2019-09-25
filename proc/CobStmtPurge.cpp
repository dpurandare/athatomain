/*
 * File: CobStmtPurge.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 9:45:43 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:13 PM
 */

#include "CobStmtPurge.h"
#include "../util/genutil.h"

CobStmtPurge::CobStmtPurge() {
}

CobStmtPurge::CobStmtPurge(struct idvalStru * pcdname){
    comm_disc_name = pcdname;
}

CobStmtPurge::CobStmtPurge(const CobStmtPurge& orig) {
}

void CobStmtPurge::dump(){
}
void CobStmtPurge::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Purge statement :\n";
}
void CobStmtPurge::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Purge statement: (XXX: 924-NON-STD)";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    t << tabstr << gen_id(comm_disc_name) << ".purge();";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();    
}
void CobStmtPurge::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("purge_statement"); 
    // TODO
}
CobStmtPurge::~CobStmtPurge() {
    if(comm_disc_name != NULL) delete_id(comm_disc_name);
}

