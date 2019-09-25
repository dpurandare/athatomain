/*
 * File: CobStmtSearch.h
 * Created Date: Wednesday August 27th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday August 27th 2014 7:02:44 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:08 PM
 */

#ifndef COBSTMTSEARCH_H
#define	COBSTMTSEARCH_H
#include "CobProcDivItem.h"
#include "CobSentence.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtSearch : public CobProcDivItem {
public:
    CobStmtSearch();
    CobStmtSearch(struct idvalStru * pid, void * patend_clause, 
                struct _multi_when_clause * pmultiwhenclause);
    CobStmtSearch(struct idvalStru * pid, struct idvalStru * pvarying,
                void * patendaction, void * psimpcondlst);
    CobStmtSearch(const CobStmtSearch& orig);
    void dump();
    void dump(int plevel);
    CobSentence * getStatements();
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtSearch();
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    static const int CC_SEARCH_SINGLE = 1;
    static const int CC_SEARCH_ALL    = 2;
private:    
    int search_type;
    struct idvalStru * searchid = NULL;
    struct _multi_when_clause * multiwhenclause = NULL;    
    struct idvalStru * varyingclause = NULL;
    void * atendaction = NULL;        // proc_statements
    void * simpcondlst = NULL;        // struct _simple_when_item * list
};

#endif	/* COBSTMTSEARCH_H */

