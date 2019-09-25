/*
 * File: CobStmtMerge.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:17:05 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:09 PM
 */

#ifndef COBSTMTMERGE_H
#define	COBSTMTMERGE_H
#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtMerge : public CobProcDivItem {
public:
    CobStmtMerge();
    CobStmtMerge(struct idvalStru * pfile_name,
                void * ponkey_lst, struct idvalStru * pcollating_seq,
                void * pusingfile, struct _file_io_clause * poutput);
    CobStmtMerge(const CobStmtMerge& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtMerge();
private:
    struct idvalStru * file_name = NULL;
    void * onkeylst = NULL;  /* struct _on_key_clause ptr lst */
    struct idvalStru * collating_seq = NULL;
    void  * fileusing = NULL; /* file name list : identifier_1 list*/
    struct _file_io_clause * fileout = NULL;
};

#endif	/* COBSTMTMERGE_H */

