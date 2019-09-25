/*
 * File: CobWorkingStorageSection.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:28:41 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 1:02 PM
 */

#ifndef COBWORKINGSTORAGESECTION_H
#define	COBWORKINGSTORAGESECTION_H
#include <list>
#include <iostream>
#include "CobObject.h"
#include "CobFieldRecord.h"
#include "CobFieldRecordList.h"
#include "CobFile.h"
#include "../jgen/JGenerator.h"
#include "../jgen/JMetaClass.h"
 
using namespace std;
class CobFile;

class CobWorkingStorageSection : public CobObject {
public:
    CobWorkingStorageSection();
    CobWorkingStorageSection(void * pfieldlst);
    CobFieldRecordList * getRecordList();
    virtual ~CobWorkingStorageSection();
    void dump();
    void dump(int plevel);
    void generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass);
    CobFieldRecord * findfield(char * pname);
private:
    list <void *> * cbFieldList = NULL;
    CobFieldRecordList * cbFieldRecordList = NULL;
};

#endif	/* COBWORKINGSTORAGESECTION_H */

