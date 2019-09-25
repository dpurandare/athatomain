/*
 * File: CobCommunicationSection.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 12:18:49 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 1:03 PM
 * 
 * TBD: http://supportline.microfocus.com/documentation/books/mx20books/atcomm.htm
 *      This is not implemented as part of version 1, except for :
 *      - The Field related information.
 *      - field search 
 *      - field generation 
 * Testing will not be done as part of version 1
 */


#include "CobCommunicationSection.h"
#include <iostream> 

CobCommunicationSection::CobCommunicationSection() {
    cobobjid = CBD_COMMUNICATION_SECTION;
}

CobCommunicationSection::CobCommunicationSection(void * pcomsecdetlst){
    cobobjid = CBD_COMMUNICATION_SECTION;
    commsecdetlst = (list <void *> *) pcomsecdetlst;
}

CobCommunicationSection::CobCommunicationSection(const CobCommunicationSection& orig) {
}

void CobCommunicationSection::dump(){
    cout << "Communication Section : \n";
    if(commsecdetlst != NULL) {
        list<void *>::iterator i;  
        for(i = commsecdetlst->begin(); i != commsecdetlst->end(); ++i ){
            struct _comm_section_item * item = (struct _comm_section_item *)(*i);
            if(item->cdname != NULL){
                cout << "CD name : " << item->cdname << "\n";
            }
            // implement rest later...
            if(item->comm_sec_detail_options != NULL){
                switch(item->comm_sec_detail_options->type) {
                case CB_FT_INPUT: {
                    cout << "Input:\n";
                    void * inlst = item->comm_sec_detail_options->comminput;
                    dump_comm_inp(inlst); 
                    }
                    break;
                case CB_FT_OUTPUT: {
                    cout << "Output:\n";
                    void * olst = item->comm_sec_detail_options->commoutput;
                    dump_comm_output(olst); 
                    }
                    break;
                case CB_FT_I_O: {
                    cout << "I-O:\n";
                    void * iolst = item->comm_sec_detail_options->comminput;
                    dump_comm_inp(iolst);
                    }
                    break;
                default:
                    break;
                }
            }
            if(item->fdsditemlst != NULL){
                cout << "Comm Section Fields :\n";
                list <void *> * fdsdlst = (list <void *> *)item->fdsditemlst;
                list<void *>::iterator j;
                for(j = fdsdlst->begin(); j != fdsdlst->end(); ++j ){
                    ((CobFieldRecord *)(*j))->dump();
                }  
            }
        }
    }
}
void CobCommunicationSection::dump(int plevel){
    
}
void CobCommunicationSection::generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass){

    if(commsecdetlst != NULL) {
        list<void *>::iterator i;  
        for(i = commsecdetlst->begin(); i != commsecdetlst->end(); ++i ){
            struct _comm_section_item * item = (struct _comm_section_item *)(*i);
            // Check what you need to do for the communication direction...
            if(item->comm_sec_detail_options != NULL){
                switch(item->comm_sec_detail_options->type) {
                case CB_FT_INPUT: 
                case CB_FT_OUTPUT: 
                case CB_FT_I_O: 
                default:
                    break;
                }
            }
            if(item->fdsditemlst != NULL){
                list <void *> * fdsdlst = (list <void *> *)item->fdsditemlst;
                CobFieldRecordList * cbFieldRecordList = NULL;                
                cbFieldRecordList = new CobFieldRecordList(fdsdlst);
                // right now without giving much thought on the messaging architecture and
                // hoping it will go through
                // TBD - version 2
                string dummy;
                cbFieldRecordList->generate(pfile, CobDataDivision::CC_COMMUNICATION_SECTION, pgen, NULL, pmetaclass,  NULL, dummy);                 
            }
        }
    }
}

CobCommunicationSection::~CobCommunicationSection() {
    if(commsecdetlst != NULL) {
        list<void *>::iterator i;  
        for(i = commsecdetlst->begin(); i != commsecdetlst->end(); ++i ){
            struct _comm_section_item * item = (struct _comm_section_item *)(*i);
            if(item->cdname != NULL) delete item->cdname;
            if(item->comm_sec_detail_options != NULL){
                switch(item->comm_sec_detail_options->type) {
                case CB_FT_INPUT: {
                    if(item->comm_sec_detail_options->comminput != NULL){
                        delete_comm_inp(item->comm_sec_detail_options->comminput);
                    }
                    break;
                }
                case CB_FT_OUTPUT: {
                    if(item->comm_sec_detail_options->commoutput != NULL) {
                        delete_comm_output(item->comm_sec_detail_options->commoutput);
                    }
                    break;
                }
                case CB_FT_I_O: {
                    if(item->comm_sec_detail_options->commio != NULL) {
                        delete_comm_inp(item->comm_sec_detail_options->commio);                    
                    }                
                    break;
                }
                default:
                    break;
                }
            }
            if(item->fdsditemlst != NULL) 
                delete_field_description_list(item->fdsditemlst);
            delete item;
        }
        delete commsecdetlst;
    }
}

