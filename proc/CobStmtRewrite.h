/*
 * File: CobStmtRewrite.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:25:03 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:11 PM
 */

#ifndef COBSTMTREWRITE_H
#define	COBSTMTREWRITE_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtRewrite : public CobProcDivItem {
public:
    CobStmtRewrite();
    CobStmtRewrite(struct idvalStru * pid, struct valueType * pfrom_clause,
                             void * pkeyvalidation);
    CobStmtRewrite(const CobStmtRewrite& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtRewrite();
private:
    struct idvalStru * record_name = NULL;
    struct valueType * from_clause = NULL;
    struct _invalid_key_action * invalidkey_action = NULL;
};

#endif	/* COBSTMTREWRITE_H */

