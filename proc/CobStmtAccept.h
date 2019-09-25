/*
 * File: CobStmtAccept.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:38:27 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:12 PM
 */

#ifndef COBSTMTACCEPT_H
#define	COBSTMTACCEPT_H

#include "CobProcDivItem.h"
#include "../procglobal.h"
#include <list>
#include <iostream>
using namespace std;

class CobStmtAccept : public CobProcDivItem {
public:
    CobStmtAccept();
    CobStmtAccept(int                        ptype,
                    struct idvalStru *         pid,
                    struct xvaldata  *         pfrom,
                    void *                     paccept_item_list,
                    struct _esc_excep_action * pesc,
                    int                        pmsg_count,
                    struct _at_clause_accept * pat);
    void dump();
    void dump(int plevel);
    void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    string gen_position(struct _position_clause * ppos);
    string gen_withitem(int pwenum, struct valueType * paddval);
    CobStmtAccept(const CobStmtAccept& orig);
    void proc_xml(pugi::xml_node parent);
    virtual ~CobStmtAccept();
    static const int CB_ACCEPT_SYS_IMP = 1;
    static const int CB_ACCEPT_TERM = 2;
    static const int CB_ACCEPT_MSG = 3;
    static const int CB_ACCEPT_SCREEN = 4;
    
private:
    int type;
    struct idvalStru * id = NULL;
    struct xvaldata  * fromid = NULL;
    list <struct _accept_item *> * accept_item_list = NULL; // struct _accept_item * list
    struct _esc_excep_action * esc_excp = NULL;
    int msg_count;
    struct _at_clause_accept * at_clause = NULL;
};

#endif	/* COBSTMTACCEPT_H */

