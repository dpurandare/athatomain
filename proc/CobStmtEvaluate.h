/*
 * File: CobStmtEvaluate.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:11:49 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:10 PM
 */

#ifndef COBSTMTEVALUATE_H
#define	COBSTMTEVALUATE_H
#include "CobProcDivItem.h"
#include "../proc/CobSentence.h"
#include "../procglobal.h"
#include "../util/genutil.h"
#include <iostream>
using namespace std;

class CobStmtEvaluate : public CobProcDivItem {
public:
    CobStmtEvaluate();
    CobStmtEvaluate(struct _eval_item * pevlitem,
                    void * palso_eval_item_lst,
                    void * pwhen_clause_lst,
                    void * popt_when_other_action);
    CobStmtEvaluate(const CobStmtEvaluate& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void gen_list(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass,         
            JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s, 
            list <void *> * pevallst, list <void *> * pwhenlst, void * pproc);    
    string gen_item(int plevel, struct _eval_item * peitem, 
                        struct _eval_item * pwitem, void * pproc,
                        JMetaMethod * pmethod);
    string evalpair(struct _eval_item * peitem, struct _eval_item * pwitem);
    string evalitemstr(struct _eval_item * peitem);
    string eval_from_item(struct _eval_item * peitem, bool plval);
    string get88typecondopt(struct _eval_item * peitem, bool pflag);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtEvaluate();
    CobSentence * getStatements();

private:
    struct _eval_item * evalitem = NULL;
    list <void *> * mod_eval_item_lst = NULL;
    list <void *> * also_eval_item_lst = NULL;      // list of struct _eval_item *
    list <void *> * when_clause_lst = NULL;         // list of struct _when_clause_item *
    void * when_other_action = NULL;       // proc_statements
    
    CobFile * cbfile = NULL;
};

#endif	/* COBSTMTEVALUATE_H */

