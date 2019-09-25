/*
 * File: CobStmtStart.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:29:51 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 13, 2014, 1:40 PM
 */

#ifndef COBSTMTSTART_H
#define	COBSTMTSTART_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
using namespace std;

class CobStmtStart : public CobProcDivItem {
public:
    CobStmtStart();
    CobStmtStart(struct idvalStru * pfilename, struct _start_body_options * pbody,
                        int preverse_order, struct _invalid_key_action * pkeyvalidation);
    CobStmtStart(const CobStmtStart& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtStart();
private:
    struct idvalStru * fileName = NULL;
    struct _start_body_options * startBody = NULL;
    int reverse_order;
    struct _invalid_key_action * keyvalidation = NULL;
};

#endif	/* COBSTMTSTART_H */

