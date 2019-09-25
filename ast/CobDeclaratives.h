/*
 * File: CobDeclaratives.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 12:26:33 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:49 PM
 */

#ifndef COBDECLARATIVES_H
#define	COBDECLARATIVES_H

#include "CobObject.h"
#include "../proc/CobProcDivItem.h"
#include <string>
using namespace std;

class CobDeclaratives : public CobObject{
public:
    CobDeclaratives();
    CobDeclaratives(void * pdeclitem);
    CobDeclaratives(const CobDeclaratives& orig);
    void dump();
    void dump(int plevel);
    virtual ~CobDeclaratives();
    CobProcDivItem * getProcDivItem();
private:
    CobProcDivItem * cbProcDivItem = NULL;
};

#endif	/* COBDECLARATIVES_H */










