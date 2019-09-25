/*
 * File: CobIOControl.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:12:34 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 3:36 PM
 */

#ifndef COBIOCONTROL_H
#define	COBIOCONTROL_H

#include "CobObject.h"
#include <list>
using namespace std;

class CobIOControl: public CobObject {
public:
    CobIOControl();
    CobIOControl(void * plst);
    void dump();
    void dump(int plevel);
    virtual ~CobIOControl();
private:
    list <void *> * iocontrol_itemlst = NULL; // struct _io_control_item * 
};

#endif	/* COBIOCONTROL_H */

