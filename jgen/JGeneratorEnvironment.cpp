/*
 * File: JGeneratorEnvironment.cpp
 * Created Date: Thursday April 24th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Thursday April 24th 2014 7:16:47 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 22, 2014, 12:19 AM
 */

#include "JGeneratorEnvironment.h"
#include "JGenConfig.h"

JGeneratorEnvironment::JGeneratorEnvironment() {

}

JGeneratorEnvironment::JGeneratorEnvironment(char * pfileName){
    // Open the file and read the settings
    // for now the settings are hard coded
    if(pfileName != NULL) configFileName.append(pfileName);
    destPath = "./gen";
//    genparamfile = "./genparams.dat";
//    genconfig = new JGenConfig(genparamfile);
}

JGeneratorEnvironment::JGeneratorEnvironment(string pfileName){
    configFileName = pfileName;
}

string JGeneratorEnvironment::getDestPath(){
    return destPath;
}

JGenConfig * JGeneratorEnvironment::getGenConfiguration(){
    // read the configuration file and load configuration details in JGenConfig 
    return genconfig;
}

JGeneratorEnvironment::~JGeneratorEnvironment() {
    // cannot delete genconfig it is borrowed if needed. 
    //delete genconfig;
}

