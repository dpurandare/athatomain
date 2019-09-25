/*
 * File: CobStmtAdd.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:42:26 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:15 PM
 */

#ifndef COBSTMTADD_H
#define	COBSTMTADD_H

#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtAdd : public CobProcDivItem {
public:
    CobStmtAdd();
    CobStmtAdd(enum add_type_enum ptype, void * pfromlst, void * ptolst, 
               void * pgivinglst, void * ponsize_error);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    CobStmtAdd(const CobStmtAdd& orig);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtAdd();
private:
    enum add_type_enum          type;
    list <struct xvaldata *> * fromlst = NULL;        // gname list
    list <struct xvaldata *> * tolst = NULL;          // gname rounded list
    list <struct xvaldata *> * givinglst = NULL;          // gname rounded list
    struct xvaldata *          fromitem = NULL;       // in case of corresponding
    struct xvaldata *          toitem = NULL;
    struct on_size_error_data * onsizeerror = NULL;    // CobProcDivItem ptr pair
    int                         rounded;
};

#endif	/* COBSTMTADD_H */

