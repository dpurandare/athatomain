/*
 * File: CobFileDescription.cpp
 * Created Date: Wednesday August 27th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday August 27th 2014 10:57:09 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:30 PM
 */

#include "CobFileDescription.h"
#include <cstdlib>
#include <boost/algorithm/string.hpp>

CobFileDescription::CobFileDescription() {
    //cbFieldList =  new list <CobFieldRecord *>();
}

CobFileDescription::CobFileDescription(char * pname, void * poptionslst, void * pitemlst){
    fdsdName = pname;
    optionslst = (list <struct _fd_sd_option *> *) poptionslst;
    fieldslst = (list <void *> *) pitemlst;
    // Handle all the special field level related processing
    // handle building the hierarchy of fields here. 
    // may be the logic could be externalized so that used by the other sections 
    // such as working storage section...
    cbFieldRecordList = new CobFieldRecordList(pitemlst);
}

void CobFileDescription::processOptList(){
    // walk the options list and assign the values to the fields of this class
    if(optionslst == NULL) return;
    
    list <struct _fd_sd_option *>::iterator i;
    for(i = optionslst->begin(); i != optionslst->end(); ++i ){
        struct _fd_sd_option * item = (struct _fd_sd_option *)(*i);
        if(item != NULL) {
            // implement ...
            switch(item->type){
                case CB_FDSD_EXTERNAL            :
                case CB_FDSD_GLOBAL              :
                case CB_FDSD_LAB_REC_CLAUSE      :
                case CB_FDSD_REC_CON_CLAUSE      :
                case CB_FDSD_BLO_CON_CLAUSE      :
                case CB_FDSD_DATA_REC_CLAUSE     :
                case CB_FDSD_VAL_OF_CLAUSE       :
                case CB_FDSD_LINAGE_CLAUSE       :
                case CB_FDSD_CODESET_CLAUSE      :
                case CB_FDSD_REPORT_CLAUSE       :
                default:
                    cerr << "Invalid FD-SD option at:" << fdsdName << "\n";
            }            
        }
    }
}
CobFieldRecordList * CobFileDescription::getFieldRecordList(){
    return cbFieldRecordList;
}

bool CobFileDescription::checkFieldExists(string pname){
    bool found = false;
    list<void *>::iterator i;
    for(i = fieldslst->begin(); i != fieldslst->end(); ++i ){
        CobFieldRecord * item = (CobFieldRecord *)(*i);
        if( boost::iequals(pname, item->recordname) ) {
            found = true;
            break;
        }
    }    
    return found;    
}

void CobFileDescription::dump(){
    cout << "File Description: \n";
    if( type == CB_FD_FD) {
        cout << "FD  Name : " ;
    } else {
        cout << "SD  Name : " ;
    }
    cout << fdsdName << "\n";
    // Options
    if(optionslst != NULL){
        cout << "File Description Options:\n";
        dump_fd_sd_opt_list(optionslst);
    }    
    cbFieldRecordList->dump();
}
void CobFileDescription::dump(int plevel){
    
}

void CobFileDescription::generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass){
    // mangle the fdname to fit the Java and other language constraints.
    string fdname = getJname(fdsdName.c_str()); 

    // qualify the name and mangle it as required. 
    string fdclassname = fdname;
    fdclassname.append("DataItem");

    // add a field in the pmetaclass.
    string modfdname = fdname; 
    modfdname.append("DI");
    JMetaField * fdfield = new JMetaField(modfdname, fdclassname);
    pmetaclass->addField(fdfield);
    
    // Create this object in the constructor and assign the values.
    // cob17 - revisit this again.
    stringstream tmpstrm;
    tmpstrm << modfdname << " = new " << fdclassname << "();";
    pmetaclass->addConstructorItem(tmpstrm.str());            
    
    // create a new data class and add it to the generator
    // Prepare the DataItem class now. 
    // for now it is not totally meta model driven. 
    // Some information needs to be stored as string list. 
    // implement ... of course in version 2. when the multi language support is implemented.
    // walk the fditem now and fill in the fdclass details. 

    // cbFieldRecordList will contain top level items. All others will be added as children
    // as appropriate.

    // for each record (CobFieldRecord object) ...
    // create record class object
    //      create field class object
    //              creare child field object
    //              add child level fields into parent field
    // add the record into data item class

    // there will be only one DataItem for each FD item and it is jmetaclass
    // create the init() method and add the initialization in that. 
    // finally add the init() method to the jmetaclass. 
    JMetaClass * jmetaclass = new JMetaClass(fdclassname, pgen);
    pgen->addclass(jmetaclass);
    
    // class decorations, extensions and includes
    string extendstr = "AthDataItem";
    jmetaclass->setExtends(extendstr);

    pmetaclass->addextInclude( string("com.athato.fileio.*") );

    string recordname = fdname;
    recordname.append("record");
    
    string stmtstr;    stmtstr.append("AthDataRecord ");
    stmtstr.append(recordname);    stmtstr.append(" = ");
    stmtstr.append("new AthDataRecord();");
    jmetaclass->addConstructorItem(stmtstr);

    // add the import statement for fileio.*
    jmetaclass->addextInclude( string("com.athato.fileio.*") );
    jmetaclass->addextInclude( string("com.athato.util.*") );

    // RECORD LIST                       
    if(cbFieldRecordList != NULL) {        
        cbFieldRecordList->generate(pfile, CobDataDivision::CC_FILE_SETION, pgen, jmetaclass, pmetaclass, NULL, modfdname);
        // the top level fields are added to the record in Java Data Item class. 
        list <CobFieldRecord *> * lst = (list <CobFieldRecord *> *) cbFieldRecordList->getFieldRecordList();
        list <CobFieldRecord *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i) {
            CobFieldRecord * record = (CobFieldRecord *)(*i);
            string stmtstr;
            stmtstr.append(recordname); stmtstr.append(".addField(");
            stmtstr.append(record->qualifiedname);
            stmtstr.append(");");
            jmetaclass->addConstructorItem(stmtstr);
        }
    }
    // add the record to the data item.
    string addrec;
    addrec.append("addRecord(");
    addrec.append(recordname);
    addrec.append(");" );
    jmetaclass->addConstructorItem(addrec);
    // super init
    string superinit("super.init();");
    jmetaclass->addConstructorItem(superinit);
}

string CobFileDescription::getFDSDName(){
    return fdsdName;
}

string CobFileDescription::getFirstRecordName(){
    return cbFieldRecordList->getFirstRecordName();
}

void CobFileDescription::setType(enum fdsd_enum ltype){
    type = ltype;
}
enum fdsd_enum CobFileDescription::getType(){
    return type;
}

CobFileDescription::~CobFileDescription() {
    // delete the options 
    if(optionslst != NULL && !optionslst->empty()) {
        list<struct _fd_sd_option *>::iterator i;
        for(i = optionslst->begin(); i != optionslst->end(); ++i ){
            if((*i) != NULL) {
                struct _fd_sd_option * item = (struct _fd_sd_option *)(*i);
                
                switch(item->type){
                case CB_FDSD_LAB_REC_CLAUSE:
                    // label record
                    if(item->label_rec_clause != NULL){
                        delete_strlist(item->label_rec_clause);
                    }
                    break;
                case CB_FDSD_REC_CON_CLAUSE:
                    // record contains 
                    if(item->recconcl != NULL){
                        if(item->recconcl->contains != NULL){
                            delete item->recconcl->contains;
                        }
                        if(item->recconcl->record_varyinglst != NULL){
                            list <void *> * lst = (list <void *> *)item->recconcl->record_varyinglst;
                            if(lst != NULL){
                                list <void *>::iterator i;
                                for(i = lst->begin(); i != lst->end(); ++i ){
                                   struct _variation_clause * vitem = (struct _variation_clause *)(*i);
                                   if(vitem != NULL){
                                       if(vitem->type == CB_VAR_FROMTO){
                                           delete vitem->fromto;
                                       } else if(vitem->type == CB_VAR_DEPEND){
                                           if(vitem->depend != NULL){
                                               delete_id(vitem->depend);
                                           }
                                       }
                                       delete vitem;
                                    } 
                                }
                                delete lst;
                            }
                            delete lst;
                        }
                        delete item->recconcl;
                    }
                    break;
                case CB_FDSD_BLO_CON_CLAUSE:
                    // block contains
                    if(item->blocconcl != NULL){
                        delete item->blocconcl;
                    }
                    break;
                case CB_FDSD_DATA_REC_CLAUSE:
                    // data records 
                    if(item->data_records_clause != NULL){
                        delete_strlist(item->data_records_clause);
                    }
                    break;
                case CB_FDSD_VAL_OF_CLAUSE:
                    // Value of
                    if(item->value_oflst != NULL){
                        list <void *> * lst = (list <void *> *)(item->value_oflst);
                        list <void *>::iterator i;
                        for(i = lst->begin(); i != lst->end(); ++i ){
                            struct _val_clause_item * vcitem = (struct _val_clause_item *)(*i);
                            if(vcitem != NULL){
                                if(vcitem->labelid != NULL){
                                    delete_id(vcitem->labelid); 
                                }
                                if(vcitem->valitem != NULL){
                                    delete_value(vcitem->valitem);
                                }
                                delete vcitem;
                            }                    
                        }
                        delete lst;                
                    }
                    break;
                case CB_FDSD_LINAGE_CLAUSE:
                    // linage 
                    if(item->linagecl != NULL){
                        delete_linage_clause(item->linagecl);
                    }
                    break;
                case CB_FDSD_CODESET_CLAUSE:
                    // code set
                    if(item->codeset != NULL) delete item->codeset;
                    break;
                default:
                    break;
                }
                delete item;
            }
        }
        delete optionslst;
        optionslst = NULL;
    }
    // delete the field list 
    if(fieldslst != NULL) {
        list<void *>::iterator i;    
        for(i = fieldslst->begin(); i != fieldslst->end(); ++i ){
            delete (CobFieldRecord *)(*i);
        }    
        delete fieldslst;
    }
    delete cbFieldRecordList;
}

/* Reference to IBM Documentation following items are ignored as those may be used in context with 
 * JCL and may not be relevant while translating to Java. 
BLOCK CONTAINS          ignored - used by JCL
RECORD CONTAINS n, RECORD CONTAINS n TO m	ignored - used by JCL
RECORD IS VARYING	ignored - used by JCL
LABEL RECORDS : used for the QSAM files for display purpose	ignored
STANDARD	ignored
OMITTED         ignored
VALUE OF	ignored
DATA RECORDS	ignored
LINAGE          - for printing to know the depth of logical page	ignored
CODE-SET    ASCII or EBCDIC	Ignored, assumed ASCII for all operations
RECORDING MODE	ignored
 */