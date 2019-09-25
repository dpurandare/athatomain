/*
 * File: CobFieldRecordList.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:06:40 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on January 28, 2014, 8:47 PM
 */

#ifndef COBFIELDRECORDLIST_H
#define	COBFIELDRECORDLIST_H

#include "CobFieldRecord.h"
#include "CobFile.h"
#include <list>
#include <iostream>
using namespace std;

class CobFile;
class CobFieldRecord;

class CobFieldRecordList: CobObject {
public:
    CobFieldRecordList();
    CobFieldRecordList(void * plst);
    CobFieldRecordList(const CobFieldRecordList& orig);
    int add_item(CobFieldRecord * fld);
    void * getFieldRecordList();
    void dump();
    void dump(int plevel);
    void generate(CobFile * pfile, int pcaller, JGenerator * pgen, JMetaClass * pmetaclass, 
        JMetaClass * parentclass, JMetaMethod * pmethod, string &pobjname);
    void addMainFieldsToRecord(string precordname, JMetaMethod * pinitmethod);
    virtual ~CobFieldRecordList();
    CobFieldRecord * findfield(char * name);    
    string getFirstRecordName();
    void assign_redf_rename();
private:
    list <void *> * origlst = NULL;
    list <CobFieldRecord * > * fields = NULL;
    int prevlevel;
    CobFieldRecord * prev = NULL;
    void dump(int tabs, CobFieldRecord * fld);
};

#endif	/* COBFIELDRECORDLIST_H */

