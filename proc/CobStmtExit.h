/*
 * File: CobStmtExit.h
 * Created Date: Sunday March 2nd 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday March 2nd 2014 10:39:23 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on January 7, 2014, 2:18 PM
 */

#ifndef COBSTMTEXIT_H
#define	COBSTMTEXIT_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtExit : public CobProcDivItem {
public:
    CobStmtExit();
    CobStmtExit(enum _exit_enum ptype, int pcycle);
    CobStmtExit(const CobStmtExit& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtExit();
private:
    enum _exit_enum exit_type;
    int cycleflag;
};

#endif	/* COBSTMTEXIT_H */

