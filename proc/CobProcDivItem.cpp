/*
 * File: CobProcDivItem.cpp
 * Created Date: Thursday April 24th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Thursday April 24th 2014 8:07:21 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 23, 2013, 5:11 PM
 */

#include "CobProcDivItem.h"

CobProcDivItem::CobProcDivItem() :itemcount(0), itype(CB_PD_ITEM) {
}

CobProcDivItem::CobProcDivItem(const CobProcDivItem& orig) {
}
// this is zero based index access...
CobProcDivItem * CobProcDivItem::get_item(int index){
    CobProcDivItem * ret = NULL;
    std::list<CobProcDivItem * >::iterator it = item_list.begin();
    if(item_list.size() > index){
        std::advance(it, index);
        ret = (*it);
    } 
    return ret;
}
void CobProcDivItem::add_item(CobProcDivItem * pItem){
    item_list.push_back(pItem);
    itemcount++;
}
list <CobProcDivItem *> CobProcDivItem::getItemList(){
    return item_list;
}

void CobProcDivItem::dump(){
}
void CobProcDivItem::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    
    if(! item_list.empty()) {
        list<CobProcDivItem *>::iterator i;  
        for(i = item_list.begin(); i != item_list.end(); ++i ){
            if((*i) != NULL) {
                CobProcDivItem * item = (CobProcDivItem *)(*i);
                item->dump(plevel);                
            }
        }    
    }    
}
void CobProcDivItem::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s) {
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");

    if(pisfirst){                
        if(! item_list.empty()) {
            list<CobProcDivItem *>::iterator i;  
            for(i = item_list.begin(); i != item_list.end(); ++i ){
                if((*i) != NULL) {
                    CobProcDivItem * item = (CobProcDivItem *)(*i);
                        item->gen(pfile, pgen, pclass, pmethod, pisfirst, plevel, s);
                        if(item->itype == CB_PD_STOP) break;
                }
            }    
        }                    
    } else {
        // non first items should be treated as normal and the items will decide based 
        // on configuration what is needed. The virtual method mechanism should call the
        // appropriate 
        if(! item_list.empty()) {
            list<CobProcDivItem *>::iterator i;  
            for(i = item_list.begin(); i != item_list.end(); ++i ){
                if((*i) != NULL) {
                    CobProcDivItem * item = (CobProcDivItem *)(*i);
                    item->gen(pfile, pgen, pclass, pmethod, false, plevel, s);
                    if(item->itype == CB_PD_STOP) break;
                }
            }    
        }                    
    }
}
void CobProcDivItem::proc_xml(pugi::xml_node parent){
//    pugi::xml_node procdivitemnode = parent.append_child(pugi::node_element);
//    procdivitemnode.set_name("procDivItem");
    if(! item_list.empty()) {
        list<CobProcDivItem *>::iterator i;  
        for(i = item_list.begin(); i != item_list.end(); ++i ){
            if((*i) != NULL) {
                CobProcDivItem * item = (CobProcDivItem *)(*i);
//                item->proc_xml(procdivitemnode);                
                item->proc_xml(parent);                
            }
        }    
    }        
}
CobProcDivItem::~CobProcDivItem() {
    list<CobProcDivItem *>::iterator i;  
    for(i = item_list.begin(); i != item_list.end(); ++i ){
        delete (*i);
    }
}
