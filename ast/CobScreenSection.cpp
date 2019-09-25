/*
 * File: CobScreenSection.cpp
 * Created Date: Friday April 25th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 25th 2014 10:04:04 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 3:39 PM
 */

#include "CobScreenSection.h"
#include <iostream>
using namespace std;

CobScreenSection::CobScreenSection() {
    cobobjid = CBD_SCREEN_SECTION;
}

CobScreenSection::CobScreenSection(void * pscrdescrlst){
    cobobjid = CBD_SCREEN_SECTION;
    scrDescrlst = (list <void *> *) pscrdescrlst;
}

void CobScreenSection::dump(){
    if(scrDescrlst != NULL) {
        cout << "Screen Section : \n";
        list<void *>::iterator i;  
        for(i = scrDescrlst->begin(); i != scrDescrlst->end(); ++i ){
            struct _screen_descr_entry * item = (struct _screen_descr_entry *)(*i);
            // implement : dump the structure 
            if(item != NULL) {
                cout << "Screen Item: " << item->level << "\t" << item->nameorfiller << "\t";

                if(item->screen_descr_optionlst != NULL){
                    list <void *> * optlst = (list <void *> *) item->screen_descr_optionlst;
                    list<void *>::iterator j;  
                    for(j = optlst->begin(); j != optlst->end(); ++j ){
                        struct _screen_descr_option * optitem = 
                                            (struct _screen_descr_option *) (*j);
                        // todo...
                    }
                }
            }            
        }    
    }
}
void CobScreenSection::dump(int plevel){
    
}
void CobScreenSection::generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass){
    // implementx
}
CobScreenSection::~CobScreenSection() {
    if(scrDescrlst != NULL) {
        list<void *>::iterator i;
        for(i = scrDescrlst->begin(); i != scrDescrlst->end(); ++i ){
            struct _screen_descr_entry * item = (struct _screen_descr_entry *)(*i);
            // implement : delete the structure 
            if(item != NULL) {
                if(item->nameorfiller != NULL) delete item->nameorfiller;
                if(item->screen_descr_optionlst != NULL){
                    list <void *> * optlst = (list <void *> *) item->screen_descr_optionlst;
                    list<void *>::iterator j;  
                    for(j = optlst->begin(); j != optlst->end(); ++j ){
                        struct _screen_descr_option * optitem = 
                                            (struct _screen_descr_option *) (*j);
                        if(optitem != NULL){
                            if(optitem->id != NULL) delete_id(optitem->id);
                            if(optitem->number_clause != NULL) {
                                if(optitem->number_clause->str != NULL) 
                                    delete optitem->number_clause->str; 
                                delete optitem->number_clause;
                            }
                            if(optitem->val) delete_value(optitem->val);
                            if(optitem->picstr != NULL) delete optitem->picstr;
                            if(optitem->loc_details != NULL){
                                if(optitem->loc_details->locval != NULL)
                                    delete_value(optitem->loc_details->locval);
                                delete optitem->loc_details;
                            }
                            delete optitem;
                        }
                    }
                    delete optlst;
                }
                delete item;
            }
        }        
        delete scrDescrlst;
    }
}
