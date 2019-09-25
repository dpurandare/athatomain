/*
 * File: CobProcDivItem.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:20:04 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 *
 * This is the base class for all the PROCEDURE DIVISION items
 * and will handle the storage retrieval related activities. 
 * 
 * Created on December 23, 2013, 5:11 PM
 */

#ifndef COBPROCDIVITEM_H
#define	COBPROCDIVITEM_H
#include "../ast/CobObject.h"
#include "../global.h"
//#include "../ast/CobFile.h"
#include "../jgen/JMetaClass.h"
#include "../jgen/JMetaMethod.h"
#include <list>
#include <iostream>
#include "../analysis/pugixml.hpp"
#include "../analysis/pugiconfig.hpp"
class CobFile;

using namespace std;

class CobProcDivItem : public CobObject{
//class CobProcDivItem {
public:
    CobProcDivItem();
    CobProcDivItem(const CobProcDivItem& orig);
    virtual void add_item(CobProcDivItem * pItem);
    virtual CobProcDivItem * get_item(int index);
    virtual void dump();
    virtual void dump(int plevel);
    virtual void gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
             JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s);
    virtual list <CobProcDivItem *> getItemList();
    virtual void proc_xml(pugi::xml_node parent);
    virtual ~CobProcDivItem();
    int itype;
    int itemcount;
private:
    list <CobProcDivItem *> item_list;
};

#endif	/* COBPROCDIVITEM_H */

