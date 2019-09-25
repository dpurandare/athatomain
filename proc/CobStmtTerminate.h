/*
 * File: CobStmtTerminate.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:34:10 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 13, 2014, 6:12 PM
 */

#ifndef COBSTMTTERMINATE_H
#define	COBSTMTTERMINATE_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtTerminate : public CobProcDivItem {
public:
    CobStmtTerminate();
    CobStmtTerminate(char * prepo_name);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    CobStmtTerminate(const CobStmtTerminate& orig);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtTerminate();
private:
    char * report_name = NULL;
};

#endif	/* COBSTMTTERMINATE_H */

