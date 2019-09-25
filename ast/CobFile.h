/*
 * File: CobFile.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:07:55 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 13, 2013, 12:57 PM
 * 
 * COBOL file. supposed to hold one main COBOL body of 
 *  Identification Division
 *  Environment Division
 *  Data Division 
 *  Procedure Division
 * 
 * In case of multiple occurrences of the structure as in case of Functions,
 * embedded programs, multiple programs in one file, each one will have separate 
 * CobFile object. This is supposed to simplify the post parse operations. 
 */

#ifndef COBFILE_H
#define	COBFILE_H
#include "CobObject.h"
#include "CobConfigurationSection.h"
#include "CobDataDivision.h"
#include "CobEnvironmentDivision.h"
#include "CobIdentificationDivision.h"
#include "CobProcedureDivision.h"
#include "CobFunctionDivision.h"
#include "../jgen/JGenerator.h"
#include "../cobmain.h"
#include "../global.h"
#include <list>
#include <string>

using namespace std;
class CobDataDivision;
class CobEnvironmentDivision;

class CobFile: public CobObject {
public:
    CobFile();
    CobFile(char *str);
    CobFile(void * pidentification_div,
            void * penvironment_div,
            void * pdata_div,
            void * pproc_div,
            void * pnested_prog);
    CobFile(void * pfunc_div,
            void * penvironment_div,
            void * pdata_div,
            void * pproc_division);
    CobFile(const CobFile& orig);
//    void setProgramName(char *str);
    void dump();
    void dump(int plevel);
    void generate(JGenerator * pgen);
    string getName();
    string getFileName();
    void setFileName(char * pname);
    CobIdentificationDivision   * getCobIdentificationDivision();
    CobEnvironmentDivision      * getCobEnvDivision();
    CobDataDivision             * getDataDivision();
    CobProcedureDivision        * getProcedureDivision();
    CobFunctionDivision         * getFunctionDivision();
    void                        * getNestedProgramList();
    virtual ~CobFile();
private:
    int type; // 1 - program, 2 - function
    string fileName;
    string programName;
    CobIdentificationDivision       * cbIdentificationDiv = NULL;
    CobFunctionDivision             * cbFunctionDiv = NULL;
    CobEnvironmentDivision          * cbEnvironmentDiv = NULL;
    CobDataDivision                 * cbDataDiv = NULL;
    CobProcedureDivision            * cbProcedureDiv = NULL;
    list <void *>                   * cbNestedprgs = NULL;
};

#endif	/* COBFILE_H */

