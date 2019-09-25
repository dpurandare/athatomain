/*
 * File: JGenConfig.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 4:01:38 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on February 25, 2014, 12:28 PM
 */

#ifndef JGENCONFIG_H
#define	JGENCONFIG_H
#include <list>
#include <map>
#include <string>
#include "../global.h"
using namespace std;

class JGenConfig {
public:
    JGenConfig(string pconfigfile);
    void loadConfig(string pconfigfile);
    bool checkIfClass(string pname);
    virtual ~JGenConfig();

    // for entry point 
    static const int ENTRY_FIRST_SECT_PARA_STMT = 1;
    static const int ENTRY_SPECIFIC_NODE        = 2;

    // main file in COBOL file set.
    static const int FIRST_FILE_FIRST_INLIST    = 1;
    static const int FIRST_FILE_SPECIFIED       = 2;
    
    // generation language
    static const int LANG_JAVA                  = 1;
    static const int LANG_CSHARP                = 2;
    static const int LANG_CPP                   = 3;
    
    static const int SECTION_IS_METHOD          = 1; // if not defined
    static const int SECTION_IS_CLASS           = 2;
    static const int SECTION_IS_FLATNED         = 3;
    
    static const int PARA_IS_METHOD             = 1; // if not defined
    static const int PARA_IS_CLASS              = 2;
    static const int PARA_IS_FLATEND            = 3;
    
    string      getIDPrefix();
    string      getClassPrefix();
    
    string      getPackageName();
    
    int         getEntryPointCode();
    string      getEntryPoint();
    
    int         getFirstFileCode();
    string      getFirstFile();
    // for time being, the very first file in the parse order.
    void        setFirstFile();
    // Check if this ID name needs a separate class in generated code. 
    bool        checkIfClassCandidate(string pID);
    
private:
    // what is the target language
    int genlanguage;
    
    string packagename;
    
    // which nodes form classes in generated code.
    // names of sections and paragraphs that could be broken out as separate classes. 
    list <string> * classlst = NULL;
    
    // what is the name alias map. these names will be used for display and print
    // also the alias names are mangled to handle language specific issues.
    map <string, string> * aliasmap = NULL;
    
    // what is the prefix for the field names, method names 
    string idprefix;
    
    // what is prefix for the class
    string classprefix;
    
    // what is program entry point
    int entryPoint;
    string entrypointid;
    
    // what is the main file in the project
    int firstFile;
//    string mainfile;
    string mainfile = "Multiplier";    
};

#endif	/* JGENCONFIG_H */

/*int main(int argc, char** argv) {
    ConfigIO cfg("config.cfg");

    bool exists = cfg.keyExists("car");
    std::cout << "car key: " << std::boolalpha << exists << "\n";
    exists = cfg.keyExists("fruits");
    std::cout << "fruits key: " << exists << "\n";

    std::string someValue = cfg.getValueOfKey("mykey");
    std::cout << "value of key mykey: " << someValue << "\n";
    std::string carValue = cfg.getValueOfKey("car");
    std::cout << "value of key car: " << carValue << "\n";
    std::string fruitValue = cfg.getValueOfKey("fruits");
    std::cout << "value of key fruits: " << fruitValue << "\n";
    std::string doubleVal = cfg.getValueOfKey("double");
    std::cout << "value of key double: " << doubleVal << "\n\n";
    std::string intval = cfg.getValueOfKey("intval");
    std::cout << "value of key int: " << intval << "\n\n";

//	std::cin.get();
    return 0;
}*/