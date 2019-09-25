/*
 * File: CobStmtDelete.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:04:25 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:17 PM
 */

#include "CobStmtDelete.h"
#include "../util/genutil.h"
#include "../ast/CobFile.h"
#include "../proc/CobSentence.h"

CobStmtDelete::CobStmtDelete() {
}

CobStmtDelete::CobStmtDelete(struct _delete_simple * pitem){
    delete_type = CC_DELETE_SIMPLE;
    del_simple = pitem;
}
CobStmtDelete::CobStmtDelete(void * pfilelst){
    delete_type = CC_DELETE_MULTI;
    filelist = pfilelst;
}

void CobStmtDelete::dump(){
}
void CobStmtDelete::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Delete statement :\n";
}

void CobStmtDelete::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Delete statement : (XXX: 821 : CHECK)";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    pclass->addextInclude( string("com.athato.fileio.*") );
    pclass->addextInclude( string("com.athato.util.*") );

    if(delete_type == CC_DELETE_SIMPLE){
        // This is DELERE RECORD statement. 
        // CobUtil.deleteRecord(file_name); is this record name or filename
        t << tabstr << "CobUtil.deleteRecord(" << gen_id(del_simple->filename) << ");";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();
        // on key ...
        if(del_simple->key_validation_action != NULL){
            struct _invalid_key_action * keyvalidation_clause = 
                    (struct _invalid_key_action *) del_simple->key_validation_action;
            if(keyvalidation_clause->invalid_key_proc){                
                t << tabstr << "if(i == false) {";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();
                ((CobSentence *)keyvalidation_clause->invalid_key_proc)->gen(pfile, 
                                pgen, pclass, pmethod, pisfirst, plevel+1, s);
            }
            if(keyvalidation_clause->not_invalid_key_proc){
                t << tabstr << "} else {";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();
                ((CobSentence *)keyvalidation_clause->not_invalid_key_proc)->gen(pfile, 
                        pgen, pclass, pmethod, pisfirst, plevel+1, s);                
            }
            t << tabstr << "}";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear(); 
        }
        
    } else {
        // implement... not found in many varients. This is DELETE FILE 
    }
}

CobStmtDelete::CobStmtDelete(const CobStmtDelete& orig) {
}

void CobStmtDelete::proc_xml(pugi::xml_node parent){
    pugi::xml_node deletenode = parent.append_child(pugi::node_element);
    deletenode.set_name("delete_statement");
    // TODO        
}
CobStmtDelete::~CobStmtDelete() {
    if(del_simple) delete_del_simple(del_simple);
    if(filelist) delete_xvallist(filelist);
}

