/*
 * File: CobStmtClose.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:55:24 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 8:57 PM
 */

#include "CobStmtClose.h"

CobStmtClose::CobStmtClose() {
}

CobStmtClose::CobStmtClose(void * pcloseflist){
    close_file_lst = (list <void *> *)pcloseflist;
}

CobStmtClose::CobStmtClose(const CobStmtClose& orig) {
}

void CobStmtClose::dump(){
}
void CobStmtClose::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Close statement :\n";
}
void CobStmtClose::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    if(close_file_lst != NULL){
        list <void *> * lst = (list <void *> *)close_file_lst;
        list <void *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i ){
            struct _close_file_item * cfitem = (struct _close_file_item *)(*i);
            stringstream t;
            t << getJname(cfitem->file_name->idStr) << "FO.close();" ;
            pmethod->addStatement(t.str());                    
        }
    }
}
void CobStmtClose::proc_xml(pugi::xml_node parent){
    pugi::xml_node closenode = parent.append_child(pugi::node_element);
    closenode.set_name("close_statement");
    // TODO    
}
CobStmtClose::~CobStmtClose() {
    if(close_file_lst)
        delete_close_file_list(close_file_lst);
}

