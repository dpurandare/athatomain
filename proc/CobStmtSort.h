/*
 * File: CobStmtSort.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:29:29 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:00 PM
 */

#ifndef COBSTMTSORT_H
#define	COBSTMTSORT_H

#include "CobProcDivItem.h"
#include <iostream>
using namespace std;

class CobStmtSort : public CobProcDivItem {
public:
    CobStmtSort();
    CobStmtSort(struct idvalStru * pid, void * ponkeylst,
            int popt_duplicate, struct idvalStru * pcollating_seq,
            struct _file_io_clause * pinput, struct _file_io_clause * poutput);
    CobStmtSort(const CobStmtSort& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtSort();
private:
    struct idvalStru * file_name = NULL;
    void * onkeylst = NULL;  /* struct _on_key_clause ptr lst */
    int dupinorder;
    struct idvalStru * collating_seq = NULL;
    struct _file_io_clause * fileinp = NULL;
    struct _file_io_clause * fileout = NULL;
};

#endif	/* COBSTMTSORT_H */

