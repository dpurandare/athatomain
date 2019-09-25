/*
 * File: CobFieldRecord.cpp
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 1:06:14 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 18, 2013, 1:01 PM
 */

#include "CobFieldRecord.h"
#include <iostream>
#include "../util/genutil.h"
#include <string.h>
#include <boost/algorithm/string.hpp>

CobFieldRecord::CobFieldRecord() {
}

CobFieldRecord::CobFieldRecord(int plevel, char * pnameorfiller, void * poptionlst){
    // initialize
    redefines = NULL;
    pictureclause = NULL;
    dataclauseval = NULL;
    dc_usage = NULL;
    isexternal = 0;
    isglobal = 0;
    sign = 0;   
    occurs = NULL;
    synch = 0;
    justification = 0;
    blank_clause = 0;
    rename = NULL;
    renamethru = NULL;
    redeffld = NULL;
    renfld = NULL;
    renthrufld = NULL;
    
    dataType = 0;
    length = 0;
    decimalplaces = 0;
    category = 0;
    size = 0;
    
// assignments ...
    level = plevel;
    recordname = pnameorfiller;
    dataclauselist = (list <void *> *) poptionlst;

    string s2(recordname); 
//    if( s2.compare("FILLER") == 0) {
    if(boost::iequals(s2, "FIllER")) {
        nameorfiller = CB_FILLER;
    } else {
        nameorfiller = CB_NAME;
    }
    children = new list <CobFieldRecord *>; 
    // process 
    assignopts();
    assignPicItem();
    analysevalues();
    processPicLenSize();
}

CobFieldRecord::CobFieldRecord(const CobFieldRecord& orig) {
}

void CobFieldRecord::analysevalues(){
    valuelist = (list <struct _gnamepair *> *) dataclauseval;
    if(valuelist == NULL) return;
    if(picinfo == NULL) {
        // get possible information of Picture Information. We are keen to know the data type 
        // from value.
        list <struct _gnamepair *>::iterator i;
        for(i = valuelist->begin(); i != valuelist->end(); ++i){
            struct _gnamepair * item = (*i);            
            dataType = item->first->type;
            // some intelligent structure could be thought to handle the array and THRU type of values. 
        }
    } else {
        // check if any other processing is required. 
    }    
}

void CobFieldRecord::assignopts(){
    if(dataclauselist != NULL) {
        list<void *>::iterator i;  
        for(i = dataclauselist->begin(); i != dataclauselist->end(); ++i ){
            struct _dataclause * item = (struct _dataclause *)(*i);
            switch(item->type) {
                case CB_DC_REDEFINE:
                    if (item->redefines != NULL) 
                        redefines = item->redefines;
                    break;
                case CB_DC_PICTURE:
                    if (item->pictureclause != NULL)
                       pictureclause = item->pictureclause;
                    break;
                case CB_DC_VALUE:
                    dataclauseval = item->dataclauseval;
                    break;
                case CB_DC_USAGE:
                    if(item->dc_usage != NULL){
                        dc_usage = item->dc_usage;
                    }
                    break;
                case CB_DC_EXTERN:
                    if(item->isexternal) 
                        isexternal = item->isexternal;
                   break;
                case CB_DC_GLOBAL:
                    if(item->isglobal)
                        isglobal = item->isglobal;
                    break;
                case CB_DC_SIGN:
                    sign = item->sign;
                    break;
                case CB_DC_OCCUR:
                    if(item->occurs != NULL){
                        occurs = item->occurs;
                    }
                    break;
                case CB_DC_SYNCH:
                    synch = item->synch;
                    break;
                case CB_DC_JUSTIFY:
                    justification = item->justification;
                    break;
                case CB_DC_BLANK:
                    blank_clause = item->blank_clause;
                    break;
                case CB_DC_RENAMES:
                    rename = item->renamefld;
                    renamethru = item->renamethru;
                    break;
            }
        }
    }
}
void CobFieldRecord::assignPicItem(){
    if(pictureclause == NULL) {
        picinfo = NULL;
    } else {
        picinfo = construct_picture(pictureclause); 
    }
}
struct _picture_info * CobFieldRecord::getPictureInfo(){
    return picinfo;
}
void CobFieldRecord::dump(){
    cout << level << ":\t";
    cout << qualifiedname << "\t";
    // dump the list 
    if(dataclauselist != NULL) {
        list<void *>::iterator i;  
        for(i = dataclauselist->begin(); i != dataclauselist->end(); ++i ){
            struct _dataclause * item = (struct _dataclause *)(*i);
            switch(item->type) {
                case CB_DC_REDEFINE:
                    if (item->redefines != NULL) 
                        cout << "Redefines : " << (item->redefines) << "\t";
                    break;
                case CB_DC_PICTURE:
                    if (item->pictureclause != NULL)
                       cout << "Picture : " << item->pictureclause << "\t";
                    break;
                case CB_DC_VALUE:
                    dump_gnamepairlst(item->dataclauseval);
                    break;
                case CB_DC_USAGE:
                    if(item->dc_usage != NULL){
                        cout << " Usage: type ";
                        dump_usage_clause_enum(item->dc_usage->usage_enum);
                        cout <<  " val " << item->dc_usage->usage_val;
                    }
                    break;
                case CB_DC_EXTERN:
                    if(item->isexternal) 
                        cout << " EXTERNAL ";
                    break;
                case CB_DC_GLOBAL:
                    if(item->isglobal)
                        cout << " GLOBAL ";
                    break;
                case CB_DC_SIGN:
                    if(item->sign == CB_LEADING) cout << " LEADING ";
                    if(item->sign == CB_TRAILING) cout << " TRAILING ";
                    break;
                case CB_DC_OCCUR:
                    if(item->occurs != NULL){
                        if(item->occurs->multi == 0){ // single
                            cout << " Occurs: " << item->occurs->from << " times "; 
                        } else { // multi
                            cout << " Occurs: " << item->occurs->from;
                            if(item->occurs->to > 0){
                                cout << item->occurs->to << " times ";
                            } else {
                                cout << " times";
                            }
                            if(item->occurs->denepdingon != NULL) {
                                cout << " depending on " << item->occurs->denepdingon;
                            }                                  
                        }
                    }
                    break;
                case CB_DC_SYNCH:
                    if(item->synch == CB_SY_LEFT) cout << " Synchronized Left ";
                    if(item->synch == CB_SY_RIGHT) cout << " Synchronized Right ";
                    break;
                case CB_DC_JUSTIFY:
                    if(item->justification == 1) cout << " Justified Right ";
                    break;
                case CB_DC_BLANK:
                    if(item->blank_clause == 1) cout << " Blank When Zero ";
                    break;
                case CB_DC_RENAMES:
                    if(item->renamefld != NULL) cout << " Redefines " << item->renamefld << " ";
                    if(item->renamethru != NULL) cout << "THROUGH " << item->renamethru << " ";
                    break;
            }
            cout << "\t";
        }
    }
    cout << "\n";
}

void CobFieldRecord::dump(int plevel){
    
}

string CobFieldRecord::getValueString(bool pspflag) {
    // for fields other than 88 level fiends there will be only one value assigned
    // Def - list <struct _gnamepair *> * valuelist = NULL;
    stringstream s;
    if(valuelist != NULL) {
        int icount = 0;
        list <struct _gnamepair *>::iterator i;
        for(i = valuelist->begin(); i != valuelist->end(); ++i) {
            struct _gnamepair * item = (*i);
            if(icount == 0) {
                if(item){
                    if(item->first) {
                        s << gen_value(item->first);
                        if(pspflag == true) {
                            // if the value is special literal then need to add true flag 
                            if(item->first->type == CB_SPECIAL) {
                                s << ", true"; 
                            }
                        }
                    }
                    if(item->second)
                        printf("Error : The value clause has THRU value in non 88 level field...\n");
                }                
            } else {
                printf("Error cannot handle: The value clause has multiple values in non 88 level field...\n");
            }
            icount++;
        }        
    }    
    return s.str();
}

//1. AthConditionField(String pname, int pdatatype, int plength)
//2. public void addValue(AthValue pval)
//3. AthSimpleValue(String pval, int plen, int ptype)
//4. AthSimpleValue(int pSpVal, int pAllflag, int len)
//5. AthThruValue(String pfirst, int plen1, String psecond, int plen2, int ptype)
//6. AthThruValue(AthSimpleValue pfirst, AthSimpleValue psecond)
void CobFieldRecord::add88FieldValues(string pfldname, JMetaClass * pclass, int plen){
    stringstream s;
    static int i = 1;
    if(valuelist != NULL) {        
        list <struct _gnamepair *>::iterator itr;
        for(itr = valuelist->begin(); itr != valuelist->end(); ++itr) {
            struct _gnamepair * item = (*itr);
            if(item->second == NULL) {
                // simple field
                // check the type if simple value of special value
                if (item->first->type == CB_SPECIAL) {
                    //4.
                    string allflag = (item->first->allflag) ? "true" : "false";
                    string valstr = gen_value(item->first);
                    s << "AthSimpleValue val" << i 
                      << " = new AthSimpleValue("
                      << valstr << ", " 
                      << allflag << ", " 
                      << plen << ");";                     
                } else {
                    //3.
                    string valstr = gen_value(item->first);
                    s << "AthSimpleValue val" << i << " = new AthSimpleValue("
                      << valstr << ", " << strlen(valstr.c_str()) << ", " << item->first->type
                      << ");";
                }
                pclass->addStaticDeclaration(s.str());
                s.str(string()); s.clear();
                //2.
                s << pfldname << ".addValue(val" << i << ");";
                pclass->addStaticDeclaration(s.str());
                s.str(string()); s.clear();
            } else {
                // thru field cannot be SPECIAL value field
                string valstr = gen_value(item->first);
                s << "AthSimpleValue val" << i << " = new AthSimpleValue("
                  << valstr << ", " << strlen(valstr.c_str()) << ", " << item->first->type
                  << ");";
                pclass->addStaticDeclaration(s.str());
                s.str(string()); s.clear();
                i++;
                valstr = gen_value(item->second);
                s << "AthSimpleValue val" << i << " = new AthSimpleValue("
                  << valstr << ", " << strlen(valstr.c_str()) << ", " << item->second->type
                  << ");";
                pclass->addStaticDeclaration(s.str());
                s.str(string()); s.clear();
                //6. AthThruValue(AthSimpleValue pfirst, AthSimpleValue psecond)
                s << "AthThruValue thruval" << i << " = new AthThruValue(" << "val" << i-1 << ", " << "val" << i << ");";
                pclass->addStaticDeclaration(s.str());
                s.str(string()); s.clear();

                s << pfldname << ".addValue(thruval" << i << ");";
                pclass->addStaticDeclaration(s.str());
                s.str(string()); s.clear();                
            }
            i++;
        }
    }
}

/* This will work only for following three types. 
 * OCCURS x TIMES
 * OCCURS x TO y TIMES 
 * OCCURS x TO y TIMES DEPENDING on fldz
 * 
 * For the remaining types, need something more. TBD
 * OCCURS x TO y TIMES DEPENDING on fldz ASCENDING KEY IS z1 z2
 * OCCURS x TO y TIMES DEPENDING on fldz ASCENDING KEY IS z1 z2 INDEXED BY w1 w2
 */
string CobFieldRecord::getOccursString(){
    stringstream s;
    if(occurs != NULL) {
        s << ".setOccurs(" << occurs->from << ", " << occurs->to << ", "; 
        if(occurs->denepdingon) {
            s << occurs->denepdingon;
        } else {
            s << "null";
        }
        s << ");";        
    }
    return s.str();
}

void CobFieldRecord::processPicLenSize(){
    if(picinfo != NULL) {
        category = picinfo->category;
        dataType = datatype_from_category(category);
        length = picinfo->lenstr;
        decimalplaces = picinfo->scale;
        if(picinfo->str != NULL) {
            displayFormat.append(picinfo->str); 
        } else {
            displayFormat.append(picinfo->orig);
        }
        size = picinfo->size;
    } else {
        dataType = 0;
        length = 0;
        decimalplaces = 0;
        displayFormat = " ";
        size = 0;
    }
    // TBD: check this later...
    if(length == 0 && size != 0) length = size;    
}

/*TBD
// implement... the remaining options for the field such as 
// dataclause, external, global, renames, redefines, occurs
// justification, synch, Usage clause, 
*/
void CobFieldRecord::generate(CobFile * pfile, int pcaller, JGenerator * pgen, 
        JMetaClass * pmetaclass,        /* the active class for example File section creates a separate data class */ 
        JMetaClass * pparentclass,      /* the class representing the main program */
        JMetaMethod * pmethod,          /* active method, for example Local storage needs the active method where the
                                         * statements are added */
        string parentname,              /* used to process the child group hierarchy */
        string pdiname                  /* decorated name at parent level, passed to child */
        ) {
    string fldname;          
    string valueStr;        
    static int fillercount = 1;
    
    // 1.
    if(nameorfiller == CB_NAME) {
        if(! qualifiedname.empty()) {
            fldname.append(qualifiedname);
        } else {
            fldname.append(recordname);
        }
    } else {
        if(! qualifiedname.empty()) {
            fldname.append(qualifiedname);
        } else {
            fldname.append("fillerx");
//            stringstream fstr;
//            fstr << fillercount++;
//            fldname.append(fstr.str());
        }
    }
    
    // get qualified name and create entry into the map. implement...
    if(pdiname.empty()){
        this->decoratedName.append(fldname);       
    } else {
        this->decoratedName.append(".");
        this->decoratedName.append(fldname);
    }

    /* right now the consideration is wherever found the 88 fields should be 
     * treated as static constant value or value objects with fully qualified names
     * those will be part of the base class so that they do not clutter the main class. 
     * 88 level field
     * - add public static declaration of AthFieldData for the field in the DataItem class
     * - add the initializer in the static block of the DataItem class
     * - TBD : Version 2 - specialize the AthFieldData for 88 type to assign the multiple and range values
     * - TBD : Version2 - condition evaluation, for multiple and range values.
     */    
    if( (this->level == 88) || (this->level == 78) ) { // change for 78 later.
        JMetaClass * dataclass;
        
        string prgname = pfile->getCobIdentificationDivision()->getProgramName();
        string dataclassname(getJname(prgname.c_str()));
        dataclassname.append("Data");
        // check if the data class is already created, if not, create it. 
        if((dataclass = pgen->findClass(dataclassname)) == NULL) {
            dataclass = new JMetaClass(dataclassname, pgen);
            pgen->addclass(dataclass);
            dataclass->setExtends(string("AthDataItem"));
            dataclass->addextInclude("com.athato.fileio.*");
            dataclass->addextInclude("com.athato.util.*");
            if(pparentclass) {
                /* assuming this is the correct one. */
                pparentclass->setExtends(dataclassname);
            }
        }
        // Add the field declaration.
        JMetaField * fldnode = new JMetaField(fldname, string("AthConditionField"));
        fldnode->setQualifiers("public static");
        dataclass->addField(fldnode);

        // Add the field definition and initialization in the static block.
        stringstream s;
        string typestr = getDataTypeStr(dataType);
        s << fldname << "= new AthConditionField(\"" << fldname
            << "\", " << "AthDataTypes." << typestr << ", " << length << ");" ; 
        dataclass->addStaticDeclaration(s.str());

        // Add the values to the field
        add88FieldValues(fldname, dataclass, length);
                
    } else {
        ////////////////////////Big Switch///////////////////
        // This switch ensures the entities are created at right place based on 
        // where they appear in COBOL code.

        // Create the field
        JMetaField * fldnode = new JMetaField(fldname, string("AthFieldData"));

        // create the field string now. 
        stringstream s, u, t, ostr, redefstr;
        string typestr = getDataTypeStr(dataType);
        s << fldname << "= new AthFieldData(\"" 
            << fldname << "\", " << "AthDataTypes." << typestr << ", " 
            << length << ", " << decimalplaces
            << ", \"" << displayFormat << "\");" ; 
        
        // child node string
        u << parentname << ".addchild(" << fldname << ");" ;

        // Occurs clause 
        bool occursAvailable = false;
        if(occurs) {
            ostr << fldname << getOccursString();
            occursAvailable = true;
        }

        // 6. for the FD option the value will not be assigned. revisit     
        // add value string
        bool valAvailable = false;
        string valstr = getValueString(true);
        if(! valstr.empty()) {
            t << fldname << ".setVal(" << valstr << ");";
            valAvailable = true;
        }
        
        // redefine. Hoping it to be at the same level and in same section. 
        // TBD revisit if found the redefine out of section .
        bool redefAvailable = false;
        
        if(redefines != NULL) {
            redefstr << fldname << ".setRedefine(" << redeffld->decoratedName << ");";
            redefAvailable = true;
        }
        
        // set the field declaration, initializations, value, and the hierarchy appropriately 
        switch(pcaller) {
            // The respective locations where the fields and other info is added 
            // is decided before reaching here. The pmetaclass is different in both cases
            case CobDataDivision::CC_FILE_SETION: 
            case CobDataDivision::CC_WORKING_STORAGE_SECTION: {
                // Add the field variable in the class.
                pmetaclass->addField(fldnode);
                pmetaclass->addConstructorItem(s.str());
                
                if(valAvailable) {
                    pmetaclass->addConstructorItem(t.str());
                }
                
                if(occursAvailable){
                    pmetaclass->addConstructorItem(ostr.str());
                }
                
                if(redefAvailable){
                    pmetaclass->addConstructorItem(redefstr.str());
                }
                
                if(! parentname.empty()){
                    pmetaclass->addConstructorItem(u.str());
                }               
                break;
            }
            case CobDataDivision::CC_LOCAL_STORAGE_SECTION:{
            /*
            The LOCAL-STORAGE SECTION is used in a manner identical to the WORKING-STORAGE 
            SECTION with one exception: data defined in the LOCAL-STORAGE SECTION is 
            [re]initialized to its initial state every time the program (usually a 
            subprogram) is executed while WORKING-STORAGE SECTION data is static—it remains 
            in its last-used state until the program is CANCELed or the execution of the 
            main program is terminated.               
             */
                pmethod->addField(fldnode);
                
                // TBD : version 2 - if the field is group field, this could be 
                // externalize as separate class. and instantiate it. For version 1, 
                // create the field with initialization. 
                stringstream t;
                t << "// from local storage section."; 
                pmethod->addStatement(t.str());
                pmethod->addStatement(s.str());
                if(valAvailable) {
                    pmethod->addStatement(t.str());
                }
                
                if(occursAvailable){
                    pmethod->addStatement(ostr.str());
                }

                if(redefAvailable){
                    pmethod->addStatement(redefstr.str());
                }

                if(! parentname.empty()){
                    pmethod->addStatement(u.str());
                }
                break;
            }
            case CobDataDivision::CC_LINKAGE_SECTION: {
            /* Any data that is passed to other program as argument has to be placed 
             * in LINKAGE SECTION. This means the Java representation could be a field at class level
             * that can be passed as argument, the field has the mechanism to handle the by reference 
             * call conventions to preserve the values.
             * 
             * Add a field at class level
             * Add constructor item to set it's type and other information
             * In the CALL statement use this as an argument 
             * Call statement : should take the care of the call parameter and return value semantics
             * Can Call statement have more than one parameter? 
             */
                // create the Field at the class level. 
                pparentclass->addField(fldnode);                
                pparentclass->addConstructorItem(s.str());
                if(valAvailable) {
                    pparentclass->addConstructorItem(t.str());
                }

                if(occursAvailable){
                    pparentclass->addConstructorItem(ostr.str());
                }

                if(redefAvailable){
                    pparentclass->addConstructorItem(redefstr.str());
                }

                if(! parentname.empty()){
                    pparentclass->addConstructorItem(u.str());
                }
                break;
            }
            case CobDataDivision::CC_COMMUNICATION_SECTION: {
                // right now this should be handled similar to the WORKING STORAGE
                // fields. the definitions and the initialization go into the DataItem class.
                break;
            }
            case CobDataDivision::CC_SCREEN_SECTION: {
                
                break;
            }
        }

        // process the children
        if(children != NULL) {
            list <CobFieldRecord *>::iterator i;
            int j = 0;
            for(i = children->begin(); i != children->end(); ++i) {
                CobFieldRecord * child = (CobFieldRecord *)(*i);
                if(pcaller == CobDataDivision::CC_FILE_SETION){
                    child->setDecoratedName(pdiname);
                }
                child->generate(pfile, pcaller, pgen, pmetaclass, pparentclass, pmethod, fldname, pdiname);
            }
        }
    }    
}

CobFieldRecord::~CobFieldRecord() {
    if( recordname != NULL)
        delete recordname;
    // delete the list items
    if(dataclauselist != NULL) {
        list<void *>::iterator i;  
        int count = dataclauselist->size();
        for(i = dataclauselist->begin(); i != dataclauselist->end(); ++i ){
            struct _dataclause * item = (struct _dataclause *)(*i);
            if( item != NULL ){
                switch(item->type){
                case CB_DC_REDEFINE:
                    if(item->redefines != NULL) delete item->redefines;
                    break;
                case CB_DC_PICTURE:
                    if(item->pictureclause != NULL) delete item->pictureclause;
                    break;
                case CB_DC_VALUE:
                    if (item->dataclauseval != NULL ){
                        delete_gnamepairlst(item->dataclauseval);
                    }
                    break;
                case CB_DC_USAGE:
                    if (item->dc_usage != NULL )
                        delete item->dc_usage;
                    break;
                case CB_DC_OCCUR:
                    if (item->occurs != NULL ) {
                        if(item->occurs->denepdingon != NULL)
                            delete item->occurs->denepdingon;
                        delete item->occurs;
                    }
                    break;
                case CB_DC_RENAMES:                    
                    if(item->renamefld != NULL) delete item->renamefld;
                    if(item->renamethru != NULL) delete item->renamethru;
                    break;
                default:
                    break;
                }
                delete item; 
            }
        }
        delete dataclauselist; dataclauselist= NULL;
    }
    delete children;
    if(picinfo != NULL){
        if(picinfo->str != NULL) delete picinfo->str;
        if(picinfo->orig != NULL) delete picinfo->orig;
        delete picinfo;
    }
}

void CobFieldRecord::setDecoratedName(string decoratedName) {
    if(! decoratedName.empty())
        this->decoratedName = decoratedName;
}

string CobFieldRecord::getDecoratedName() const {
    return decoratedName;
}

void CobFieldRecord::addtoDecoratedName(string pstr) {
    this->decoratedName.append(pstr);
}
