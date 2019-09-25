/*
 * File: CobDeclaratives.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 12:31:22 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:49 PM
 */

#include "CobDeclaratives.h"

CobDeclaratives::CobDeclaratives() {
}

CobDeclaratives::CobDeclaratives(void * pdeclitem){
    cbProcDivItem = (CobProcDivItem *)pdeclitem;
}

CobDeclaratives::CobDeclaratives(const CobDeclaratives& orig) {
}

void CobDeclaratives::dump(){
}
void CobDeclaratives::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Declaratives : \n";
    if(cbProcDivItem != NULL) cbProcDivItem->dump(plevel + 1);    
}
CobProcDivItem * CobDeclaratives::getProcDivItem(){
    return cbProcDivItem;
}

CobDeclaratives::~CobDeclaratives() {
    if(cbProcDivItem != NULL) delete cbProcDivItem;
}

