/*
 * File: CobStmtGenerate.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:12:17 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 13, 2014, 7:46 PM
 */

#ifndef COBSTMTGENERATE_H
#define	COBSTMTGENERATE_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtGenerate : public CobProcDivItem {
public:
    CobStmtGenerate();
    CobStmtGenerate(char * prepo_name);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    CobStmtGenerate(const CobStmtGenerate& orig);
    virtual ~CobStmtGenerate();
private:
    char * report_name = NULL;
};

#endif	/* COBSTMTGENERATE_H */

