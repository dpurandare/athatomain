/*
 * File: CobStmtUnlock.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:34:25 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:15 PM
 */

#ifndef COBSTMTUNLOCK_H
#define	COBSTMTUNLOCK_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtUnlock : public CobProcDivItem {
public:
    CobStmtUnlock();
    CobStmtUnlock(struct idvalStru * pid);
    CobStmtUnlock(const CobStmtUnlock& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtUnlock();
private:
    struct idvalStru * file_name = NULL;
};

#endif	/* COBSTMTUNLOCK_H */

