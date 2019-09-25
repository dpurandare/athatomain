/*
 * File: CobFileSection.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:11:40 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:46 PM
 */

#ifndef COBFILESECTION_H
#define	COBFILESECTION_H
#include "CobObject.h"
#include "CobFileDescription.h"
#include "CobFile.h"
#include "../global.h"
#include "../jgen/JGenerator.h"
#include "../jgen/JMetaClass.h"
#include <list>
#include <map>
#include <iostream>
#include <utility>

using namespace std;
class CobFile;
class CobFileDescription;
class CobFieldRecord;

class CobFileSection: public CobObject {
public:
    CobFileSection();
    CobFileSection(void * pfiledescrlst);
    void processlist();
    void * getFDList();
    void * getSDList();
    CobFileDescription * findFileDescription(string pname);
    CobFileDescription * findFileDescriptionForField(string pname);
    void dump();
    void dump(int plevel);
    void generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass);
    CobFieldRecord * findField(char * pname);
    virtual ~CobFileSection();
private:
    list <void *> * filedescrlst = NULL;
    list <CobFileDescription *> * fdlst = NULL;
    list <CobFileDescription *> * sdlst = NULL;
    map <string, CobFileDescription *> * fdsd_map = NULL;
};

#endif	/* COBFILESECTION_H */

