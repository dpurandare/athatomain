/*
 * File: CobStmtReturn.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:24:48 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:06 PM
 */

#ifndef COBSTMTRETURN_H
#define	COBSTMTRETURN_H

#include "CobProcDivItem.h"
#include <iostream>
using namespace std;

class CobStmtReturn : public CobProcDivItem {
public:
    CobStmtReturn(); 
    CobStmtReturn(struct idvalStru * pfilename, int popt_record, 
                    struct xvaldata * pinto_identifier, void * pend_action); 
    CobStmtReturn(const CobStmtReturn& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtReturn();
private:
    struct idvalStru * file_name = NULL;
    int record_flag;
    struct xvaldata * into_identifier = NULL;
    struct _at_end_action * end_action = NULL;
};

#endif	/* COBSTMTRETURN_H */

