/*
 * File: CobStmtUse.cpp
 * Created Date: Wednesday August 27th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday August 27th 2014 12:31:05 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:27 PM
 */

#include "CobStmtUse.h"

CobStmtUse::CobStmtUse() {
}

CobStmtUse::CobStmtUse(int pglobal, int perr_excp, void * ponitems){
    struct idvalStru * file_name;
    void * onitems;
    use_type = CC_USE_SIMPLE;
    globalflag = pglobal;
    err_excp = perr_excp;
    onitems = ponitems;
}

CobStmtUse::CobStmtUse(void * ponitems){
    use_type = CC_USE_DBG;
    onitems = ponitems;
}
CobStmtUse::CobStmtUse(int pglobal, int pbeg_end, int pfile_reel, 
                    struct _use_proc_option * pprocopt){
    use_type = CC_USE_AFTER;           
    globalflag = pglobal;
    beg_end = pbeg_end;
    file_reel_unit = pfile_reel;
    procopt = pprocopt;
}
CobStmtUse::CobStmtUse(struct idvalStru * pfilename){
    use_type = CC_USE_REPOR;
    file_name = pfilename;
}
CobStmtUse::CobStmtUse(const CobStmtUse& orig) {
}

void CobStmtUse::dump(){
}
void CobStmtUse::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Use statement :\n";
}
void CobStmtUse::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    // implement ...deferred.
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Use statement";
    pmethod->addStatement(t.str());
}
void CobStmtUse::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("use_statement"); 
    // TODO 
}
CobStmtUse::~CobStmtUse() {
    if(onitems != NULL) delete_strlist(onitems);
    if(file_name != NULL) delete_id(file_name);
    if(procopt != NULL) {
        delete_id(procopt->filename);
        delete procopt;
    }
}

