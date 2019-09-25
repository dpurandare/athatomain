/*
 * File: CobFile.cpp
 * Created Date: Wednesday August 27th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday August 27th 2014 12:27:11 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 13, 2013, 12:57 PM
 */

#include "objinc.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// used while in the generation to access the constituents where passing 
// parameters is extremely expensive. 
extern CobDataDivision * currentdiv;

CobFile::CobFile() {
}
CobFile::CobFile(const CobFile& orig) {
}
CobFile::CobFile(char *str){
    fileName.append(str);
}
CobFile::CobFile(void * pidentification_div,
                void * penvironment_div,
                void * pdata_div,
                void * pproc_div,
                void * pnested_prog){
    cbIdentificationDiv = (CobIdentificationDivision *) pidentification_div;
    cbEnvironmentDiv = (CobEnvironmentDivision *) penvironment_div;
    cbDataDiv = (CobDataDivision *) pdata_div;
    cbProcedureDiv = (CobProcedureDivision *) pproc_div;
    cbNestedprgs = (list <void *> *) pnested_prog;
    type = 1;
    cbFunctionDiv = NULL;
    if(cbIdentificationDiv != NULL) {
        programName = cbIdentificationDiv->getProgramName();
    } 
}
CobFile::CobFile(void * pfunc_div,
                void * penvironment_div,
                void * pdata_div,
                void * pproc_division) {
    cbFunctionDiv = (CobFunctionDivision *) pfunc_div;
    cbIdentificationDiv = NULL;
    cbEnvironmentDiv = (CobEnvironmentDivision *) penvironment_div;
    cbDataDiv = (CobDataDivision *) pdata_div;
    cbProcedureDiv = (CobProcedureDivision *) pproc_division;
    cbNestedprgs = NULL;
    type = 2;
}
CobFile::~CobFile() {
    if(cbIdentificationDiv != NULL)
        delete cbIdentificationDiv;
    if(cbEnvironmentDiv != NULL) delete cbEnvironmentDiv;
    if(cbDataDiv != NULL) delete cbDataDiv;
    if(cbProcedureDiv != NULL) delete cbProcedureDiv;
    if (cbFunctionDiv)
        delete cbFunctionDiv;
    if(cbNestedprgs != NULL) {
        list<void *>::iterator i;  
        for(i = cbNestedprgs->begin(); i != cbNestedprgs->end(); ++i ){
            delete (CobObject *)(*i);
        }
        delete cbNestedprgs;
    }
}

void CobFile::dump(){
    cout << "File Name : " << fileName << "\n";
    cout << "Program Name: " << programName << "\n";
    
    if (cbIdentificationDiv) cbIdentificationDiv->dump();
    if(cbEnvironmentDiv)cbEnvironmentDiv->dump();
    if(cbDataDiv)cbDataDiv->dump();
    if(cbProcedureDiv)cbProcedureDiv->dump();
    if(cbFunctionDiv) cbFunctionDiv->dump();
    if(cbNestedprgs != NULL) {
        list<void *>::iterator i;  
        for(i = cbNestedprgs->begin(); i != cbNestedprgs->end(); ++i ){
            ((CobObject *)(*i))->dump();
        }
    }
}
void CobFile::dump(int plevel){
    
}
string CobFile::getName(){
    // check which one to go here fileName or programName. 
    return programName;
}
string CobFile::getFileName(){
    return fileName;
}
void CobFile::setFileName(char * pname){
    fileName.append(pname);
}

void CobFile::generate(JGenerator * pgen){

    // create a meta class with the name of the program and add it to the generator
    string programName;
    if(cbIdentificationDiv != NULL) {
        programName = cbIdentificationDiv->getProgramName();
        //TBD. complete this mechanism...
        //fileName = programName;
    } 
    // in case of function ... implement - revisit
    if(cbFunctionDiv != NULL){
        // implement ...
    }
    JMetaClass * jmetaclass = new JMetaClass(programName, pgen);
    pgen->addclass(jmetaclass);
    
    // Environment division: 
    if(cbEnvironmentDiv != NULL){
        // Configuration section: ignore source computer, object computer. 
        // Handle special names when required. implement ...
        CobConfigurationSection * cbconfigsec = cbEnvironmentDiv->getConfigSection();

        // handle the file control and IO Control
        if(cbEnvironmentDiv->getInputOutputSection() != NULL){
            CobFileControl * cbfilecontrol = cbEnvironmentDiv->getInputOutputSection()->getFileControl();
            cbfilecontrol->generate(pgen, jmetaclass);

            // handle the IO Control : implement ...
            CobIOControl * cbIOcontrol = cbEnvironmentDiv->getInputOutputSection()->getIOControl();
            // implement ...
        }         
    }
    // Data Division :
    if(cbDataDiv != NULL){
        currentdiv = cbDataDiv;
        cbDataDiv->generate(this, pgen, jmetaclass);
    } else {
        currentdiv = NULL;
    }
    
    // Procedure Division
    // The currentdiv is available so this is the point when you have to backtrack 
    // the SET and MOVE statements and assign the data types to the fields. 
    
    
    if(cbProcedureDiv != NULL){
        cbProcedureDiv->generate(this, pgen, jmetaclass);
    }
    
    // Nested Programs
    if(cbNestedprgs != NULL){
        // for each of the program 
        list <void *>::iterator i;
        for(i = cbNestedprgs->begin(); i != cbNestedprgs->end(); ++i){
            CobFile * nfile = (CobFile *)(*i);
            if(nfile != NULL) {
                // recurse the nested files. 
                nfile->generate(pgen);
            }
        }
    }    
    // the global resetting.
    currentdiv = NULL;
}

CobIdentificationDivision * CobFile::getCobIdentificationDivision(){
    return cbIdentificationDiv;
}

CobEnvironmentDivision * CobFile::getCobEnvDivision(){
    return cbEnvironmentDiv;
}

CobDataDivision  * CobFile::getDataDivision(){
    return cbDataDiv;
}

CobProcedureDivision  * CobFile::getProcedureDivision(){
    return cbProcedureDiv;
}

CobFunctionDivision  * CobFile::getFunctionDivision(){
    return cbFunctionDiv;
}
void * CobFile::getNestedProgramList(){
    void * ret = NULL;
    if(cbNestedprgs != NULL) ret = (void *) cbNestedprgs;
    return ret;
}

