/*
 * File: CobParagraphDeclaration.cpp
 * Created Date: Friday May 2nd 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday May 2nd 2014 12:01:03 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:51 PM
 */

#include "CobParagraphDeclaration.h"
#include "../cobmain.h"

CobParagraphDeclaration::CobParagraphDeclaration(char * pname) {
    para_name.append(pname);
}

CobParagraphDeclaration::CobParagraphDeclaration(const CobParagraphDeclaration& orig) {
}

void CobParagraphDeclaration::dump(){
}

void CobParagraphDeclaration::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");

    cout << tabstr << "Paragraph : " << para_name ;
    cout << "{\n";
    CobProcDivItem::dump(plevel+1);
    cout << tabstr << "}\n";    
}
void CobParagraphDeclaration::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    // default behavior. Paragraph will be converted to a void method
    // 1. create new method 
    // 2. add the method to the class. 
    // 3. add the method call to the pmethod
    // 4. walk the children, the children will add statements in the pmethod. 
    
    // 1.
    JMetaMethod * lmethod = new JMetaMethod(para_name, pclass);
    string qualifier = "public";
    lmethod->addQualifier(qualifier);
    string rettype = "void";
    lmethod->addReturnVal(rettype);
    // 2.
    pclass->addMethod(lmethod);

    stringstream t;
    if(stopFound == 0 && pisfirst == true) {
        t << getJname(para_name.c_str()) << "();";
        pmethod->addStatement(t.str());
    } else {
        t << "//" << getJname(para_name.c_str()) << "();";
        pmethod->addStatement(t.str());        
    }
    
    if(lmethod->getSterile()) {
        pmethod->setSterile(true);
    }    
    // 4. 
    CobProcDivItem::gen(pfile, pgen, pclass, lmethod, false, 0, s);
    
}
void CobParagraphDeclaration::proc_xml(pugi::xml_node parent){
    pugi::xml_node paranode = parent.append_child(pugi::node_element);
    paranode.set_name("paragraph");
    pugi::xml_attribute paraname = paranode.append_attribute("name");
    paraname.set_value(para_name.c_str());
    CobProcDivItem::proc_xml(paranode);
}
CobParagraphDeclaration::~CobParagraphDeclaration() {
    // nothing to delete.
}

