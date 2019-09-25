/*
 * File: CobFieldRecord.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:06:17 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 1:01 PM
 */

#ifndef COBFIELDRECORD_H
#define	COBFIELDRECORD_H
#include <string>
#include <list>
#include "../global.h"
#include "CobObject.h"
#include "CobFile.h"
#include "../jgen/JGenerator.h"
#include "../jgen/JMetaClass.h"
#include "../jgen/JMetaMethod.h"

using namespace std;
class CobFile;
        
class CobFieldRecord: public CobObject {
public:
    CobFieldRecord();
    CobFieldRecord(int plevel, char * pnameorfiller, void * poptionlst);
    CobFieldRecord(const CobFieldRecord& orig);
    void addRecordDetails(int plevel, int pnameorfiller, char * pname, dataclausetype * pdc);
    void dump();
    void dump(int plevel);
    void generate(CobFile * pfile, int pcaller, JGenerator * pgen, JMetaClass * pmetaclass, JMetaClass * pparentclass, 
        JMetaMethod * pmethod, string parentname, string pdiname = string());
    void assignopts();  
    void assignPicItem();
    void analysevalues();
    void processPicLenSize();
    struct _picture_info * getPictureInfo();
    string getValueString(bool pspflag);
    string getOccursString();
    void add88FieldValues(string pfldname, JMetaClass * pclass, int plen);
    void setDecoratedName(string decoratedName);
    void addtoDecoratedName(string pstr);
    string getDecoratedName() const;
    virtual ~CobFieldRecord();

    list <CobFieldRecord *> * children;
    CobFieldRecord * parent;

    int         level;
    int         nameorfiller;
    char *      recordname = NULL;
    char *      redefines = NULL;
    char *      rename = NULL;
    char *      renamethru = NULL;
    CobFieldRecord * redeffld = NULL;
    CobFieldRecord * renfld = NULL;
    CobFieldRecord * renthrufld = NULL;

                                        //Level 66, 77, 78, 88 
    char *      pictureclause = NULL;   // raw picture clause
    struct _picture_info * picinfo = NULL;
    
    void *      dataclauseval = NULL;
    list <struct _gnamepair *> * valuelist = NULL;
    
    // Things important for generation 
    int         dataType;
    int         length;
    int         decimalplaces;
    int         category;
    int         size;
    string      displayFormat;   
    
//    int         field_len; delete later
//    int         after_decimal;
    
    struct _usageclause * dc_usage = NULL;
    int         isexternal;
    int         isglobal;
    int         sign;   
    
    struct _occurance *  occurs = NULL;
    int         synch;
    int         justification;
    int         blank_clause;
    
    string      qualifiedname;
    string      decoratedName;
    // this is the name used in the generated code and will show the details of how it should be used. 
    // e.g. myobject.parentfield.childfield 
    
private:
    list <void *> * dataclauselist = NULL;
};

#endif	/* COBFIELDRECORD_H */

