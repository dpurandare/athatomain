/*
 * File: CobProject.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 7:19:36 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 13, 2013, 12:56 PM
 */

#include <list>
#include "CobProject.h"
#include "CobFile.h"
using namespace std;


CobProject::CobProject() {
}

CobProject::CobProject(void * pfileobjlst){
    lst_cobFiles = (list <void *> *) pfileobjlst;
}

CobProject::~CobProject() {
    if(lst_cobFiles != NULL) {
        list<void *>::iterator i;  
        for(i = lst_cobFiles->begin(); i != lst_cobFiles->end(); ++i ){
            delete (CobFile *)(*i);
        }
        delete lst_cobFiles;
    }
}

int CobProject::addCobFile(CobFile * cobfile){
    int retStatus;
    if( cobfile == NULL || cobfile == 0 ){
        retStatus = 1;
    } else {
        lst_cobFiles->push_back(cobfile);
        retStatus = 0; 
    }
    return retStatus;
}
void CobProject::dump(){
    if(lst_cobFiles != NULL) {
        cout << "Dumping Project :\n";
        if( lst_cobFiles->empty() ) {
            cout << "Error in CobProject::dump no valid files.\n";
            return;
        }
        list<void *>::iterator i;
        for(i = lst_cobFiles->begin(); i != lst_cobFiles->end(); ++i ){
            ((CobFile *)(*i))->dump();
        }
    }
}
void CobProject::dump(int plevel){
    
}

void CobProject::generate(JGenerator * pgen){
    if(lst_cobFiles != NULL) {
        cout << "Generating java code :\n";
        list<void *>::iterator i;
        cout << "file count prj:" << lst_cobFiles->size() << "\n";
        for(i = lst_cobFiles->begin(); i != lst_cobFiles->end(); ++i ){
            CobFile * cbfile = (CobFile *)(*i);
            // for each of the file object there is a class.
            cbfile->generate(pgen);
            cout << "Program ID:" << cbfile->getName() << "\n";
        }
    }    
}

void * CobProject::getFileList(){
    return (void *)lst_cobFiles;
}

/* 
 * 1. CobProject
 * 2.     CobFile
 * 3.         CobIdentificationDivision
 * 4.         CobEnvironmentDivision
 * 5.         CobDataDivision
 * 6.         CobProcedureDivision
 * 3. CobIdentificationDivision
 *      string  programName
 *      int     common_initial  common 1, initial 2, absent 0
 *      string  author
 *      string  installation
 *      string  date_written
 *      string  security_options
 *      string  remarks
 * 4. CobEnvironmentDivision
 * 7.     ConfigurationSection
 * 8.     InputOutputSection
 * 9.         FileControlCollection
 * 10.             FileControl
 * 11.         IOControlCollection
 * 10. FileControl
 *      string  fileRecordName
 *      int     fileType  - this is device as well.
 *      string  fileName
 *      int     organization    { line sequential, sequential, binary sequential, relative, indexed }
 *          ....details will follow later 
 * 5. CobDataDivision
 * 12.     FileSection
 * 13.         FileDescriptionCollection
 * 14.             FileDescriptionItem     ...this will hold FD
 *                      ... options 
 * 15.                 RecordCollection
 * 16.                     FieldRecord
 * 17.     WorkingStorageSection
 * 15.         RecordCollection
 * 16.             FieldRecord
 * 18.     LinkageSection
 * 19.     CommunicationSection
 * 20.     ScreenSection
 * 
 * 21. CobProcedureDivision
 *      ... using clause information
 *      ... returning clause information
 * 22.     Declaratives
 * 23.     SectionCollection
 * 24.         SectionDeclaration
 * 25.             ParagraphCollection
 * 26.                 ParagraphDeclaration
 * 27.                     StatementCollection
 * 28                         CobStatement    ... Abstract that can be implemented by the rest 
 * 
 * 
 */