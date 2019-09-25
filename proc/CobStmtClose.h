/*
 * File: CobStmtClose.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:54:59 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 8:57 PM
 */

#ifndef COBSTMTCLOSE_H
#define	COBSTMTCLOSE_H

#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtClose : public CobProcDivItem {
public:
    CobStmtClose();
    CobStmtClose(void * pcloseflist);
    CobStmtClose(const CobStmtClose& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtClose();
private:
    list <void *> * close_file_lst = NULL;    // struct _close_file_item * list 
};

#endif	/* COBSTMTCLOSE_H */

