/*
 * File: CobSectionDeclaration.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:25:00 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:49 PM
 */

#ifndef COBSECTIONDECLARATION_H
#define	COBSECTIONDECLARATION_H
#include "CobProcDivItem.h"
#include <string>
#include <iostream>
#include "../global.h"

using namespace std;

class CobSectionDeclaration : public CobProcDivItem {
public:
    CobSectionDeclaration();    
    CobSectionDeclaration(char * pname, struct valueType * popt_info);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    CobSectionDeclaration(const CobSectionDeclaration& orig);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobSectionDeclaration();
private:
    string section_name;
    struct valueType * opt_info = NULL;
};

#endif	/* COBSECTIONDECLARATION_H */

