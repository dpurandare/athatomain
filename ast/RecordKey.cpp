/*
 * File: RecordKey.cpp
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

#include "RecordKey.h"
#include <vector>

RecordKey::RecordKey() {
}

RecordKey::RecordKey(RecordKey* orig) {
    type = orig->type;
    keyName = orig->keyName;
   
    for(vector <string>::iterator i = (orig->splitKeyName).begin(); i != (orig->splitKeyName).end(); ++i ){
        splitKeyName.push_back(*i);
    }
}

RecordKey::~RecordKey() {
}

