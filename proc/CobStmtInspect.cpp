/*
 * File: CobStmtInspect.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 9:35:03 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:07 PM
 */

#include "CobStmtInspect.h"
#include "../util/genutil.h"

CobStmtInspect::CobStmtInspect() {
}

CobStmtInspect::CobStmtInspect(struct valueType * pval,
                        void * ptallying_item,
                        void * preplacing_clause,
                        void * pconverting_clause){
    val = pval;
    tallying_item = ptallying_item;
    replacing_clause = preplacing_clause;
    converting_clause = pconverting_clause;
}

CobStmtInspect::CobStmtInspect(const CobStmtInspect& orig) {
}

void CobStmtInspect::dump(){
}
void CobStmtInspect::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Inspect statement :\n";
}
void CobStmtInspect::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    static int inspcount = 0;
    static int tallycount = 0;
    static int replaccount = 0;
    static int convcount = 0;

    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Inspect statement";
    pmethod->addStatement(t.str()); t.str(string()); t.clear();

/*
 StringInstector strinsp1 = new StringInspector(String target);
 TallyingItem titem1 = new TallyingItem(String id, int type, String forval );
 BeforeAfterItem baitem = new BeforeAfterItem(int bef_aft, String locstr);
 titem.addBeforeAfterItem(BeforeAfterItem  bitem);
 strinsp1.addTallyingUtem(titem1);
 */
    t << tabstr << "StringInstector strinsp" << inspcount << " = new StringInspector(" 
            << gen_value(val) <<  ");";
    pmethod->addStatement(t.str()); t.str(string()); t.clear();
    
    if(tallying_item) { 
        // process tallying_item. Counting substrings. 
        list <struct _tallying_item *> * tlst = (list <struct _tallying_item *> *)tallying_item;
        list <struct _tallying_item *>::iterator i;
        for(i = tlst->begin(); i != tlst->end(); ++i){
            // TALLYING identifier_1 FOR char_lead_trail gname opt_before_after_list
            struct _tallying_item * titem = (struct _tallying_item *)(*i);
            t << tabstr << "TallyingItem titem" << tallycount << " = new TallyingItem(" << 
                     gen_id(titem->id) << ", " << titem->type << ", " <<  gen_value(titem->forval) << ");";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();
            
            if(titem->before_after_lst){
                list <struct _before_after_item *> * befaftlst = (list <struct _before_after_item *> *) titem->before_after_lst;
                list <struct _before_after_item *>::iterator j;
                for(j = befaftlst->begin(); j != befaftlst->end(); ++j){
                    struct _before_after_item * baitem = (struct _before_after_item *)(*j);
                    t << tabstr << "titem" << tallycount << ".addBeforeAfterItem(new BeforeAfterItem("<< 
                        baitem->before_after << ", " <<  gen_value(baitem->val) << "));";
                    pmethod->addStatement(t.str()); t.str(string()); t.clear();
                }            
            }
            t << tabstr << "strinsp" << inspcount << ".addTallyingUtem(titem" << tallycount << ");";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();
            tallycount++;
        }
    }
/*
 ReplacingItem ritem1 = new ReplacingItem(String target, int type, String byval);
 ritem1.addBeforeAfterItem(BeforeAfterItem  bitem);
 strinsp1.addReplacingItem(ritem1);
 */
    if(replacing_clause) {
        // process replacing_clause
        list <struct _replacing_item *> * lst = (list <struct _replacing_item *> *) replacing_clause;
        list <struct _replacing_item *>::iterator i1;
        for(i1 = lst->begin(); i1 != lst->end(); ++i1){
            struct _replacing_item * item = (struct _replacing_item *)(*i1);
            //REPLACING char_lead_trail gname BY gname opt_before_after_list 
            t << tabstr << "ReplacingItem ritem" << replaccount << " = new ReplacingItem(" 
                << gen_value(item->targetval) << ", " << item->type << ", " 
                << gen_value(item->byval) << ");";
            
            if(item->before_after_lst){
                list <struct _before_after_item *> * befaftlst = (list <struct _before_after_item *> *) item->before_after_lst;
                list <struct _before_after_item *>::iterator j;
                for(j = befaftlst->begin(); j != befaftlst->end(); ++j){
                    struct _before_after_item * baitem = (struct _before_after_item *)(*j);
                    t << tabstr << "ritem" << replaccount << ".addBeforeAfterItem(new BeforeAfterItem("<< 
                        baitem->before_after << ", " <<  gen_value(baitem->val) << "));";
                    pmethod->addStatement(t.str()); t.str(string()); t.clear();
                }
            }
            t << tabstr << "strinsp" << inspcount << ".addReplacingItem(ritem" << replaccount << ");";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();            
            replaccount++;
        }
    }
/*
 ConvertingItem citem1 = new ConvertingItem(String source, String dest);
 citem1.addBeforeAfterItem(BeforeAfterItem  bitem);
 strinsp1.addConvertingItem(citem1);
 
 strinsp1.process();
 
 */
    if(converting_clause) {
        // process converting_clause 
        list <struct _converting_clause *> * clst = (list <struct _converting_clause *> *)converting_clause;
        list <struct _converting_clause *>::iterator i2;
        for(i2 = clst->begin(); i2 != clst->end(); ++i2){
            struct _converting_clause * citem = (struct _converting_clause *)(*i2);
            //CONVERTING gname TO gname opt_before_after_list
            //citem->val;
            //citem->toval;
            t << tabstr << "ConvertingItem citem" << convcount << " = new ConvertingItem(" 
                    << gen_value(citem->val) << ", " << gen_value(citem->toval) << ");";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();            
            
            if(citem->before_after_lst){
                list <struct _before_after_item *> * befaftlst = (list <struct _before_after_item *> *) citem->before_after_lst;
                list <struct _before_after_item *>::iterator j;
                for(j = befaftlst->begin(); j != befaftlst->end(); ++j){
                    struct _before_after_item * baitem = (struct _before_after_item *)(*j);
                    t << tabstr << "citem" << convcount << ".addBeforeAfterItem(new BeforeAfterItem("<< 
                        baitem->before_after << ", " <<  gen_value(baitem->val) << "));";
                    pmethod->addStatement(t.str()); t.str(string()); t.clear();
                }            
            }
            t << tabstr << "strinsp" << inspcount << ".addConvertingItem(citem" << convcount << ");";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();      
            convcount++;
        }
    }
    t << tabstr << "strinsp" << inspcount << ".process();";
    
    inspcount++;
    tallycount++;
    replaccount++;
    convcount++;
}
void CobStmtInspect::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("inspect_statement"); 
    // TODO    
}
CobStmtInspect::~CobStmtInspect() {
    if(val != NULL) delete_value(val);
    if(tallying_item != NULL) delete_tallying_item_list(tallying_item);
    if(replacing_clause != NULL) 
        delete_replacing_item_list(replacing_clause);
    if(converting_clause != NULL) delete_converting_clause_list(converting_clause);
}
/*
 
 
 */

//
//Source-string = "AABAbbACABA"
//1. 
//INSPECT source-string TALLYING tally-counter FOR CHARACTERS  
//                         BEFORE INITIAL 'C'
//
//In this example tally counter will have count of all characters 
//before first occurrence of ëCí in source-string.
//Tally-counter will be 7. 	
//
//2.
//INSPECT source-string TALLYING tally-counter FOR ALL 'A'
//In this example tally counter will have count of all occurrences 
//of 'A' in source-string. 
//
//Tally-counter will be 6.
//  
//3.
//INSPECT source-string TALLYING tally-counter FOR ALL 'A'  
//                         AFTER INITIAL 'B'
//
//In this example tally counter will have no of occurrences of 'A' 
//after first occurrence of 'B'.
//
//Tally-counter will be 4.
//
//4.
//INSPECT source-string TALLYING tally-counter FOR LEADING 'A'  
//
//In this example tally counter will have no of leading As
//Tally-counter will be 2
//
//5.
//Source-string = "  SSET"
//If we need to get string without spaces, trim the string. we can use 
//following logic.
//
//INSPECT FUNCTION REVERSE (Source-string) TALLYING space-count FOR LEADING SPACES.
//COMPUTE length-of-string = 6 -  space-count.
//Move Source-string(space-count+1 : length-of-string )  TO ws-target-string.
//
//
//Above INSPECT command get the no of leading spaces
//from the string. after executing the INSPECT command
//space-count variable contains 2.
//
//In compute statement, space-count subtracted from
//length of Source-string. value 4 will be stored
//in length-of-string.
//
//In move statement, Using referece modification, moved
//actual string to ws-target-string. removed spaces.

//INSPECT with REPLACING option
//Source-string = "AABAbbACABA"
//
//1.
//INSPECT source-string REPLACING CHARACTERS BY '#' BEFOR INITIAL 'C'.
//
//In above example all characters before first occurrence of 'C' 
//in source-string are replaced by '#'.
//Output: "#######CABA".
//
//2.
//INSPECT source-string 	REPLACING ALL 'A' BY '#'
//
//In above example all occurrences of 'A' in source-string are 
//replaced by '#'
//
//Output: - "##B#bb#C#B#".
//
//INSPECT with TALLYING and REPLACING options
//
//Source-string = "AABAbbACAB"
//
//1. INSPECT source-string TALLYING tally-counter FOR ALL 'A'  AFTER INITIAL 'B'
//			REPLACING ALL 'A' BY '#' AFTER INITIAL 'B'
//
//In above example all occurrences of 'A' after first occurrence
//of 'B' in source-string are counted and replaced by '#'.
//
//	Tally-counter	will be 3
//	Source-string	will be "AAB#bb#C#B".
//
//INSPECT with CONVERTING option
//
//Source-string = "AABAbbACAB"
//
//1. INSPECT source-string CONVERTING "BXCY"  TO "1234"
//
//In above example converts the characters B, X, C, Y to 1, 2, 3, and 4 
//respectively.
//Output: "AA1AbbA3A1"
//
// Equivalent INSPECT with REPLACING option
//INSPECT source-string	 REPLACING	ALL 'B' BY '1'
//					ALL 'X' BY '2'
//					ALL 'C' BY '3'
//					ALL 'Y' BY '4'	
//
//Difference between CONVERTING and REPLACING options in INSPECT
//
//Source-string = "AABAbbACAB"
//
//INSPECT source-string CONVERTING "AB" TO "12"
//	Output: - "1121bb1C12"
//
//INSPECT source-string REPLACING "AB" TO "12"
//	Output:- "A12AbbAC12" 
