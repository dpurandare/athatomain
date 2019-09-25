/*
 * File: JMetaField.cpp
 * Created Date: Thursday April 24th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Thursday April 24th 2014 7:48:12 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 23, 2014, 9:01 PM
 */

#include "JMetaField.h"

JMetaField::JMetaField() {
}
JMetaField::JMetaField(string pname, string ptemplateclass){
    fieldName = pname;
    templateclass = ptemplateclass;
    array = false;
}
JMetaField::JMetaField(string pname, string ptemplateclass, bool pisarray){
    fieldName = pname;
    templateclass = ptemplateclass;
    array = pisarray;    
}
void JMetaField::setQualifiers(string pqualifier){
    qualifier = pqualifier;
}

string JMetaField::getFieldName(){
    return fieldName;
}
string JMetaField::getFieldClass(){
    return templateclass;
}
bool JMetaField::isarray(){
    return array;
}

void JMetaField::serialize(stringstream * s, int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    if(!qualifier.empty())
        (*s) << tabstr << qualifier << " " << templateclass << " ";
    else 
        (*s) << tabstr << templateclass << " ";
    if(array) (*s) << "[]" << " ";
    (*s) << fieldName << ";\n";
}

JMetaField::JMetaField(const JMetaField& orig) {
}

JMetaField::~JMetaField() {
    // nothing to delete for now. 
}

