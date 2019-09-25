/*
 * File: CobSectionDeclaration.cpp
 * Created Date: Monday April 28th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Monday April 28th 2014 1:57:13 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:49 PM
 */

#include "CobSectionDeclaration.h"

CobSectionDeclaration::CobSectionDeclaration(){
    
}
CobSectionDeclaration::CobSectionDeclaration(char * pname, struct valueType * popt_info) {
    section_name.append(pname);
    opt_info = popt_info;
    // this is rediculous, need trace from lexer-parser for pname. 
    delete pname; 
}

CobSectionDeclaration::CobSectionDeclaration(const CobSectionDeclaration& orig) {
}

void CobSectionDeclaration::dump(){
}
void CobSectionDeclaration::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");

    cout << tabstr << "Section : ";
    if(! section_name.empty())
        cout << getJname(section_name.c_str());
    if(opt_info != NULL){
        cout << ", "; 
        dump_value(opt_info);
    }
    cout << "{\n";
    CobProcDivItem::dump(plevel+1);
    cout << tabstr << "}\n";

}
void CobSectionDeclaration::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    // read the options: 
    // if the section is is a class: implement ...
    // 1. create new class : say lclass 
    // 2. create a new method with section name : say lmethod
    // 3. add method to class: lmethod to lclass
    // 4. add method call to the param method: 
    //    - create instance of lclass in pmethod
    //    - add to pmethod: call lclass instance . lmethod 
    // 5. walk the children and add the statements to the lmethod 
    //
    // if the section is a method : default behavior
    // 1. create a new method: say lmethod
    // 2. walk the children and add the statements to lmethod.
    // 3. if the pmethod is not sterile, add the method call in the pmethod. 
    //    - if the method has anything that has termination, the method becomes 
    //      sterile and no child can be added. Semantically, this method has reached 
    //      it's end.
    // 4. Add lmethod to pclass.
    // 1.
    JMetaMethod * lmethod = new JMetaMethod(section_name, pclass);
    // 4.
    pclass->addMethod(lmethod);
    // 2.
    CobProcDivItem::gen(pfile, pgen, pclass, lmethod, false, 0, s);
    // 3.
    if(pmethod->getSterile() == false){
        stringstream t;
        t << getJname(section_name.c_str()) << "();";
        pmethod->addStatement(t.str());
    }
    if(lmethod->getSterile()) {
        pmethod->setSterile(true);
    }
}
void CobSectionDeclaration::proc_xml(pugi::xml_node parent){
    pugi::xml_node secnode = parent.append_child(pugi::node_element);
    secnode.set_name("section");
    pugi::xml_attribute secname = secnode.append_attribute("name");
    secname.set_value(section_name.c_str());
    CobProcDivItem::proc_xml(secnode);    
}

CobSectionDeclaration::~CobSectionDeclaration() {
    if(opt_info != NULL) 
        delete_value(opt_info);
}

