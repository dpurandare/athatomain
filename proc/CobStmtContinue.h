/*
 * File: CobStmtContinue.h
 * Created Date: Sunday March 2nd 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday March 2nd 2014 10:39:23 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:15 PM
 */

#ifndef COBSTMTCONTINUE_H
#define	COBSTMTCONTINUE_H
#include "CobProcDivItem.h"
#include <iostream>
using namespace std;

class CobStmtContinue : public CobProcDivItem {
public:
    CobStmtContinue();
    CobStmtContinue(const CobStmtContinue& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtContinue();
private:

};

#endif	/* COBSTMTCONTINUE_H */

