/*
 * File: JMetaMethod.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:09:38 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 23, 2014, 9:02 PM
 */

#ifndef JMETAMETHOD_H
#define	JMETAMETHOD_H
#include "JMetaField.h"
#include <string>
#include <sstream>
#include <list>
using namespace std;

class JMetaClass;

class JMetaMethod {
public:
    JMetaMethod(string methodname, JMetaClass * pclass, bool pisconstructor = false);
    JMetaMethod(const JMetaMethod& orig);
    void addStatement(string pstmt, bool lead = false, int uniqueid = 0);
    bool addunique(int pid);
    void addReturnVal(string pretval);
    void addArgument(JMetaField * parg);
    void addException(int pexcpid);
    void addField(JMetaField * parg);
    string gen_excp(int pexcp);
    void addQualifier(string pqualifier);
    void setSterile(bool psterile);
    bool getSterile();
    string getMethodName();
    void serialize(stringstream * s, int plevel);
    virtual ~JMetaMethod();
    // some supporting statements need to be unique and should not be repeated. 
    static const int CC_ACCEPT_READ = 1;
    static const int CC_ACCEPT_BUF  = 2;
    
    // Exceptions
    static const int CC_IOException = 1;
    
private:
    string methodname;
    string returnval;
    string qualifier;
    JMetaClass * parent = NULL;
    bool sterile;
    list <string> * methodstmts;
    // implement... this would lead to complete template version of the method
    list <JMetaField *> * fields = NULL;
    list <JMetaField *> * arguments = NULL;
    list <int> * uniquestmt = NULL; 
    // The unique statements are numbered and will appear only once at the beginning 
    // of the method, such as defining objects that are used throughout the method 
    list <int> * excplst = NULL;
    bool isconstructor = false;
};

#endif	/* JMETAMETHOD_H */

