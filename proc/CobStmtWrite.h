/*
 * File: CobStmtWrite.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:37:03 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 8:58 PM
 */

#ifndef COBSTMTWRITE_H
#define	COBSTMTWRITE_H

#include "CobProcDivItem.h"
#include "CobSentence.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtWrite : public CobProcDivItem{
public:
    CobStmtWrite();
    CobStmtWrite(struct _id_gname * pidgname, struct _advaicing_clause * padv);
    CobStmtWrite(struct _id_gname * pidgname, struct _invalid_key_action * keyvalidation);
    CobStmtWrite(const CobStmtWrite& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    CobSentence * getInvalidKeyStatements();
    CobSentence * getNotInvalidKeyStatements();
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtWrite();
    static const int CC_WRITE_SEQ = 1;
    static const int CC_WRITE_IDX = 2;
private:
    int write_type;
    struct _id_gname * record_name_from = NULL;
    struct _advaicing_clause * advancing_clause = NULL;
    struct _invalid_key_action * keyvalidation_clause = NULL;
    // check if this should be struct _invalid_key_action * invalidkey_action;
};

#endif	/* COBSTMTWRITE_H */

