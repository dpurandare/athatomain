/*
 * File: CobStmtInitialize.cpp
 * Created Date: Monday April 14th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Monday April 14th 2014 8:30:30 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:06 PM
 */

#include "CobStmtInitialize.h"
#include "../util/genutil.h"

CobStmtInitialize::CobStmtInitialize() {
}

CobStmtInitialize::CobStmtInitialize(void * pitemlst, int pfiller, int pvalueclause,
                        void * preplacingitemlst, int pdefault){
    itemlst = pitemlst;
    fillerflag = pfiller;
    valueclause = pvalueclause;
    replacingitemlst = preplacingitemlst;
    defaultflag = pdefault;
}

CobStmtInitialize::CobStmtInitialize(const CobStmtInitialize& orig) {
}

void CobStmtInitialize::dump(){
}
void CobStmtInitialize::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Initialize statement :\n";
}
void CobStmtInitialize::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    static int fieldnamecount = 0;
    static int replacingcount = 0;

    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Initialize statement";
    pmethod->addStatement(t.str()); t.str(string()); t.clear();                
    
    // create the vector of receiver items
    t << tabstr << "Vector <AthFieldData> fieldnames" << fieldnamecount << " = new Vector <AthFieldData>();";
    pmethod->addStatement(t.str()); t.str(string()); t.clear();                
    // import the related library for Vector.
    string incstr = "java.util.*";
    pclass->addextInclude(incstr);
    pclass->addextInclude( string("com.athato.fileio.*") );
    pclass->addextInclude( string("com.athato.util.*") );

    if(itemlst) {
        list <struct xvaldata *> * lst = (list <struct xvaldata *> *) itemlst;
        list <struct xvaldata *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i){
            struct xvaldata * item = (struct xvaldata *)(*i);
            t << tabstr << "fieldnames" << fieldnamecount << ".add(" << gen_xval(item) << ");";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        }
    }
    
    // create vector of ReplacingItem 

    if(replacingitemlst){
        t << tabstr << "Vector <ReplacingItem> replacingitems" << replacingcount << " = new Vector <ReplacingItem>();";
        pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        
        list <struct _init_replacing_item *> * lst = 
                    (list <struct _init_replacing_item *> *) replacingitemlst;
        list <struct _init_replacing_item *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i){
            struct _init_replacing_item * item = (struct _init_replacing_item *)(*i);
            t << tabstr << "replacingitems" << replacingcount << ".add(new ReplacingItem(" 
                    << item->cattype << ", " << gen_xval(item->val) << ");";
            pmethod->addStatement(t.str()); t.str(string()); t.clear();                
        }
    }

    // add the initialize entry.
    t << tabstr << "CobUtil.initialize(" << "fieldnames" << fieldnamecount << ", ";
    if(fillerflag == 1) {
        t << "true, ";
    } else {
        t << "false, ";
    }
    t << valueclause << ", ";
    
    if(replacingitemlst) {
        t  << "replacingitems" << replacingcount << ", ";
    } else {
        t  << "null,";
    }

    if(defaultflag == 1){
        t << "true";
    } else {
        t << "false";
    }
    t << ");";
    pmethod->addStatement(t.str()); t.str(string()); t.clear();
    
    // last line in this function
    fieldnamecount++; replacingcount++;
}
void CobStmtInitialize::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("initialize_statement"); 
    // TODO    
}
CobStmtInitialize::~CobStmtInitialize() {
    if(itemlst != NULL) delete_xvallist(itemlst);
    if(replacingitemlst != NULL) delete_init_replacing_item_list(replacingitemlst);
}

/*
 The list of data items eligible to be set to new values by this statement is: 
 - Every elementary item specified as identifier-1 ..., PLUS...
￼- Every elementary item defined subordinate to every group item specified as 
   identifier-1 ..., with the following exceptions:
    USAGE INDEX items are excluded.
 - Items with a REDEFINES as part of their definition are excluded; this means 
   that items subordinate to them are excluded as well. The identifier-1 items 
   themselves may have a REDEFINES and may be subordinate to an item that has a REDEFINES, however.
 This list is referred to as the list of receiving fields.
 * 
 * 
 * CobUtil.initialize(  Vector <String> fieldname, 
 *                      bool includeFiller, 
 *                      int category,
 *                      Vector <ReplacingItem> replacingitem,
 *                      bool isdefault
 *                   )
 * // need to define this class and provide 
 * // don't forget to set the type properly. 
 * // Match the data types from gname and xval to the AthDataField. 
 * Class ReplacingItem{
 *      int categoryname;
 *      AthDataField field;
 * }
 * 
 * Initialization for each receiving field takes place by applying the first of 
 * the following rules that apply to the field:
 * - If a TO VALUE clause exists, does the receiving field qualify as one of the 
 * data categories listed on the clause? If it does, the data item will be 
 * initialized to it’s VALUE clause value.
 * - If a REPLACING clause exists, does the receiving field qualify as one of 
 * the data categories listed on the clause? If it does, the receiving field 
 * will be initialized to the specified sending field value.
 * - If a DEFAULT clause exists, initialize the field to a value appropriate to 
 * its USAGE (Alphanumeric and Numeric initialized to SPACES, Pointer and 
 * Program-Pointer initialized to NULL, all numeric and numeric-edited 
 * initialized to ZERO).
 */