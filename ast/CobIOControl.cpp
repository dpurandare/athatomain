/*
 * File: CobIOControl.cpp
 * Created Date: Thursday January 30th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Thursday January 30th 2014 11:43:17 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 3:36 PM
 */

#include "CobIOControl.h"
#include "../global.h"
#include <iostream>
using namespace std;

CobIOControl::CobIOControl() {
}

CobIOControl::CobIOControl(void * plst){
    iocontrol_itemlst = (list <void *> *) plst;
    // implement.. check for the further initialization
}

void CobIOControl::dump(){
    cout << "I-O Control :\n";

    list<void *>::iterator i;  
    for(i = iocontrol_itemlst->begin(); i != iocontrol_itemlst->end(); ++i ){
        struct _io_control_item * item = (struct _io_control_item * )(*i);
        dump_io_control_item(item);
        cout << "\n";
    }
}
void CobIOControl::dump(int plevel){
    
}
CobIOControl::~CobIOControl() {
    if(iocontrol_itemlst != NULL){
        list<void *>::iterator i;  
        for(i = iocontrol_itemlst->begin(); i != iocontrol_itemlst->end(); ++i ){
            struct _io_control_item * item = (struct _io_control_item * )(*i);
            delete_io_control_item(item); 
        }
        delete iocontrol_itemlst;
    }
}

/* TODO
 semantics of IO Control and its use : Dropped for now.
*/