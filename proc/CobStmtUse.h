/*
 * File: CobStmtUse.h
 * Created Date: Wednesday August 27th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday August 27th 2014 12:31:01 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:27 PM
 */

#ifndef COBSTMTUSE_H
#define	COBSTMTUSE_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtUse : public CobProcDivItem {
public:
    CobStmtUse();
    CobStmtUse(int pglobal, int perr_excp, void * ponitems);
    CobStmtUse(void * ponitems);
    CobStmtUse(int pglobal, int pbeg_end, int pfile_reel, 
                        struct _use_proc_option * pprocopt);
    CobStmtUse(struct idvalStru * pfilename);
    CobStmtUse(const CobStmtUse& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtUse();
    static const int CC_USE_SIMPLE = 1;
    static const int CC_USE_DBG    = 2;
    static const int CC_USE_AFTER  = 3;
    static const int CC_USE_REPOR  = 4;
private:
    int use_type;
    int globalflag;
    int err_excp;
    int beg_end;
    int file_reel_unit;
    struct _use_proc_option * procopt = NULL;
    struct idvalStru * file_name = NULL;
    void * onitems = NULL;
};

#endif	/* COBSTMTUSE_H */

