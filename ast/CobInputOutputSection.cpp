/*
 * File: CobInputOutputSection.cpp
 * Created Date: Monday February 24th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Monday February 24th 2014 9:43:39 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 2:42 PM
 */

#include "CobInputOutputSection.h"

CobInputOutputSection::CobInputOutputSection() {
}

CobInputOutputSection::CobInputOutputSection(void * pfileControl, void * pioControl){
    fileControl = (CobFileControl *) pfileControl;
    ioControl = (CobIOControl *) pioControl;
}

CobInputOutputSection::~CobInputOutputSection() {
    if(fileControl != NULL) delete fileControl;
    if(ioControl != NULL) delete ioControl;
}
CobFileControl * CobInputOutputSection::getFileControl(){
    return fileControl;
}
CobIOControl * CobInputOutputSection::getIOControl(){
    return ioControl;
}

void CobInputOutputSection::dump(){
    cout << "Input-Output Section : \n";
    if(fileControl != NULL) fileControl->dump();
    if(ioControl != NULL) ioControl->dump();
}
void CobInputOutputSection::dump(int plevel){
    
}