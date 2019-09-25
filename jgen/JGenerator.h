/*
 * File: JGenerator.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:02:53 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 22, 2014, 12:15 AM
 */

#ifndef JGENERATOR_H
#define	JGENERATOR_H

#include "JGeneratorEnvironment.h"
#include "../ast/CobProject.h"
#include "JMetaClass.h"
#include "JMetaMethod.h"
#include "JMetaField.h"
#include "JBuildFileGenerator.h"
//#include "../global.h"
#include <list>
using namespace std;

class CobProject;

class JGenerator {
public:
    JGenerator();
    JGenerator(CobProject * pprj, string pConfigFile);
    void generate();
    void addclass(JMetaClass * pmetaclass);
    void dumpclasses();
    CobProject * getProject();
    JGeneratorEnvironment * getEnvironment();
    JGenConfig * genConfiguration();
    JMetaClass * findClass(string pname);
    virtual ~JGenerator();
private:
    CobProject              * cbPrj = NULL;
    string                  configFile;
    JGenConfig              * cbConfig = NULL;
    JGeneratorEnvironment   * cbGenEnv = NULL;
    JBuildFileGenerator     * cbBldFileGen = NULL;
    list <JMetaClass *>     * classlst = NULL;
};

#endif	/* JGENERATOR_H */

/*
Generation mechanism:


Project: will have the folder in the destination. 

    Environment Settings:
    Will be read from the setting file or will be passed by the caller 
    in the form of an Object. 

    Generation configuration: such as which sections will become classes 
    which paragraphs will be classes, which ones will be flattened out. 
    any other generation specific configuration that governs various aspects of generation
    will be read from the file or will come form the UI with possible serialization.

    
    Will read the configuration form the configuration file.


    File - each file will generate into a Class.

        - Identification Division: will define the preamble of the classes:This information 
        will be used in the header comment. 
        - The header could be taken from the template.
        - Function Division will have the same treatment as that for Identification Div
        - Every Nested Program results into separate File object and will be treated 
 *        as a fully qualified File object
 *      - Nested programs may have public static void main() however 
 *        it should be possible to instantiate it through appropriate constructor 
 * 
 *      Identification Division
 *      - Identification Division items are used in the header
 *      - The generated File Name is taken from the Identification Division "Program Name"
        
 *      Environment Division:
 *          - Configuration Section:
 *          The Source and Object Comp clauses could safely be ignored at this point
 *          Special names: may be used. Alternatively some more such items could 
 *              be read from generation configuration
 *          - Input-Output Section:
 *              File Control : the file definitions are translated into the file-object
 *                      The first version will be a simplified version for the sequential access
 *              I-O Control  : Need more investigation (handle in version 15
 *      Data Division:
 *          - File Section: 
 *              - For each FD-SD The minimal options set to be xmplemented. 
 *              - For each top level item there would be a separate Data field definition 
 *                      - the field definition could be hierarchic.
 *                      - The hierarchy should be maintained 
 *              - The special level records should be created as separately and not as list.
 *                  
 *              - The name of the File Object and that of the record should have corelation. 
 *          - Working storage division 
 *              - The fields should have the same treatment as that for the File Section
 *          - Defer the Linkage Section, Communication Section and Screen section for now. 
 *              - For now the field description should be treated in the same manner as that for the 
 *                File Section.

 * Reflection in action in generation:
 *      for now only class, method and fields will be used. 
 *      Following hierarchy could be adopted
 *      Assembly-Package
 *              Module-Class
 *                      Constructor
 *                      Method
 *                      Field   (http://msdn.microsoft.com/en-us/library/system.reflection.fieldinfo.aspx)
 *                      Event
 *                      Property (Public access for the fields)
 */