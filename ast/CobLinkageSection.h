/*
 * File: CobLinkageSection.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:15:26 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 1:02 PM
 */

#ifndef COBLINKAGESECTION_H
#define	COBLINKAGESECTION_H

#include "CobObject.h"
#include <list>
#include <iostream>
#include "../jgen/JGenerator.h"
#include "../jgen/JMetaClass.h"

using namespace std;

class CobLinkageSection: public CobObject {
public:
    CobLinkageSection();
    CobLinkageSection(void * plinkseclst);
    void dump();
    void dump(int plevel);
    void generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass);
    CobFieldRecord * findField(char * pname);
    CobFieldRecordList * getRecordList();
    virtual ~CobLinkageSection();
private:
    list <void *> * cbLinksecitemlst = NULL;
    CobFieldRecordList * cbFieldRecordList = NULL;
};

#endif	/* COBLINKAGESECTION_H */

