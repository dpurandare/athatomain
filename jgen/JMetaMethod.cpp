/*
 * File: JMetaMethod.cpp
 * Created Date: Friday May 2nd 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday May 2nd 2014 12:00:43 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 23, 2014, 9:02 PM
 */

#include "JMetaMethod.h"
#include <iostream>
#include "../global.h"

JMetaMethod::JMetaMethod(string pmethodname, JMetaClass * pclass, bool pisconstructor){
    methodname = pmethodname;
    parent = pclass;
    sterile = false;
    methodstmts = new list <string>;
    fields =  new list <JMetaField *>;
    arguments = new list <JMetaField *>;
    qualifier = "void";
    uniquestmt = new list <int>;
    excplst = new list <int>;
    isconstructor = pisconstructor;
}
void JMetaMethod::addStatement(string pstmt, bool lead, int uniqueid){
    if(lead == false) {
        methodstmts->push_back(pstmt);
    } else {
        if( ! addunique(uniqueid) ) { // false means the statement is duplicate
            methodstmts->push_front(pstmt);
        }
    }
}
bool JMetaMethod::addunique(int pid){
    bool duplicate = false;
    list <int>::iterator i;
    for(i = uniquestmt->begin(); i != uniquestmt->end(); ++i){
        if(pid == (*i)) { 
            duplicate = true;
            break;
        }
    }
    if(duplicate == false) uniquestmt->push_back(pid);
    return duplicate;
}
void JMetaMethod::addReturnVal(string pretval){
    returnval = pretval;
}
void JMetaMethod::addQualifier(string pqualifier){
    qualifier = pqualifier;
}
void JMetaMethod::addArgument(JMetaField * parg){
    arguments->push_back(parg);
}
void JMetaMethod::addField(JMetaField * parg){
    fields->push_back(parg);
}

void JMetaMethod::setSterile(bool psterile){
    sterile = psterile;
}
bool JMetaMethod::getSterile(){
    return sterile;
}

void JMetaMethod::addException(int pexcpid){
    bool duplicate = false;
    list <int>::iterator i;
    for(i = excplst->begin(); i != excplst->end(); ++i){
        if(pexcpid == (*i)) {
            duplicate = true;
            break;
        }
    }
    if(duplicate == false) excplst->push_back(pexcpid);
}

JMetaMethod::JMetaMethod(const JMetaMethod& orig) {
}

void JMetaMethod::serialize(stringstream * s, int plevel){
    // this needs a lot of enhancements. return type, exceptions, arguments handling
    // indentation level in dumping, etc. For now making assumptions and going ahead.
    string tabstr = "";    
    for(int ix = 0; ix < plevel; ix++) tabstr.append("    ");

    int j = 0;
    (*s) << tabstr;
    if(! isconstructor) {
        if(! qualifier.empty())
            (*s) << qualifier << " ";
        if(! returnval.empty())
            (*s) << returnval << " ";
    }
    (*s) << getJname(methodname.c_str()) << "(";
    // dump arguments
    if(! arguments->empty()) {
        list<JMetaField *>::iterator i;
        int j = 0;
        for(i = arguments->begin(); i != arguments->end(); ++i){
            JMetaField * fld = (*i);
            if(j > 0) (*s) << ", ";
            (*s) << fld->getFieldClass() << " ";
            if(fld->isarray()) 
                (*s) << "[]" << " ";
            (*s) << fld->getFieldName();
        }
    }
    (*s) << ") {\n";

    string padstr = "    ";

    list <JMetaField *>::iterator ifld;
    for(ifld = fields->begin(); ifld != fields->end(); ++ifld){
        JMetaField * fld = (*ifld);
        (*s) << tabstr << padstr << fld->getFieldClass() << " " << fld->getFieldName() << ";\n";
    }
        
    if(excplst->size() > 0){
        (*s) << tabstr << padstr << "try {\n";
        padstr.append("    ");
    }
        
    list <string>::iterator i;
    for(i = methodstmts->begin(); i != methodstmts->end(); ++i){        
        (*s) << tabstr << padstr << (*i) << "\n";
        j++;
    }    

    padstr = "    ";

    if(excplst->size() > 0){
        (*s) << tabstr << padstr << "} ";
        list <int>::iterator i;
        for(i = excplst->begin(); i != excplst->end(); ++i){
            (*s) << "catch(" << gen_excp(*i) << ") {\n";            
            (*s) << tabstr << padstr << "    " << "// exception handing code, enhance the way it suits you.\n";
            (*s) << tabstr << padstr << "    " << "System.out.println(ex.getMessage());\n";            
            (*s) << tabstr << padstr << "}\n";
        }        
    }
    
    (*s) << tabstr << "}\n";
    //cout << "number of statements in the Method " << methodname <<  ":" << j << "\n";
}
string JMetaMethod::gen_excp(int pexcp){
    stringstream s;
    switch(pexcp){
        case CC_IOException:
            s << "IOException ex";
            break;
        default:
            break;
    }
    return s.str();
}
string JMetaMethod::getMethodName(){
    return methodname;
}

JMetaMethod::~JMetaMethod() {
    delete methodstmts;
    
    // implement delete the JMetaField * from both the lists. 
    list <JMetaField *>::iterator i;
    for(i = fields->begin(); i != fields->end(); ++i) {
        delete (*i);
    }
    delete fields;
    
    for(i = arguments->begin(); i != arguments->end(); ++i) {
        delete (*i);
    }    
    delete arguments;
    
    delete uniquestmt;
    delete excplst;
}

