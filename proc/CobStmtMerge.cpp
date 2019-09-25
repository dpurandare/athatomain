/*
 * File: CobStmtMerge.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 9:35:42 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:09 PM
 */

#include "CobStmtMerge.h"
#include "../util/genutil.h"

CobStmtMerge::CobStmtMerge() {
}

CobStmtMerge::CobStmtMerge(struct idvalStru * pfile_name,
            void * ponkey_lst, struct idvalStru * pcollating_seq,
            void * pusingfile, struct _file_io_clause * poutput){
    file_name = pfile_name;
    onkeylst = ponkey_lst;
    collating_seq = pcollating_seq;
    fileusing = pusingfile;
    fileout = poutput;
}

CobStmtMerge::CobStmtMerge(const CobStmtMerge& orig) {
}

void CobStmtMerge::dump(){
}
void CobStmtMerge::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Merge statement :\n";
}
void CobStmtMerge::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    static int mergecount = 0;
    static int keycount = 0;
    static int inpfilecount = 0;
    
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Merge statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
/*
 * Merger mrg1 = CobUtil.getMerger();
 * mrg1.setCollatingSequence(String collatingseq);
 * mrg1.addKeys(Vector <KeyType> keys);
 * mrg1.addInputFiles(Vector <String> filenames);
 * srt1.sort();
 * // do the output processing
 */
    t << tabstr << "Merger mrg" << mergecount << " = CobUtil.getMerger();";
    pmethod->addStatement(t.str()); t.str(string()); t.clear();
                
    // do something with collating sequence... implement...
    if(collating_seq) {
        t << tabstr << "mrg" << mergecount << ".setCollatingSequence(" << gen_id(collating_seq) << ");";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();    
    }
    // process the keys.             
    if(onkeylst) {
        t << tabstr << "Vector <KeyType> keys" << keycount << " = new Vector <KeyType>();";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();

        list <struct _on_key_clause *> * lst = (list <struct _on_key_clause *> *)onkeylst;
        list <struct _on_key_clause *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i){
            struct _on_key_clause * item = (struct _on_key_clause *)(*i);
            if(item->itemlist){
                list <struct xvaldata *> * vallst = (list <struct xvaldata *> *)item->itemlist;
                list <struct xvaldata *>::iterator j;
                for(j = vallst->begin(); j != vallst->end(); ++j){
                    t << tabstr << "keys" << keycount <<".add(new KeyType(" << item->direction << ", " << gen_xval((*j)) <<"));";
                    pmethod->addStatement(t.str()); t.str(string()); t.clear();
                }
            }
        }
        t << tabstr << "mrg" << mergecount << ".addKeys(keys" << keycount << ");";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();                
    }
    // input clause :
    if(fileusing != NULL) {
        t << tabstr << "Vector <String> infiles" << inpfilecount << " = new Vector();";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        // using file clause
        list <struct idvalStru *> * vallst = (list <struct idvalStru *> *)fileusing;
        list <struct idvalStru *>::iterator j;
        for(j = vallst->begin(); j != vallst->end(); ++j){
            t << tabstr << "infiles" << inpfilecount << ".add(new String(" 
                    << gen_id((*j)) << ");";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        }
        t << tabstr << "mrg" << mergecount << ".addInputFiles(" << "infiles" << inpfilecount << ");";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();                
    }

    t << tabstr << "mrg" << mergecount << ".sort();";
    pmethod->addStatement(t.str()); t.str(string()); t.clear();                

    if(fileout->proc_name){
        // implement ... thru proc. it is needed somewhere else as well. 
        t << tabstr << fileout->proc_name << "();";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        if(fileout->thru_proc_name) {
            t << tabstr << "\\thru proc: " << fileout->thru_proc_name << "();";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        }
    }
    mergecount++;
    keycount++;
    inpfilecount++;
}
void CobStmtMerge::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("merge_statement"); 
    // TODO        
}
CobStmtMerge::~CobStmtMerge() {
    if(file_name != NULL) delete_id(file_name);
    if(onkeylst != NULL) delete_on_key_clause_list(onkeylst);
    if(collating_seq != NULL) delete_id(collating_seq);
    if(fileusing != NULL) delete_file_name_list(fileusing);
    if(fileout != NULL) delete_file_io_clause(fileout);
}

