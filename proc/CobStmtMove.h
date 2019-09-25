/*
 * File: CobStmtMove.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:17:26 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:09 PM
 */

#ifndef COBSTMTMOVE_H
#define	COBSTMTMOVE_H

#include "CobProcDivItem.h"
#include "../procglobal.h"
#include "../util/genutil.h"
#include <iostream>
using namespace std;

class CobStmtMove : public CobProcDivItem {
public:
    CobStmtMove();
    CobStmtMove(int pcorr, struct valueType * pgname, void * plist);
    CobStmtMove(const CobStmtMove& orig);
    void dump();
    void dump(int plevel);
    void assignDataTypes();
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtMove();
private:
    int corrflag; 
    struct valueType * value = NULL;
    void * tolist = NULL;      // this is gname list
};

#endif	/* COBSTMTMOVE_H */

