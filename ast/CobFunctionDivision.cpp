/*
 * File: CobFunctionDivision.cpp
 * Created Date: Monday February 24th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Monday February 24th 2014 9:29:30 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on January 15, 2014, 4:26 PM
 */

#include "CobFunctionDivision.h"

CobFunctionDivision::CobFunctionDivision() {
}

CobFunctionDivision::CobFunctionDivision(char * pname, char * pfileName){
    func_name = pname;
    funcname.append(pname);
}

string CobFunctionDivision::getFunctionName(){
    return funcname;
}

void CobFunctionDivision::dump(){
    cout << "Function Division: \n";
}
void CobFunctionDivision::dump(int plevel){
    
}
CobFunctionDivision::~CobFunctionDivision() {
    if(func_name != NULL) delete func_name;
}

void CobFunctionDivision::setFileName(char* fileName) {
    this->fileName = fileName;
}

char* CobFunctionDivision::getFileName() const {
    return fileName;
}

