/*
 * File: CobIdentificationDivision.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:14:26 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:16 PM
 * 
 * Identification Division of the COBOL file. 
 */

#ifndef COBIDENTIFICATIONDIVISION_H
#define	COBIDENTIFICATIONDIVISION_H

#include <string>
#include <list>
#include "../global.h"
#include "CobObject.h"
using namespace std;

class CobIdentificationDivision: public CobObject {
public:
    CobIdentificationDivision();
    CobIdentificationDivision(char * pprogname, int pcomm_initial, 
                              void * pother_optlist, char * pfileName);
    string getProgramName();
    string getAuthorName();
    void dump();
    void dump(int plevel);
    virtual ~CobIdentificationDivision();
    void setFileName(char* fileName);
    char* getFileName() const;
    string getRemarks() const;
    string getSecurityOptions() const;
    string getDatecompiled() const;
    string getDateWritten() const;
    string getInstallation() const;
    int getCommon_initial() const;

private:
    string      programName;
    int         common_initial;
    string      author;
    string      installation;
    string      dateWritten;
    string      datecompiled;
    string      securityOptions;
    string      remarks;
    list <void *> * lst_identdivoptlst = NULL; //struct _id_option * list
    char        *fileName;
};

#endif	/* COBIDENTIFICATIONDIVISION_H */

