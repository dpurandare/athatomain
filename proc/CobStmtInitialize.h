/*
 * File: CobStmtInitialize.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:15:25 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:06 PM
 */

#ifndef COBSTMTINITIALIZE_H
#define	COBSTMTINITIALIZE_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtInitialize : public CobProcDivItem {
public:
    CobStmtInitialize();
    CobStmtInitialize(void * pitemlst, int pfiller, int pvalueclause,
                      void * replacingitemlst, int pdefault);
    CobStmtInitialize(const CobStmtInitialize& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtInitialize();
private:
    void * itemlst = NULL;             // xval list
    int fillerflag;
    int valueclause;
    void * replacingitemlst = NULL;    // struct _replacing_item * list
    int defaultflag;            
};

#endif	/* COBSTMTINITIALIZE_H */

