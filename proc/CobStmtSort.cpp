/*
 * File: CobStmtSort.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 9:56:43 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:00 PM
 */

#include "CobStmtSort.h"
#include "../procglobal.h"
#include "../util/genutil.h"

CobStmtSort::CobStmtSort() {
}

CobStmtSort::CobStmtSort(struct idvalStru * pid, void * ponkeylst,
        int popt_duplicate, struct idvalStru * pcollating_seq,
        struct _file_io_clause * pinput, struct _file_io_clause * poutput){
    file_name = pid;
    onkeylst = ponkeylst;
    dupinorder = popt_duplicate;
    collating_seq = pcollating_seq;
    fileinp = pinput;
    fileout = poutput;
}

CobStmtSort::CobStmtSort(const CobStmtSort& orig) {
}

void CobStmtSort::dump(){
}
void CobStmtSort::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Sort statement :\n";
}
void CobStmtSort::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    static int sortercount = 0;
    static int keycount = 0;
    static int inpfilecount = 0;
    static int outfilecount = 0;

    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Sort statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
            
/*
 * Sorter srt1 = CobUtil.getSorter();
 * srt1.setCollatingSequence(String collatingseq);
 * srt1.addKeys(Vector <KeyType> keys);
 * srt1.addInputFiles(Vector <String> filenames);
 * srt1.addOutputFiles(Vector <String> filenames);

 * // do the input processing
 * srt1.sort();
 * // do the output processing
 * 
 */
    pclass->addextInclude("com.athato.util.*");
    
    t << tabstr << "Sorter srt" << sortercount << " = CobUtil.getSorter();";
    pmethod->addStatement(t.str()); t.str(string()); t.clear();
                
    // do something with collating sequence... implement...
    if(collating_seq) {
        t << tabstr << "srt" << sortercount << ".setCollatingSequence(" << gen_id(collating_seq) << ");";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();        
    }

    // process the keys.             
    if(onkeylst) {
        t << tabstr << "Vector <KeyType> keys" << keycount << " = new Vector <KeyType>();";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();
        
        pclass->addextInclude("java.util.*");

        list <struct _on_key_clause *> * lst = (list <struct _on_key_clause *> *)onkeylst;
        list <struct _on_key_clause *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i){
            struct _on_key_clause * item = (struct _on_key_clause *)(*i);
            if(item->itemlist){
                list <struct xvaldata *> * vallst = (list <struct xvaldata *> *)item->itemlist;
                list <struct xvaldata *>::iterator j;
                for(j = vallst->begin(); j != vallst->end(); ++j){
                    struct xvaldata * tmp = *j;
                    t << tabstr << "keys" << keycount <<".add(new KeyType(" << item->direction 
                      << ", "   << gen_xval(tmp)      << "));";
                    pmethod->addStatement(t.str()); t.str(string()); t.clear();
                }
            }
        }
        t << tabstr << "srt" << sortercount << ".addKeys(keys" << keycount << ");";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();                
    }
    
    // input clause :
    if(fileinp->using_fname_list != NULL) {
        t << tabstr << "Vector <AthFileObject> inpfiles" << inpfilecount << " = new Vector <AthFileObject>();";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        // using file clause
        list <struct xvaldata *> * vallst = (list <struct xvaldata *> *)fileinp->using_fname_list;
        list <struct xvaldata *>::iterator j;
        for(j = vallst->begin(); j != vallst->end(); ++j){
            t << tabstr << "inpfiles" << inpfilecount << ".add(" 
                    << gen_xval((*j)) << ");";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        }
        t << tabstr << "srt" << sortercount << ".addInputFiles(" << "inpfiles" << inpfilecount << ");";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();                
    }    
    // output clause :
    if(fileout->using_fname_list != NULL){
        t << tabstr << "Vector <AthFileObject> outfiles" << outfilecount << " = new Vector <AthFileObject> ();";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        // using file clause
        list <struct xvaldata *> * vallst = (list <struct xvaldata *> *)fileout->using_fname_list;
        list <struct xvaldata *>::iterator j;
        for(j = vallst->begin(); j != vallst->end(); ++j){
            t << tabstr << "outfiles" << outfilecount << ".add(" 
                    << gen_xval((*j)) << ");";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        }        
        t << tabstr << "srt" << sortercount << ".addOutputFiles(" << "outfiles" << outfilecount << ");";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();                
    }
    // in case the USING clauses are not used, it means there is inline processing.
    if(fileinp->proc_name){
        // implement ... thru proc. it is needed somewhere else as well. 
        t << tabstr << getJname(fileinp->proc_name) << "();";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        if(fileinp->thru_proc_name) {
            t << tabstr << "\\thru proc: " << getJname(fileinp->thru_proc_name) << "();";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        }
    }

    t << tabstr << "srt" << sortercount << ".sort();";
    pmethod->addStatement(t.str()); t.str(string()); t.clear();                

    if(fileout->proc_name){
        // implement ... thru proc. it is needed somewhere else as well. 
        t << tabstr << getJname(fileout->proc_name) << "();";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        if(fileout->thru_proc_name) {
            t << tabstr << "\\thru proc: " << getJname(fileout->thru_proc_name) << "();";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        }
    }
    
    // last statement of this function. 
    keycount++; sortercount++; inpfilecount++; outfilecount++;
}
void CobStmtSort::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("sort_statement"); 
    // TODO
}
CobStmtSort::~CobStmtSort() {
    if(file_name != NULL) delete_id(file_name);
    if(onkeylst != NULL) delete_on_key_clause_list(onkeylst);
    if(collating_seq != NULL) delete_id(collating_seq);
    if(fileinp != NULL) delete_file_io_clause(fileinp);
    if(fileout != NULL) delete_file_io_clause(fileout);
}

