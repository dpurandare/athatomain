/*
 * File: CobConfigurationSection.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 12:24:59 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:56 PM
 */

#include "CobConfigurationSection.h"
#include "../global.h"
#include <iostream>

CobConfigurationSection::CobConfigurationSection() {
}

CobConfigurationSection::CobConfigurationSection(void * plst){
    
    repository_exists = false;
    
    cbConfigSecOptList = (list <void *> *) plst;
    // implement : iterate the list and do the further assignments.
    if (cbConfigSecOptList != NULL ) {
        list<void *>::iterator i;  
        for(i = cbConfigSecOptList->begin(); i != cbConfigSecOptList->end(); ++i ){
            struct _config_section_option * item = (struct _config_section_option *)(*i);
            switch(item->type){
                case CB_CONFIG_SEC_SOURCE:
                    source_comp_name = item->source_comp_opt->strval;
                    if(item->source_comp_opt->intval){
                        debug_mode = 1;
                    }
                    break;
                case CB_CONFIG_SEC_OBJECT:
                    if(item->obj_comp_opt != NULL) {
                        obj_comp_clause = item->obj_comp_opt;
                    }
                    break;
                case CB_CONFIG_SEC_SPNAMES:
                    // initialize to the default.
                    currency_sign = NULL;
                    decimaliscomma = 0;
                    
                    if(item->special_names_list != NULL){
                        list <void *> * lst = (list <void *> *)item->special_names_list;
                        list <void *>::iterator i;
                        for(i = lst->begin(); i != lst->end(); ++i ){
                            struct _special_names * item = (struct _special_names *)(*i);
                            if(item != NULL){
                                switch(item->type){
                                    case CB_SN_CURRENCY:
                                        currency_sign = item->currencysign;
                                        break;
                                    case CB_SN_DECIMALPT:
                                        decimaliscomma = 1;
                                        break;
                                    default:
                                        cout << "Error: wrong special name.\n";
                                        break;
                                }
                            }
                        }    
                    }
                    break;
                case CB_CONFIG_SEC_REPOSITORY:
                    if(item->repository_items_list != NULL){
                        library_items =  item->repository_items_list;
                    }
                    break;
                default:
                    cout << "Error: Configuration Section option type";
                    break;
            }
        }    
    }    
}
void CobConfigurationSection::dump(){
    cout << "Configuration section : \n";
    
    if (cbConfigSecOptList != NULL ) {
        cout << "Options: \n";
        list<void *>::iterator i;  
        for(i = cbConfigSecOptList->begin(); i != cbConfigSecOptList->end(); ++i ){
            struct _config_section_option * item = (struct _config_section_option *)(*i);
            switch(item->type){
                case CB_CONFIG_SEC_SOURCE:
                    cout << "Source computer : " << item->source_comp_opt->strval << " ";
                    if(item->source_comp_opt->intval){
                        cout << "With debugging mode.";
                    }
                    break;
                case CB_CONFIG_SEC_OBJECT:
                    cout << "Object computer: ";
                    if(item->obj_comp_opt != NULL) {
                        dump_object_compute_clauses(item->obj_comp_opt);
                    }
                    break;
                case CB_CONFIG_SEC_SPNAMES:
                    cout << "Special Names :\n";
                    if(item->special_names_list != NULL){
                        dump_special_names_list(item->special_names_list);
                    }
                    break;
                case CB_CONFIG_SEC_REPOSITORY:
                    if(item->repository_items_list != NULL){
                        //dump_gnamelist(item->repository_items_list);
                    }
                default:
                    cout << "Error: Configuration Section option type";
                    break;
            }
            cout << "\n";
        }    
    }    
}
void CobConfigurationSection::dump(int plevel){
}
CobConfigurationSection::CobConfigurationSection(const CobConfigurationSection& orig) {
}

CobConfigurationSection::~CobConfigurationSection() {
    if (cbConfigSecOptList != NULL ) {
        list<void *>::iterator i;  
        for(i = cbConfigSecOptList->begin(); i != cbConfigSecOptList->end(); ++i ){
            struct _config_section_option * item = (struct _config_section_option *)(*i);
            switch(item->type){
                case CB_CONFIG_SEC_SOURCE:
                    if(item->source_comp_opt != NULL){
                        if(item->source_comp_opt->strval != NULL) 
                            delete item->source_comp_opt->strval;
                    }
                    break;
                case CB_CONFIG_SEC_OBJECT:
                    if(item->obj_comp_opt != NULL){
                        delete_object_computer_clauses(item->obj_comp_opt);
                    }
                    break;
                case CB_CONFIG_SEC_SPNAMES:
                    if(item->special_names_list != NULL)
                        delete_special_names_list(item->special_names_list);
                    break;
                case CB_CONFIG_SEC_REPOSITORY:
                    if(item->repository_items_list != NULL){
                        delete_gnamelist(item->repository_items_list);
                    }
                default:
                    break;
            }
            delete item;
        }    
        delete cbConfigSecOptList;
    }
}

