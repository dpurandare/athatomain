/*
 * File: CobStmtRewrite.cpp
 * Created Date: Saturday April 26th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Saturday April 26th 2014 9:38:09 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:11 PM
 */

#include "CobStmtRewrite.h"
#include "../ast/CobFile.h"
#include "../util/genutil.h"

CobStmtRewrite::CobStmtRewrite() {
}

CobStmtRewrite::CobStmtRewrite(struct idvalStru * pid, struct valueType * pfrom_clause,
                         void * pkeyvalidation){
    record_name = pid;
    from_clause = pfrom_clause;
    invalidkey_action = (struct _invalid_key_action *)pkeyvalidation;
}

CobStmtRewrite::CobStmtRewrite(const CobStmtRewrite& orig) {
}

void CobStmtRewrite::dump(){
}
void CobStmtRewrite::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Rewrite statement :\n";
}
void CobStmtRewrite::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Rewrite statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    // record_name is level 1 field of FD. from_clause is optional field that is 
    // copied into record_name before the record replacement.
    // File type cannot be line sequential. 
    
    // Find FD name.
    CobDataDivision * ldataDiv = pfile->getDataDivision();
    CobFileSection * lfilesec = ldataDiv->getFileSection();
//    CobFileDescription * filedesc = lfilesec->findFileDescriptionForField(gen_id(record_name));
    CobFileDescription * filedesc = lfilesec->findFileDescriptionForField(record_name->idStr);
    if(filedesc){
        string fdname = filedesc->getFDSDName();

        // CobUtil.rewrite(fdname, recordname, alternatename);

        t << tabstr << "CobUtil.rewrite(" << getJname(fdname.c_str()) << "FO, " << gen_id(record_name) << ", ";
        if(from_clause != NULL) {
            t << gen_value(from_clause);
        } else {
            t << "null";
        }
        t << ");";
    } else {
        t << "//Error writing rewrite statement.";
    }
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();    
}
void CobStmtRewrite::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("rewrite_statement"); 
    // TODO
}
CobStmtRewrite::~CobStmtRewrite() {
    if(record_name != NULL) delete_id(record_name);
    if(from_clause != NULL) delete_value(from_clause);
    if(invalidkey_action) delete_invalid_key_action(invalidkey_action);
}

