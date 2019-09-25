/*
 * File: CobStmtAlter.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:51:52 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:31 PM
 */

#ifndef COBSTMTALTER_H
#define	COBSTMTALTER_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtAlter : public CobProcDivItem {
public:
    CobStmtAlter();
    CobStmtAlter(void * plst);
    CobStmtAlter(const CobStmtAlter& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtAlter();
private:
    list <struct _strpair *> * strpair_lst = NULL;   // struct _strpair * lst
};

#endif	/* COBSTMTALTER_H */

