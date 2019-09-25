/*
 * File: CobScreenSection.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:21:55 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 3:39 PM
 */

#ifndef COBSCREENSECTION_H
#define	COBSCREENSECTION_H

#include <list>
#include "CobObject.h"
#include "../jgen/JGenerator.h"
#include "../jgen/JMetaClass.h"
#include "../global.h"
using namespace std;

class CobScreenSection : public CobObject{
public:
    CobScreenSection();
    CobScreenSection(void * pscrdescrlst);    
    void dump();
    void dump(int plevel);
    void generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass);
    virtual ~CobScreenSection();
private:
    enum _screen_description type;
    list <void *> * scrDescrlst = NULL; // struct _screen_descr_entry * list
};

#endif	/* COBSCREENSECTION_H */

