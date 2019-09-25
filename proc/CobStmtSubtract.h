/*
 * File: CobStmtSubtract.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:32:56 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 10:30 PM
 */

#ifndef COBSTMTSUBTRACT_H
#define	COBSTMTSUBTRACT_H

#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtSubtract : public CobProcDivItem {
public:
    CobStmtSubtract();
    CobStmtSubtract(enum add_type_enum ptype, void * plstfirst, void * pfromlst, 
                            void * pgiving, void * ponsize_error, int prounded);
    CobStmtSubtract(const CobStmtSubtract& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtSubtract();
private:
    enum add_type_enum type;
    list <struct xvaldata *> * firstlst = NULL; 
    struct idvalStru * firstitem = NULL;
    list <struct xvaldata *> * fromlst = NULL;
    struct xvaldata * fromval = NULL;
    struct idvalStru * fromid = NULL;
    list <struct xvaldata *> * giving = NULL; 
    struct on_size_error_data * onsizeerror = NULL;
    int rounded;
};

#endif	/* COBSTMTSUBTRACT_H */

