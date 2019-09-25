/*
 * File: CobDataDivision.cpp
 * Created Date: Wednesday April 30th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday April 30th 2014 3:39:38 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:22 PM
 */

#include "CobDataDivision.h"
#include "CobFieldRecord.h"
#include <iostream>
#include <string>
#include <cstdlib>

CobDataDivision::CobDataDivision() {
}

CobDataDivision::CobDataDivision(void * plst){
    cbFileSection = NULL;
    cbWorkingStorageSection = NULL;
    cbCommunicatonSection = NULL;
    cbLinkageSection = NULL;
    cbScreenSection = NULL;
    cbLocalStorageSection = NULL;
    
    if(plst) {
        itemlst = (list <void *> *) plst;
        int length = itemlst->size();
        list<void *>::iterator i;  
        for(i = itemlst->begin(); i != itemlst->end(); ++i ) {
            CobObject * obj = (CobObject *)(*i);
            switch(obj->cobobjid) { 
                case CBD_FILE_SECTION:
                    cbFileSection = (CobFileSection *)(*i);
                    break;
                case CBD_WORKING_STORGAGE_SECTION:
                    cbWorkingStorageSection = (CobWorkingStorageSection *)(*i);
                    break;
                case CBD_LINKAGE_SECTION:
                    cbLinkageSection = (CobLinkageSection *)(*i);
                    break;
                case CBD_COMMUNICATION_SECTION:
                    cbCommunicatonSection = (CobCommunicationSection *)(*i);
                    break;
                case CBD_SCREEN_SECTION:
                    cbScreenSection = (CobScreenSection *)(*i);
                    break;
                case CBD_REPORT_SECTION:
                    break;
                case CBD_LOCALSTORAGE_SECTION:
                    cbLocalStorageSection = (CobLocalStorageSection *)(*i);
                    break;
            }
            /* typeid mechanism is unpredictable and various implementation differ 
             * in handling the behavior. hence it is decided not to use the mechanism
             * and rather rely on the objectid based good old mechanism.
             * This commented code is there for academic reasons
            if(obj != NULL){
                cerr << "TYPEID obj  :" << typeid(obj).name() << "\n"; 
                cerr << "TYPEID *obj :" << typeid(* obj).name() << "\n"; 
                cerr << "TYPEID of CobFileSection " << typeid(CobFileSection).name() << "\n";
                cerr << "TYPEID of CobWorkingStorageSection " << typeid(CobWorkingStorageSection).name() << "\n";
                if(typeid(* obj) == typeid(CobFileSection)) {
                    cbFileSection = (CobFileSection *)(*i);
                }            
                if(typeid(* obj) == typeid(CobWorkingStorageSection)) {
                    cbWorkingStorageSection = (CobWorkingStorageSection *)(*i);
                }
                if(typeid(* obj) == typeid(CobCommunicationSection)) {
                    cbCommunicatonSection = (CobCommunicationSection *)(*i);
                }
                if(typeid(* obj) == typeid(CobLinkageSection)) {
                    cbLinkageSection = (CobLinkageSection *)(*i);
                }
                if(typeid(* obj) == typeid(CobScreenSection)) {
                    cbScreenSection = (CobScreenSection *)(*i);
                }        
                    
                if( typeid(*((CobObject *)(*i))) == typeid(CobFileSection)) {
                    cbFileSection = (CobFileSection *)(*i);
                }
                if( typeid(*((CobObject *)(*i))) == typeid(CobWorkingStorageSection)) {
                    cbWorkingStorageSection = (CobWorkingStorageSection *)(*i);
                }
                if( typeid(*((CobObject *)(*i))) == typeid(CobCommunicationSection)) {
                    cbCommunicatonSection = (CobCommunicationSection *)(*i);
                }
                if( typeid(*((CobObject *)(*i))) == typeid(CobLinkageSection)) {
                    cbLinkageSection = (CobLinkageSection *)(*i);
                }
                if( typeid(*((CobObject *)(*i))) == typeid(CobScreenSection)) {
                    cbScreenSection = (CobScreenSection *)(*i);
                }       
            }*/
        }
    }
}

CobDataDivision::CobDataDivision(const CobDataDivision& orig) {
}

// CobDataDivision functions
CobFileSection * CobDataDivision::getFileSection(void){
    return cbFileSection;
}
CobWorkingStorageSection * CobDataDivision::getWorkingStorageSection(void){
    return cbWorkingStorageSection;
}
CobLocalStorageSection * CobDataDivision::getLocalStorageSection(void){
    return cbLocalStorageSection;
}

CobLinkageSection * CobDataDivision::getLinkageSection(void){
    return cbLinkageSection;
}
CobCommunicationSection * CobDataDivision::getCommunicationSection(void){
    return cbCommunicatonSection;
}
CobScreenSection * CobDataDivision::getScreenSection(void){
    return cbScreenSection;
}
void CobDataDivision::dump(){
    cout << "Data Division: \n";
    if(cbFileSection != NULL)cbFileSection->dump();
    if(cbWorkingStorageSection != NULL) cbWorkingStorageSection->dump();
    if(cbCommunicatonSection != NULL) cbCommunicatonSection->dump();
    if(cbLinkageSection != NULL) cbLinkageSection->dump();
    if(cbScreenSection != NULL) cbScreenSection->dump();
}
void CobDataDivision::dump(int plevel){
}
void CobDataDivision::generate(CobFile * pfile, JGenerator *pgen, JMetaClass * pmetaclass){
    // file section.
    if(cbFileSection)
        cbFileSection->generate(pfile, pgen, pmetaclass);
    // working storage section.
    if(cbWorkingStorageSection)
        cbWorkingStorageSection->generate(pfile, pgen, pmetaclass);
    // linkage section. check the semantics and implement. Will be required while 
    // handing the nested and sub-programs. 
    if(cbLinkageSection)
        cbLinkageSection->generate(pfile, pgen, pmetaclass);
    // communication section 
    if(cbCommunicatonSection)
        cbCommunicatonSection->generate(pfile, pgen, pmetaclass);
    // screen section 
    if(cbScreenSection)
        cbScreenSection->generate(pfile, pgen, pmetaclass);
    // ignore the report section right now. in future if suitable, may be implemented.     
    
    // local storage section
    if(cbLocalStorageSection)
        cbLocalStorageSection->generate(pfile, pgen, pmetaclass);
}
//TBD
// take care of the IN/OF type information to reach the right one. 
CobFieldRecord * CobDataDivision::findField(struct idvalStru * pid ){
    // for time being.
    if(pid == NULL) return NULL;
    return findField(pid->idStr);
}

CobFieldRecord * CobDataDivision::findField(char * pname){
    // cob17 - find the precedence rules and set the order. TBD
    // find in Working Storage section.
    CobFieldRecord * ret = NULL; 
    if(cbWorkingStorageSection) {
        ret = cbWorkingStorageSection->findfield(pname);
    }
    // find in File Section
    if(ret == NULL && cbFileSection) {
        ret = cbFileSection->findField(pname);
    }
    // find in Linkage Section
    if(ret == NULL && cbLinkageSection) {
        ret = cbLinkageSection->findField(pname);
    }    
    // find in Local Storage (YET TO IMPLEMENT ...)
    if(ret == NULL && cbLocalStorageSection) {
        ret = cbLocalStorageSection->findField(pname);        
    }
    return ret;
}

CobDataDivision::~CobDataDivision() {
    if(cbFileSection != NULL)delete cbFileSection;
    if(cbWorkingStorageSection != NULL)delete cbWorkingStorageSection;
    if(cbLinkageSection != NULL) delete cbLinkageSection;
    if(cbLocalStorageSection != NULL) delete cbLocalStorageSection;
    if(cbCommunicatonSection != NULL) delete cbCommunicatonSection;
    if(cbScreenSection != NULL) delete cbScreenSection;
    if(itemlst != NULL) delete itemlst; // the list items are deleted before. 
}

