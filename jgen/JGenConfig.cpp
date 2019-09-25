/*
 * File: JGenConfig.cpp
 * Created Date: Tuesday August 26th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Tuesday August 26th 2014 4:01:08 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 25, 2014, 12:28 PM
 */

#include "JGenConfig.h"
#include <boost/algorithm/string.hpp>

JGenConfig::JGenConfig(string pconfigfile) {
    classlst = new list <string>;
    aliasmap = new map <string, string>;
}
void JGenConfig::loadConfig(string pconfigfile){
    
}

string JGenConfig::getPackageName(){
    return packagename;
}

bool JGenConfig::checkIfClass(string pname){
    bool isclass = false;
    list <string>::iterator i;
    for(i = classlst->begin(); i != classlst->end(); ++i){
        if(boost::iequals(pname, (*i))) {
            isclass = true;
            break;
        }
    }
    return isclass;
}
string JGenConfig::getFirstFile(){
    // for time being
    string fname;
    fname = ::getFirstFile();
    return fname;
}

JGenConfig::~JGenConfig() {
    if(classlst != NULL) delete classlst;
    if(aliasmap != NULL) delete aliasmap;
}

