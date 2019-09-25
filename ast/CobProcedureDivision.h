/*
 * File: CobProcedureDivision.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:19:29 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:48 PM
 */

#ifndef COBPROCEDUREDIVISION_H
#define	COBPROCEDUREDIVISION_H

#include "CobObject.h"
#include "../proc/CobProcDivItem.h"
#include "../ast/CobDeclaratives.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

//class CobDeclaratives;
class CobProcDivItem;

class CobProcedureDivision : public CobObject{
public:
    CobProcedureDivision();
    CobProcedureDivision(struct _use_chain_return * pucr, void * pdeclaratives, 
                         void * pprocdivitem);
    void dump();
    void dump(int plevel);
    void generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass);
    struct _use_chain_return * getUCR();
    CobDeclaratives * getDeclaratives();
    CobProcDivItem * getProcDivItem();
    void backtrack(CobProcDivItem * pProcDivItem);
    virtual ~CobProcedureDivision();
private:
    struct _use_chain_return * ucr = NULL;
    CobDeclaratives * cbDeclarative = NULL;
    CobProcDivItem * cbProcDivItem = NULL;
    // CobProcDivItem object as each one has capacity to act as list.
};

#endif	/* COBPROCEDUREDIVISION_H */

