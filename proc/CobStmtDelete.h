/*
 * File: CobStmtDelete.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:03:47 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:17 PM
 */

#ifndef COBSTMTDELETE_H
#define	COBSTMTDELETE_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtDelete : public CobProcDivItem {
public:
    CobStmtDelete();
    CobStmtDelete(struct _delete_simple * pitem);
    CobStmtDelete(void * pfilelst);    
    CobStmtDelete(const CobStmtDelete& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtDelete();
    static const int CC_DELETE_SIMPLE = 1;
    static const int CC_DELETE_MULTI  = 2;
private:
    int delete_type;
    struct _delete_simple * del_simple = NULL;
    void * filelist = NULL; /* this is xval list */
};

#endif	/* COBSTMTDELETE_H */

