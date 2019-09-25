/*
 * File: CobProject.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:20:41 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 13, 2013, 12:56 PM
 */

#ifndef COBPROJECT_H
#define	COBPROJECT_H

#include "CobFile.h"
#include "CobObject.h"
#include "../jgen/JGenerator.h"
#include <list>

using namespace std;
class JGenerator;
class CobFile;

class CobProject : public CobObject{
public:
    CobProject();
    CobProject(void * pfileobjlst);
    int addCobFile(CobFile * cobfile);
    void * getFileList();
    void dump();
    void dump(int plevel);
    void generate(JGenerator * pgen);
    virtual ~CobProject();
private:
    //list <CobFile *> * lst_cobFiles;
    list <void *> * lst_cobFiles = NULL;
    // the void * has to be typecasted back.
public:
    string projectname;
    string prjconfig;
};

#endif	/* COBPROJECT_H */

// project should manage project configuration, generator should manage generator config and buildconfig
// names of files:
//        <projectname>.prj
//        project.cfg
//        gen.cfg
//        build.cfg
// details of the files: 
/* <projectname>.prj
        - build flags
 *              cobol file format : default 'free' could be 'fixed'
 *              cobol variant: not required now. 
        - input files

 * <projectname>/<config>
 *      default.cfg:
 *              Language = Java
 *              prefix_id = NULL
 *              prefix_class = NULL
 *              
 *      gen.cfg :
 *              Language
 *              AliasList
 *              optimations : default - off 
 *              
 *              Names of classes : paragraphs and sections to be made classes
 *                      default : all will be functions unless stated 
 *              Names of inline : para and sections those will be converted to inline
 *              prefix_id
 *              prefix_class
 *              Entry point file name
 *              Generated file header strings
 *              package or assembly name
 *
*/    
