/*
 * File: CobStmtRead.cpp
 * Created Date: Wednesday August 27th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday August 27th 2014 11:42:39 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 8:54 PM
 */
#include "CobSentence.h"
#include "CobStmtRead.h"
#include "../ast/CobDataDivision.h"
#include "../util/genutil.h"
#include "../util/reswords.h"

CobStmtRead::CobStmtRead() {
}

CobStmtRead::CobStmtRead(struct idvalStru * pfile_name, int pnext_prev,
            int precord_clause, struct idvalStru * popt_id,
            struct _at_end_action * pend_action){
    read_type = CC_READ_SEQ;
    file_name = pfile_name;
    next_prev_record = pnext_prev;
    record_clause = precord_clause;
    opt_id = popt_id;
    end_action = pend_action;
    // safe initializations
    key_clause = NULL;
    invalidkey_action = NULL;
    itype = CB_PD_READ;
}

CobStmtRead::CobStmtRead(struct idvalStru * pfile_name, 
            int pnext_prev, int precord_clause,
            struct idvalStru * popt_id, struct idvalStru * popt_key,
            struct _invalid_key_action * pinvalid_key){
    read_type = CC_READ_DIR_IDX;
    file_name = pfile_name;
    next_prev_record = pnext_prev;
    record_clause = precord_clause;
    opt_id = popt_id;
    key_clause = popt_key;
    invalidkey_action = pinvalid_key;
    // safe init
    end_action = NULL;
    itype = CB_PD_READ;
}

CobStmtRead::CobStmtRead(const CobStmtRead& orig) {
}

void CobStmtRead::dump(){
}
void CobStmtRead::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Read statement :\n";
}
void CobStmtRead::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    static int icount = 0;
    
    string tabstr = "";
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Read statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    string fname = gen_id(file_name);

    // get the FD name.
    CobDataDivision * ldataDiv = pfile->getDataDivision();
    CobFileSection * lfilesec = ldataDiv->getFileSection();
    CobFileDescription * filedesc = lfilesec->findFileDescription(string(file_name->idStr));
    
    if(read_type == CC_READ_SEQ) {
//BufferedReader br = frobj.getReader();
// boolean eof_StudentFile_DI = false;
// int i = StudentFile_DI.read(br)    
// if(i == 1) { // there is either error or end of file. 
//     eof_StudentFile_DI = true;
// }    
        t << tabstr << "BufferedReader " << fname << "br = " << fname << "FO.getReader();";
        int hashcode = gethash( fname.c_str() );
        pmethod->addStatement(t.str(), true, hashcode);
        t.str(string()); t.clear();

//        t << tabstr << "boolean eof_" << fname << " = false;";
//        pmethod->addStatement(t.str());
//        t.str(string()); t.clear();

//        t << tabstr << "int i = " << fname << "FO.read(" << fname << "br);";
        t << tabstr << "int i" << icount << " = " << getJname(filedesc->getFDSDName().c_str()) << "DI.read(" << fname << "br);";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();
        
//        t << tabstr << "if(i == 1) " << "eof_" << fname << " = true;";
//        pmethod->addStatement(t.str());
//        t.str(string()); t.clear();

        if(end_action){
            if( end_action->at_end_action != NULL) {
                t << tabstr << "if(i" << icount << " == 1) {";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();
                ((CobSentence *)end_action->at_end_action)->gen(pfile, pgen, pclass, pmethod, 
                                            pisfirst, plevel+1, s);
            }
            if( end_action->not_at_end_action != NULL) {
                t << tabstr << "} else {";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();
                ((CobSentence *)end_action->at_end_action)->gen(pfile, pgen, pclass, pmethod, 
                                            pisfirst, plevel+1, s);                
            } 
            t << tabstr << "}";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();                            
        }
        
    } else { 
        // implement ... direct access and indexed files ...
        // XXXDataItem.readRamdom(XXXDataItem optitem, String fileName, String keyName, int direction, int lock);
        t << tabstr << fname << "DI.readRandom((AthDataItem)";
        
        if(opt_id) {
            t << gen_id(opt_id) << ", ";
        } else {
            t << fname << "DI, ";
        }
        t << "\"" << fname << "\", ";
        if(key_clause){
            t << "\"" << gen_id(key_clause) << "\", ";
        } else {
            t << "null, ";
        }
        t << next_prev_record << ", " << record_clause << ");";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();            
    }
    icount++;
}
CobSentence * CobStmtRead::getAtEndStatements(){
    if(end_action)
        if(end_action->at_end_action)
            return (CobSentence *)end_action->at_end_action;
    return NULL;
}
CobSentence * CobStmtRead::getNotAtEndStatements(){
    if(end_action)
        if(end_action->not_at_end_action)
            return (CobSentence *)end_action->not_at_end_action;
    return NULL;    
}
CobSentence * CobStmtRead::getInvalidKeyStatements(){
    if(invalidkey_action)
        if(invalidkey_action->invalid_key_proc)
            return (CobSentence *)invalidkey_action->invalid_key_proc;
    return NULL;
}
CobSentence * CobStmtRead::getNotInvalidKeyStatements(){
    if(invalidkey_action)
        if(invalidkey_action->not_invalid_key_proc)
            return (CobSentence *)invalidkey_action->not_invalid_key_proc;
    return NULL;    
}
void CobStmtRead::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("read_statement"); 
    // TODO
}
CobStmtRead::~CobStmtRead() {
    if(file_name != NULL) delete_id(file_name);
    if(opt_id != NULL) delete_id(opt_id);
    if(end_action != NULL) delete_at_end_clause(end_action);
    if(key_clause != NULL) delete_id(key_clause);
    if(invalidkey_action != NULL) delete_invalid_key_action(invalidkey_action);
}

