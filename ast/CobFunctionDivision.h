/*
 * File: CobFunctionDivision.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:12:15 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on January 15, 2014, 4:26 PM
 */

#ifndef COBFUNCTIONDIVISION_H
#define	COBFUNCTIONDIVISION_H

#include "CobObject.h"
#include <iostream>
#include <string>
using namespace std;


class CobFunctionDivision: public CobObject{
public: 
    CobFunctionDivision();
    CobFunctionDivision(char * pname, char * pfileName);
    string getFunctionName();
    void dump();
    void dump(int plevel);
    virtual ~CobFunctionDivision();
    void setFileName(char* fileName);
    char* getFileName() const;
private:
    char * func_name = NULL;
    string funcname; // duplicate 
    char * fileName;
};

#endif	/* COBFUNCTIONDIVISION_H */

