/*
 * File: CobStmtIfElse.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:14:46 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:10 PM
 */

#ifndef COBSTMTIFELSE_H
#define	COBSTMTIFELSE_H

#include "CobProcDivItem.h"
#include "CobSentence.h"
#include "../procglobal.h"
#include "../global.h"
#include <iostream>
using namespace std;

class CobStmtIfElse : public CobProcDivItem {
public:
    CobStmtIfElse();
    CobStmtIfElse(struct _condition * pcond, struct _statements * pthen,
                              struct _statements * pelse);
    CobStmtIfElse(const CobStmtIfElse& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtIfElse();
    CobSentence * getThenStatements();
    CobSentence * getElseStatements();
private:
    struct _condition * cond = NULL;
    struct _statements * thenstmts = NULL;
    struct _statements * elsestmts = NULL;
};

#endif	/* COBSTMTIFELSE_H */

