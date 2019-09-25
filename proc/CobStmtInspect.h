/*
 * File: CobStmtInspect.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:16:23 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:07 PM
 */

#ifndef COBSTMTINSPECT_H
#define	COBSTMTINSPECT_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtInspect : public CobProcDivItem {
public:
    CobStmtInspect();
    CobStmtInspect(struct valueType * pval,
                        void * ptallying_item,
                        void * preplacing_clause,
                        void * pconverting_clause);
    CobStmtInspect(const CobStmtInspect& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtInspect();
private:
    struct valueType * val = NULL;
    void * tallying_item = NULL;       // struct _tallying_item 
    void * replacing_clause = NULL;    // struct _inspect_replacing_item * list
    void * converting_clause = NULL;   
};

#endif	/* COBSTMTINSPECT_H */

