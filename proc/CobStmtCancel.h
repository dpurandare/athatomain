/*
 * File: CobStmtCancel.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:54:34 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on January 7, 2014, 12:24 PM
 */

#ifndef COBSTMTCANCEL_H
#define	COBSTMTCANCEL_H

#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <list>
#include <iostream>
using namespace std;

class CobStmtCancel : public CobProcDivItem {
public:
    CobStmtCancel();
    CobStmtCancel(void * pitem_list);
    CobStmtCancel(const CobStmtCancel& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtCancel();
private:
    list <struct xvaldata *> * xvallist = NULL;
};

#endif	/* COBSTMTCANCEL_H */
