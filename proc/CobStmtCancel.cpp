/*
 * File: CobStmtCancel.cpp
 * Created Date: Friday April 25th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 25th 2014 10:22:22 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on January 7, 2014, 12:24 PM
 */

#include "CobStmtCancel.h"

CobStmtCancel::CobStmtCancel() {
}

CobStmtCancel::CobStmtCancel(void * pitem_list){
    if(pitem_list != NULL) {
        xvallist = (list <struct xvaldata *> *) pitem_list;
    } else {
        xvallist = NULL;
    }
}

CobStmtCancel::CobStmtCancel(const CobStmtCancel& orig) {
}

void CobStmtCancel::dump(){
}
void CobStmtCancel::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Cancel statement :\n";    
}
void CobStmtCancel::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    // Semantically there is nothing to be done in the object oriented language.
    // The concept of dynamically loadable units is process related issue and 
    // the may not be required to be handled by cobol statement. 
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Cancel statement : (XXX: 901-NTI)";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
}
void CobStmtCancel::proc_xml(pugi::xml_node parent){
    pugi::xml_node cancelnode = parent.append_child(pugi::node_element);
    cancelnode.set_name("cancel_statement");
    // TODO    
}

CobStmtCancel::~CobStmtCancel() {
    if(xvallist != NULL) 
        delete_xvallist((void *)xvallist);
}

