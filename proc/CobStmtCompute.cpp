/*
 * File: CobStmtCompute.cpp
 * Created Date: Monday April 14th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Monday April 14th 2014 10:13:55 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 10:33 PM
 */

#include "CobStmtCompute.h"
#include "../procglobal.h"
#include "../util/genutil.h"

CobStmtCompute::CobStmtCompute() {
}
CobStmtCompute::CobStmtCompute(void * plvallist, int popt_rounded,
                    struct _arithmetic_expression * pexp, int popt_not,
                    void * popt_on_error) {
    lvallist = (list <struct xvaldata *> *)plvallist;
    opt_rounded = popt_rounded;
    expr = pexp; 
    opt_not = popt_not;
    opt_on_error = (struct on_size_error_data *)popt_on_error;
}
CobStmtCompute::CobStmtCompute(const CobStmtCompute& orig) {
}

void CobStmtCompute::dump(){
}
void CobStmtCompute::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Compute statement :\n";
}
void CobStmtCompute::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// Compute statement";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    string exprstr = gen_arithmetic_expression(expr);
    
    list <struct xvaldata *>::iterator i;
    for(i = lvallist->begin(); i != lvallist->end(); ++i){
        struct xvaldata * id = (struct xvaldata *)(*i);
        t << tabstr << gen_arithmaticqty(id) << " = " << exprstr << ";";
        pmethod->addStatement(t.str());
        t.str(string()); t.clear();
    }
    // on error and other stuff. 
    // option 1: 
    //  every statement with such exception will be dumped as try catch block. 
    // option 2:
    //  MetaMethod should have provision for catch block. 
    //  Method - MetaCatch list
    //  MetaCatch - ExceptionType : classname - string
    //      catchBlockStmts : string list
    //  Every method having exception handling code adds this code to the MetaCatch mechanism
    // while dumping the method if the MetaCatch is not empty, 
    //  the whole function body is in try and at the end the MetaCatch is dumped. 
}
void CobStmtCompute::proc_xml(pugi::xml_node parent){
    pugi::xml_node computenode = parent.append_child(pugi::node_element);
    computenode.set_name("compute_statement");
    // TODO    
}
CobStmtCompute::~CobStmtCompute() {
    if(lvallist != NULL) delete_xvallist(lvallist);
    if(expr != NULL) delete_arithmetic_expression(expr);
    if(opt_on_error != NULL) delete_on_error_data(opt_on_error);
}

