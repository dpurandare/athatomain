/*
 * File: CobCommunicationSection.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 12:13:43 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 1:03 PM
 */

#ifndef COBCOMMUNICATIONSECTION_H
#define	COBCOMMUNICATIONSECTION_H
#include "../jgen/JGenerator.h"
#include "../jgen/JMetaClass.h"
#include <list>
#include "CobObject.h"
#include "CobFieldRecord.h"
#include "../global.h"
using namespace std;

class CobCommunicationSection : public CobObject{
public:
    CobCommunicationSection();
    CobCommunicationSection(void * pcomsecdetlst);    
    CobCommunicationSection(const CobCommunicationSection& orig);
    void dump();
    void dump(int plevel);
    void generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass);
    virtual ~CobCommunicationSection();
private:
    list <void *> * commsecdetlst = NULL;       
};

#endif	/* COBCOMMUNICATIONSECTION_H */

