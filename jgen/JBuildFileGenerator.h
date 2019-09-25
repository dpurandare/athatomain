/*
 * File: JBuildFileGenerator.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:00:25 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 25, 2014, 12:10 PM
 */

#ifndef JBUILDFILEGENERATOR_H
#define	JBUILDFILEGENERATOR_H
#include <list>
#include <string>
using namespace std;

class JBuildFileGenerator {
public:
    JBuildFileGenerator(string ppath);
    void addfile(string pfilename);
    void serialize();
    virtual ~JBuildFileGenerator();
private:
    list <string> * filelst = NULL;
    string path;
};

#endif	/* JBUILDFILEGENERATOR_H */

