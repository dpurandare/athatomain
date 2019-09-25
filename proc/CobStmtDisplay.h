/*
 * File: CobStmtDisplay.h
 * Created Date: Wednesday August 27th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday August 27th 2014 12:32:22 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:08 PM
 */

#ifndef COBSTMTDISPLAY_H
#define	COBSTMTDISPLAY_H

#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <iostream>
using namespace std;

class CobStmtDisplay : public CobProcDivItem {
public:
    CobStmtDisplay();
    CobStmtDisplay(void * psysnamelst, struct xvaldata * pupon, int padvancing);
    CobStmtDisplay(int ptype, void * plst);
    CobStmtDisplay(const CobStmtDisplay& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtDisplay();
    static const int CB_SYSNAME = 1;
    static const int CB_TERM = 2;
    static const int CB_SCREEN = 3;
private:
    int type;
    list <struct valueType *> * sysnamelst = NULL;  // gname list
    struct xvaldata * uponclause = NULL;
    int advancing;
    list <struct _disp_item *> * disp_itemlst = NULL;        // For term display
                                // struct _disp_item
    list <struct _disp_screen_item *> * disp_screen_lst = NULL;     // For screen display
                                // struct _disp_screen_item 
};

#endif	/* COBSTMTDISPLAY_H */

