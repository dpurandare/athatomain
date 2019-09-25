/*
 * File: CobFileSection.cpp
 * Created Date: Sunday April 27th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday April 27th 2014 11:52:40 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:46 PM
 */

#include "CobFileSection.h"
#include <cstdlib>
#include <boost/algorithm/string.hpp>

CobFileSection::CobFileSection() {
    cobobjid = CB_FILE_SECTION;
}

CobFileSection::CobFileSection(void * pfiledescrlst){
    cobobjid = CB_FILE_SECTION;
    filedescrlst = (list <void *> *) pfiledescrlst;
    // separate FD and SD and create two maps separately. 
    fdlst = NULL;
    sdlst = NULL;
    fdsd_map = NULL;
    processlist();
}

void CobFileSection::processlist(){
    if(filedescrlst == NULL) return;

    fdlst = new list <CobFileDescription *>;
    sdlst = new list <CobFileDescription *>;
    fdsd_map = new map <string, CobFileDescription *>;
    
    list <void *>::iterator i;
    for(i = filedescrlst->begin(); i != filedescrlst->end(); ++i) {
        CobFileDescription * filedescr = (CobFileDescription *)(*i);
        if(filedescr != NULL){
            if(filedescr->getType() == CB_FD_FD){
                fdlst->push_back(filedescr);
            } else if(filedescr->getType() == CB_FD_SD) {
                sdlst->push_back(filedescr);
            }
            std::pair<string, CobFileDescription *> lpair;
            lpair.first = filedescr->getFDSDName();
            lpair.second = filedescr;
            fdsd_map->insert(lpair);
        }
    }
}

void * CobFileSection::getFDList(){
    return (void *)fdlst;
}
void * CobFileSection::getSDList(){
    return (void *)sdlst;
}

CobFieldRecord * CobFileSection::findField(char * pname){
    // find in the FD List.
    CobFieldRecord * fdrecord = NULL;
    list<void *>::iterator i;  
    for(i = filedescrlst->begin(); i != filedescrlst->end(); ++i ){
        CobFileDescription * fdescr = (CobFileDescription *)(*i);
        CobFieldRecordList *fdlist = fdescr->getFieldRecordList();
        fdrecord = fdlist->findfield(pname);
        if(fdrecord != NULL) break;
    }        
    return fdrecord;
}

CobFileDescription * CobFileSection::findFileDescription(string pname){
    CobFileDescription * ret = NULL;
    map <string, CobFileDescription *>::iterator searchitem = fdsd_map->find(pname);
    if(searchitem != fdsd_map->end()) {
        ret = (*searchitem).second;
        //std::cout << "Found " << search->first << " " << search->second << "\n";
    }
    return ret;
}

CobFileDescription * CobFileSection::findFileDescriptionForField(string pname){
    CobFileDescription * ret = NULL;    
    list <CobFileDescription *>::iterator i;
    for(i = fdlst->begin(); i != fdlst->end(); i++){
        ret = (CobFileDescription *)(*i);
        if(boost::iequals(ret->getFDSDName(), pname)) {
            break;
        } else {
            ret = NULL;
        }
//            
//        if(ret->checkFieldExists(pname)){
//            break;
//        }
    }
    return ret;
}

void CobFileSection::dump(){
    cout << "File Section : \n";
    list<void *>::iterator i;  
    for(i = filedescrlst->begin(); i != filedescrlst->end(); ++i ){
        ((CobFileDescription *)(*i))->dump();
    }    
//    map<string, CobFileDescription *>::iterator it;
//    for( map<string, CobFileDescription *>::iterator it=fdsd_map->begin(); 
//                it!=fdsd_map->end(); ++it) {
//        // list <CobFieldRecord *> * fieldLstTmp =;
//        CobFileDescription * tmp = (it)->second;
//        tmp->dump(); 
//    }
}
void CobFileSection::dump(int plevel){
    
}
void CobFileSection::generate(CobFile * pfile, JGenerator * pgen, JMetaClass * pmetaclass){
    // handle the FD first.    
    // it is for the line sequential file right now. 
    // for each of the FD item, create the DataItem class that has all that hierarchy.
    // for the DataItem class created, add a field entry in the mainclass (pmetaclass in this case)
    // check for any initialization required elsewhere. 
    pmetaclass->addextInclude(string("java.io.*"));
    pmetaclass->addextInclude( string("com.athato.fileio.*") );
    pmetaclass->addextInclude( string("com.athato.util.*") );

    list <CobFileDescription *>::iterator i;
    for(i = fdlst->begin(); i != fdlst->end(); ++i) {
    //FD ITEM
        CobFileDescription * fditem = (*i);        
        if(fditem != NULL){
            fditem->generate(pfile, pgen, pmetaclass);
        }
    }   
    //SD ITEMS - revisit when handling the sort. 
    // TBD: this is done for the first time. 
    list <CobFileDescription *>::iterator j;
    for(j = sdlst->begin(); j != sdlst->end(); ++j) {
    //FD ITEM
        CobFileDescription * sditem = (*j);        
        if(sditem != NULL){
            sditem->generate(pfile, pgen, pmetaclass);
        }
    }       
}

CobFileSection::~CobFileSection() {
    if(filedescrlst != NULL) {
        list<CobFileDescription *>::iterator i;  
        list<CobFileDescription *> * lst = (list<CobFileDescription *> *)filedescrlst;
        for(i = lst->begin(); i != lst->end(); ++i ){
            delete (CobFileDescription *)(*i);
        }
        delete filedescrlst; 
    }
    // delete the fdlst and sdlst these are just structural elements
    // implement ... check if the list delete deletes the content as well. 
    // these delete cause segmentation fault. Check why. 
    if(fdlst) delete fdlst;
    if(sdlst) delete sdlst;
    
    // just delete the map 
    if(fdsd_map) delete fdsd_map;
}

// Map sample. storing and accessing the key-value in Map.
//#include <iostream>
//#include <map>
//#include <unordered_map>
// 
//int main()
//{  
//    std::map<int,char> map_ex;
//    map_ex.insert({{1,'a'},{2,'b'}});
//    std::map<int,char>::const_iterator search = map_ex.find(1);
//    if(search != map_ex.end()) {
//        std::cout << "Found " << search->first << " " << search->second << "\n";
//    }
//    else {
//        std::cout << "Not found" << std::endl;
//    }
//    return 0;
//}
//
//output:
//Found 1 a


//#include <string>
//#include <iostream>
//#include <map>
// 
//int main()
//{
//    std::map<std::string,int> my_map;
//    my_map["x"] =  11;
//    my_map["y"] = 23;
// 
//    auto it = my_map.find("x");
//    if (it != my_map.end()) std::cout << "x: " << it->second << "\n";
// 
//    it = my_map.find("z");
//    if (it != my_map.end()) std::cout << "z1: " << it->second << "\n";
// 
//    // Accessing a non-existing element creates it
//    if (my_map["z"] == 42) std::cout << "Oha!\n";
// 
//    it = my_map.find("z");
//    if (it != my_map.end()) std::cout << "z2: " << it->second << "\n";
//}
//Output:
//x: 11
//z2: 0
//
//      summary: do not use the [ ] operator with map. It may give wrong results. 


