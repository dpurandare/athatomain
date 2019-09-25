/*
 * File: CobLinkageSection.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:16:41 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 1:02 PM
 */

#include "CobLinkageSection.h"
#include "CobFieldRecord.h"

CobLinkageSection::CobLinkageSection() {
    cobobjid = CBD_LINKAGE_SECTION;
}

CobLinkageSection::CobLinkageSection(void * plinkseclst){
    cobobjid = CBD_LINKAGE_SECTION;

    if( plinkseclst != NULL) {
        cbLinksecitemlst = (list <void *> *)plinkseclst;
        cbFieldRecordList = new CobFieldRecordList(plinkseclst);
    } else {
        cbLinksecitemlst = NULL;
        cbFieldRecordList = NULL;
    }
}
CobFieldRecordList * CobLinkageSection::getRecordList(){
    return cbFieldRecordList;
}

void CobLinkageSection::dump(){
    cout << "Linkage Section :\n";
    list<void *>::iterator i;  
    for(i = cbLinksecitemlst->begin(); i != cbLinksecitemlst->end(); ++i ){
        CobFieldRecord * item = (CobFieldRecord *)(*i);
        item->dump();
    }    
}
void CobLinkageSection::dump(int plevel){
    
}
void CobLinkageSection::generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass){
    pmetaclass->addextInclude(string("fileio.*"));
    // cob17
    JMetaMethod * perfmethod = pmetaclass->getMethod(string("perform"));
    if(perfmethod == NULL) {
        perfmethod = new JMetaMethod(string("perform"), pmetaclass);
        pmetaclass->addMethod(perfmethod); 
    }    
    string dummy;
    cbFieldRecordList->generate(pfile, CobDataDivision::CC_LINKAGE_SECTION, pgen, NULL, pmetaclass,  perfmethod, dummy);    
}

CobFieldRecord * CobLinkageSection::findField(char * pname){
    // find in the FD List.
    CobFieldRecord * fdrecord = NULL;
    fdrecord = cbFieldRecordList->findfield(pname);
    return fdrecord;
}

CobLinkageSection::~CobLinkageSection() {
    if(cbLinksecitemlst) {
        list<void *>::iterator i;  
        for(i = cbLinksecitemlst->begin(); i != cbLinksecitemlst->end(); ++i ){
            CobFieldRecord * item = (CobFieldRecord *)(*i);
            delete item;
        }
        delete cbLinksecitemlst;
    }
    if(cbFieldRecordList)
        delete cbFieldRecordList;
}

