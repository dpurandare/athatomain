/*
 * File: CobWorkingStorageSection.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:29:33 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 1:02 PM
 */

#include "CobWorkingStorageSection.h"
#include "CobFieldRecord.h"

CobWorkingStorageSection::CobWorkingStorageSection() {
//    cbFieldList =  new list <CobFieldRecord *>();
    cobobjid = CBD_WORKING_STORGAGE_SECTION;
}

CobWorkingStorageSection::CobWorkingStorageSection(void * pfieldlst){
    cobobjid = CBD_WORKING_STORGAGE_SECTION;

    if( pfieldlst != NULL) {
        cbFieldList = (list <void *> *)pfieldlst;
        cbFieldRecordList = new CobFieldRecordList(pfieldlst);
    } else {
        cbFieldList = NULL;
        cbFieldRecordList = NULL;
    }
}

CobWorkingStorageSection::~CobWorkingStorageSection() {
    if(cbFieldList != NULL) {
        list<void *>::iterator i;
        for(i = cbFieldList->begin(); i != cbFieldList->end(); ++i ){
            delete (CobFieldRecord *)(*i);
        }
        delete cbFieldList;
    }    
    if(cbFieldRecordList)
        delete cbFieldRecordList;
}
void CobWorkingStorageSection::dump(){
    cout << "Working storage section : \n";
    if(cbFieldRecordList != NULL)
        cbFieldRecordList->dump();
}
void CobWorkingStorageSection::dump(int plevel){
    if(cbFieldRecordList != NULL)
        cbFieldRecordList->dump(plevel);    
}

void CobWorkingStorageSection::generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass){
    // working storage items will be class level variables as well as a new data class.
    // Moment of truth...
    // We cannot go the cbFieldRecordList as in FileSection as there is no distinguishing boundaries
    // so we will walk the cbFieldRecordList create the class for each top level item that is not 

    // create class jmetaclass for each of the record if that has hierarchy.
    // the main class with inherit this data class.
    // the reason is this will provide direct access to all the fields defined in that base class.
    string prgname = pfile->getCobIdentificationDivision()->getProgramName();
    string dataclassname(getJname(prgname.c_str()));
    dataclassname.append("Data");
    
    // check if the class is already existing, else create new one. Possibly created elsewhere
    JMetaClass * jmetaclass;
    if( (jmetaclass = pgen->findClass(dataclassname)) == NULL) {
        jmetaclass = new JMetaClass(dataclassname, pgen);
        pgen->addclass(jmetaclass);
        jmetaclass->setExtends(string("AthDataItem"));
        pmetaclass->setExtends(dataclassname);
        jmetaclass->addextInclude( string("com.athato.fileio.*") );
        jmetaclass->addextInclude( string("com.athato.util.*") );
    }
    // add a constructor to it and pass this to the method where the fields are initialized.
    // TBD - is this really required? check.
    JMetaMethod * jmetamethod = new JMetaMethod(dataclassname, jmetaclass, true);            

    list <CobFieldRecord *> * lst = (list <CobFieldRecord *> *) cbFieldRecordList->getFieldRecordList();
    list <CobFieldRecord *>::iterator i;

    for(i = lst->begin(); i != lst->end(); ++i){
        CobFieldRecord * record = (CobFieldRecord *)(*i);
        if(record->children->empty()) {
            // this is single item and needs to be added as single item.
            // Handling single items is an optimization and will be handled separately
            // Right now simply add the Field for this field 
            // cob17 need separate call for the record.
            // for time being...
            record->generate(pfile, CobDataDivision::CC_WORKING_STORAGE_SECTION, pgen, 
                    jmetaclass, pmetaclass, jmetamethod, string());
        } else {
            record->generate(pfile, CobDataDivision::CC_WORKING_STORAGE_SECTION, pgen, 
                    jmetaclass, pmetaclass, jmetamethod, string());
        }
    }
}

CobFieldRecordList * CobWorkingStorageSection::getRecordList(){
    return cbFieldRecordList;
}

CobFieldRecord * CobWorkingStorageSection::findfield(char * pname){
    // find in the FD List.
    CobFieldRecord * fdrecord = NULL;
    fdrecord = cbFieldRecordList->findfield(pname);
    return fdrecord;
}
