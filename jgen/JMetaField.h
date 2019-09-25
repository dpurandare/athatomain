/*
 * File: JMetaField.h
 * Created Date: Monday March 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Monday March 31st 2014 10:25:54 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 23, 2014, 9:01 PM
 */

#ifndef JMETAFIELD_H
#define	JMETAFIELD_H
#include "../ast/CobObject.h"
#include <string>
#include <sstream>

using namespace std;

class JMetaField : public CobObject {
public:
    JMetaField();
    JMetaField(string pname, string ptemplateclass);    
    // this is required for the arguments
    JMetaField(string pname, string ptemplateclass, bool pisarray);    
    JMetaField(const JMetaField& orig);
    void setQualifiers(string pqualifier);
    string getFieldName();
    string getFieldClass();
    bool isarray();
    void serialize(stringstream * s, int plevel);
    virtual ~JMetaField();
    
private:
    string fieldName;
    string templateclass;
    string qualifier;
    // enum datanames dataType; C++ does not allow enums. for reference.
    int dataType;
    bool array;
    // implement ... as progresses this would need enhancement.
};

#endif	/* JMETAFIELD_H */

