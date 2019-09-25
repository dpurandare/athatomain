/*
 * File: CobSentence.cpp
 * Created Date: Friday April 4th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 4th 2014 9:07:50 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 23, 2013, 9:09 PM
 */

#include "CobSentence.h"

CobSentence::CobSentence() {
}

CobSentence::CobSentence(const CobSentence& orig) {
}

void CobSentence::dump(){
}
void CobSentence::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    //cout << tabstr;
    CobProcDivItem::dump(plevel);    
}
void CobSentence::proc_xml(pugi::xml_node parent){
//    pugi::xml_node sentencenode = parent.append_child(pugi::node_element);
//    sentencenode.set_name("sentence");
//    CobProcDivItem::proc_xml(sentencenode);
    CobProcDivItem::proc_xml(parent);
}
void CobSentence::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    CobProcDivItem::gen(pfile, pgen, pclass, pmethod, false, plevel, s);
}
//CobSentence::~CobSentence() {
//    
//}

