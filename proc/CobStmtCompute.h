/*
 * File: CobStmtCompute.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:55:40 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 10:33 PM
 */

#ifndef COBSTMTCOMPUTE_H
#define	COBSTMTCOMPUTE_H

#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
#include <list>
using namespace std;

class CobStmtCompute : public CobProcDivItem {
public:
    CobStmtCompute();
    CobStmtCompute(void * plvallist, int popt_rounded,
                    struct _arithmetic_expression * pexp, int popt_not,
                    void * popt_on_error);
    CobStmtCompute(const CobStmtCompute& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtCompute();
private:
    list <struct xvaldata *> * lvallist = NULL;
    int opt_rounded;
    struct _arithmetic_expression * expr = NULL; 
    int opt_not;
    struct on_size_error_data * opt_on_error = NULL;
};

#endif	/* COBSTMTCOMPUTE_H */

