/*
 * File: CobStmtPurge.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:20:06 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:13 PM
 */

#ifndef COBSTMTPURGE_H
#define	COBSTMTPURGE_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtPurge : public CobProcDivItem {
public:
    CobStmtPurge();
    CobStmtPurge(struct idvalStru * pcdname);
    CobStmtPurge(const CobStmtPurge& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtPurge();
private:
    struct idvalStru * comm_disc_name = NULL;
};

#endif	/* COBSTMTPURGE_H */

