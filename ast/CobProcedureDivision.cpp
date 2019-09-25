/*
 * File: CobProcedureDivision.cpp
 * Created Date: Thursday May 1st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Thursday May 1st 2014 10:41:15 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:48 PM
 */

#include "CobProcedureDivision.h"
#include "CobFile.h"
#include "../proc/CobStmtMove.h"
#include "../proc/CobStmtSet.h"
#include "../proc/CobStmtIfElse.h"
#include "../proc/CobStmtEvaluate.h"
#include "../proc/CobStmtPerform.h"
#include "../proc/CobStmtSearch.h"
#include "../proc/CobStmtRead.h"
#include "../proc/CobStmtWrite.h"
#include <boost/algorithm/string.hpp>

CobProcedureDivision::CobProcedureDivision() {
}
CobProcedureDivision::CobProcedureDivision(struct _use_chain_return * pucr, 
                                void * pdeclaratives, void * pprocdivitem){
    ucr = pucr;
    cbDeclarative = (CobDeclaratives *)pdeclaratives;
    cbProcDivItem = (CobProcDivItem *) pprocdivitem;
}

struct _use_chain_return * CobProcedureDivision::getUCR(){
    return ucr;
}
CobDeclaratives * CobProcedureDivision::getDeclaratives(){
    return cbDeclarative;
}
CobProcDivItem * CobProcedureDivision::getProcDivItem(){
    return cbProcDivItem;
}

void CobProcedureDivision::dump(){
    cout << "Procedure Division: \n";
    if(cbDeclarative != NULL) cbDeclarative->dump(0);
    if(cbProcDivItem != NULL) cbProcDivItem->dump(0);
}
void CobProcedureDivision::dump(int plevel){
    
}

void CobProcedureDivision::backtrack(CobProcDivItem * pProcDivItem){
    // scan through the cbProcDivItem and it's children recursively 
    // if the member is SET or MOVE then call the assignDataTypes() method on that 
    if(pProcDivItem == NULL) return;
    switch(pProcDivItem->itype) {
        case CB_PD_STOP:
            // Nothing to do;
            break;
        case CB_PD_SET: {
            CobStmtSet * tmpset = (CobStmtSet *) pProcDivItem;
            tmpset->assignDataTypes();
            break;
        }
        case CB_PD_MOVE: {
            CobStmtMove * tmpmove = (CobStmtMove *) pProcDivItem;
            tmpmove->assignDataTypes();
            break;
        }
        case CB_PD_IFELSE: {
            CobStmtIfElse * tmpifelse = (CobStmtIfElse *) pProcDivItem;
            backtrack(tmpifelse->getThenStatements());
            backtrack(tmpifelse->getElseStatements());
            break;
        }
        case CB_PD_EVALUATE: {
            CobStmtEvaluate * tmpeval = (CobStmtEvaluate *) pProcDivItem;
            backtrack(tmpeval->getStatements());
            break;
        }
        case CB_PD_PERFORM: {
            CobStmtPerform * tmpperf = (CobStmtPerform *) pProcDivItem;
            backtrack(tmpperf->getStatements());
            break;
        }
        case CB_PD_SEARCH: {
            CobStmtSearch * tmpsearch = (CobStmtSearch *) pProcDivItem;
            backtrack(tmpsearch->getStatements());
            break;
        }
        case CB_PD_READ: {
            CobStmtRead * tmpread = (CobStmtRead *) pProcDivItem;
            backtrack(tmpread->getAtEndStatements());
            backtrack(tmpread->getNotAtEndStatements());
            backtrack(tmpread->getInvalidKeyStatements());
            backtrack(tmpread->getNotInvalidKeyStatements());
            break;
        }
        case CB_PD_WRITE: {
            CobStmtWrite * tmpwrite = (CobStmtWrite *) pProcDivItem;
            backtrack(tmpwrite->getInvalidKeyStatements());
            backtrack(tmpwrite->getNotInvalidKeyStatements());
            break;
        }
        case CB_PD_DELETE:
            break;
        case CB_PD_RETURN:
            break;
//        default:
//            break;
    }
    
    list <CobProcDivItem *> children = pProcDivItem->getItemList();
    if(! children.empty()) {
        list<CobProcDivItem *>::iterator i;  
        for(i = children.begin(); i != children.end(); ++i ){
            if((*i) != NULL) {
                CobProcDivItem * item = (CobProcDivItem *)(*i);
                backtrack(item);
            }
        }
    }
}

void CobProcedureDivision::generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass){
// the declaratives are routines that handle the error situations. Deferred to the next version.
//    CobDeclaratives * decl = pprocdiv->getDeclaratives();
    stopFound = 0;
    // Handle the backtrack     
    backtrack(cbProcDivItem);
    
    // if this is the starting file, this class will have the entry point called main. 
    // if not, this class will have a function called as performx that will be called by the
    // callee after creating the instance of this class. 
    JGenConfig * genconf = pgen->genConfiguration();
    string firstfile = genconf->getFirstFile();
    
    JMetaMethod * perfmethod;
    string fname = pfile->getFileName();
    if(boost::iequals(fname, firstfile)){
//    if(firstfile.compare(fname) == 0){
        // this is the first file and the class will have main function. 
        // this is a top level item and would form the main function. 
        // if this is the designated file then the function name would be main, else it would 
        // defined dynamically and passed on to the next part.
        string lmethodname = "main";
        string qualifier = "public static";
        string rettype = "void";
        
        JMetaMethod * lmethod = new JMetaMethod(lmethodname, pmetaclass);
        lmethod->addQualifier(qualifier);
        lmethod->addReturnVal(rettype);
                
        pmetaclass->addMethod(lmethod);
        string argname = "arg";
        string clsname = "String";
        JMetaField * arg = new JMetaField(argname, clsname, true);
        lmethod->addArgument(arg); 

        // creating the instance of class.
        stringstream t;
        t << getJname(pmetaclass->getname().c_str()) << " objinst = new " 
            << getJname(pmetaclass->getname().c_str()) << "();";
        lmethod->addStatement(t.str());
        t.str(string()); t.clear();
        
        t << "objinst.perform();";
        lmethod->addStatement(t.str());
        t.str(string()); t.clear();
        
    }
    // performx method for both the cases.
    // Check first if it is already created by local storage section or someone else. 
    perfmethod = pmetaclass->getMethod(string("perform"));
    if(perfmethod == NULL) {
        perfmethod = new JMetaMethod(string("perform"), pmetaclass);
        pmetaclass->addMethod(perfmethod); 
    }    
    if(cbProcDivItem) {
        cbProcDivItem->gen(pfile, pgen, pmetaclass, perfmethod, true, 0, NULL);
    }
}
CobProcedureDivision::~CobProcedureDivision() {
    if(ucr != NULL) delete_use_chain_return(ucr);
    if(cbDeclarative != NULL) delete cbDeclarative;
    if(cbProcDivItem != NULL) delete cbProcDivItem;
}
