/*
 * File: CobStmtSet.cpp
 * Created Date: Saturday April 19th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Saturday April 19th 2014 3:49:30 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 25, 2013, 9:07 PM
 */

#include "CobStmtSet.h"
#include "../util/genutil.h"

CobStmtSet::CobStmtSet() {
}

//CobStmtSet::CobStmtSet(enum _set_stmt_type_enum ptype, void * plst){
//    set_type = ptype;
//    setitem = plst;
//}

CobStmtSet::CobStmtSet(void * plst){
    set_clause_list = (list <struct _set_clause *> *)plst;
    itype = CB_PD_SET;

    // backtrack way of assigning data types to the fields. 
    //assignDataTypes();    
    // This will not work in constructor as the whole file is not parser yet and the CobFile is not completely available
    // the CobDataDivision will not be accessible at this stage. 
    // This has to be called as separate item before the generation is kicked off. Same for the Move as well. 
}
    
CobStmtSet::CobStmtSet(const CobStmtSet& orig) {
}

void CobStmtSet::dump(){
}
void CobStmtSet::dump(int plevel){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    cout << tabstr << "Set statement :\n";
}

void CobStmtSet::gen(CobFile * pfile, JGenerator * pgen, JMetaClass * pclass, 
         JMetaMethod * pmethod, bool pisfirst, int plevel, stringstream * s){
    string tabstr = "";    
    for(int i = 0; i < plevel; i++) tabstr.append("    ");
    stringstream t;
    t << tabstr << "// SET statement. If looks misfit, could be an error: (XXX:910 - CTI)";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();
    t << tabstr << "// in some cases it could be safely commented.";
    pmethod->addStatement(t.str());
    t.str(string()); t.clear();

    if(set_clause_list != NULL) {
        list<struct _set_clause *>::iterator i;  
        for(i = set_clause_list->begin(); i != set_clause_list->end(); ++i ){
            struct _set_clause * item = (struct _set_clause *)(*i);
            if(item != NULL){
                if(item->set_item_list != NULL){
                    list <struct _set_item *> * lst = (list <struct _set_item *> *)item->set_item_list;
                    list<struct _set_item *>::iterator j;  
                    for(j = lst->begin(); j != lst->end(); ++j ){
                        struct _set_item * litem = (*j);                        
                        if(litem != NULL) {
                            t << tabstr;
                            bool is88field = false;
                            if(litem->type == CB_SET_XVAL){
                                if(litem->xval->type == CB_IDENTIFIER){
                                    is88field = is_88field(litem->xval->identifier->idStr);
                                }
                                if(is88field){
                                    CobFieldRecord *  fld = currentdiv->findField(litem->xval->identifier);
                                    t << fld->qualifiedname;
                                } else {
                                    t << gen_arithmaticqty(litem->xval);
                                }
                            } else {
                                t << "(XXX:904 - ERR)";
                                // error 
                            }
                            if( ! is88field) {
                                switch(item->direction){
                                    case CB_SET_TO:
                                        t << " = ";
                                        break;
                                    case CB_SET_UPBY:
                                        t << " += ";
                                        break;
                                    case CB_SET_DOWNBY:
                                        t << " -= ";
                                        break;
                                }
                                if(item->ritem != NULL){
                                    switch(item->ritem->type){
                                        case CB_SET_XVAL:
                                            t << gen_xval(item->ritem->xval);
                                            break;
                                        case CB_SET_ON:
                                            t << "true; /*(XXX:905 - CTI)*/";
                                            break;
                                        case CB_SET_OFF:
                                            t << "false; /*(XXX:906 - CTI)*/";
                                            break;
                                        case CB_SET_TRUE:
                                            t << "true; /*(XXX:907 - CTI) - need boolean type, crosscheck the lval*/";
                                            break;
                                        case CB_SET_FALSE:
                                            t << "false; /*(XXX:908 - CTI) - need boolean type, crosscheck the lval*/";
                                            break;
                                        case CB_SET_NULL:
                                            t << "null; /*(XXX:909 - CTI) - need object, also the object value should be affected.*/";
                                            break;
                                    }
                                }
                            } else {
                                // This is 88 field.
                                t << ".addValue(";
                                if(item->ritem != NULL){
                                    switch(item->ritem->type){
                                        case CB_SET_XVAL:
                                            t << gen_xval(item->ritem->xval);
                                            break;
                                        case CB_SET_ON:
                                            t << "true /*(XXX:905 - CTI)*/";
                                            break;
                                        case CB_SET_OFF:
                                            t << "false /*(XXX:906 - CTI)*/";
                                            break;
                                        case CB_SET_TRUE:
                                            t << "true";
                                            break;
                                        case CB_SET_FALSE:
                                            t << "false";
                                            break;
                                        case CB_SET_NULL:
                                            t << "null /*(XXX:909 - CTI) */"; //- need object, also the object value should be affected.";
                                            break;
                                    }
                                }
                                t << ");";
                            }

                            pmethod->addStatement(t.str());
                            t.str(string()); t.clear();                            
                        }                        
                    }                    
                }
            }        
        }
    }
}

void CobStmtSet::assignDataTypes(){    
    if(set_clause_list != NULL) {
        list<struct _set_clause *>::iterator i;  
        for(i = set_clause_list->begin(); i != set_clause_list->end(); ++i ){
            struct _set_clause * item = (struct _set_clause *)(*i);
            if(item != NULL){
                if(item->set_item_list != NULL){
                    list <struct _set_item *> * lst = (list <struct _set_item *> *)item->set_item_list;
                    list<struct _set_item *>::iterator j;  
                    for(j = lst->begin(); j != lst->end(); ++j ){                        
                        struct _set_item * litem = (*j);
                        if(litem != NULL) {
                            CobFieldRecord * fld = getFieldfromXval(litem->xval);
                            if(fld != NULL) {                                
                                if(item->ritem != NULL){
                                    switch(item->ritem->type){
                                        case CB_SET_XVAL:
                                            if(litem->xval->type == CB_NULL) {
                                                if(item->ritem->xval->type != CB_NULL)
                                                    fld->dataType = item->ritem->xval->type;
                                            }
                                            break;
                                        case CB_SET_ON:
                                            fld->dataType = CB_BOOLEAN;
                                            break;
                                        case CB_SET_OFF:
                                            fld->dataType = CB_BOOLEAN;
                                            break;
                                        case CB_SET_TRUE:
                                            fld->dataType = CB_BOOLEAN;
                                            break;
                                        case CB_SET_FALSE:
                                            fld->dataType = CB_BOOLEAN;
                                            break;
                                        case CB_SET_NULL:
                                            break;
                                    }
                                }
                            }
                        }                        
                    }                    
                }
            }        
        }
    }    
}
void CobStmtSet::proc_xml(pugi::xml_node parent){
    pugi::xml_node stmtnode = parent.append_child(pugi::node_element);
    stmtnode.set_name("set_statement"); 
    if(set_clause_list != NULL) {
        pugi::xml_node setclauselistnode = stmtnode.append_child(pugi::node_element);
        setclauselistnode.set_name("set_clause_list");
        list<struct _set_clause *>::iterator i;  
        for(i = set_clause_list->begin(); i != set_clause_list->end(); ++i ){
            struct _set_clause * item = (struct _set_clause *)(*i);
            if(item != NULL){
//                pugi::xml_node setclausenode = setclauselistnode.append_child(pugi::node_element);
//                setclausenode.set_name("set_clause");
                if(item->set_item_list != NULL){
                    list <struct _set_item *> * lst = (list <struct _set_item *> *)item->set_item_list;
                    list<struct _set_item *>::iterator j;  
                    for(j = lst->begin(); j != lst->end(); ++j ){
                        struct _set_item * litem = (*j);                        
                        if(litem != NULL) {
//                            pugi::xml_node setitemnode = setclausenode.append_child(pugi::node_element);
//                            setitemnode.set_name("set_item");
                            pugi::xml_node setitemnode = setclauselistnode.append_child(pugi::node_element);
                            setitemnode.set_name("set_item");
                            bool is88field = false;
                            pugi::xml_node lnode = setitemnode.append_child(pugi::node_element);
                            lnode.set_name("left");
                            if(litem->type == CB_SET_XVAL){
                                if(litem->xval->type == CB_IDENTIFIER){
                                    is88field = is_88field(litem->xval->identifier->idStr);
                                }
                                if(is88field){
                                    CobFieldRecord * fld = currentdiv->findField(litem->xval->identifier);
                                    lnode.append_attribute("val").set_value(gen_xval(litem->xval).c_str());
                                } else {
                                    lnode.append_attribute("val").set_value(gen_xval(litem->xval).c_str());
                                }
                            } else {
                                lnode.append_attribute("val").set_value("(XXX:904 - ERR)");
                            }
                            pugi::xml_node dirnode = setitemnode.append_child(pugi::node_element);
                            dirnode.set_name("direction");
                            switch(item->direction){
                                case CB_SET_TO:
                                    dirnode.append_attribute("val").set_value("CB_SET_TO");
                                    break;
                                case CB_SET_UPBY:
                                    dirnode.append_attribute("val").set_value("CB_SET_UPBY");
                                    break;
                                case CB_SET_DOWNBY:
                                    dirnode.append_attribute("val").set_value("CB_SET_DOWNBY");
                                    break;
                            }
                            if(item->ritem != NULL){
                                pugi::xml_node rvalnode = setitemnode.append_child(pugi::node_element);
                                rvalnode.set_name("right");
                                pugi::xml_node valtypenode = rvalnode.append_child(pugi::node_element);
                                valtypenode.set_name("valyetype");
                                switch(item->ritem->type){
                                    case CB_SET_XVAL:
                                        valtypenode.append_attribute("vtype").set_value("CB_SET_XVAL");                                            
                                        valtypenode.append_attribute("val").set_value(gen_xval(item->ritem->xval).c_str());
                                        break;
                                    case CB_SET_ON:
                                        valtypenode.append_attribute("type").set_value("CB_SET_ON");                                            
                                        valtypenode.append_attribute("val").set_value("TRUE");
                                        break;
                                    case CB_SET_OFF:
                                        valtypenode.append_attribute("type").set_value("CB_SET_OFF");                                            
                                        valtypenode.append_attribute("val").set_value("FALSE");
                                        break;
                                    case CB_SET_TRUE:
                                        valtypenode.append_attribute("type").set_value("CB_SET_TRUE");                                            
                                        valtypenode.append_attribute("val").set_value("TRUE");
                                        break;
                                    case CB_SET_FALSE:
                                        valtypenode.append_attribute("type").set_value("CB_SET_FALSE");
                                        valtypenode.append_attribute("val").set_value("FALSE");
                                        break;
                                    case CB_SET_NULL:
                                        valtypenode.append_attribute("vtype").set_value("*ERROR*(XXX:909 - CTI)");
                                        break;
                                }
                            }
                        }                        
                    }                    
                }
            }        
        }
    }
}
CobStmtSet::~CobStmtSet() {
    if(set_clause_list != NULL){
        delete_set_clause_list(set_clause_list);
    }

//    switch(set_type){
//        case CB_SET_INDEX:  {
//            struct _set_index_item * item = (struct _set_index_item *)setitem;
//            if(item != NULL) {
//                if(item->lst != NULL) delete_xvallist(item->lst);
//                if(item->val != NULL) delete_xval(item->val);
//                delete item;
//            }
//            break;
//        }
//        case CB_SET_UPDOWN: {
//            struct _up_down_item * item = (struct _up_down_item *)setitem;
//            if(item != NULL) {
//                if(item->itemlst != NULL) delete_xvallist(item->itemlst);
//                if(item->val != NULL) delete_xval(item->val);
//                delete item;
//            }
//            break;
//        }
//        case CB_SET_ONOFF: {
//            struct _mnemonic_item * item = (struct _mnemonic_item *)setitem;
//            if(item != NULL) {
//                if(item->item_list != NULL) delete_xvallist(item->item_list);
//                delete item;
//            }
//            break;
//        }
//        case CB_SET_COND: {
//            struct _condition_item * item = (struct _condition_item *)setitem;
//            if(item != NULL) {
//                if(item->id != NULL) delete_id(item->id);
//                delete item;
//            }
//            break;
//        }
//        case CB_SET_ADDR:{
//            struct _set_address_item * item = (struct _set_address_item *)setitem;
//            if(item != NULL){
//                if(item->addr_item_list != NULL)
//                    delete_address_item_list(item->addr_item_list);
//                if(item->toitem != NULL)
//                    delete_address_item(item->toitem);
//                delete item;
//            }
//            break;
//        }
//        case CB_SET_PTR: {
//            struct _set_pointer_item * item = (struct _set_pointer_item *)setitem;
//            if(item != NULL){
//                if(item->itemlst != NULL)
//                    delete_address_item_list(item->itemlst);
//                if(item->id) delete_id(item->id);
//            }
//            break;
//        }
//    }
}

