/*
 * File: CobStmtWrite.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:37:40 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 8:58 PM
 */

#include "CobStmtWrite.h"
#include "../util/genutil.h"
#include "../ast/CobDataDivision.h"
#include "../ast/CobFile.h"
#include "../proc/CobSentence.h"
#include "../util/genutil.h"
#include <boost/algorithm/string.hpp>

CobStmtWrite::CobStmtWrite() {
}

CobStmtWrite::CobStmtWrite(struct _id_gname * pidgname, 
                            struct _advaicing_clause * padv){
    write_type = CC_WRITE_SEQ;
    record_name_from = pidgname;
    advancing_clause = padv;
    // safe init
    keyvalidation_clause = NULL;
    itype = CB_PD_WRITE;
}

CobStmtWrite::CobStmtWrite(struct _id_gname * pidgname, 
                            struct _invalid_key_action * keyvalidation){
    record_name_from = pidgname;
    if(keyvalidation) {
        write_type = CC_WRITE_IDX;        
    } else {
        write_type = CC_WRITE_SEQ;
    }
    keyvalidation_clause = keyvalidation;
    // safe init
    advancing_clause = NULL;
    itype = CB_PD_WRITE;
}

CobStmtWrite::CobStmtWrite(const CobStmtWrite& orig) {
}

void CobStmtWrite::dump(){
}
void CobStmtWrite::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Write statement :\n";
}
CobSentence * CobStmtWrite::getInvalidKeyStatements(){
    if(keyvalidation_clause)
        if(keyvalidation_clause->invalid_key_proc)
            return (CobSentence *) keyvalidation_clause->invalid_key_proc;
    return NULL;
}
CobSentence * CobStmtWrite::getNotInvalidKeyStatements(){
    if(keyvalidation_clause)
        if(keyvalidation_clause->not_invalid_key_proc)
            return (CobSentence *) keyvalidation_clause->not_invalid_key_proc;
    return NULL;    
}
void CobStmtWrite::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){

    // these two are defined to avoid the duplicate definitions in generated code.
    static string lastwritter;
    static string lastmethod;
    
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Write statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    // get the FD name.
    CobDataDivision * ldataDiv = pfile->getDataDivision();
    CobFileSection * lfilesec = ldataDiv->getFileSection();
    CobFileDescription * filedesc = lfilesec->findFileDescriptionForField(gen_id(record_name_from->ident));
    pclass->addextInclude( string("com.athato.fileio.*") );
    pclass->addextInclude( string("com.athato.util.*") );

    if(write_type == CC_WRITE_SEQ){
        // sequential write 
        // BufferedWriter bw = fwobj.getWriter();
        // studata.write(bw); 
        // studata.write(bw, studata2) ... 
        // Here studata is from FileSection FD record and studata2 
        // may be from working-storage. 
        if(record_name_from != NULL){
//            t << tabstr << "BufferedWriter bw = " << gen_id(record_name_from->ident)
            if(lastwritter.empty() || lastmethod.empty()) {
                //
            }
            else if((boost::iequals(lastwritter, filedesc->getFDSDName())) &&
               (boost::iequals(lastmethod, pmethod->getMethodName()))) {
                // the BufferWritter is already defined, use the same.
            } else {
                // define the new BufferWritter.
                t << tabstr << "BufferedWriter " << getJname(filedesc->getFDSDName().c_str()) << "bw = " 
                    << getJname(filedesc->getFDSDName().c_str())
                    << "FO.getWriter();";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();
                // assign the last writter and method for the next processing.
                lastwritter = filedesc->getFDSDName();
                lastmethod = pmethod->getMethodName();
            } 
            if(filedesc != NULL){
                t << tabstr << gen_id(record_name_from->ident) << ".write(" 
                        << getJname(filedesc->getFDSDName().c_str()) << "bw"  << ");";
                pmethod->addStatement(t.str());
                t.str(string()); t.clear();                                

                pmethod->addException(JMetaMethod::CC_IOException);
            }
            
//            if(record_name_from->value != NULL) { 
//                string recordname = gen_value(record_name_from->value);
//                if(filedesc != NULL ) {
//                    // if the record name and the FD name is same, it means you don't need optional param.
//                    if(recordname.compare(filedesc->getFDSDName()) == 0) {
//                        t << tabstr << getJname(filedesc->getFDSDName().c_str()) << "_FO.write(bw);";
//                    } else {
//                        t << tabstr << getJname(filedesc->getFDSDName().c_str()) << "_FO.write(bw, "
//                            << recordname << ");";
//                    }
//                } else {
//                    t << tabstr << getJname(filedesc->getFDSDName().c_str()) << "_FO.write(bw);";
//                }
//            } else {
//                string recordname = gen_id(record_name_from->ident);
//                if(filedesc != NULL ) { 
//                    if(recordname.compare(filedesc->getFDSDName()) == 0) {
//                        t << tabstr << getJname(filedesc->getFDSDName().c_str()) << "_FO.write(bw);";
//                    } else {
//                        t << tabstr << getJname(filedesc->getFDSDName().c_str()) << "_FO.write(bw, "
//                            << recordname << ");";                        
//                    }
//                }
//            }
//            pmethod->addStatement(t.str());
//            t.str(string()); t.clear();                                
        }
        // implement ... ignoring the advancing clasue at this moment. 
        //
    } else {
        // bool i = CobUtil.write(string FDName, string recordName, string fromid);
        // if( i == false ){
        //      // the record is not written duplicate key 
        // } else {
        //      // the record is written. 
        // }
        string recordname, fdname, fromid;
        if(record_name_from != NULL) {
            recordname = gen_id(record_name_from->ident);
            if(record_name_from->value != NULL) {
                fromid = gen_value(record_name_from->value);
            } else {
                fromid = "null";
            }
            if(filedesc != NULL) {
                fdname = filedesc->getFDSDName();
                t << tabstr << "boolean i = CobUtil.write(" << getJname(fdname.c_str()) << "FO, " << getJname(recordname.c_str()) 
                    << ", " << fromid << ");";
            } else {
                // what does it mean when the filedesc is null? is this correct?
                t << tabstr << "boolean i = CobUtil.write(null, " << getJname(recordname.c_str()) 
                    << ", " << fromid << ");";                
            }
        } else {
            t << tabstr << "// (XXX:801 - ERR)";
        }
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();
        
        t << tabstr << "// (XXX:802 - This is yet to be checked. if error found, report.)";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();

        if(keyvalidation_clause != NULL){
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
    }
}
void CobStmtWrite::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("write_statement"); 
    // TODO    
}
CobStmtWrite::~CobStmtWrite() {
    if(record_name_from != NULL){
        delete_id(record_name_from->ident);
        delete_value(record_name_from->value);
    }
    if(advancing_clause != NULL){ 
        if(advancing_clause->advancing)
            delete_xval(advancing_clause->advancing);
        if(advancing_clause->end_of_page)
            delete_action_pair(advancing_clause->end_of_page);
        delete advancing_clause;
    }
    delete_invalid_key_action(keyvalidation_clause);
}

