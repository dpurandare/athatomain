/*
 * File: CobStmtCall.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:53:54 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:24 PM
 */

#ifndef COBSTMTCALL_H
#define	COBSTMTCALL_H
#include "CobProcDivItem.h"
#include <iostream>
using namespace std;

class CobStmtCall : public CobProcDivItem {
public:
    CobStmtCall();
    CobStmtCall(struct xvaldata * val, 
                struct _call_details * pcalldetail,
                struct _action_pair * ponoverflow, 
                struct _esc_excep_action * pexception);
    CobStmtCall(const CobStmtCall& orig);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtCall();
private:
    struct xvaldata * callitem = NULL;
    struct _call_details * calldetails = NULL;
    struct _action_pair * onoverflow = NULL;          
    struct _esc_excep_action * onexception = NULL;  
};

#endif	/* COBSTMTCALL_H */

