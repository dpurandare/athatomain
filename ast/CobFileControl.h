/*
 * File: CobFileControl.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:31:30 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:21 PM
 */

#ifndef COBFILECONTROL_H
#define	COBFILECONTROL_H

#include <string>
#include <list>
#include "CobObject.h"
#include "../global.h"
#include "../jgen/JGenerator.h"
#include "../jgen/JMetaClass.h"
using namespace std;

class CobFileControl: public CobObject {
public:
    CobFileControl();
    CobFileControl(void * plst);
    void init();
    void * getFileControlExprList();
    virtual ~CobFileControl();
    void dump();
    void dump(int plevel);    
    void generate(JGenerator *pgen, JMetaClass *pmetaclass);
private:
    list <void *> * fileCtrlExprLst = NULL; // struct _file_control_expression * 
    string filestr;
};

#endif	/* COBFILECONTROL_H */

