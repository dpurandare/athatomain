/*
 * File: CobStmtDisplay.cpp
 * Created Date: Thursday April 24th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Thursday April 24th 2014 9:42:31 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:08 PM
 */

#include "CobStmtDisplay.h"
#include "../util/genutil.h"

CobStmtDisplay::CobStmtDisplay() {
}

CobStmtDisplay::CobStmtDisplay(void * psysnamelst, struct xvaldata * pupon, int padvancing){
    type = CB_SYSNAME;
    sysnamelst = (list <struct valueType *> *)psysnamelst;
    uponclause = pupon;
    advancing = padvancing;
}

CobStmtDisplay::CobStmtDisplay(int ptype, void * plst){
    type = ptype;
    if(ptype == CB_TERM) {
        disp_itemlst = (list <struct _disp_item *> *)plst;
    } else {
        disp_screen_lst = (list <struct _disp_screen_item *> *)plst;
    }
}

void CobStmtDisplay::dump(){
}
void CobStmtDisplay::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Display statement :\n";
}
void CobStmtDisplay::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Display statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    // add the import statemenet in the beginning. 
    pclass->addextInclude(string("java.io.*"));
    
    switch(type){
        case CB_SYSNAME: {
        //DISPLAY "Name is ", Initials SPACE Surname.
        // System.out.printf("%s%s%s%s", "Name is", Initials, " ", Surname);
            if(sysnamelst != NULL){
                stringstream formatstr, datastr;
                list <struct valueType *>::iterator i;
                int j = 0;
                for(i = sysnamelst->begin(); i != sysnamelst->end(); ++i){
                    struct valueType * item = (*i);
                    
                    CobFieldRecord * fld = NULL;
                    if(item->type == CB_IDENTIFIER)
                        fld = getFieldFromGname(item);

                    formatstr << gen_valueformat(item);
                    
                    string valstr;
                    if(item->type == CB_SPECIAL){
                        valstr  = "CobUtil.getStr(";
                        valstr.append(gen_value(item));
                        valstr.append(")");
                    } else {
                        valstr = gen_value(item);
                    }
                            
                    if(fld) { 
                        bool is88field = false; 
                        if(fld->level == 88) is88field = true; // check if you need to do anything for this. 
                        if(j++ == 0) {
                            datastr << fld->decoratedName << ".getval()";
                        } else {
                            datastr << ", " << fld->decoratedName << ".getval()";                        
                        }                        
                    } else {                    
                        if(j++ == 0) {
                            datastr << valstr;
                        } else {
                            datastr << ", " << valstr;                        
                        }
                    }
                }                

                if(advancing == 0) formatstr << "\\n";
                
                t << tabstr << "System.out.printf(" << "\"" << formatstr.str() << "\""
                            << ", " << datastr.str() << ");";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();
            }
            break;
        }
        case CB_TERM: {
            break;
            // Walk the disp_itemlst and display
            if(disp_itemlst != NULL){
                list <struct _disp_item *>::iterator i;
                for(i = disp_itemlst->begin(); i != disp_itemlst->end(); ++i){
                    struct _disp_item * item = (struct _disp_item *)(*i);
                    if(item != NULL) {
                        if(item->id_clause != NULL) {
                            struct xvaldata * idunit = item->id_clause;
                            CobFieldRecord * fld = getFieldfromXval(idunit);

                            stringstream formatstr, datastr;
                            struct idvalStru * id = idunit->identifier;
                            if(idunit->type == CB_ID_UNITVAL) {
                                // don't know the semantics of UNIT. Implement later. 
                                //idunit->litval                                        
                            } 
                            if(id != NULL){
                                if(fld){
                                    formatstr << gen_valueformatStr(fld->dataType); 
                                    datastr << fld->decoratedName << ".getval()";
                                } else {
                                    formatstr << gen_valueformatXval(idunit);
                                    datastr << gen_id(id) << ".getval()";
                                }
                            }
                            if(advancing == 0) formatstr << "\\n";
                            t << tabstr << "System.out.println(" << "\"" << formatstr.str() << "\""
                                        << ", " << datastr.str() << ");";
                            pmethod->addStatement(t.str());
                            t.str(string()); t.clear();                            
                        }
                        // now walk the list. 
                        if(item->with_clause_list != NULL){
                            t << tabstr << "// the terminal display options are ignored in this version.";
                            pmethod->addStatement(t.str());
                            t.str(string()); t.clear();                            
                            // implement...
                            // relevant implementation of the term io options. 
                            // ignoring for the first version ...
                            list <struct _with_clause *> * lst = 
                                    (list <struct _with_clause *> *)item->with_clause_list;
                            list <struct _with_clause *>::iterator j;
                            for(j = lst->begin(); j != lst->end(); ++j){
                                // this structure is bit confusing as the attempt was to share it with 
                                // accept statement. the line_column actually holds the WITH enum.
                                struct _with_clause * atclitem = (struct _with_clause *)(*j);
                                int wenum = atclitem->withenum;
                                struct xvaldata * woptval = atclitem->addinfo; 
                                switch(wenum){
                                    case CB_WC_AT_LINE:
                                        break;
                                    case CB_WC_AT_COLUMN:
                                        break;
                                    case CB_WC_AT_POSITION:        
                                        break;
                                    case CB_WC_BEEP:
                                        break;
                                    case CB_WC_BELL:
                                        break;
                                    case CB_WC_BLINK:
                                        break;
                                    case CB_WC_CONTROL:
                                        break;
                                    case CB_WC_CONVERT:
                                        break;
                                    case CB_WC_ERASE_EOL:
                                        break;
                                    case CB_WC_ERASE_EOS:
                                        break;
                                    case CB_WC_HIGH:
                                        break;
                                    case CB_WC_HIGHLIGHT:
                                        break;
                                    case CB_WC_LOW:
                                        break;
                                    case CB_WC_LOWLIGHT:
                                        break;
                                    case CB_WC_MODE_IS_BLOCK:
                                        break;
                                    case CB_WC_REVERSE:
                                        break;
                                    case CB_WC_SIZE:
                                        break;
                                }                                
                            }
                        }                        
                    }                    
                }
            }            
        }
        case CB_SCREEN: {
            if(disp_screen_lst != NULL){
                list <struct _disp_screen_item *>::iterator j;
                stringstream formatstr, datastr;
                for(j = disp_screen_lst->begin(); j != disp_screen_lst->end(); ++j){
                    struct _disp_screen_item * item = (struct _disp_screen_item *)(*j);
                    if(item != NULL) {
                        struct idvalStru * id = item->id;
                        struct _at_clause_accept * atclause = item->at_clause;
                        if(id != NULL){
                            formatstr << "%s";  // change this later. Implement ...
                            datastr << gen_id(id) << ".getval()";
                        }
                    }
                    struct _at_clause_accept * atitem = item->at_clause;
                    if(atitem != NULL){
                        // At item defines where the item is displayed. 
                        
                        
                    }
                }
                if(advancing == 0) formatstr << "\\n";
                t << tabstr << "System.out.println(" << "\"" << formatstr.str() << "\""
                            << ", " << datastr.str() << ");";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();
                // 
            }
            break;            
        }
    }
}
CobStmtDisplay::CobStmtDisplay(const CobStmtDisplay& orig) {
}

void CobStmtDisplay::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("display_statement");
}
CobStmtDisplay::~CobStmtDisplay() {
    if(sysnamelst != NULL) delete_gnamelist(sysnamelst);
    if(uponclause != NULL) delete_xval(uponclause);
    if(disp_itemlst) delete_disp_item_list(disp_itemlst);
    if(disp_screen_lst) delete_screen_item_list(disp_screen_lst);
}
