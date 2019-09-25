/*
 * File: JMetaClass.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:08:40 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 23, 2014, 8:59 PM
 */

#ifndef JMETACLASS_H
#define	JMETACLASS_H
//#include "../ast/objinc.h"
//#include "JGenerator.h"
#include "JMetaField.h"
#include "JMetaMethod.h"
#include <list>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class JGenerator;

class JMetaClass: public CobObject {
public:
    JMetaClass(); // should remove the default constructor at once
    JMetaClass(string pname, JGenerator * pparent);
    void setExtends(string pextend);
    string getname();
    // Check... removing the duplicates while adding. 
    void addextInclude(string pextinc);
    void addField(JMetaField * pfield);
    void addMethod(JMetaMethod * pmethod);
    void addStaticDeclaration(string pstr);
    void addConstructorItem(string pstr);
    JMetaMethod * getMethod(string pmethodname);
    int serialize(string pFileName);
    virtual ~JMetaClass();
private:
    string name;
    string extends;
    string implements;
    JGenerator * parent = NULL;
    list <string> extIncludes;  // synonymous to include in Java. 
    list <string> * staticdecl = NULL;
    list <JMetaField *> * fields = NULL;
    list <JMetaMethod *> * methods = NULL;
    list <string> * constructor = NULL;
    list <string> * entryfunction = NULL;
    // comment this after testing. 
    static const bool dofiledump = true;
};

#endif	/* JMETACLASS_H */

