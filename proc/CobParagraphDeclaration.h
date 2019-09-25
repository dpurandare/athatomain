/*
 * File: CobParagraphDeclaration.h
 * Created Date: Saturday March 1st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Saturday March 1st 2014 1:23:13 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:51 PM
 */

#ifndef COBPARAGRAPHDECLARATION_H
#define	COBPARAGRAPHDECLARATION_H
#include <string>
#include <iostream>
#include "CobProcDivItem.h"


class CobParagraphDeclaration: public CobProcDivItem {
public:
    CobParagraphDeclaration(char * pname);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    CobParagraphDeclaration(const CobParagraphDeclaration& orig);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobParagraphDeclaration();
private:
    string para_name;
};

#endif	/* COBPARAGRAPHDECLARATION_H */

