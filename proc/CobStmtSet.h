/*
 * File: CobStmtSet.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:29:00 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:07 PM
 */

#ifndef COBSTMTSET_H
#define	COBSTMTSET_H

#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtSet : public CobProcDivItem {
public:
    CobStmtSet();
    CobStmtSet(void * plst);
    //CobStmtSet(enum _set_stmt_type_enum ptype, void * plst);
    CobStmtSet(const CobStmtSet& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void assignDataTypes();
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtSet();
    //enum _set_stmt_type_enum set_type;
private:
    //void * setitem;
    list <struct _set_clause *> * set_clause_list = NULL;
/*  All these are lists and not struct ptrs.
    CB_SET_INDEX  = 1, struct _set_index_item * list
    CB_SET_UPDOWN = 2, struct _up_down_item * list
    CB_SET_ONOFF  = 3, struct _mnemonic_item * list
    CB_SET_COND   = 4, struct _condition_item * list
    CB_SET_ADDR   = 5, struct _set_address_item * list
    CB_SET_PTR    = 6  struct _set_pointer_item * list
 */
};

#endif	/* COBSTMTSET_H */

