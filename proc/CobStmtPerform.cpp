/*
 * File: CobStmtPerform.cpp
 * Created Date: Monday April 28th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Monday April 28th 2014 1:29:05 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:38 PM
 */

#include "CobStmtPerform.h"
#include "CobSentence.h"
#include "../util/genutil.h"

CobStmtPerform::CobStmtPerform() {
}
CobStmtPerform::CobStmtPerform(struct _proc_names * pnames, void * poptlist, void * pprocstmt){
    names = pnames;
    optlist = poptlist;
    procstmt = pprocstmt;
    itype = CB_PD_PERFORM;
}
CobStmtPerform::CobStmtPerform(const CobStmtPerform& orig) {
}

void CobStmtPerform::dump(){
}
void CobStmtPerform::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "// Perform statement \n";
    
    // The options specify the repetition of the execution and prior test
    if(optlist != NULL) {
        list <void *> * lst = (list <void *> *)optlist;
        list <void *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i ){
            struct _perform_option * perfopt = (struct _perform_option *)(*i);
            if(perfopt != NULL){
                switch(perfopt->type){
                    case CB_PO_FOREVER:
                        cout << tabstr << "while(true) {\n";
                        dump(plevel+1, names);
                        dump(plevel+1, procstmt);
                        cout << tabstr << "}\n";
                        break;
                    case CB_PO_NUMBER_TIMES:
                        cout << tabstr << "for(int i = 0; i < " << perfopt->times << "; i++) { \n";
                        dump(plevel+1, names);
                        dump(plevel+1, procstmt);
                        cout << tabstr << "}\n";
                        break;
                    case CB_PO_ID_TIMES:
                        cout << tabstr << "for(int i = 0; i < ";
                        dump_id(perfopt->id); 
                        cout << "; i++) { \n";
                        dump(plevel+1, names);
                        dump(plevel+1, procstmt);
                        cout << tabstr << "}\n";
                        break;                        
                    case CB_PO_UNTIL:
                        if (perfopt->before_after == CB_AFTER) { 
                            if(perfopt->condition != NULL){
                                cout << tabstr << "do { \n";
                                dump(plevel+1, names);
                                dump(plevel+1, procstmt);                                
                                cout << tabstr << "} while (!(";
                                dump_condition(perfopt->condition);
                                cout << "))\n";
                            }    
                        } else { // // default to before as per COB85
                            if(perfopt->condition != NULL){
                                cout << tabstr << "while ( !(";
                                dump_condition(perfopt->condition);
                                cout <<  ")) {\n";
                                dump(plevel+1, names);
                                dump(plevel+1, procstmt);                                
                                cout << tabstr << "}\n";
                            }                            
                        } 
                        break;
                    case CB_PO_VARYING_UNTIL:
                        // this will need good examples and trials
                        // in case of varying the before/after should not make any difference
                        if(perfopt->perform_varying_list != NULL){                            
                            list <void *> * varlst = (list <void *> *)perfopt->perform_varying_list;
                            list <void *>::iterator j;
                            for(j = varlst->begin(); j != varlst->end(); ++j ){
                                struct _perform_varying * perfvar = (struct _perform_varying *)(*j);
                                if(perfvar != NULL){
                                    cout << tabstr << "for(";
                                    dump_value(perfvar->target); cout << " = ";
                                    dump_value(perfvar->from); cout << "; ";
                                    dump_condition(perfvar->condition); cout << "; ";
                                    dump_value(perfvar->target);  cout << " = ";
                                    dump_value(perfvar->target);  cout << " + ";
                                    dump_value(perfvar->to); cout << ") {\n";

                                    dump(plevel+1, names);
                                    dump(plevel+1, procstmt);                                

                                    cout << tabstr << "}\n";
                                }
                            }
                        }
                        break;                                
                    default:
                        cout << "Error: wrong option type in Perform statement\n";
                        break;
                }
            }            
        }    
    } else {
        dump(plevel, names);
        dump(plevel, procstmt);                                
    }
}

void CobStmtPerform::dump(int plevel, struct _proc_names * pnames){
    if(pnames == NULL) return;
    
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    if(pnames != NULL){
        cout << tabstr << "// from para to para. \n";
        if(pnames->target != NULL) cout << tabstr << "call: " << pnames->target;
        if(pnames->to != NULL) cout << " TO " << pnames->to;
        cout << "\n";
    }    
}
void CobStmtPerform::genNames(int plevel, struct _proc_names * pnames, JMetaMethod * pmethod) {
    if(pnames == NULL) return;
    stringstream s;
    
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    
    if(pnames != NULL){
        s << tabstr << "// from para to para. : (XXX: 301-YTI)";
        pmethod->addStatement(s.str());
        // implement ... walk the list where the first para appears and then dump all 
        // next items... till you hit the TO item. 
        // Also needs to be checked if the para is implemented as Class. in that case 
        // appropriate quilifying name class.mainmethod() should be used, else method() should do. 
        s.str(string()); s.clear();
        // what if this is made a class in the configuration??? implement ...
        if(pnames->target != NULL) s << tabstr << getJname(pnames->target) << "();";
        if(pnames->to != NULL) s << "// (XXX: 707) TO " << pnames->to;
        pmethod->addStatement(s.str());
    }
}

CobSentence * CobStmtPerform::getStatements(){
    if(procstmt == NULL) return NULL;
    return (CobSentence *) procstmt;
}

void CobStmtPerform::dump(int plevel, void * pprocstmt){
    if(pprocstmt == NULL) return;
    CobSentence * stmt = (CobSentence *)pprocstmt;
    stmt->dump(plevel);
}
void CobStmtPerform::genStmts(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s, void * pprocstmt){
    if(pprocstmt == NULL) return;
    CobSentence * stmt = (CobSentence *)pprocstmt;
    stmt->gen(pfile, pgen, pclass, pmethod, pisfirst, plevel, s);    
}

void CobStmtPerform::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    stringstream t;
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");

    t << tabstr << "// Perform statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    // perform possibly needs the imports 
    pclass->addextInclude("com.athato.util.*");
    
    if(optlist != NULL) {
        list <void *> * lst = (list <void *> *)optlist;
        list <void *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i ){
            struct _perform_option * perfopt = (struct _perform_option *)(*i);
            if(perfopt != NULL){
                switch(perfopt->type){
                    case CB_PO_FOREVER: {
                        stringstream t;
                        t << "while(1) {";
                        pmethod->addStatement(t.str());
                        t.str(string()); t.clear();
                        genNames(plevel+1, names, pmethod);
                        //pmethod->addStatement(t.str());
                        t.str(string()); t.clear();
                        genStmts(pfile, pgen, pclass, pmethod, pisfirst, plevel+1, &t, procstmt);
                        t << "}\n";
                        pmethod->addStatement(t.str());
                        break;
                    }
                    case CB_PO_NUMBER_TIMES: {
                        stringstream t;
                        t << tabstr << "for(int i = 0; i < " << perfopt->times << "; i++) {";
                        pmethod->addStatement(t.str());   
                        t.str(string()); t.clear();
                        genNames(plevel+1, names, pmethod);
                        genStmts(pfile, pgen, pclass, pmethod, pisfirst, plevel+1, &t, procstmt);
                        t << tabstr << "}";
                        pmethod->addStatement(t.str());   
                        //t.str(string()); t.clear();
                        break;
                    }
                    case CB_PO_ID_TIMES: {
                        stringstream t;
                        t << tabstr << "for(int i = 0; i < ";
                        t << gen_idarithm(perfopt->id); 
                        t << "; i++) {";
                        pmethod->addStatement(t.str());   
                        t.str(string()); t.clear();
                        genNames(plevel+1, names, pmethod);
                        //pmethod->addStatement(t.str());
                        t.str(string()); t.clear();
                        genStmts(pfile, pgen, pclass, pmethod, pisfirst, plevel+1, &t, procstmt);
                        t << tabstr << "}";
                        pmethod->addStatement(t.str());   
                        t.str(string()); t.clear();
                        break;            
                    }
                    case CB_PO_UNTIL: {
                        if (perfopt->before_after == CB_AFTER) { 
                            if(perfopt->condition != NULL){
                                stringstream t;
                                t << "do {";
                                pmethod->addStatement(t.str());
                                t.str(string()); t.clear();
                                genNames(plevel+1, names, pmethod);
                                //pmethod->addStatement(t.str());   
                                genStmts(pfile, pgen, pclass, pmethod, pisfirst, plevel+1, &t, procstmt);
                                t.str(string()); t.clear();
                                t << "} while (!(";                                
                                t << gen_condition(perfopt->condition);
                                t << "))";
                                pmethod->addStatement(t.str());
                            }
                        } else {  // default to before as per COB85
                            if(perfopt->condition != NULL){
                                stringstream t;
                                t << "while ( !(";
                                t << gen_condition(perfopt->condition);                                
                                t <<  ")) {" ;
                                pmethod->addStatement(t.str());
                                //t.str(string()); t.clear();                                
                                genNames(plevel+1, names, pmethod);
                                //pmethod->addStatement(t.str());   
                                genStmts(pfile, pgen, pclass, pmethod, pisfirst, plevel+1, &t, procstmt);
                                t.str(string()); t.clear();
                                t  << "}";
                                pmethod->addStatement(t.str());   
                            }                            
                        } 
                        break;
                    }
                    case CB_PO_VARYING_UNTIL:
                        // this will need good examples and trials
                        // in case of varying the before/after should not make any difference
                        if(perfopt->perform_varying_list != NULL){                            
                            list <void *> * varlst = (list <void *> *)perfopt->perform_varying_list;
                            list <void *>::iterator j;
                            int icount = 0;
                            for(j = varlst->begin(); j != varlst->end(); ++j ){
                                struct _perform_varying * perfvar = (struct _perform_varying *)(*j);
                                if(perfvar != NULL){
                                    icount++;
                                    stringstream t;
                                    for(int jx = 0; jx < icount-1; jx++) t << "    ";

                                    t << tabstr << "for(";
                                    t << gen_value(perfvar->target); t << " = ";
                                    t << gen_value(perfvar->from); t << "; ";
                                    t << "!(";
                                    //perfvar->condition->comb_cond->is_not = 1;
                                    t << gen_condition(perfvar->condition);
                                    t << ")";
                                    t << "; ";
                                    t << gen_value(perfvar->target);  t << " = ";
                                    t << gen_value(perfvar->target);  t << " + ";
                                    t << gen_value(perfvar->to); t << ") {";                                    
                                    pmethod->addStatement(t.str());
                                }
                            }
                            if(icount > 0){
                                //t.str(string()); t.clear();
                                genNames(plevel+icount, names, pmethod);
                                //pmethod->addStatement(t.str());
                                //dump(plevel+1, procstmt);                                
                                genStmts(pfile, pgen, pclass, pmethod, pisfirst, plevel+icount, &t, procstmt);
                                for(int ix = icount ; ix > 0; ix--) {
                                    t.str(string()); t.clear();
                                    for(int jx = 0; jx < ix-1; jx++) t << "    ";
                                    t << tabstr  << "}";
                                    pmethod->addStatement(t.str()); 
                                }                                
                            }
                        }
                        break;                                
                    default:
                        cout << "Error: wrong option type in Perform statement\n";
                        break;
                }
            }            
        }    
    } else {
        genNames(plevel, names, pmethod);
        genStmts(pfile, pgen, pclass, pmethod, pisfirst, plevel, s, procstmt);
    }
}
void CobStmtPerform::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("perform_statement"); 
    // TODO
}
CobStmtPerform::~CobStmtPerform() {
    if(names != NULL){
        if(names->target != NULL) delete names->target;
        if(names->to != NULL) delete names->to;
        delete names;
    }
    if(optlist != NULL) {
        delete_perform_option_list(optlist);
    }
    if(procstmt != NULL) {
        //delete (CobProcDivItem *)procstmt;
        delete (CobSentence *)procstmt;
    }
}

