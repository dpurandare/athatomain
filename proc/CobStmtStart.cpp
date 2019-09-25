/*
 * File: CobStmtStart.cpp
 * Created Date: Friday May 2nd 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday May 2nd 2014 12:05:47 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 13, 2014, 1:40 PM
 */

#include "CobStmtStart.h"
#include "../util/genutil.h"

CobStmtStart::CobStmtStart() {
}
CobStmtStart::CobStmtStart(struct idvalStru * pfilename, struct _start_body_options * pbody,
                    int preverse_order, struct _invalid_key_action * pkeyvalidation){
    fileName = pfilename;
    startBody = pbody;
    reverse_order = preverse_order;
    keyvalidation = pkeyvalidation;
}
void CobStmtStart::dump(){
    cout << "Start statement\n";
}
void CobStmtStart::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Start statement :\n";
}
void CobStmtStart::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    static int optcount = 0;
    static int keycount = 0;
    
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Start statement";
    pmethod->addStatement(t.str()); t.str(string()); t.clear();
    
    // cross check that this filename is same as mentioned in the FileSection
    t << tabstr << "StartOptions startopts" << optcount << " = new StartOptions();";
    pmethod->addStatement(t.str()); t.str(string()); t.clear();    
    t << tabstr << "startopts" << optcount << ".type = " << startBody->type << ";";
    pmethod->addStatement(t.str()); t.str(string()); t.clear();    
    if(startBody->type == 1) {
        t << tabstr << "startopts" << optcount << ".op = " << startBody->oper << ";";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();    
        t << tabstr << "startopts" << optcount << ".keyValue = " << gen_value(startBody->value) << ";";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();    
        t << tabstr << "startopts" << optcount << ".withsize = " << startBody->with_size << ";";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();    
        t << tabstr << "startopts" << optcount << ".withValue = " << gen_value(startBody->with_value) << ";";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();    
    } else {
        // create the vector of keystrings. 
        if(startBody->gnamelist) {
            t << tabstr << "Vector <String> keylist" << keycount << " = new Vector <String>();";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();    
            list <struct valueType *> * lst = (list <struct valueType *> *) startBody->gnamelist;
            list <struct valueType *>::iterator i;
            for(i = lst->begin(); i != lst->end(); ++i){
                struct valueType * item = (struct valueType *)(*i);
                t << tabstr << "keylist" << keycount << ".add(" << gen_value(item) << ");";
                pmethod->addStatement(t.str()); t.str(string()); t.clear();
            }
            t << tabstr << "startopts" << optcount << ".keynames = " << "keylist" << keycount << ";";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();    
        }
    }
    t << tabstr << "startopts" << optcount << ".isreverse = " << reverse_order << ";";
    pmethod->addStatement(t.str()); t.str(string()); t.clear();
    
    t << tabstr << gen_id(fileName) << "FO.setStartOptions(startopts" << optcount << ");" ;
    pmethod->addStatement(t.str()); t.str(string()); t.clear();
    // last line
    optcount++; keycount++;
}

CobStmtStart::CobStmtStart(const CobStmtStart& orig) {
}
void CobStmtStart::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("start_statement"); 
    // TODO
}
CobStmtStart::~CobStmtStart() {
    //struct idvalStru * fileName;
    if(fileName != NULL) delete_id(fileName);
    //struct _start_body_options * startBody;
    if(startBody != NULL){
        if(startBody->value != NULL) delete_value(startBody->value);
        if(startBody->with_value != NULL) delete_value(startBody->with_value);
        if(startBody->gnamelist != NULL) delete_gnamelist(startBody->gnamelist);
        delete startBody;
    }
    //struct _invalid_key_action * keyvalidation;
    if(keyvalidation != NULL) delete_invalid_key_action(keyvalidation);
}

/*
 * class StartOptions {
 *      int type;
 *      // if the type is 1 - RM COBOL
 *      int op; // relational operator or IS - First, IS - Last
 *      String keyValue;
 *      int withsize;
 *      String withvalue;
 *      // if the type 2 - Fujitsu COBOL
 *      Vector <String> keynames;
 *      // opder
 *      int isreverse;
 * }
 * 
 * StartOptions startopts = new StartOptions();
 * 
 * startopts.type = ...;
 * startopts.op = ...;
 * ...
 * fileobject_FO.setStartOptions(startopts);
 * 
 */


