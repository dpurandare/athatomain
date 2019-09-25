/*
 * File: CobEnvironmentDivision.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 12:27:28 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 12:18 PM
 */

#ifndef COBENVIRONMENTDIVISION_H
#define	COBENVIRONMENTDIVISION_H

#include "CobObject.h"
#include "CobConfigurationSection.h"
#include "CobInputOutputSection.h"
#include <list>
using namespace std;
class CobInputOutputSection;

class CobEnvironmentDivision : public CobObject { 
public:
    CobEnvironmentDivision();
    CobEnvironmentDivision(void * plst);
    CobEnvironmentDivision(const CobEnvironmentDivision& orig);
    CobConfigurationSection     * getConfigSection();
    CobInputOutputSection       * getInputOutputSection();  
    void dump();
    void dump(int plevel);
    virtual ~CobEnvironmentDivision();
private:
    CobConfigurationSection     * cbConfigSection = NULL;
    CobInputOutputSection       * cbInputOutputSection = NULL;
    list <void *>               * envitemlst = NULL;    
};

#endif	/* COBENVIRONMENTDIVISION_H */
