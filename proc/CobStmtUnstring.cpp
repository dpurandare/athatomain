/*
 * File: CobStmtUnstring.cpp
 * Created Date: Sunday April 20th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday April 20th 2014 12:02:32 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:26 PM
 */

#include "CobStmtUnstring.h"
#include "../util/genutil.h"

CobStmtUnstring::CobStmtUnstring() {
}

CobStmtUnstring::CobStmtUnstring(struct idvalStru * pid, struct _delim_clause * pdelim_clause,
                void * punstringintolist, struct idvalStru * pwithptr,
                struct idvalStru * ptallyingin, struct _action_pair * ponoverflow){
    id = pid;
    delim_clause = pdelim_clause;
    unstringintolist = (list <struct _into_clause *> *)punstringintolist;
    withptr = pwithptr;
    tallyingin = ptallyingin;
    onoverflow = ponoverflow;
}

CobStmtUnstring::CobStmtUnstring(const CobStmtUnstring& orig) {
}

void CobStmtUnstring::dump(){
}
void CobStmtUnstring::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Unstring statement :\n";
}
void CobStmtUnstring::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){

//    java.util.Vector<Object> fields = new java.util.Vector<>();
//    fields.add(fldname); // ...
//    java.util.Vector<String> delims = new java.util.Vector<>();
//    delims.add(delim); //...
//    CobUtil.unString(String orig, Vector <Object> fields, Vector <String> delimiter, int startptr);

    static int fieldscount = 0;
    static int delimscount = 0;
    
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// UNSTRING statement. ";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    pclass->addextInclude( string("com.athato.fileio.*") );
    pclass->addextInclude( string("com.athato.util.*") );

    // unstring into clause.
    if(unstringintolist != NULL) {
        t << tabstr << "java.util.Vector <Object> fields" << fieldscount << " = "
            << "new java.util.Vector <Object>();";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();
        
        list <struct _into_clause *>::iterator i;
        for(i = unstringintolist->begin(); i != unstringintolist->end(); ++i){
            struct _into_clause * intoitem = (struct _into_clause *)(*i);
            t << tabstr << "fields" << fieldscount << ".add(" << gen_id(intoitem->id) << ");";
            // ignoring the storing of delimiter and count data for now...
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
        }
    }
    // delimiter data into the vector. 
    if(delim_clause){
        t << tabstr << "java.util.Vector<String> delims" << delimscount 
                << " = new java.util.Vector<String>();";        
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();
        
        // implement ... All flag logic...
        // delim_clause->byallflag
        t << tabstr << "delims" << delimscount << ".add(";
        switch(delim_clause->val->type){
            case CB_IDENTIFIER:
                t << gen_value(delim_clause->val) << ".strVal()";
                break;
            case CB_CHARPTR:
            case CB_C_LITERAL:
            case CB_SPECIAL:
                t << "new String(" << gen_value(delim_clause->val) << ")";
                break;
            default:
                t << "(XXX: 301-ERR)";
                break;
        }
        t << ");";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();

        if(delim_clause->or_item_lst){
            list <struct _or_item *> * oitemlst 
                        = (list <struct _or_item *> *) delim_clause->or_item_lst;
            list <struct _or_item *>::iterator i;
            for(i = oitemlst->begin(); i != oitemlst->end(); ++i){
                struct _or_item * oitem = (struct _or_item *)(*i);
                t << tabstr << "delims" << delimscount << ".add(";                
                switch(oitem->val->type){
                    case CB_IDENTIFIER:
                        t << gen_value(oitem->val) << ".valueStr";
                        break;
                    case CB_CHARPTR:
                    case CB_C_LITERAL:
                    case CB_SPECIAL:
                        t << "new String(" << gen_value(oitem->val) << ")";
                        break;
                    default:
                        t << "(XXX: 302-ERR)";
                        break;
                }
                t << ");";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();                
            }
        }
    }
    t << tabstr << "CobUtil.unString(" << gen_id(id) << ".valueStr, " << "fields" << fieldscount
        << ", delims" << delimscount << ", ";
    if(withptr != NULL){
        t << gen_id(withptr) << ".intValue";
    } else {
        t << "null";
    }
    t << ");";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();                
    
    fieldscount++; delimscount++;
}
void CobStmtUnstring::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("unstring_statement"); 
    // TODO    
}
CobStmtUnstring::~CobStmtUnstring() {  
    if(id != NULL) delete_id(id);
    if(delim_clause != NULL) {
        //delim_clause->or_item_lst
        list <void *> * lst = (list <void *> *)delim_clause->or_item_lst;
        if(lst != NULL) {
            list <void *>::iterator i;  
            for(i = lst->begin(); i != lst->end(); ++i ){
                struct _or_item * item = (struct _or_item *)(*i);
                if(item != NULL){
                    if(item->val != NULL) delete_value(item->val);
                    delete item;
                }
            }
            delete lst;
        }
        if(delim_clause->val != NULL) delete_value(delim_clause->val);
        delete delim_clause;
    }
    if(unstringintolist != NULL){
        list <void *> * lst = (list <void *> *)unstringintolist;
        list <void *>::iterator i;  
        for(i = lst->begin(); i != lst->end(); ++i ){
            struct _into_clause * item = (struct _into_clause *)(*i);
            if(item != NULL){
                if(item->id != NULL) delete_id(item->id);
                if(item->delimin_id != NULL)delete_id(item->delimin_id);
                if(item->countin_id != NULL)delete_id(item->countin_id);
            }
        }
        delete lst;
    }
    if(withptr != NULL) delete_id(withptr);
    if(tallyingin != NULL) delete_id(tallyingin);
    if(onoverflow != NULL) delete_action_pair(onoverflow);
}

