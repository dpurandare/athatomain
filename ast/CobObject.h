/*
 * File: CobObject.h
 * Created Date: Saturday March 1st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Saturday March 1st 2014 1:34:25 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on January 8, 2014, 11:43 PM
 */

#ifndef COBOBJECT_H
#define	COBOBJECT_H
#include <string>
#include <list>
#include <map>
using namespace std;

class CobObject {
public:
    CobObject();
    CobObject(const CobObject& orig);
    virtual ~CobObject();
    virtual void dump();
    virtual void dump(int plevel);
    int cobobjid;
private:
};

#endif	/* COBOBJECT_H */

