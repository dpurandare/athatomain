/*
 * File: CobStmtOpen.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:18:41 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:40 PM
 */

#ifndef COBSTMTOPEN_H
#define	COBSTMTOPEN_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtOpen : public CobProcDivItem {
public:
    CobStmtOpen();
    CobStmtOpen(int pexclusive, void * popenftypelst);
    CobStmtOpen(const CobStmtOpen& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtOpen();
private:
    int exclusiveflag;
    void * open_file_type_lst = NULL;    // void * lst of struct _open_file_type
};

#endif	/* COBSTMTOPEN_H */

