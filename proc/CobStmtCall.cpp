/*
 * File: CobStmtCall.cpp
 * Created Date: Sunday April 20th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday April 20th 2014 8:22:59 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 3:24 PM
 */

#include "CobStmtCall.h"
#include "../procglobal.h"
#include "../util/genutil.h"

CobStmtCall::CobStmtCall() {
}

CobStmtCall::CobStmtCall(struct xvaldata * pval, 
            struct _call_details * pcalldetail,
            struct _action_pair * ponoverflow, 
            struct _esc_excep_action * pexception){
    callitem = pval;
    calldetails = pcalldetail;
    onoverflow = ponoverflow;
    onexception = pexception;
}

CobStmtCall::CobStmtCall(const CobStmtCall& orig) {
}

void CobStmtCall::dump(){
}
void CobStmtCall::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Call statement : \n";
}
void CobStmtCall::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s) {
    static int count = 0; 
    static int paramcount = 0;
    // will maintain value across the calls.
    
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Call statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    // examples:
    // CALL "EuroDateToSortDate" USING FirstDate, FirstDate.
        
    // CALL "GetDayDiff" USING BY CONTENT FirstDate,  SecondDate
    //                         BY REFERENCE DayDifference.    
    
    // CALL "Validate" USING   BY CONTENT   FirstDate,
    //                         BY REFERENCE ValidationResult.

    char * calledprg = removeQuotes(callitem);
    
    // instantiate the class. 
    // implement unique number logic to create numbered object so that there is no 
    // clash of identifiers. 
    t << tabstr << getJname(calledprg) << " prg" << count << " = new " << getJname(calledprg) << "();";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    
    // set the Using 
    if(calldetails != NULL){
        list <struct _call_using_item *> * usingitemlst =  
                (list <struct _call_using_item *> *)calldetails->using_item_list;
        if(usingitemlst != NULL){
            list <struct _call_using_item *>::iterator i;
            for(i = usingitemlst->begin(); i != usingitemlst->end(); ++i){
                struct _call_using_item * uitem = (struct _call_using_item *)(*i);
                if(uitem){
                    if(uitem->list) {
                        list <struct _call_item *> * clst = (list <struct _call_item *> *)uitem->list;
                        if(clst){
                            list <struct _call_item *>::iterator j;
                            for(j = clst->begin(); j != clst->end(); ++j) {
                                struct _call_item * citem = (struct _call_item *) (*j);

                                t << tabstr << "CallParam p" << paramcount << " = " 
                                    << "new CallParam(";
                                if(uitem->type == CB_CALL_BY_CONTENT){
                                    t << gen_value(citem->val, false) << ", true"; // true for making a copy.
                                } else { //CB_CALL_BY_DEFAULT and CB_CALL_BY_REF
                                    t << gen_value(citem->val, false) << ", false"; 
                                }
                                t << ");";
                                pmethod->addStatement(t.str());
                                t.str(string()); t.clear();                                            

                                if(citem->type == 1){  // gname = 1, OMMITED = 2
                                    t << tabstr << "prg" << count << ".addParam(" 
                                        << "p" << paramcount << ");";
                                    pmethod->addStatement(t.str());
                                    t.str(string()); t.clear();                                            
                                } else {
                                // implement ... check semantics of OMMITED                                    
                                }
                                paramcount++;
                            }
                        }
                    }
                }
            }
        }
        // giving and returning are used interchangeably.
        struct idvalStru * lgiving = calldetails->giving;
        struct idvalStru * lreturning = calldetails->returning;
        struct idvalStru * retval = NULL;
        if(lgiving != NULL) retval = lgiving;
        if(lreturning != NULL) retval = lreturning;
        if(retval != NULL) {
            // giving - returning             
            t << tabstr << gen_id(retval) << " = prg" << count << ".run();";            
        } else {
            t << tabstr << "prg" << count << ".run();";
        }
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();            
    }
    count++;
}
void CobStmtCall::proc_xml(pugi::xml_node parent){
    pugi::xml_node callnode = parent.append_child(pugi::node_element);
    callnode.set_name("call_statement");
    // TODO    
}

CobStmtCall::~CobStmtCall() {
    if(callitem != NULL) delete_xval(callitem);
    if(calldetails != NULL) delete_call_details(calldetails);
    if(onoverflow != NULL) delete_action_pair(onoverflow);
    if(onexception != NULL) delete_esc_excp_item(onexception);
}

/*
 - call_statement : The CALL statement is used to transfer control to another program, 
	called a subprogram or subroutine. (PROCESS) understand the CALL semantics well and 
	crosscheck the syntax as well. 
		- Java supports only call by reference for the objects and call by value
		 for the primitives. 
		- Returning and Giving are same.
		- Using is used to specify the arguments for the program.
		 In case of BY REFERENCE the behavior is default to Java.
		 In case of BY VALUE the copy of the object should be passed so that
                  the original is intact.
		- When Initial is used, all data in the Data Division of called program 
		 is initialized. In Java that is a default behavior. Initialization always 
		 occurs to the data defined in LOCAL-STORAGE SECTION irrespective of INITIAL.
 * Multi-file program and related logic...
 * Function division: the semantics of calling and using functions with example
 * TODO:
 *  
 */