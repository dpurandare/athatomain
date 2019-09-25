/*
 * File: CobStmtSearch.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 9:53:36 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:08 PM
 */

#include "CobStmtSearch.h"
#include "../util/genutil.h"
#include "../proc/CobSentence.h"

CobStmtSearch::CobStmtSearch() {
}

CobStmtSearch::CobStmtSearch(struct idvalStru * pid, void * patend_clause, 
            struct _multi_when_clause * pmultiwhenclause){
    search_type = CC_SEARCH_ALL;
    searchid = pid;
    atendaction = patend_clause;
    multiwhenclause = pmultiwhenclause;
    itype = CB_PD_SEARCH;
}

CobStmtSearch::CobStmtSearch(struct idvalStru * pid, struct idvalStru * pvarying,
            void * patendaction, void * psimpcondlst){
    search_type = CC_SEARCH_SINGLE;
    searchid = pid;
    varyingclause = pvarying;
    atendaction = patendaction;
    simpcondlst = psimpcondlst;
    itype = CB_PD_SEARCH;
}

CobStmtSearch::CobStmtSearch(const CobStmtSearch& orig) {
}

void CobStmtSearch::dump(){
}
void CobStmtSearch::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Search statement :\n";
}

CobSentence * CobStmtSearch::getStatements(){
    if(multiwhenclause == NULL) return NULL;
    return (CobSentence *) multiwhenclause->imperativeaction;
}

void CobStmtSearch::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Search statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    string padding = "    ";

    t << tabstr << "bool found = false;";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    t << tabstr << "bool endoftable = false;";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    t << tabstr << "do {";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    t << tabstr << padding << "endoftable = CobUtil.fetchNext(" << gen_id(searchid) << ");";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    // searchid
    if(search_type ==  CC_SEARCH_SINGLE){
        // when there are multiple when criteria. the walk is going to be sequential. 
        // when there is single when criteria either the varying clause should be set or
        // the walk is sequential with increament of 1. 
        
        list <struct _simple_when_item *> * lst = (list <struct _simple_when_item *> *) simpcondlst;
        list <struct _simple_when_item *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i){
            struct _simple_when_item * item = (struct _simple_when_item *)(*i);
            t << tabstr << padding << "if(" << gen_condition(item->cond) << ") {"; 
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
            
            t << tabstr << "found = true;";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();

            CobSentence * stmt = (CobSentence *)item->imperativeaction;
            stmt->gen(pfile, pgen, pclass, pmethod, pisfirst, plevel+2, s);    
            
            t << tabstr << padding << "}";
            pmethod->addStatement(t.str());
            t.str(string()); t.clear();
        }        
    } else {
        // search_type = CC_SEARCH_ALL
/*    search_type = CC_SEARCH_ALL;
    searchid = pid;
    atendaction = patend_clause;
    multiwhenclause = pmultiwhenclause;
 */         
        stringstream condstr;
        if(multiwhenclause->whenitem != NULL) {
            condstr << "(" << gen_condition(multiwhenclause->whenitem->cond) << ")";
        }
        if(multiwhenclause->andwhenitemlst != NULL) {
            list <struct _eval_item *> *lst = (list <struct _eval_item *> *)multiwhenclause->andwhenitemlst;
            list <struct _eval_item *>::iterator i;
            for(i = lst->begin(); i != lst->end(); ++i){
                struct _eval_item * item = (struct _eval_item *)(*i);
                condstr << "&& (" << gen_condition(item->cond) << ")";
            }
        }
        t << tabstr << padding << "if(" << condstr.str() << ") {";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();
                
        CobSentence * stmt = (CobSentence *)multiwhenclause->imperativeaction;
        stmt->gen(pfile, pgen, pclass, pmethod, pisfirst, plevel+2, s);    
                        
        t << tabstr << padding << "}";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();                
    }
    // do the increments... check again ... implement in case some variation found...
    if(varyingclause){
        t << tabstr << padding << gen_id(varyingclause) << "+= 1;";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();
    }
    t << tabstr << "} while (!found || !endoftable);";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    // at end action ...
    t << tabstr << "if(endoftable && !found) {";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    CobSentence * stmt = (CobSentence *)atendaction;
    stmt->gen(pfile, pgen, pclass, pmethod, pisfirst, plevel+1, s);    

    t << tabstr << "}";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
   
}
void CobStmtSearch::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("search_statement"); 
    // TODO
}
CobStmtSearch::~CobStmtSearch() {
    if(searchid != NULL) delete_id(searchid);
    if(multiwhenclause != NULL) {
        if(multiwhenclause->whenitem != NULL) 
            delete_eval_item(multiwhenclause->whenitem);
        if(multiwhenclause->andwhenitemlst != NULL)
            delete_eval_item_list(multiwhenclause->andwhenitemlst);
        if(multiwhenclause->imperativeaction != NULL)
            delete (CobProcDivItem *)(multiwhenclause->imperativeaction);
        delete multiwhenclause;
    }
    if(varyingclause != NULL) delete_id(varyingclause);
    if(atendaction != NULL) delete (CobProcDivItem *) atendaction;
    if(simpcondlst != NULL){
        list<void *> * lst = (list<void *> *)simpcondlst;
        list<void *>::iterator i;  
        for(i = lst->begin(); i != lst->end(); ++i ){
            struct _simple_when_item * item = (struct _simple_when_item *)(*i);
            if(item != NULL) {
            if(item->cond != NULL) delete_condition(item->cond);
            if(item->imperativeaction != NULL)
                delete (CobProcDivItem *)item->imperativeaction;
            delete item;
            }
        }
        delete lst;        
    }
}

/*WORKING-STORAGE SECTION.
  01  CountryTable.
    02  Country OCCURS 242 TIMES
		ASCENDING KEY IS CountryCodeCT
                INDEXED BY CIDX.
	03 CountryCodeCT	PIC XX.
   	03 CountryNameCT	PIC X(25).
   	03 ExchangeRateCT	PIC 9(5)V9(5).
 
    SEARCH ALL Country 
        AT END DISPLAY "Name for " CountryCodeSS " not found."
        WHEN CountryCodeCT(CIDX) = CountryCodeSS
		MOVE ExchangeRateCT(CIDX) TO ExchangeRate
    END-SEARCH

 
WORKING-STORAGE SECTION.
01  COUNTY-TABLE.
    02 COUNTY-VALUES.
       03    FILLER        PIC X(11) VALUE "ANTRIM".
       03    FILLER        PIC X(11) VALUE "ARMAGH".
       03    FILLER        PIC X(11) VALUE "CARLOW".
        ...
       03    FILLER        PIC X(11) VALUE "WICKLOW".
    02 FILLER REDEFINES COUNTY-VALUES.
       03    COUNTY-NAME OCCURS 32 TIMES
                ASCENDING KEY COUNTY-NAME
                INDEXED BY COUNTY-NUM
                PIC X(11).

 
    SEARCH ALL COUNTY-NAME
        AT END WRITE ERROR-REC FROM UNSORTED-REC
        WHEN COUNTY-NAME(COUNTY-NUM) = HOLD-COUNTY
            SET COUNTY-NO TO COUNTY-NUM 
            PERFORM RESTRUCTURE-NAME
            RELEASE WORK-REC 
    END-SEARCH
 */

