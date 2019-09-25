/*
 * File: CobFileControl.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:31:19 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:21 PM
 */

#include "CobFileControl.h"
#include <vector>
#include <iostream>
#include "../global.h"

CobFileControl::CobFileControl() {
    
}

CobFileControl::CobFileControl(void * plst){
    fileCtrlExprLst = (list <void *> *) plst;
}

void * CobFileControl::getFileControlExprList(){
    void * ret = NULL;
    if(fileCtrlExprLst != NULL) ret = (void *)fileCtrlExprLst;
    return ret;
}

CobFileControl::~CobFileControl() {
    if(fileCtrlExprLst != NULL) {
        list <void *>::iterator i;
        for( i = fileCtrlExprLst->begin(); i != fileCtrlExprLst->end() ; ++i ) {    
            struct _file_control_expression * fcitem = (struct _file_control_expression *)(*i);
            if(fcitem != NULL){
                if(fcitem->filename != NULL) delete fcitem->filename;
                if(fcitem->fcclist != NULL) delete_file_control_clause_list(fcitem->fcclist);
                delete fcitem;
            }
        }
        delete fileCtrlExprLst;
    }
}

void CobFileControl::dump(){
    cout << "File Control : \n";
    list <void *>::iterator i;
    for(i = fileCtrlExprLst->begin(); i != fileCtrlExprLst->end(); ++i ){    
        struct _file_control_expression * fcitem = (struct _file_control_expression *)(*i);
        if(fcitem != NULL){
            cout << "File name :" << fcitem->filename << "\n";
            cout << "Optional:" << ((fcitem->optionalflag) ? "True" : "False") << "\n";
            if(fcitem->fcclist != NULL) {
                dump_file_control_clause_list(fcitem->fcclist);
            }
        }
    }
}
void CobFileControl::generate(JGenerator *pgen, JMetaClass *pmetaclass){
    // For the occurrence of FD create the field and add the initiation in the constructor.
    // The various options setting should be done in the constructor itself. 
    // For SD for time being follow the same method
//    void * fclist = pfilecontrol->getFileControlExprList();
    if(fileCtrlExprLst != NULL){
        list <void *> * lst = (list <void *> *) fileCtrlExprLst;
        list <void *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i){
            struct _file_control_expression * fcexp = (struct _file_control_expression * )(*i);
            // create the field entry. 
            // use this as name of the FileObject            
            string filename(fcexp->filename);            
            filename.append("FO");
            // implement ... not sure what optional means right now. 
            // fcexp->optionalflag
            
            // implement: AthModFileObject can be replaced by name of Meta Symbol that 
            // will have language bindings for specific language and the information 
            // of such mapping could be kept in a binding map. 
            // for now the specific Java implementation.
            
            JMetaField * fcitem = new JMetaField(getJname(filename.c_str()), string("AthFileObject"));
            
            pmetaclass->addField(fcitem);
            
            // add statements to the constructor.
            // Also set some info to the file object during construction. 
            // right now stored as string objects that would be dumped by the class. 
            
            list <void *> * lst = (list <void *> *)fcexp->fcclist;
            list <void *>::iterator i;

            string filestr;
            int deviceno = 0;
            string optfilestr;;
            int organization = 0;
            string padding;;
            string delim;
            int access_mode = 0;
            
            for(i = lst->begin(); i != lst->end(); ++i ) {
                struct _file_control_clause * item = (struct _file_control_clause *)(*i);
                // for reference of this walk refer global.cpp function
                // void dump_file_control_clause_list(void * plst)
                if(item != NULL) {
                    switch(item->type){
                        case CB_FCC_ASSIGN: {
                            //cout << "Assign to: ";
                            if(item->file_assignment_clause->ival == 0) {
                                // file and opt file
                                if(item->file_assignment_clause->first != NULL) {
                                    switch(item->file_assignment_clause->first->type) {
                                    case CB_IDENTIFIER:
                                        if(item->file_assignment_clause->first->idval != NULL)
                                            filestr.append(item->file_assignment_clause->first->idval->idStr); 
                                        break;
                                    case CB_CHARPTR:
                                        if(item->file_assignment_clause->first->strVal != NULL)
                                            filestr.append(item->file_assignment_clause->first->strVal);
                                        break;    
                                    }
                                }
                                if(item->file_assignment_clause->second != NULL){
                                    switch(item->file_assignment_clause->second->type) {
                                    case CB_IDENTIFIER:
                                        if(item->file_assignment_clause->second->idval != NULL)
                                            filestr.append(item->file_assignment_clause->second->idval->idStr); 
                                        break;
                                    case CB_CHARPTR:
                                        if(item->file_assignment_clause->second->strVal != NULL)
                                            filestr.append(item->file_assignment_clause->second->strVal);
                                        break;    
                                    }
                                }
                            } else {
                                // device and opt file name
                                //cout << "Device :";
                                //dump_device_file_name(item->file_assignment_clause->ival);
                                deviceno = item->file_assignment_clause->ival;
                                if(item->file_assignment_clause->second != NULL) {
                                    //cout << " Opt file: "; 
                                    //dump_value(item->file_assignment_clause->second);
                                    optfilestr.append(item->file_assignment_clause->second->strVal);                                    
                                }
                            }
                            break;
                        }
                        case CB_FCC_RESERVE:
                            //cout << "Reserve : " << item->reserve_clause << " Alternate Areas";
                            // ignore...
                            break;
                        case CB_FCC_ORG:
                            //cout << "Organization :";            
                            //dump_organization_clause(item->organization_clause);
                            organization = item->organization_clause;
                            break;
                        case CB_FCC_PADDING:{
                            //cout << "Padding :";
                            //dump_value(item->padding_char);
                            struct valueType * val = item->padding_char;
                            if(val->type == CB_CHARPTR){
                                padding.append(val->strVal);
                            }
                        }
                            break;
                        case CB_FCC_DELIM: {
                            //cout << "Delimiter :";
                            //dump_xval(item->delimiter_clause);
                            struct xvaldata * xval = item->delimiter_clause;
                            delim.append(xval->identifier->idStr);
                        }
                            break;
                        case CB_FCC_ACCESS: {
                            if(item->access_mode_clause != NULL) {
                                //dump_accessmode_clause(item->access_mode_clause);
                                access_mode = item->access_mode_clause->pival;
                            }
                        }
                            break;
                            
                        case CB_FCC_LOCK: {
                            // dump_lock_mode_clause(item->lock_mode_clause);
                            // ignore now. revisit later. implement...
                        }
                            break;
                        case CB_FCC_CODESET: {
                            // cout << "Code Set:";
                            // dump_xval(item->code_set);
                            // revisit. implement ...
                        }
                            break;
                        case CB_FCC_COLLATING: {
                            // cout << "Collating Sequence:";
                            // dump_xval(item->collating_seq);
                            // revisit. implement...
                        }
                            break;
                        case CB_FCC_RECKEY: {
//                            if(item->rec_key_clause != NULL){
//                                if(item->rec_key_clause->data_name != NULL){
//                                    cout << "Record Key:";
//                                    dump_xval(item->rec_key_clause->data_name);
//                                } else {
//                                    cout << "Record Split Key:" << item->rec_key_clause->splip_key_name;
//                                    if(item->rec_key_clause->split_key_value_list != NULL){
//                                        cout << " = "; 
//                                        dump_strlist(item->rec_key_clause->split_key_value_list);
//                                    }    
//                                }
//                            }
                            // revisit. implement 
                        }
                            break;
                        case CB_FCC_KEYCLAUSE: {
//                            if(item->alt_key_clause != NULL){
//                                cout << "Alternate Keys: ";
//                                dump_record_key_clause(item->alt_key_clause);
//                            }
                            // revisit. implement ...
                        }
                            break;
                        case CB_FCC_FILESTATUE : {
//                            if(item->file_status != NULL){
//                                cout << "File status:";
//                                dump_xval(item->file_status);
//                            }
                            // revisit. implement
                        }
                            break;
                    }
                }
            }
            // assign the values to the field object as a part of the constructor.
            // right now it will be in form of strings, however, revisit later 
            // for proper parametrization
            stringstream tmpstrm;
            tmpstrm << getJname(filename.c_str()) << " = new AthFileObject(" << "\"" << filestr << "\"" << ", AthFileObject.ACCESSMODE.ACCESS_UNDEFINED);";
            pmetaclass->addConstructorItem(tmpstrm.str());            
        }
    }
}
void CobFileControl::init(){
    
}
void CobFileControl::dump(int plevel){
    
}
