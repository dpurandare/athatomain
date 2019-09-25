/*
 * File: CobDataDivision.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 12:25:40 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:22 PM
 */

#ifndef COBDATADIVISION_H
#define	COBDATADIVISION_H

#include <list>
using namespace std;
#include "CobObject.h"
#include "../jgen/JGenerator.h"
#include "../jgen/JMetaClass.h"
#include "CobFile.h"
#include "CobFileSection.h"
#include "CobWorkingStorageSection.h"
#include "CobLinkageSection.h"
#include "CobCommunicationSection.h"
#include "CobScreenSection.h"
#include "CobLocalStorageSection.h"
class CobFile;
class CobCommunicationSection;
class CobFileSection;
class CobLinkageSection;
class CobScreenSection;
class CobWorkingStorageSection;
class CobLocalStorageSection;

class CobDataDivision : public CobObject {
public:
    CobDataDivision();
    CobDataDivision(void * plst);
    CobDataDivision(const CobDataDivision& orig);
    virtual ~CobDataDivision();
    // CobDataDivision functions
    CobFileSection *             getFileSection(void);
    CobWorkingStorageSection *   getWorkingStorageSection(void);
    CobLocalStorageSection *     getLocalStorageSection(void);
    CobLinkageSection *          getLinkageSection(void);
    CobCommunicationSection *    getCommunicationSection(void);
    CobScreenSection *           getScreenSection(void);
    void                         dump();
    void                         dump(int plevel);
    void                         generate(CobFile * pfile, JGenerator *pgen, JMetaClass * pmetaclass);
    CobFieldRecord *             findField(char * pname);
    CobFieldRecord *             findField(struct idvalStru * pid );
    
    static const int CC_FILE_SETION                   = 1;
    static const int CC_WORKING_STORAGE_SECTION       = 2;
    static const int CC_LINKAGE_SECTION               = 3;
    static const int CC_COMMUNICATION_SECTION         = 4;
    static const int CC_SCREEN_SECTION                = 5;
    static const int CC_LOCAL_STORAGE_SECTION         = 6;            
private:
    CobFileSection              * cbFileSection = NULL;
    CobWorkingStorageSection    * cbWorkingStorageSection = NULL;
    CobLinkageSection           * cbLinkageSection = NULL;
    CobCommunicationSection     * cbCommunicatonSection = NULL;
    CobScreenSection            * cbScreenSection = NULL;
    CobLocalStorageSection      * cbLocalStorageSection = NULL;
    list <void *>               * itemlst = NULL;
};

#endif	/* COBDATADIVISION_H */

