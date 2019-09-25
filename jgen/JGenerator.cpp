/*
 * File: JGenerator.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 8:41:29 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Java Generator Main class
 */

#include "JGenerator.h"
#include <sstream>
#include <boost/algorithm/string.hpp>

JGenerator::JGenerator() {
    
}
JGenerator::JGenerator(CobProject * pprj, string pConfigFile){
    cbPrj = pprj;
    configFile = pConfigFile;
    cbGenEnv = new JGeneratorEnvironment(configFile);
    cbConfig = new JGenConfig(configFile);
    cbBldFileGen = new JBuildFileGenerator(configFile);
    classlst = new list <JMetaClass *>;
}

void JGenerator::generate(){
    if(cbPrj) {        
        cbPrj->generate(this);
        dumpclasses();
    } else {
        cout << "Project empty. Could be error in parse.";
    }
}
void JGenerator::dumpclasses(){
    if(! classlst->empty()){
        list <JMetaClass *>::iterator i;
        for(i = classlst->begin(); i != classlst->end(); ++i){
            JMetaClass * cls = (*i);
            cout << "   file : " << getJname(cls->getname().c_str()) << ".java\n";
            cls->serialize(cls->getname());
        }        
    }
}

JMetaClass * JGenerator::findClass(string pname){
    JMetaClass * ret = NULL;
    if(! classlst->empty()){
        list <JMetaClass *>::iterator i;
        for(i = classlst->begin(); i != classlst->end(); ++i){
            JMetaClass * cls = (*i);
            if( boost::iequals(cls->getname(), pname) ){
                ret = cls;
                break;
            }
        }        
    }
    return ret;
}

void JGenerator::addclass(JMetaClass * pmetaclass){
    classlst->push_back(pmetaclass);
}

CobProject * JGenerator::getProject(){
    return cbPrj;
}

JGeneratorEnvironment * JGenerator::getEnvironment(){
    return cbGenEnv;
}

JGenConfig * JGenerator::genConfiguration(){
    return cbConfig;
}

JGenerator::~JGenerator() {
    // Do not delete anything that comes from outside. 
    if(cbGenEnv != NULL)
        delete cbGenEnv;
    if(cbConfig != NULL)
        delete cbConfig;
    if(cbBldFileGen != NULL)
        delete cbBldFileGen;
    // delete the class list.
    list <JMetaClass *>::iterator i;
    for(i = classlst->begin(); i != classlst->end(); ++i){
        JMetaClass * item = (JMetaClass *)(*i);
        delete item;
    }
    delete classlst;
}

