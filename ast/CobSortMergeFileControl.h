/*
 * File: CobSortMergeFileControl.h
 * Created Date: Thursday January 30th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Thursday January 30th 2014 11:32:25 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 3:37 PM
 */

#ifndef COBSORTMERGEFILECONTROL_H
#define	COBSORTMERGEFILECONTROL_H

#include "CobObject.h"
#include <iostream>
using namespace std;

class CobSortMergeFileControl : public CobObject {
public:
    CobSortMergeFileControl();
    void dump();
    void dump(int plevel);
    virtual ~CobSortMergeFileControl();
private:

};

#endif	/* COBSORTMERGEFILECONTROL_H */

