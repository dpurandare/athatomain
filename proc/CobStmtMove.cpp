/*
 * File: CobStmtMove.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 9:39:41 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:09 PM
 */

#include "CobStmtMove.h"
#include "../util/genutil.h"

CobStmtMove::CobStmtMove() {
}

CobStmtMove::CobStmtMove(int pcorr, struct valueType * pgname, void * plist){
    corrflag = pcorr;
    value = pgname;
    tolist = plist;
    // This should not be kicked here. It should be handled separately. possibly before calling the 
    // generation of the CobFile
    // assignDataTypes();
    itype = CB_PD_MOVE;

}

CobStmtMove::CobStmtMove(const CobStmtMove& orig) {
}

void CobStmtMove::assignDataTypes(){
    int targetDataType = value->type;
    // the data type is uselsss
    if(targetDataType == CB_NULL) return;
    
    // in case the targetDataType is CB_SPECIAL, mangle it for TRUE, FALSE type of data to boolean.
    if(targetDataType == CB_SPECIAL){
        targetDataType = mangleSpecialDataType(targetDataType);
    }
    
    if(tolist != NULL) {
        list <void *> * lst = (list <void *> *)tolist;
        list <void *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i ){
            struct valueType * item = (struct valueType *)(*i);            
            if(item != NULL){
                if(item->idval != NULL) {
                    // Check if this is a field.
                    CobFieldRecord * fld = currentdiv->findField(item->idval);
                    // check if there are any other cases where you need to set the data type explicitely.
                    if(fld->dataType == CB_NULL)
                        fld->dataType = targetDataType;
                }
            }
        }
    }
}

void CobStmtMove::dump(){
}
void CobStmtMove::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    //cout << tabstr << "\\\\Move statement \n";

    if(corrflag) {
        // copy the corresponding fields in the hiererchy. 
        // This could be similar to the copy constructor.         
    }
    if(tolist != NULL) {
        list <void *> * lst = (list <void *> *)tolist;
        list <void *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i ){
            struct valueType * item = (struct valueType *)(*i);
            if(item != NULL){
                cout << tabstr; 
                dump_value(item); 
                cout << " = ";
                dump_value(value);
                cout << ";      \\\\Move statement \n";
            }
        }
    }
}
void CobStmtMove::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Move statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    if(tolist != NULL) {
        list <void *> * lst = (list <void *> *)tolist;
        list <void *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i ){
            struct valueType * item = (struct valueType *)(*i);
            if(item != NULL){
                CobFieldRecord * fld_left = NULL;
                if(item->type == CB_IDENTIFIER)
                    fld_left = getFieldFromGname(item);
                CobFieldRecord * fld_right = NULL;
                if(value->type == CB_IDENTIFIER)
                    fld_right = getFieldFromGname(value);

                // variables that decide the generation 
                string lstr, rstr;
                bool isgroupfield = false;
                int rdatatype = value->type; // if this is special val, the generation could be different
                
                if(fld_left){
                    if(! fld_left->children->empty())
                        isgroupfield = true;
                    lstr = fld_left->decoratedName;
                } else {
                    lstr = gen_value(item);
                }
                
                if(fld_right){
                    rstr = fld_right->decoratedName;
                } else {                    
                    rstr = gen_value(value);
                }
                
                if(corrflag || isgroupfield) {
                    t << tabstr; 
                    t << lstr << ".copy(" << rstr << ");";
                } else {
                    if(rdatatype == CB_SPECIAL){ // set the special value...
                        t << tabstr; 
                        t << lstr << ".setVal(";
                        t << rstr << ", true);";                        
                    } else {
                        if(value->allflag == 1) {
                            t << tabstr; 
                            t << lstr << ".fill(";
                            t << rstr << ");";
                        } else {
                            t << tabstr; 
                            t << lstr; 
                            t << " = " << rstr << ";";
                        }
                    }
                }
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();                
            }
        }
    }
}
void CobStmtMove::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("move_statement"); 
    // TODO   
}
CobStmtMove::~CobStmtMove() {
    if(value != NULL) delete_value(value);
    if(tolist != NULL) delete_gnamelist(tolist);
}

