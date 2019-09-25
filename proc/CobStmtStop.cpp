/*
 * File: CobStmtStop.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 9:57:53 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:39 PM
 */

#include "CobStmtStop.h"
#include "../cobmain.h"

CobStmtStop::CobStmtStop() {
    
}

CobStmtStop::CobStmtStop(enum _stop_option_enum ptype, struct xvaldata * parg){
    stop_type = ptype;
    stoparg = parg;
}

CobStmtStop::CobStmtStop(const CobStmtStop& orig) {
}

void CobStmtStop::dump(){
}
void CobStmtStop::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Stop statement :\n";
}
void CobStmtStop::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    stopFound = 1;
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// STOP statement";
    pmethod->addStatement(t.str()); t.str(string()); t.clear();                
    // Also don't forget the STERILE settings here. 
    pmethod->setSterile(true);
    // revisit when needed. specifically in the nested programs and CALL statements.
    switch(stop_type){
        case CB_SO_STOP_RUN: {
            t << tabstr << "// STOP RUN - nothing required. ";
            break;
        }
        case CB_SO_STOP_RETURNING: {
            t << tabstr << "// STOP RETURNING - XXX:701. ";        
            break;
        }
        case CB_SO_STOP_GIVING: {
            t << tabstr << "// STOP GIVING - XXX:702. ";                    
            break;
        }
        case CB_SO_STOP_VAL: {
            t << tabstr << "// STOP VALUE - XXX:703. ";                    
            break;
        }
    }
    pmethod->addStatement(t.str()); t.str(string()); t.clear();
    itype = CB_PD_STOP;
}
void CobStmtStop::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("stop_statement"); 
    // TODO
}
CobStmtStop::~CobStmtStop() {
    if(stoparg != NULL) delete_xval(stoparg);
}

