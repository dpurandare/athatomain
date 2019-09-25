/*
 * File: CobStmtPerform.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:19:21 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:38 PM
 */

#ifndef COBSTMTPERFORM_H
#define	COBSTMTPERFORM_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include "CobSentence.h"
#include <iostream>
using namespace std;

class CobStmtPerform : public CobProcDivItem {
public:
    CobStmtPerform();
    CobStmtPerform(struct _proc_names * pnames, void * poptlist, void * pprocstmt);
    CobStmtPerform(const CobStmtPerform& orig);
    void dump();
    void dump(int plevel);
    void dump(int plevel, struct _proc_names * pnames);
    void dump(int plevel, void * pprocstmt);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void genNames(int plevel, struct _proc_names * pnames, JMetaMethod * pmethod);
    void genStmts(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s, void * pprocstmt);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtPerform();
    CobSentence * getStatements();
private:
    struct _proc_names * names = NULL;  // perform name thru name... 
    // struct _perform_option list
    void * optlist = NULL;              // option list. This is exhaustive list. 
    void * procstmt = NULL;             // statements. This is actually a sentence. 
};

#endif	/* COBSTMTPERFORM_H */

