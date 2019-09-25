/*
 * File: CobFieldRecordList.cpp
 * Created Date: Tuesday August 26th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Tuesday August 26th 2014 6:37:25 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on January 28, 2014, 8:47 PM
 */

#include "CobFieldRecordList.h"
#include <boost/algorithm/string.hpp>

CobFieldRecordList::CobFieldRecordList() {
}

CobFieldRecordList::CobFieldRecordList(void * plst){
    origlst = (list <void *> *)plst;
    fields = new list <CobFieldRecord * >;
    if(plst != NULL){
        list<void *> * lst = (list<void *> *)plst;
        list<void *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i ){
            if(*i) add_item((CobFieldRecord *)(*i));
        }            
    }
    // assign the redefines and renames records to the ones where it is defined...
    assign_redf_rename();
}

void * CobFieldRecordList::getFieldRecordList(){
    return fields;
}

CobFieldRecord * CobFieldRecordList::findfield(char * name){
    CobFieldRecord * rec =  NULL;
    if(origlst != NULL){
        list<void *>::iterator i;
        for(i = origlst->begin(); i != origlst->end(); ++i ){
            CobFieldRecord * tmp = (CobFieldRecord *)(*i);
            string s2 = tmp->recordname;
//            if(s2.compare(name) == 0){
//            if(boost::iequals(s2, name)) {
            if( strcasecmp(name, tmp->recordname) == 0) {
                rec = tmp;
                break;
            }
        }
    }
    return rec;
}
string CobFieldRecordList::getFirstRecordName(){
    stringstream s;
    // it is assumed that for each FD SD there is only one top level field. 
    
    list<CobFieldRecord *>::iterator i;
    for(i = fields->begin(); i != fields->end(); ++i){
        CobFieldRecord * tmp = (CobFieldRecord *)(*i);
        s << tmp->recordname;
        break;
    }
    return s.str();
}

void CobFieldRecordList::assign_redf_rename(){
    if(origlst != NULL){
        list<void *>::iterator i;
        for(i = origlst->begin(); i != origlst->end(); ++i ){
            CobFieldRecord * tmp = (CobFieldRecord *)(*i);
            if(tmp->redefines != NULL) {
                tmp->redeffld = findfield(tmp->redefines);
            }
            if(tmp->rename != NULL){
                tmp->renfld = findfield(tmp->rename);
            }
            if(tmp->renamethru != NULL) {
                tmp->renthrufld = findfield(tmp->renamethru);
            }
        }
    }    
}

int CobFieldRecordList::add_item(CobFieldRecord * fld){
    static int fillercount = 1;
    
    stringstream  fillerstr;
    fillerstr << fillercount++;
    
    if(fld == NULL) return -1;
    
    int ret = 0;
    CobFieldRecord * trav = NULL;
    bool found = false;
    
    // construct the item with level and name
    CobFieldRecord * currentItem = fld;
    int plevel = fld->level;
    
    // handle the levels here ...
    if(plevel == 66){
        currentItem->parent = prev;
        //return ret;
    }
    if(plevel == 88){
        currentItem->parent = prev;
        //return ret;
    }
//    * 66: data name renames: renamed field is added to the field as
//              renfld and renthrufld.     
//    * 77: Top level items : Does not need separate treatment.      
//    * 78: constant name declaration : get examples
//      possibly should appear in the WS Section. Does not need any separate treatment
//      no semantic check necessary as those should be carried out by the COBOL compiler.     
//    * 88: condition name declaration : get examples. 
//      Does not matter where it appears. Handled as the hierarchy item right now.
//      not given separate treatment.
//      
//      implement ... revisit when required with examples. 
    
    // if the list is empty push this item to list
    if (fields->empty()){
        currentItem->parent = NULL;
        currentItem->qualifiedname.append(getJname(currentItem->recordname)); // new addition...
        fields->push_back(currentItem);
        prev = currentItem;
        prevlevel = plevel;
        
    } else {
        if( plevel > prevlevel) {
            // add as child
            currentItem->parent = prev;
            currentItem->qualifiedname.append(currentItem->parent->qualifiedname);
            currentItem->qualifiedname.append("_");
            currentItem->qualifiedname.append(getJname(currentItem->recordname));
            prev->children->push_back(currentItem);
            prev = currentItem;
            prevlevel = plevel;
        } else if ( plevel == prevlevel) {
            // add as sibling to the parent
            if(prev->parent != NULL){
                currentItem->parent = prev->parent;
                currentItem->qualifiedname.append(currentItem->parent->qualifiedname);
                currentItem->qualifiedname.append("_");
                currentItem->qualifiedname.append(getJname(currentItem->recordname));
                prev->parent->children->push_back(currentItem);
                prev = currentItem;
                prevlevel = plevel;
            } else { 
                // add as sibling to the big list
                currentItem->parent = NULL;
                currentItem->qualifiedname.append(getJname(currentItem->recordname)); // new addition...
                fields->push_back(currentItem);
                prev = currentItem;
                prevlevel = plevel;
            }
        } else if (plevel < prevlevel){
            // traverse back the parents till a parent that has level no less 
            // than plevel and add currentItem as it's child. 
            // if such parent is NULL then just add this item to the fields. 
            trav = prev->parent;
            do {
                if(trav != NULL){
                    if( trav->level < plevel) {
                        found = true;
                        trav->children->push_back(currentItem);
                        currentItem->parent = trav;
                        currentItem->qualifiedname.append(currentItem->parent->qualifiedname);
                        currentItem->qualifiedname.append("_");
                        currentItem->qualifiedname.append(getJname(currentItem->recordname));
                        prev = currentItem;
                        prevlevel = plevel;
                        break;
                    }
                    trav = trav->parent;
                }        
            } while (!found && trav != NULL);
            // if still you did not find the parent, means root level item.
            if( !found || trav == NULL ){
                currentItem->parent = NULL;
                currentItem->qualifiedname.append(getJname(currentItem->recordname)); // new addition...
                fields->push_back(currentItem);
                prev = currentItem;
                prevlevel = plevel;
            }
        }
    }
    string flstr(currentItem->recordname);
    if( (boost::iequals(flstr,"FILLER")) || (boost::iequals(flstr, "filler"))) {
        if(currentItem->children->empty())
            currentItem->qualifiedname.append(fillerstr.str());
    }
    return ret;
}
void CobFieldRecordList::dump(){
    if(fields == NULL) return;
    list<CobFieldRecord *>::iterator i;
    for(i = fields->begin(); i != fields->end(); ++i ){
        dump(0, (*i));
    }            
}
void CobFieldRecordList::dump(int plevel){
    if(fields == NULL) return;
    list<CobFieldRecord *>::iterator i;
    for(i = fields->begin(); i != fields->end(); ++i ){
        dump(plevel, (*i));
    }     
}
void CobFieldRecordList::dump(int tabs, CobFieldRecord * fld){
    if(fld == NULL) return;

    string tabstr = "";
    
    for(int i = 0; i < tabs; i++) tabstr.append("    ");
        cout << tabstr; fld->dump();
    
    list<CobFieldRecord *>::iterator i;
    for(i = fld->children->begin(); i != fld->children->end(); ++i ){
        dump(tabs + 1, (*i));
    }        
}

// the wprking storage section does not use this service as it has to create the separate 
// data class and hence the handling is kept in the working storage class itself. 

void CobFieldRecordList::generate(CobFile * pfile, int pcaller, JGenerator * pgen, JMetaClass * pmetaclass, 
                                  JMetaClass * parentclass, JMetaMethod * pmethod, string &pobjname) {
    list <CobFieldRecord *> * fldlst = (list <CobFieldRecord *> *) fields;
    list <CobFieldRecord *>::iterator j;
    int i = 0;
    for(j = fldlst->begin(); j != fldlst->end(); ++j){
        CobFieldRecord * fldrecord = (*j);
        if(fldrecord != NULL){
            // level 78 and 88 fields should be generated similar manner. 78 level fields are 
            // constants and 88 are used for conditions. Their values do not change in execution
            // at hence public static at dataclass level. 
            // handled in the FieldRecord             
            fldrecord->setDecoratedName(pobjname);
            fldrecord->generate(pfile, pcaller, pgen, pmetaclass, parentclass, pmethod, string(), pobjname);
        }                    
    }
// cob17 - Only for test. Need to be commented.
//    list <CobFieldRecord *> * lst = (list <CobFieldRecord *> *)  origlst;
//    for(j = lst->begin(); j != lst->end(); ++j){
//        CobFieldRecord * fldrecord = (*j);
//        cout << "Name: " << fldrecord->recordname << " | QN: " <<
//            fldrecord->qualifiedname << " | DN: " << fldrecord->decoratedName << "\n";
//    }
}

void CobFieldRecordList::addMainFieldsToRecord(string precordname, JMetaMethod * pinitmethod){
    list <CobFieldRecord *> * fldlst = (list <CobFieldRecord *> *)fields;
    list <CobFieldRecord *>::iterator i;
    int j = 1;
    char buffer[10];
    for(i = fldlst->begin(); i != fldlst->end(); ++i){
        string mainfield;
        stringstream s;
        s << precordname << ".addField(" << "fld_" << j++ << ");";
        mainfield.append(s.str());
        pinitmethod->addStatement(mainfield);
    }
}

CobFieldRecordList::CobFieldRecordList(const CobFieldRecordList& orig) {
}

CobFieldRecordList::~CobFieldRecordList() {
    delete fields;
}

