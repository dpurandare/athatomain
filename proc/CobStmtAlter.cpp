/*
 * File: CobStmtAlter.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:53:24 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:31 PM
 */

#include "CobStmtAlter.h"

CobStmtAlter::CobStmtAlter() {
}

CobStmtAlter::CobStmtAlter(void * plst){
    strpair_lst = (list <struct _strpair *> *) plst;
}

CobStmtAlter::CobStmtAlter(const CobStmtAlter& orig) {
}

void CobStmtAlter::dump(){
}
void CobStmtAlter::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Alter statement :\n";
}
void CobStmtAlter::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    // reassigns the procedure name : implement when required. 
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Alter statement : (XXX : 903-NTI)";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
}
void CobStmtAlter::proc_xml(pugi::xml_node parent){
    pugi::xml_node alternode = parent.append_child(pugi::node_element);
    alternode.set_name("alter_statement");
    // TODO    
}

CobStmtAlter::~CobStmtAlter() {
    if(strpair_lst != NULL ) {
        list<struct _strpair *>::iterator i;  
        for(i = strpair_lst->begin(); i != strpair_lst->end(); ++i ){
            struct _strpair * item = (struct _strpair *)(*i);
            if(item != NULL) {
                if(item->first) delete item->first;
                if(item->second) delete item->second;
                delete item;
            }
        }
        delete strpair_lst;
    }
}

