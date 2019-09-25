/*
 * File: RecordKey.h
 * Created Date: Wednesday January 29th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday January 29th 2014 8:24:09 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 25, 2013, 6:53 PM
 */

#ifndef RECORDKEY_H
#define	RECORDKEY_H

#include <string>
#include <vector>
using namespace std;

class RecordKey {
public:
    RecordKey();
    RecordKey(RecordKey* orig);
    virtual ~RecordKey();
private:
    int type;   //1-single key, 2- split key
    string keyName;     
    vector <string> splitKeyName;
    int dup;    //0-absent, 1-present
};

#endif	/* RECORDKEY_H */

