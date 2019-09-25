/*
 * File: CobFileDescription.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:11:06 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 *
 * Created on November 18, 2013, 12:30 PM
 */

#ifndef COBFILEDESCRIPTION_H
#define	COBFILEDESCRIPTION_H
#include "CobObject.h"
#include "CobFieldRecord.h"
#include "../global.h"
#include "CobFieldRecordList.h"
#include <string>
#include <list>
#include <iostream>

using namespace std;

class CobFieldRecord;
class CobFieldRecordList;

class CobFileDescription: public CobObject {
public:
    CobFileDescription();
    CobFileDescription(char * pname, void * poptionslst, void * pitemlst);
    void processOptList();
    string getFDSDName();
    CobFieldRecordList * getFieldRecordList();
    bool checkFieldExists(string pname);
    void setFldDesList(char * pname, list <CobFieldRecord *> * lst );
    void setType(enum fdsd_enum ltype);
    enum fdsd_enum getType();
    void dump();
    void dump(int plevel);
    void generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass);
    void processFieldRecordList(JGenerator * pgen, JMetaClass * pmetaclass, 
                    string parentname, int pcurrentseq, JMetaMethod * pmethod);
    void addMainFieldsToRecord(void * plst, string precordname, JMetaMethod * pinitmethod);
    string getFirstRecordName();
    virtual ~CobFileDescription();    
private:
    enum fdsd_enum type;  
    string fdsdName;
    list <struct _fd_sd_option *> * optionslst = NULL;
    list <void *> * fieldslst = NULL;    
    CobFieldRecordList * cbFieldRecordList = NULL;

    // Options...
    int is_external; // 0 - absent, 1 - is external
    int is_global;   // 0 - absent, 1 - is global
    //label_records_clause
        // absent - 0
        // LABEL RECORDS ARE STANDARD PERIOD  - 1
        // | LABEL RECORDS identifier_list    - 2
    int labelpresent;
    list <string> labellist;
    //record_contains_clause
        //  absent - 0
        //record_contains_clause:
        //  record_contains       - 1
        //  | record_is_varying; - 2
    int recordpresent;
    int rec_con_from;
    int rec_con_to;
    string dep_onIdentifier;
    //block_contains_clause
    int block_clause;   // 0 - absent, 1 - present
    int block_size; 
    int rec_chr;        // 1 - record, 2- characters
    //data_records_clause
    int data_rec_clause; // 0 - absent, 
    list <string> drcIDList;
};

#endif	/* COBFILEDESCRIPTION_H */

