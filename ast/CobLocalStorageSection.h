/*
 * File: CobLocalStorageSection.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:18:03 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on April 7, 2014, 5:00 PM
 */

#ifndef COBLOCALSTORAGESECTION_H
#define	COBLOCALSTORAGESECTION_H
#include "CobObject.h"
#include <list>
#include <iostream>
#include "../jgen/JGenerator.h"
#include "../jgen/JMetaClass.h"

using namespace std;

class CobLocalStorageSection : public CobObject {
public:
    CobLocalStorageSection();
    CobLocalStorageSection(void * plocstolst);
    void dump();
    void dump(int plevel);
    void generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass);
    CobFieldRecord * findField(char * pname);
    CobFieldRecordList * getRecordList();
    virtual ~CobLocalStorageSection();
private:
    list <void *> * cblocstoitemlst = NULL;
    CobFieldRecordList * cbFieldRecordList = NULL;
};

#endif	/* COBLOCALSTORAGESECTION_H */

