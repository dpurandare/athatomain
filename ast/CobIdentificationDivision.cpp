/*
 * File: CobIdentificationDivision.cpp
 * Created Date: Thursday April 24th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Thursday April 24th 2014 3:58:16 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:16 PM
 */

#include "CobIdentificationDivision.h"
#include <string>
#include <iostream>
using namespace std;

CobIdentificationDivision::CobIdentificationDivision() {
    programName.append("");
    common_initial = 0;
    author.append("");
    installation.append("");
    dateWritten.append("");
    securityOptions.append("");
    remarks.append("");
    fileName = NULL;
}
CobIdentificationDivision::CobIdentificationDivision(char * pprogname, int pcomm_initial, 
                          void * pother_optlist, char * pfileName){
    programName = pprogname;
    common_initial = pcomm_initial;
    lst_identdivoptlst = (list <void *> *) pother_optlist;
    if (lst_identdivoptlst != NULL) {
        list<void *>::iterator i;  
        for(i = lst_identdivoptlst->begin(); i != lst_identdivoptlst->end(); ++i ){
            struct _id_option * opt = (struct _id_option *)(*i);
            switch(opt->type){
                case CB_IDD_AUTHOR:
                    author.append(opt->val); 
                    break;
                case CB_IDD_INSTALL:
                    installation.append(opt->val);
                    break;
                case CB_IDD_DATEWRI:
                    dateWritten.append(opt->val);
                    break;
                case CB_IDD_DATECOM:
                    datecompiled.append(opt->val);
                    break;
                case CB_IDD_SECURITY:
                    securityOptions.append(opt->val);
                    break;
                case CB_IDD_REMARKS:
                    remarks.append(opt->val);
                    break;
            }
        }
    }
    fileName = pfileName;
}
string CobIdentificationDivision::getProgramName(){
    return programName;
}

string CobIdentificationDivision::getAuthorName(){
    return author;
}

void CobIdentificationDivision::dump(){
    cout << "Identification Division: \n";
    cout << "Program name :" << programName << "\n";
    cout << "Common-Initial:" ;
    switch(common_initial){
        case 0: cout << "undefined \n"; break;
        case CB_COMMON: cout << "common \n"; break;
        case CB_INITIAL: cout << "initial \n"; break;
    }
    if(!author.empty()) cout << "Author: " << author << "\n";
    if(!installation.empty()) cout << "Installation:" << installation << "\n";
    if(!dateWritten.empty()) cout << "Date written:" << dateWritten << "\n";
    if(!datecompiled.empty()) cout << "Date compiled:" << datecompiled << "\n";
    if(!securityOptions.empty()) cout << "Secutity Options:" << securityOptions << "\n";
    if(!remarks.empty()) cout << "Remarks:" << remarks << "\n";
}
void CobIdentificationDivision::dump(int plevel){
    
}
CobIdentificationDivision::~CobIdentificationDivision() {
    list<void *>::iterator i;  
    if(lst_identdivoptlst != NULL) {
        for(i = lst_identdivoptlst->begin(); i != lst_identdivoptlst->end(); ++i ){
            struct _id_option * item = (struct _id_option *)(*i);
            if(item != NULL) {
                //delete item->val;
                delete item;
            }
        }    
        delete lst_identdivoptlst;
    }
}

void CobIdentificationDivision::setFileName(char* fileName) {
    this->fileName = fileName;
}

char* CobIdentificationDivision::getFileName() const {
    return fileName;
}

string CobIdentificationDivision::getRemarks() const {
    return remarks;
}

string CobIdentificationDivision::getSecurityOptions() const {
    return securityOptions;
}

string CobIdentificationDivision::getDatecompiled() const {
    return datecompiled;
}

string CobIdentificationDivision::getDateWritten() const {
    return dateWritten;
}

string CobIdentificationDivision::getInstallation() const {
    return installation;
}

int CobIdentificationDivision::getCommon_initial() const {
    return common_initial;
}
