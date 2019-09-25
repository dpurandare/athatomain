/*
 * File: CobConfigurationSection.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 12:21:33 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:56 PM
 */

#ifndef COBCONFIGURATIONSECTION_H
#define	COBCONFIGURATIONSECTION_H
#include "CobObject.h"
#include <list>
#include "../procglobal.h"
using namespace std;

class CobConfigurationSection : public CobObject {
public:
    CobConfigurationSection();
    CobConfigurationSection(void * plst);    
    CobConfigurationSection(const CobConfigurationSection& orig);
    void dump();
    void dump(int plevel);
    virtual ~CobConfigurationSection();
private:
    list <void *> * cbConfigSecOptList = NULL; // struct _config_section_option
    // Source Computer
    char * source_comp_name = NULL;
    int debug_mode;
    // Object Computer
    struct _object_computer_clauses * obj_comp_clause = NULL;
    // Special Names
    char * currency_sign = NULL;
    int decimaliscomma;
    void * library_items = NULL;
    bool repository_exists;
};

#endif	/* COBCONFIGURATIONSECTION_H */

