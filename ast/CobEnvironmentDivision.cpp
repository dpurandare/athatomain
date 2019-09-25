/*
 * File: CobEnvironmentDivision.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 7:12:25 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:18 PM
 */

#include "CobEnvironmentDivision.h"
#include <iostream>
#include <typeinfo>
using namespace std;
CobEnvironmentDivision::CobEnvironmentDivision() {
}

CobEnvironmentDivision::CobEnvironmentDivision(void * plst){
    if( plst != NULL) {
        envitemlst = (list <void *> *) plst;
        // Important. The assumption is there is only one Config section and 
        // one Input output section. If that is not correct, this needs to be addressed
        const std::type_info& infoconfig = typeid(CobConfigurationSection);
        const std::type_info& infoinpout = typeid(CobInputOutputSection);

        list<void *>::iterator i;  
        for(i = envitemlst->begin(); i != envitemlst->end(); ++i ){
            if( typeid(*((CobObject *)(*i))) == infoconfig ) {
                cbConfigSection = (CobConfigurationSection *)(*i);
            }
            if( typeid(*((CobObject *)(*i))) == infoinpout ) {
                cbInputOutputSection = (CobInputOutputSection *) (*i);
            }
        }
    } else {
        cbConfigSection = NULL;
        cbInputOutputSection = NULL;
        envitemlst = NULL;                
    }
    
}

CobEnvironmentDivision::CobEnvironmentDivision(const CobEnvironmentDivision& orig) {
}

CobEnvironmentDivision::~CobEnvironmentDivision() {
    
    if(envitemlst) {
        // check if this is deleting through virtual destructor mechanism.
        list<void *>::iterator i;  
        for(i = envitemlst->begin(); i != envitemlst->end(); ++i ){
            delete (CobObject *)(*i);
        }
// when the list is deleted all these items will be deleted. No need to duplicate. 
//        if(cbConfigSection)
//            delete cbConfigSection;
//        if(cbInputOutputSection)
//            delete cbInputOutputSection;
        delete envitemlst;
    }
}

CobConfigurationSection * CobEnvironmentDivision::getConfigSection(){
    return cbConfigSection;
}
CobInputOutputSection * CobEnvironmentDivision::getInputOutputSection(){
    return cbInputOutputSection;
}
void CobEnvironmentDivision::dump(){
    cout << "Environment Division : \n";
    if(cbConfigSection)cbConfigSection->dump();
    if(cbInputOutputSection) cbInputOutputSection->dump();
}
void CobEnvironmentDivision::dump(int plevel){
    
}