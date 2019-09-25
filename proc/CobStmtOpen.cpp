/*
 * File: CobStmtOpen.cpp
 * Created Date: Friday April 18th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 18th 2014 8:45:59 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:40 PM
 */

#include "CobStmtOpen.h"

CobStmtOpen::CobStmtOpen() {
}

CobStmtOpen::CobStmtOpen(int pexclusive, void * popenftypelst){
    exclusiveflag = pexclusive;
    open_file_type_lst = popenftypelst;
}

CobStmtOpen::CobStmtOpen(const CobStmtOpen& orig) {
}

void CobStmtOpen::dump(){
}
void CobStmtOpen::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Open statement :\n";
}
void CobStmtOpen::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    // 1. process: open_file_type_lst 
    // 2. ignored : Exclusive flag, options of locking. implement ... next version
    // 3. the meta object setting as follows
    // 3.1 for each of the file_name the variable is set as AthFileObject. : done elsewhere
    // 3.2 create statement: set the file mode for the fileobject here. for example.
    //    frobj.setAccessMode(pmode);
    // 3.3 add this statement to the pmethod. And you are done for now.
 
    if(open_file_type_lst == NULL) {
        cerr << "Error in Open Statement. the list is empty.\n";
        return;
    }

    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");

    list <void *> * lst = (list <void *> *) open_file_type_lst;
    list <void *>::iterator j;
    for(j = lst->begin(); j != lst->end(); ++j) {
        struct _open_file_type * item = (struct _open_file_type *)(*j);
        string accessmode = "";
        switch(item->file_type) {  
            // ACCESS_UNDEFINED, ACCESS_READ, ACCESS_WRITE, ACCESS_READ_WRITE
            case CB_FT_INPUT :
                accessmode.append("AthFileObject.ACCESSMODE.ACCESS_READ");
                break;
            case CB_FT_OUTPUT:
                accessmode.append("AthFileObject.ACCESSMODE.ACCESS_WRITE");
                break;
            case CB_FT_I_O   :
                accessmode.append("AthFileObject.ACCESSMODE.ACCESS_READ_WRITE");
                break;
            case CB_FT_EXTEND: // you can write in the EXTEND files and close 
                accessmode.append("AthFileObject.ACCESSMODE.ACCESS_WRITE");
                break;
        }
        list <void *> * oflist = (list <void *> * )item->open_file_list;
        if(oflist != NULL) {  
            list <void *>::iterator k;
            for(k = oflist->begin(); k != oflist->end(); ++k){
            struct _file_name_item * fnameitem = (struct _file_name_item *)(*k);
                struct idvalStru * file_name = fnameitem->file_name;   
                //fnameitem->open_items       //this is to be ignored for now.
                stringstream s;
                s << tabstr << getJname(file_name->idStr) << "FO" << ".setAccessMode(" << accessmode << ");";
                string stmtstr = s.str();
                pmethod->addStatement(stmtstr);
            }
        }
    }
}
void CobStmtOpen::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("open_statement"); 
    // TODO    
}
CobStmtOpen::~CobStmtOpen() {
    if(open_file_type_lst != NULL){
        delete_open_file_list(open_file_type_lst);
    }
}

