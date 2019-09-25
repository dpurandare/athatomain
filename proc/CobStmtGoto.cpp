/*
 * File: CobStmtGoto.cpp
 * Created Date: Wednesday August 27th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday August 27th 2014 12:08:48 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:29 PM
 */

#include "CobStmtGoto.h"
#include "../jgen/JGenConfig.h"
#include "../jgen/JGenerator.h"
#include "../util/genutil.h"

CobStmtGoto::CobStmtGoto() {
}

CobStmtGoto::CobStmtGoto(char * pname){
    goto_type = CB_SIMPLE_ALTERABLE;
    proc_name = pname;
    // safe initialization
    proc_name_lst = NULL;
    dependingon_id = NULL;
}
CobStmtGoto::CobStmtGoto(void * pnamelst, struct idvalStru * pdepend){
    goto_type = CB_DEPENDING_ON;
    proc_name_lst = (list <char *> *)pnamelst;
    dependingon_id = pdepend;
    // safe initialization
    proc_name = NULL;
}

CobStmtGoto::CobStmtGoto(const CobStmtGoto& orig) {
}

void CobStmtGoto::dump(){
    cout << "Goto statement :\n";
}
void CobStmtGoto::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Goto statement :\n";
}
void CobStmtGoto::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// GO TO statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    switch(goto_type) {
        case CB_SIMPLE_ALTERABLE: {
            // assumption. the goto jump is within the same program unit. 
            // if jump is to a paragraph, if the paragraphs is defined as a class 
            if(proc_name != NULL) {
                JGenConfig * cfg = pgen->genConfiguration();
                bool isclass = cfg->checkIfClass(proc_name);
                if(isclass){
                    // implement ...
                } else {
                    // default behavior
                    t << tabstr << getJname(proc_name) <<"();";
                    pmethod->addStatement(t.str());
                    t.str(string()); t.clear();
                }            
            } else {
                // implement ... check the semantics. Not found in various versions what it means.
            }
            break;
        }
        case CB_DEPENDING_ON:{
            if(proc_name_lst != NULL) {
                list <char *>::iterator i;
                int count = 1;
                JGenConfig * cfg = pgen->genConfiguration();
                for(i = proc_name_lst->begin(); i != proc_name_lst->end(); ++i){
                    char * pname = (*i);
                    t << tabstr << "if(" << gen_id(dependingon_id) << " == " << count++ << ") {";
                    pmethod->addStatement(t.str());
                    t.str(string()); t.clear();

                    bool isclass = cfg->checkIfClass(pname);
                    if(isclass){
                        // implement ...
                    } else {
                        // default behavior
                        t << tabstr << "    " << pname <<"();";
                        pmethod->addStatement(t.str());
                        t.str(string()); t.clear();
                    }            
                    
                    t << tabstr << "}";
                    pmethod->addStatement(t.str());
                    t.str(string()); t.clear();                    
                }
            }            
            break;
        }        
    }
}
void CobStmtGoto::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("goto_statement"); 
    // TODO        
}
CobStmtGoto::~CobStmtGoto() {
    if(proc_name != NULL) delete proc_name;
    if(proc_name_lst != NULL) {
        list<char *>::iterator i;
        for(i = proc_name_lst->begin(); i != proc_name_lst->end(); ++i ){
            delete (char *)(*i);
        }
        delete proc_name_lst;
    }
    if(dependingon_id != NULL)delete_id(dependingon_id);
}

