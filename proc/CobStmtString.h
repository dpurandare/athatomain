/*
 * File: CobStmtString.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:31:43 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on January 7, 2014, 3:48 PM
 */

#ifndef COBSTMTSTRING_H
#define	COBSTMTSTRING_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;


class CobStmtString : public CobProcDivItem {   
public:
    CobStmtString();
    CobStmtString(void * pstr_args, struct idvalStru * pid,
                    struct idvalStru * pptropt, struct _action_pair * pon_overflow);
    CobStmtString(const CobStmtString& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtString();
private:
    list <struct _str_argument *> * strarg_lst = NULL; // list of struct _str_argument *
    struct idvalStru * into_id = NULL;
    struct idvalStru * withptr_id = NULL;
    struct _action_pair * onoverflow = NULL;
};

#endif	/* COBSTMTSTRING_H */

