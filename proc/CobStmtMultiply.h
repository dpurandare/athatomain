/*
 * File: CobStmtMultiply.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:18:30 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 10:31 PM
 */

#ifndef COBSTMTMULTIPLY_H
#define	COBSTMTMULTIPLY_H

#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtMultiply : public CobProcDivItem{
public:
    CobStmtMultiply();
    CobStmtMultiply(enum add_type_enum ptype, void * ptarget, void * pby, void * pgivinglst,
                            void * ponsize_error);
    CobStmtMultiply(const CobStmtMultiply& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtMultiply();
private:
    enum add_type_enum type;
    struct xvaldata * target = NULL;  // xval *
    struct xvaldata * by = NULL;      // in case of giving presece by is xval
    list <struct xvaldata *> * bylst = NULL;   // in case of simple this is xval list rounded
    list <struct xvaldata *> * givinglst = NULL; // xval list rounded
    struct on_size_error_data * onsize_error = NULL; // delete_on_error_data
};

#endif	/* COBSTMTMULTIPLY_H */

