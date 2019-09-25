/*
 * File: JBuildFileGenerator.cpp
 * Created Date: Monday March 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Monday March 31st 2014 10:24:28 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 25, 2014, 12:10 PM
 */

#include "JBuildFileGenerator.h"

JBuildFileGenerator::JBuildFileGenerator(string ppath) {
    path = ppath;
    filelst = new list <string>;
}
void JBuildFileGenerator::addfile(string pfilename){
    filelst->push_back(pfilename);
}

void JBuildFileGenerator::serialize(){
    // serialize the makefile or ant script whatever required. 
    // implement ...
}

JBuildFileGenerator::~JBuildFileGenerator() {
    delete filelst;
    // no need to delete the strings
}

