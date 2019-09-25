/*
 * File: CobStmtGoto.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:13:08 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:29 PM
 */

#ifndef COBSTMTGOTO_H
#define	COBSTMTGOTO_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
#include <list>
using namespace std;

class CobStmtGoto : public CobProcDivItem {
public:
    CobStmtGoto();
    CobStmtGoto(char * pname);
    CobStmtGoto(void * pnamelst, struct idvalStru * pdepend);
    CobStmtGoto(const CobStmtGoto& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtGoto();
    static const int CB_SIMPLE_ALTERABLE = 1;
    static const int CB_DEPENDING_ON = 2;
private:
    int goto_type;
    char * proc_name = NULL;
    list <char *> * proc_name_lst = NULL;  // char * list
    struct idvalStru * dependingon_id = NULL;
};

#endif	/* COBSTMTGOTO_H */

