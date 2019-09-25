/*
 * File: CobStmtUnstring.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:35:12 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:26 PM
 */

#ifndef COBSTMTUNSTRING_H
#define	COBSTMTUNSTRING_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtUnstring : public CobProcDivItem {
public:
    CobStmtUnstring();
    CobStmtUnstring(struct idvalStru * pid, struct _delim_clause * pdelim_clause,
                    void * punstringintolist, struct idvalStru * pwithptr,
                    struct idvalStru * ptallyingin, struct _action_pair * ponoverflow);
    CobStmtUnstring(const CobStmtUnstring& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtUnstring();
private:
    struct idvalStru * id = NULL;
    struct _delim_clause * delim_clause = NULL;
    list <struct _into_clause *> * unstringintolist = NULL;            // struct _into_clause * lst
    struct idvalStru * withptr = NULL;
    struct idvalStru * tallyingin = NULL;
    struct _action_pair * onoverflow = NULL;
};

#endif	/* COBSTMTUNSTRING_H */

