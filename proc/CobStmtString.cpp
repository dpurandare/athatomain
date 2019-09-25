/*
 * File: CobStmtString.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 9:58:30 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on January 7, 2014, 3:48 PM
 */

#include "CobStmtString.h"
#include "../util/genutil.h"

CobStmtString::CobStmtString() {
}

CobStmtString::CobStmtString(void * pstr_args, struct idvalStru * pid,
                struct idvalStru * pptropt, struct _action_pair * pon_overflow){
    strarg_lst = (list <struct _str_argument *> *) pstr_args;
    into_id = pid;
    withptr_id = pptropt;
    onoverflow = pon_overflow;
}

CobStmtString::CobStmtString(const CobStmtString& orig) {
}

void CobStmtString::dump(){
}
void CobStmtString::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "String statement :\n";
}
void CobStmtString::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// STRING statement. ";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    pclass->addextInclude( string("com.athato.fileio.*") );
    pclass->addextInclude( string("com.athato.util.*") );

    if(strarg_lst != NULL) { // does not make any sense. Anyway just a safeguard.
        list <struct _str_argument *>::iterator i;
        for(i = strarg_lst->begin(); i != strarg_lst->end(); ++i){
            struct _str_argument * item = (struct _str_argument *)(*i);
            
            // items that are to be concatenated 
            list <struct valueType *> * strlst = (list <struct valueType *> *)item->pgnamelst;
            list <struct valueType *>::iterator j;
            for(j = strlst->begin(); j != strlst->end(); ++j){
                struct valueType * sitem = (struct valueType *)(*j);
//iden = CobUtil.appendString(String ident, String rval, String delim, int withptr);
                t << tabstr << gen_id(into_id) << " = "
                    << "CobUtil.appendString(" << gen_id(into_id) << ", " << gen_value(sitem);
                if(item->moditem != NULL) {
                    t << ", " << gen_xval(item->moditem);
                } else {
                    t << ", null";
                }                
                if(withptr_id) {
                    t << ", " << gen_id(withptr_id);
                } else {
                    t << ", null";
                }
                t << ");";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();                
            }            
        }
    }
}
void CobStmtString::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("string_statement"); 
    // TODO   
}
CobStmtString::~CobStmtString() {
    //struct _action_pair * onoverflow;

    if(strarg_lst != NULL) {
        list <void *> * lst = (list <void *> *)strarg_lst;
        list<void *>::iterator i;  
        for(i = lst->begin(); i != lst->end(); ++i ){
            struct _str_argument * item = (struct _str_argument *)(*i);
            if(item != NULL) {
                if(item->pgnamelst != NULL) delete_gnamelist(item->pgnamelst);
                if(item->moditem != NULL) delete_xval(item->moditem);
                delete item;
            }
        }
        delete lst;
    }
    if(into_id != NULL) delete_id(into_id);
    if(withptr_id != NULL) delete_id(withptr_id);
    if(onoverflow != NULL) {
        delete_action_pair(onoverflow);
        onoverflow = NULL;
    }
}

//   String Example:
//
//         01	WS-DATA-ITEM1 	PIC X(10)	"THIS IS ".
//         01	WS-DATA-ITEM2 	PIC X(20)	"STRING FIRST".
//
//
//
//        STRING   WS-DATA-ITEM1	DELIMITED BY SIZE.
//		 WS-DATA-ITEM2	DELIMITED BY SPACES
//		'  EXAMPLE.  '	DELIMITED BY SIZE
//		INTO	WS-DESTINATION
//
//   Now WS-DESTINATION will contain "THIS IS STRING EXAMPLE".

