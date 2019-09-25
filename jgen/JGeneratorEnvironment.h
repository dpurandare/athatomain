/*
 * File: JGeneratorEnvironment.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:03:10 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 22, 2014, 12:19 AM
 * Generator environment parameters 
 */

#ifndef JGENERATORENVIRONMENT_H
#define	JGENERATORENVIRONMENT_H
#include "JGenConfig.h"
#include <string>
using namespace std;

class JGeneratorEnvironment {
public:
    JGeneratorEnvironment();
    JGeneratorEnvironment(char * pfileName);
    JGeneratorEnvironment(string pfileName);
    virtual ~JGeneratorEnvironment();
    JGenConfig * getGenConfiguration();    
    string getDestPath();
    
private:
    string configFileName;
    string destPath;
    string genparamfile;
    JGenConfig * genconfig = NULL;
};

#endif	/* JGENERATORENVIRONMENT_H */

