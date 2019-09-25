/*
 * File: CobStmtDivide.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 5:05:42 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 10:31 PM
 */

#ifndef COBSTMTDIVIDE_H
#define	COBSTMTDIVIDE_H

#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtDivide : public CobProcDivItem {
public:
    CobStmtDivide();
    CobStmtDivide(enum divide_type_enum ptype, void * ptarget, void * pby_into, void * pgivinglst,
                            void * premainder, void * ponsize_error);
    CobStmtDivide(const CobStmtDivide& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtDivide();
private:
    enum divide_type_enum type;
    
    struct xvaldata * target = NULL;
    struct xvaldata * byinto_item = NULL;
    list <struct xvaldata *> * byinto_lst = NULL;
    list <struct xvaldata *> * givinglst = NULL;   // xval list     
    struct xvaldata * remainder = NULL;   // xval
    struct on_size_error_data * onsize_error = NULL; 
};

#endif	/* COBSTMTDIVIDE_H */

