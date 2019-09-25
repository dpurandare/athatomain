/*
 * File: CobInputOutputSection.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:26:59 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 2:42 PM
 */

#ifndef COBINPUTOUTPUTSECTION_H
#define	COBINPUTOUTPUTSECTION_H
#include <vector>
#include <iostream>
#include <stdio.h>
#include "CobObject.h"
#include "CobFileControl.h"
#include "CobIOControl.h"

using namespace std;
class CobFileControl;

class CobInputOutputSection : public CobObject {
public:
    CobInputOutputSection();
    CobInputOutputSection(void * pfileControl, void * pioControl);
    CobFileControl * getFileControl();
    CobIOControl * getIOControl();
    void dump();
    void dump(int plevel);
    virtual ~CobInputOutputSection();
private:
    CobFileControl      * fileControl = NULL;
    CobIOControl        * ioControl = NULL;
};

#endif	/* COBINPUTOUTPUTSECTION_H */

