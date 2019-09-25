/*
 * File: CobStmtStop.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:31:15 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:39 PM
 */

#ifndef COBSTMTSTOP_H
#define	COBSTMTSTOP_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtStop : public CobProcDivItem {
public:
    CobStmtStop();
    CobStmtStop(enum _stop_option_enum ptype, struct xvaldata * parg);
    CobStmtStop(const CobStmtStop& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtStop();
private:
    enum _stop_option_enum stop_type;
    struct xvaldata * stoparg = NULL;
};

#endif	/* COBSTMTSTOP_H */

