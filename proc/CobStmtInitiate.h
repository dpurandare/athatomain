/*
 * File: CobStmtInitiate.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:15:51 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 13, 2014, 5:45 PM
 */

#ifndef COBSTMTINITIATE_H
#define	COBSTMTINITIATE_H
#include "CobProcDivItem.h"
#include <iostream>
using namespace std;

class CobStmtInitiate : public CobProcDivItem {
public:
    CobStmtInitiate();
    CobStmtInitiate(char * preport_name);
    CobStmtInitiate(const CobStmtInitiate& orig);
    void dump();
    void dump(int plevel);    
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtInitiate();
private:
    char * report_name = NULL;
};

#endif	/* COBSTMTINITIATE_H */

