/*
 * File: CobLocalStorageSection.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:18:44 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on April 7, 2014, 5:00 PM
 */

#include "CobLocalStorageSection.h"

CobLocalStorageSection::CobLocalStorageSection() {
    cobobjid = CBD_LOCALSTORAGE_SECTION;
}
CobLocalStorageSection::CobLocalStorageSection(void * plocstolst){
    cobobjid = CBD_LOCALSTORAGE_SECTION;
    if( plocstolst != NULL) {
        cblocstoitemlst = (list <void *> *)plocstolst;
        cbFieldRecordList = new CobFieldRecordList(plocstolst);
    } else {
        cblocstoitemlst = NULL;
        cbFieldRecordList = NULL;
    }
}
CobFieldRecordList * CobLocalStorageSection::getRecordList(){
    return cbFieldRecordList;
}

void CobLocalStorageSection::dump(){
    cout << "Local Storage Section :\n";
    list<void *>::iterator i;  
    for(i = cblocstoitemlst->begin(); i != cblocstoitemlst->end(); ++i ){
        CobFieldRecord * item = (CobFieldRecord *)(*i);
        item->dump();
    }        
}
void CobLocalStorageSection::dump(int plevel){
    
}
void CobLocalStorageSection::generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass){
    // check if the perform method exists in the pmetaclass else create it.
    JMetaMethod * perfmethod = pmetaclass->getMethod(string("perform"));
    if(perfmethod == NULL) {
        perfmethod = new JMetaMethod(string("perform"), pmetaclass);
        pmetaclass->addMethod(perfmethod); 
    }    
    string dummy;
    cbFieldRecordList->generate(pfile, CobDataDivision::CC_LOCAL_STORAGE_SECTION, pgen, NULL, pmetaclass, perfmethod, dummy);
}

CobFieldRecord * CobLocalStorageSection::findField(char * pname){
    // find in the FD List.
    CobFieldRecord * fdrecord = NULL;
    fdrecord = cbFieldRecordList->findfield(pname);
    return fdrecord;
}

CobLocalStorageSection::~CobLocalStorageSection() {
    if(cblocstoitemlst){
        list<void *>::iterator i;
        for(i = cblocstoitemlst->begin(); i != cblocstoitemlst->end(); ++i ){
            CobFieldRecord * item = (CobFieldRecord *)(*i);
            delete item;
        }
        delete cblocstoitemlst;
    }
    if(cbFieldRecordList)
        delete cbFieldRecordList;
}

/*
*>********************************
*> Recursive Program - Factorials
*>********************************
 IDENTIFICATION DIVISION.
 Program-Id. factorial recursive.
 ENVIRONMENT DIVISION.
 DATA DIVISION.
 Working-Storage Section.
 01  numb  pic 9(4)  value 5.
 01  fact  pic 9(8)  value 0.
 Local-Storage Section.
 01  num  pic 9(4).
 PROCEDURE DIVISION.
     move numb to num.

     if numb = 0
        move 1 to fact
     else
        subtract 1 from numb
        call 'factorial'
        multiply num by fact
     end-if.

     display num '! = ' fact.
     goback.
 End Program factorial.
 * 
When a program is invoked, the WORKING-STORAGE associated with the program is allocated. 
Any data items with VALUE clauses are initialized to the appropriate value at that time. 
For the duration of the run unit, WORKING-STORAGE items persist in their last-used state. 
Exceptions are:

A program with INITIAL specified in the PROGRAM-ID paragraph
In this case, WORKING-STORAGE data items are reinitialized each time that the program is entered.

A subprogram that is dynamically called and then canceled
In this case, WORKING-STORAGE data items are reinitialized on the first reentry into 
the program following the CANCEL.

WORKING-STORAGE is deallocated at the termination of the run unit.
See the related tasks for information about WORKING-STORAGE in COBOL class definitions.

A separate copy of LOCAL-STORAGE data is allocated for each call of a program or 
invocation of a method, and is freed on return from the program or method. If you 
specify a VALUE clause on a LOCAL-STORAGE item, the item is initialized to that 
value on each call or invocation. If a VALUE clause is not specified, the initial 
value of the item is undefined.  
 *  */