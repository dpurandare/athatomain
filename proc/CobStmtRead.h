/*
 * File: CobStmtRead.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:20:44 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 8:54 PM
 */

#ifndef COBSTMTREAD_H
#define	COBSTMTREAD_H

#include "CobProcDivItem.h"
#include "../procglobal.h"
#include "CobSentence.h"
#include <iostream>
using namespace std;

class CobStmtRead : public CobProcDivItem{
public:
    CobStmtRead();
    CobStmtRead(struct idvalStru * pfile_name, int pnext_prev,
                int precord_clause, struct idvalStru * popt_id,
                struct _at_end_action * pend_action);
    CobStmtRead(struct idvalStru * pfile_name, int pnext_prev, int precord_clause,
                struct idvalStru * popt_id, struct idvalStru * popt_key,
                struct _invalid_key_action * pinvalid_key);
    CobStmtRead(const CobStmtRead& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    CobSentence * getAtEndStatements();
    CobSentence * getNotAtEndStatements();
    CobSentence * getInvalidKeyStatements();
    CobSentence * getNotInvalidKeyStatements();
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtRead();
    static const int CC_READ_SEQ      = 1;
    static const int CC_READ_DIR_IDX  = 2;
    
private:
    int read_type;
    
    struct idvalStru * file_name = NULL;
    int next_prev_record;       // record, next-record, prev-record, empty
    int record_clause;          // lock, no-lock, into
    struct idvalStru * opt_id = NULL;  // for the record clause 
    struct _at_end_action * end_action = NULL;
    
    struct idvalStru * key_clause = NULL;
    struct _invalid_key_action * invalidkey_action = NULL;
};

#endif	/* COBSTMTREAD_H */

