/*
 * File: CobSentence.h
 * Created Date: Sunday March 23rd 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday March 23rd 2014 12:29:02 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 23, 2013, 9:09 PM
 */

#ifndef COBSENTENCE_H
#define	COBSENTENCE_H

#include "CobProcDivItem.h"
#include <iostream>
using namespace std;

class CobSentence : public CobProcDivItem {
public:
    CobSentence();
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    CobSentence(const CobSentence& orig);
    //virtual ~CobSentence();
private:

};

#endif	/* COBSENTENCE_H */

