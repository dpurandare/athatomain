/*
 * File: CobStmtRelease.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 9:48:55 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:14 PM
 */

#include "CobStmtRelease.h"
#include "../util/genutil.h"

CobStmtRelease::CobStmtRelease() {
}

CobStmtRelease::CobStmtRelease(struct idvalStru * pid, struct xvaldata * pval){
    record_name = pid;
    from_clause = pval;
}

CobStmtRelease::CobStmtRelease(const CobStmtRelease& orig) {
}

void CobStmtRelease::dump(){
}
void CobStmtRelease::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Release statement :\n";
}
void CobStmtRelease::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Release statement : (XXX: 822 : CHECK)";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    // The RELEASE statement adds a new record to a sort file.
    // The RELEASE statement is valid only within the INPUT PROCEDURE of a SORT statement.
    // CobUtil.addSortRecord(record_name, from_clause);
    // When the from_clause is null the record is added from the related SD.
    // if from_clause is present the from_clause is copied into the SD record 
    // and then added to the sort file. 

    t << tabstr << "CobUtil.addSortRecord(" << gen_id(record_name) << ", ";
    if(from_clause){
        t << gen_xval(from_clause);
    } else {
        t << "null";
    }
    t << ");";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
}
void CobStmtRelease::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("release_statement"); 
    // TODO
}
CobStmtRelease::~CobStmtRelease() {
    if(record_name != NULL) delete_id(record_name);
    if(from_clause != NULL) delete_xval(from_clause);
}

