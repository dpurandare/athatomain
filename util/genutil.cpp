/*
 * File: genutil.cpp
 * Created Date: Wednesday August 27th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday August 27th 2014 11:16:12 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Author: Deepak Purandare दीपक पुरंदरे 
 */

#include "genutil.h"
#include "../ast/CobFieldRecord.h"
#include <string.h>

// this global is defined in the CobFile. While the generation is happening the traversals
// of all files will happen and every visit to the CobDataDivision happens this is set to the currently 
// processes data division. This shortcut will affect in case this generation has to be done as
// parallel processing. If that be the case, the gen_id will need the access to the right data division. 
// and that has to be passed everywhere it is used, which in itself will be a overhead. 
// You have to pay price somewhere. 

/// basic item gen strings: begin
string gen_id(struct idvalStru * pid){
    stringstream s;
    string inorstr;
    if(pid == NULL){
        s << "NULL";
    } else {
        //s << pid->idStr;
        // get the qualified name. 
        inorstr.append(pid->idStr);
        if(pid->inofdata != NULL){
            list <char *> * idList = (list <char *> *) pid->inofdata; 
            list <char *>::iterator i;  
            for(i = idList->begin(); i != idList->end(); ++i ){
                inorstr.insert(0, "_");
                inorstr.insert(0, (char *)(*i));
            }
            s << inorstr;
        } else {
            CobFieldRecord * record = currentdiv->findField(pid->idStr);
            if(record) {
//                string qualifiedname = record->qualifiedname;
                string qualifiedname = record->decoratedName;
                s << getJname(qualifiedname.c_str());
            } else {
                // it is possible that the name is not found in the record list. 
                // it is possible that the name is not a field. 
                // it is possible that the name if field however not defined properly. 
                s << getJname(pid->idStr);                
            }
        }
        if(pid->subscripts != NULL) {
            s << gen_subscript_list(pid->subscripts);
        }
        // rounded
        if(pid->rounded) s << "Rounded";
    }
    return s.str();
}
string gen_idlist(void * plst){
    stringstream s;
    if(plst == NULL){
        s << "NULL";
    } else {
        list <void *> * lst = (list <void *> *)plst;
        list <void *>::iterator i;
        int j = 0;
        for(i = lst->begin(); i != lst->end(); ++i ){
            struct idvalStru * item = (struct idvalStru *)(*i);
            if(j++ > 0) s << ", ";
            s << gen_id(item);
        }    
    }
    return s.str();
}
string gen_subscript_list(void * plst){
    stringstream s;
    list <struct _subscript_item *> * slist = (list <struct _subscript_item *> *)plst;
    if(slist != NULL){
        s << "(";
        list<struct _subscript_item *>::iterator i;  
        int count = 0;
        for(i = slist->begin(); i != slist->end(); ++i ){
            struct _subscript_item * subitem = (struct _subscript_item *)(*i);
            if(count > 0) s << ", ";
            s << gen_subscript(subitem);
        }        
        s << ")";
    } else {
        s << "NULL";
    }
    return s.str();
}
string gen_subscript(struct _subscript_item * pitem){
    stringstream s;
    if(pitem == NULL) {
        s << "NULL";
    } else {
        switch(pitem->type) {
            case CB_SUBITEM_ID       : {
                //s << pitem->idstr;
                s << getJname(pitem->idstr);
                break;
            }
            case CB_SUBITEM_LIT      : {
                s << gen_value(pitem->litval);
                break;
            }
            case CB_SUBITEM_SUBITEM  : {
                s << "(";
                s << gen_subscript(pitem->subitem);
                s << ")";
                break;
            }
            case CB_SUBITEM_ADD      : {
                s << gen_subscript(pitem->subitem);
                s << gen_op(pitem->oper); 
                s << gen_subscript(pitem->subitem);
                break;        
            }
            case CB_SUBITEM_SUBTRACT : {
                s << gen_subscript(pitem->subitem);
                s << gen_op(pitem->oper); 
                s << gen_subscript(pitem->subitem);
                break;        
            }
            case CB_SUBITEM_REF      : {
                s << gen_subscript(pitem->subitem);
                s << ":";
                gen_subscript(pitem->subitem);
                break;
            }         
        }
    }
    return s.str();
}
string gen_op(int pop){
    stringstream s;
        switch(pop){
        case CB_AO_PLUS:
            s << " + ";
            break;
        case CB_AO_MINUS:
            s << " - ";
            break;
        case CB_AO_MULTIPLY:
            s << " * ";
            break;
        case CB_AO_DIVIDE:
            s << " / ";
            break;
        default:
            s << "Error: wrong operator";
            break;
    }
    return s.str();
}

string gen_value(struct valueType * pval, bool printprimitive){
    stringstream s;
    if (pval == NULL) {
        s << "null";
    } else {
        switch(pval->type){
            case CB_INT:
                if( pval->intVal < 0 ){
                    s << "(" << pval->intVal << ")";
                } else if (pval->intVal == 0) {
                    s << "0";
                } else {
                    s << pval->intVal;
                }
                break;
            case CB_FLOAT:
                s << pval->floatVal;
                break;
            case CB_HEX_NO:
                s << pval->intVal;
                break;
            case CB_CHARPTR:
                s << "\"" << pval->strVal << "\"";
                break;
            case CB_NUMERIC:
                // Check why this was defined...
                break;
            case CB_HEX:
                // Check this as well...
                break;
            case CB_IDENTIFIER:
                if(printprimitive) {
                    s << gen_idarithm(pval->idval);
                } else {
                    s << gen_id(pval->idval);
                }
                break;
            case CB_SPECIAL:
                s << gen_special_literal(pval->splVal);
                break;
            case CB_FUNCTION:
                s << gen_id(pval->idval);
                break;
        }
    }
    return s.str();
}
string gen_valueformat(struct valueType * pval){
    if(pval == NULL) return string();
    return gen_valueformatStr(pval->type);
}
string gen_valueformatXval(struct xvaldata * pval){
    if(pval == NULL) return string();
    return gen_valueformatStr(pval->type);
}
string gen_valueformatStr(int ptype){
    stringstream s;
    switch(ptype){
        case CB_INT:
            s << "%d";
            break;
        case CB_FLOAT:
            s << "%f";
            break;
        case CB_HEX_NO:
            s << "%x"; // check.
            break;
        case CB_CHARPTR:
            s << "%s";
            break;
        case CB_NUMERIC:
            // Check why this was defined...
            break;
        case CB_HEX:
            s << "%x";
            break;
        case CB_IDENTIFIER:
            s << "%s" ;
            // implement ...
            //gen_id(pval->idval);
            break;
        case CB_SPECIAL:
            s << "%s";
            // implement ...
            // s << gen_special_literal(pval->splVal);
            break;
        case CB_FUNCTION:
            s << "%s";
            // implement ...
            //s << gen_id(pval->idval);
            break;
    }
    return s.str();    
}

string gen_special_literal(int pval){
    stringstream s;
    switch(pval){
        case CB_SL_SPACES: 
            s << "AthConstants.CB_SL_SPACES";
            break;
        case CB_SL_ZERO:
            s << "AthConstants.CB_SL_ZERO";
            break;
        case CB_SL_QUOTES:
            s << "AthConstants.CB_SL_QUOTES";
            break;
        case CB_SL_HIGHVALUES:
            s << "AthConstants.CB_SL_HIGHVALUES";
            break;
        case CB_SL_LOWVALUES:
            s << "AthConstants.CB_SL_LOWVALUES";
            break;
        case CB_SL_NULL:
            s << "AthConstants.CB_SL_NULL";
            break;
        case CB_SL_TRUE:
            s << "AthConstants.CB_SL_TRUE";
            break;
        case CB_SL_FALSE:
            s << "AthConstants.CB_SL_FALSE";
            break;
        case CB_SL_RECORDS:
            s << "AthConstants.CB_SL_RECORDS"; // change when encountered
            break;
        case CB_SL_CHARACTERS:
            s << "AthConstants.CB_SL_CHARACTERS"; // change when encountered.
            break;
    }
    return s.str();
}
string gen_xval(struct xvaldata * pxval){
    stringstream s;
    // implement when required...
    if(pxval->usetype != 0){
        // implement ...
        s << "Yet to Implement... : XVAL use type";
        return s.str();
    } 
    switch(pxval->type){
    case CB_IDENTIFIER:
        s << gen_id(pxval->identifier);
        break;
    // STRING SPECIFIC
    case CB_LITERAL:{
        s << gen_value(pxval->litval);       
        break;
    }
    // STRING SPECIFIC
    case CB_SIZE: {
        s << "null";
        break;
    }
    case CB_N_LITERAL:
        s << gen_value(pxval->litval);
        break;
    case CB_C_LITERAL:
        s << gen_value(pxval->litval);
        break;
    case CB_LENGTH:
        s << gen_id(pxval->identifier);
        s << "getLength()"; // this will need fix. see some good examples...
        break;
    case CB_ADDRESS:    
        s << gen_id(pxval->identifier);
        s << "getAddress()"; // this as well... 
        // This may be irrelevant in case of language that do not implement explicit pointer such as Java and C#
        break;
    }    
    return s.str();
}

string gen_condition(struct _condition * pcond){
    stringstream s;
    if(pcond != NULL){
        if(pcond->comb_cond != NULL) 
            s << gen_combinable_condition(pcond->comb_cond);
        if(pcond->comb_abri_cond_lst != NULL){
            s << gen_comb_abri_cond_list(pcond->comb_abri_cond_lst, pcond->comb_cond);
        }        
    }
    return s.str();
}

string gen_combinable_condition(struct _combinable_condition * pcombcond){
    stringstream s;
    if(pcombcond != NULL){
        if(pcombcond->is_not) s << "!";
        if(pcombcond->simp_cond != NULL)
            s << gen_simple_condition(pcombcond->simp_cond);
    } 
    return s.str();
}

string gen_comb_abri_cond_list(struct _comb_abbr_cond_list * plst, struct _combinable_condition * pcombcond){
    stringstream s;
    if(plst == NULL) {
        s << "<<ERROR>>:comb_abri_cond_list";
    } else {
        if(plst->item_list != NULL) {
            list <struct _combinable_abbrivated_condition * > * itemlst = 
                (list <struct _combinable_abbrivated_condition * > *) plst->item_list;
            list<struct _combinable_abbrivated_condition *>::iterator i;  
            for(i = itemlst->begin(); i != itemlst->end(); ++i ){
                struct _combinable_abbrivated_condition * item = 
                        (struct _combinable_abbrivated_condition *)(*i);
                if(item != NULL){
                    s << gen_comb_abri_cond(item, pcombcond);
                }
            }
        }
    }
    return s.str();
}
string gen_comb_abri_cond(struct _combinable_abbrivated_condition * pitem, struct _combinable_condition * pcombcond){
    stringstream s;
    if(pitem == NULL) {
        s << "<<ERROR>>:comb_abri_cond";
    } else {
        switch(pitem->op){
            case CB_LO_AND:
                s << " && ";
                break;
            case CB_LO_OR:
                s << " || ";
                break;
        }
        s << "(";
        switch(pitem->type){
            case CB_COMB_COND_COMB:
                if(pitem->comb_cond)
                    s << gen_combinable_condition(pitem->comb_cond);
                break;
            case CB_COMB_COND_ABBR:
                if(pitem->abbri_rest)
                    s << gen_abbrivation_rest(pitem->abbri_rest, pcombcond);
                break;
        }
        s << ")";
    }
    return s.str();
}

string gen_abbrivation_rest(struct _abbriviation_rest * pitem, struct _combinable_condition * pcombcond){
    stringstream s;
    if(pitem == NULL) {
        s << "<<ERROR>>:abbrivation_rest";
    } else {
        if(pitem->item_list != NULL) {
            list <struct _abbriviation_item *> * itemlst = 
                (list <struct _abbriviation_item *> *)pitem->item_list;
            list<struct _abbriviation_item *>::iterator i;  
            for(i = itemlst->begin(); i != itemlst->end(); ++i ){
                struct _abbriviation_item * item = (struct _abbriviation_item *)(*i);
                if(item != NULL){
                    if(item->opt_not == 1){
                        s << "!(";
                    }
                    // get the lvalue from pcombcond
                    if(pcombcond == NULL) {
                        s << "/*(XCX:01: error-wrong abbrivated condition.)*/";
                    } else {
                        s << gen_combcond_lvalue(pcombcond);
                    }
                    // get the operator 
                    s << gen_rel_op(item->rel_op);
                    // get the rvalue
                    if(item->arithm_stmt != NULL)
                        s << gen_arithmetic_expression(item->arithm_stmt);
                    if(item->abbr_rest != NULL)
                        s << gen_abbrivation_rest(item->abbr_rest, pcombcond);

                    if(item->opt_not == 1){
                        s << ")";
                    }                    
                }
            }
        }    
    }
    return s.str();
}

string gen_combcond_lvalue(struct _combinable_condition * pcombcond){
    stringstream s;
    struct _simple_condition * simpcond = pcombcond->simp_cond;
    switch(simpcond->type){
    case CB_SC_REL:
        if(simpcond->rel_condition != NULL){
            s << gen_arithmetic_expression(simpcond->rel_condition->left);
        }
        break;
    default:
        s << "/*(XCX:02: error-wrong abbrivated condition.)*/";
    }
    return s.str();
}

string gen_simple_condition(struct _simple_condition * psimpcond){
    stringstream s;
    if(psimpcond == NULL) {
        s << "<<ERROR>>:simple_condition";
    } else {
        switch(psimpcond->type){
            case CB_SC_REL:
                if(psimpcond->rel_condition != NULL){
                    s << gen_relational_condition(psimpcond->rel_condition);
                }
                break;
//            case CB_SC_ID:
//                if(psimpcond->identifier != NULL)
//                    // The control does not reach here. Clean this up later. 
//                    // the grammar is modified and the single identifier is found 
//                    // only in the arithmetic expression
//                    s << gen_88type_condition(psimpcond->identifier);
//                break;
            case CB_SC_COND:
                if(psimpcond->cond != NULL){
                    s << "(";
                    s << gen_condition(psimpcond->cond);
                    s << ")";
                }
                break;
            default:
                break;
        }
    }
    return s.str();
}


string gen_relational_condition(struct _relational_condition * prelcond){
    stringstream s;
    if(prelcond == NULL) {
        s << "<<ERROR>>:Relational_condition";
    } else {
        switch(prelcond->type){
            case CB_RC_SINGLE: {        // left 
                // if this single expression is 88 field condition, handle it here only. 
                if(prelcond->left->exp_type == CB_AE_GNAME) {
                    // check if this name is a field and specifically 88 field.
                    if(prelcond->left->val->type == CB_IDENTIFIER){
                        if(is_88field( prelcond->left->val->idval->idStr)) {
                            s << gen_88type_condition(prelcond->left->val->idval);
                        }
                    }
                } else {
                    s << gen_arithmetic_expression(prelcond->left);
                }
                break;        
            }
            case CB_RC_SIMPLE: {        // left op right
                // the possibilities are 
                if(prelcond->left->exp_type == CB_AE_SIMPLE) {
                    // Comparison of value expressions
                    // check if the left side arithmetic exp is GNAME and it is 88 field. 
                    if(prelcond->left->left->exp_type == CB_AE_GNAME) {
                        if(prelcond->left->left->val->type == CB_IDENTIFIER){
                            if(is_88field(prelcond->left->left->val->idval->idStr)){
                                // 1. comparison of 88 field with some value 
                                // if the left side is arithmetic expression->gname->88field then it could be like 
                                // fld = val, fld is val, fld not val, fld equal val
                                // - when 88 field dump appropriate condition based on rvalue 
                                if(prelcond->is_not) s << "!(";
                                s << gen_arithmetic_expression(prelcond->left) << ".match(";                    
                                s << gen_arithmetic_expression(prelcond->right) << ")";
                                if(prelcond->is_not) s << ")";
                                break; // satisfied, no need to evaluate next options.
                            }
                            // - when the field is not primitive, the childrens for the field not empty, then this is separate care            
                            if(is_groupfield(prelcond->left->left->val->idval->idStr)){
                                if(prelcond->is_not) s << "!(";
                                CobFieldRecord * fld = currentdiv->findField(prelcond->left->left->val->idval->idStr);
                                s << fld->decoratedName << ".compareGroup(";                    
                                s << gen_arithmetic_expression(prelcond->right) << ")";
                                s << gen_rel_op(prelcond->rel_op) << " 0";
                                if(prelcond->is_not) s << ")";
                                break; // satisfied, no need to evaluate next options.
                            }                            
                        }
                    }                    
                    // 2. string comparison    
                    // if the left side is arithmetic expression then most likely it will fall in the main category
                    gen_simple_relation(prelcond);
                
                } else if(prelcond->left->exp_type == CB_AE_GNAME) {                    
                    // check if this name is a field and specifically 88 field.
                    if(prelcond->left->val->type == CB_IDENTIFIER){                        
                        if(is_88field( prelcond->left->val->idval->idStr)) {
                            s << gen_88type_condition(prelcond->left->val->idval);
                            break;
                        } else if(is_groupfield(prelcond->left->val->idval->idStr)){
                            if(prelcond->is_not) s << "!(";
                            CobFieldRecord * fld = currentdiv->findField(prelcond->left->val->idval->idStr);
                            s << fld->getDecoratedName() << ".compareGroup(";                    
                            s << gen_arithmetic_expression(prelcond->right) << ")";
                            if(prelcond->is_not) s << ")";
                            break; // satisfied, no need to evaluate next options.
                        } else {
                            // this is a simple case again that has twho values...
                            s << gen_simple_relation(prelcond);
                            break;
                        }
                    }
                } 
                break;
            }
            case CB_RC_SIGN: {
                switch(prelcond->sign_cond){
                    case CB_SI_POSITIVE:
                        s << " > 0 ";
                        break;
                    case CB_SI_NEGATIVE:
                        s << " < 0 ";
                        break;
                    case CB_SI_ZERO:
                        s << " == 0 ";
                        break;
                }
                break;
            }
            case CB_RC_CLASS: {
                //s << gen_arithmetic_expression(prelcond->left);
                switch(prelcond->class_item){
                    case CB_CI_NUMERIC:
                        // changed it as per the language later...
                        s << "CobUtil.isnumeric(" << gen_arithmetic_expression(prelcond->left) << ")";
                        break;
                    case CB_CI_ALPHABETIC:
                        s << "CobUtil.isalpha(" << gen_arithmetic_expression(prelcond->left) << ")";
                        break;
                    case CB_CI_ALPHA_UPPER:
                        s << "CobUtil.isupper(" << gen_arithmetic_expression(prelcond->left) << ")";
                        break;
                    case CB_CI_ALPHA_LOWER:
                        s << "CobUtil.islower(" << gen_arithmetic_expression(prelcond->left) << ")";
                        break;
                }    
                break;
            }
            default:
                break;
        }
    }
    return s.str();
}

string gen_simple_relation(struct _relational_condition * prelcond) {
    stringstream s;
    if(prelcond) {
        CobFieldRecord * fld_left = NULL;
        CobFieldRecord * fld_right = NULL;
        if(prelcond->left)
            if(prelcond->left->val)
                if(prelcond->left->val->type == CB_IDENTIFIER)
                    fld_left = getFieldFromGname(prelcond->left->val);
        if(prelcond->right)
            if(prelcond->right->val)
                if(prelcond->right->val->type == CB_IDENTIFIER)
                    fld_right = getFieldFromGname(prelcond->right->val);

        // TBD: checck if the right sides is also required to be verified.
        if( isStringType(prelcond->left) ) {                
            if(fld_left){
                s << fld_left->decoratedName;
            } else {
                s << gen_arithmetic_expression(prelcond->left);
            }
            s << ".compareTo(";
            if(fld_right){
                s << fld_right->decoratedName;                
            } else {
                s << gen_arithmetic_expression(prelcond->right);
            }
            s << ")";

            if(prelcond->is_not){
                s << gen_rel_op(reverse_logical_op(prelcond->rel_op));
            } else {
                s << gen_rel_op(prelcond->rel_op);
            }
            s << " 0";
        } else {
        // 3. Other types comparison
        // 4. comparison of value with value.
            if(fld_left){
                s << fld_left->decoratedName << ".intValue";                
            } else {
                s << gen_arithmetic_expression(prelcond->left);
            }
            if(prelcond->is_not){
                s << gen_rel_op(reverse_logical_op(prelcond->rel_op));
            } else {
                s << gen_rel_op(prelcond->rel_op);
            }
            if(fld_right){
                s << fld_right->decoratedName << ".intValue";
            } else {
                s << gen_arithmetic_expression(prelcond->right);
            }
        }    
    }
    return s.str();
}

string gen_arithmetic_expression(struct _arithmetic_expression * paeitem){
    stringstream s;
    if(paeitem == NULL) {
        s << "<<ERROR>>:arithmetic_expression";
    } else {
        switch(paeitem->exp_type){
            case CB_AE_GNAME:
                if(paeitem->val->type == CB_IDENTIFIER){
                    s << gen_idarithm(paeitem->val->idval);
                } else {
                    s << gen_value(paeitem->val);
                }
                break;
            case CB_AE_CLASS:
                // This should be handled as a special case... 
                s << "<<ERROR>> The use of class item in this case is suspect. This is not parsed well\n";
                break;
            case CB_AE_SIMPLE:
                if(paeitem->oper != CB_AO_POWER){
                    s << gen_arithmetic_expression(paeitem->left);
                    s << gen_op(paeitem->oper); 
                    s << gen_arithmetic_expression(paeitem->right);
                } else {
                    s << "pow(";
                    s << gen_arithmetic_expression(paeitem->left);
                    s << ", ";
                    s << gen_arithmetic_expression(paeitem->right);
                    s << ")";
                }
                break;
            case CB_AE_QUOTE_EXP:
                if(paeitem->left != NULL){
                    s << "(";
                    s << gen_arithmetic_expression(paeitem->left);
                    s << ")";
                }
                break;
            case CB_AE_UNRY:
                // ??? implement ...
                break;
        }
    }    
    return s.str();
}
// TBD. this shold be replaced with the one that will work on the id_valwithopt * identifier
// This will fail in case of use of IN/OF 
// Add another function that will work wuth in/of type data
bool is_88field(char * pidstr){
    if(! pidstr) return false;
    CobFieldRecord *  fld = currentdiv->findField(pidstr);
    if(fld == NULL) return false;
    if(fld->level == 88) return true;
    return false;
}
CobFieldRecord * getFieldFromGname(struct valueType * pval){
    CobFieldRecord * fld = NULL;
    if(pval == NULL) return fld;
    
    if(pval->type == CB_IDENTIFIER){
        fld = currentdiv->findField(pval->idval);
    }
    return fld;
}
// TBD. this shold be replaced with the one that will work on the id_valwithopt * identifier
// This will fail in case of use of IN/OF 
bool is_groupfield(char * pidstr){
    if(! pidstr) return false;
    CobFieldRecord *  fld = currentdiv->findField(pidstr);
    if(fld == NULL) return false;
    return (! fld->children->empty());
}

CobFieldRecord * getFieldfromXval(struct xvaldata * pval){
    CobFieldRecord * fld = NULL;
    if(pval == NULL) return fld;
    
    if(pval->type == CB_IDENTIFIER){
        // TBD the IN/OF should actually drill down to the exact node field and return it. 
        // for time being going ahead with the simple implementation. 
        fld = currentdiv->findField(pval->identifier);
    }
    return fld;
}

int mangleSpecialDataType(int pdatatype){
    int ret;
    switch(pdatatype){
        case CB_SL_SPACES:      ret = CB_CHARPTR; break;
        case CB_SL_ZERO:        ret = CB_NUMERIC; break;
        case CB_SL_QUOTES:      ret = CB_CHARPTR; break;
        // for now call HI and LOW values boolean and see. 
        case CB_SL_HIGHVALUES:  ret = CB_BOOLEAN; break;
        case CB_SL_LOWVALUES:   ret = CB_BOOLEAN; break;
        case CB_SL_TRUE:        ret = CB_BOOLEAN; break;
        case CB_SL_FALSE:       ret = CB_BOOLEAN; break;
        case CB_SL_RECORDS:     ret = CB_INT; break;
        // check if this has to be CB_CHARPTR
        case CB_SL_CHARACTERS:  ret = CB_INT; break;
        case CB_SL_NULL:        ret = CB_SL_NULL; break;
    }
    return ret;
}

// When the field is 88 type and just mentioned alone without any value to compare. 
// The only possibilities are to compare with parent's value
string gen_88type_condition(struct idvalStru * pid) {
    stringstream t;
    if(pid != NULL){
        // possibly at the top level. there is no through item here. 
        CobFieldRecord *  fld = currentdiv->findField(pid->idStr);
        if(fld->level == 88) {
            // found the 88 field with type boolean and mentioned as sole condition, it has to be compared to true.
            if(fld->dataType == CB_BOOLEAN){
                t << "(";
                t << getJname(fld->qualifiedname.c_str()) ;
                t << ".match(true)";
                t << ")";                
            } else if(fld->parent != NULL) {
                t << "(";
                t << getJname(fld->qualifiedname.c_str()) ;
                t << ".match(";
                t << fld->parent->decoratedName << ")";
                t << ")";
            } else {
                t << getJname(fld->decoratedName.c_str()) << "/*(XXX: 703-B)*/";
            }
        } else {
            t << "(" << gen_id(pid) << " == " << " TRUE " << ")";
        }
    } else {
        t << "/*(XXX: 703-ERR)*/";
    }
    return t.str();
}

bool isStringType(struct _arithmetic_expression * paeitem){
    bool ret = false;
    // in the paeitem 
    // check with the paeitem->val if the data type is CB_CHARPTR or 
    struct valueType * tmpval =  paeitem->val;
    if(tmpval->type == CB_CHARPTR) {
        return true;
    }
    if(tmpval->type == CB_IDENTIFIER){
        CobFieldRecord * fld = currentdiv->findField(tmpval->idval->idStr);
        if(fld->dataType == CB_CHARPTR) return true;
        if(fld->dataType == CB_INT || fld->dataType == CB_NUMERIC || fld->dataType == CB_FLOAT)
            return false;
    }
    
    // check in the left side of expression
    struct _arithmetic_expression * tmp = paeitem->left;
    while(tmp != NULL ){
        if(tmp->val != NULL) {
            if(tmp->val->type == CB_CHARPTR) {
                ret = true;
                break;
            }
            if(tmp->val->type == CB_IDENTIFIER) {
                CobFieldRecord * fld = currentdiv->findField(tmp->val->idval->idStr);
                int datatype = fld->dataType;
                if(datatype == CB_CHARPTR) {
                    ret = true;
                    break;
                } else if(datatype == CB_INT || datatype == CB_NUMERIC || datatype == CB_FLOAT){
                    ret = false;
                    break;                
                }
            }
            if(tmp->val->type == CB_INT || tmp->val->type == CB_NUMERIC || tmp->val->type == CB_FLOAT){
                ret = false;
                break;
            }
        }
        tmp = tmp->left;
    }
    return ret;
    // check in the right side of expresison. Check if works with value and left value first. 
    //tmp = paeitem.right
}

string gen_rel_op(int pop){
    stringstream s;
    
    switch(pop){
        case CB_GT:
            s << " > ";
            break;
        case CB_GE:
            s << " >= ";
            break;
        case CB_LT:
            s << " < ";
            break;
        case CB_LE:
            s << " <= ";
            break;
        case CB_EQ:
            s << " == ";
            break;
        case CB_NE:
            s << " != ";
            break;
    } 
    return s.str();
}

string gen_implicit(struct idvalStru * pid, struct xvaldata * pfromimpfn){
    // temporary implementation
    // ImplicitFunctions.get(FUNCTIONID, receiver);
    stringstream s;
    
    switch(pfromimpfn->imp){
    case CB_ID_CENTURY_DATE:
        s << "ImplicitFunctions.get(" << "ImplicitFunctions.CB_ID_CENTURY_DATE";
        break;
    case CB_ID_CENTURY_DAY:
        s << "ImplicitFunctions.get(" << "ImplicitFunctions.CB_ID_CENTURY_DAY";
        break;
    case CB_ID_DATE:
        s << "ImplicitFunctions.get(" << "ImplicitFunctions.CB_ID_DATE";
        break;
    case CB_ID_DATE_YYYYMMDD:
        s << "ImplicitFunctions.get(" << "ImplicitFunctions.CB_ID_DATE_YYYYMMDD";
        break;
    case CB_ID_DATE_TIME:
        s << "ImplicitFunctions.get(" << "ImplicitFunctions.CB_ID_DATE_TIME";
        break;
    case CB_ID_DATE_COMPILED:
        s << "ImplicitFunctions.get(" << "ImplicitFunctions.CB_ID_DATE_COMPILED";
        break;
    case CB_ID_DAY:
        s << "ImplicitFunctions.get(" << "ImplicitFunctions.CB_ID_DAY";
        break;
    case CB_ID_DAY_YYYYDDD:
        s << "ImplicitFunctions.get(" << "ImplicitFunctions.CB_ID_DAY_YYYYDDD";
        break;
    case CB_ID_DAY_TIME:
        s << "ImplicitFunctions.get(" << "ImplicitFunctions.CB_ID_DAY_TIME";
        break;
    case CB_ID_DAY_WEEK:
        s << "ImplicitFunctions.get(" << "ImplicitFunctions.CB_ID_DAY_WEEK";
        break;
    case CB_ID_TIME:
        s << "ImplicitFunctions.get(" << "ImplicitFunctions.CB_ID_TIME";
        break;
    case CB_ID_ESCAPE:
        s << "ImplicitFunctions.get(" << "ImplicitFunctions.CB_ID_ESCAPE";
        break;
    case CB_ID_EXCEPTION:    
        s << "ImplicitFunctions.get(" << "ImplicitFunctions.CB_ID_EXCEPTION";
        break;
    }
    s << ", " << gen_id(pid) << ");";
    return s.str();
}

char * removeQuotes(struct xvaldata * pxval) {
  char *s2, *s1;
  int strLength;
  int left = 1, right = 1;
  
  char * tmpstr = new char[32];
  strcpy(tmpstr, gen_xval(pxval).c_str());
  
  s1 = (char *) tmpstr;
  strLength = strlen(s1);
  if ( (strLength - left - right) > 0 ) {
    s2 = s1 + strLength - right;
    *s2 = '\0';
    s2 = s1 + left;
    while (*s1 != '\0') {
      *s1 = *s2;
      s1++;
      s2++;
    }
  }
  return (char *)tmpstr;
}

string getDataTypeStr(int ptype){
    string retstr;
    switch(ptype){
        case CB_NULL:
            retstr = "CB_NULL"; break; 
        case CB_INT:
            retstr = "CB_INT"; break;
        case CB_FLOAT:
            retstr = "CB_FLOAT"; break;
        case CB_CHARPTR:
            retstr = "CB_CHRPTR"; break;
        case CB_ADDRESS:
            retstr = "CB_ADDRESS"; break;
        case CB_BOOLEAN:
            retstr = "CB_BOOLEAN"; break;
        case CB_NUMERIC:
            retstr = "CB_NUMERIC"; break;
        case CB_HEX_NO:
            retstr = "CB_HEXNO"; break;
        case CB_HEX:
            retstr = "CB_HEX"; break;
        case CB_LENGTH:
            retstr = "CB_LENGTH"; break;
        case CB_IDENTIFIER:
            retstr = "CB_ID"; break;
        case CB_N_LITERAL:
            retstr = "CB_NLITERAL"; break;
        case CB_C_LITERAL:
            retstr = "CB_CLITERAL"; break;
        case CB_SPECIAL:
            retstr = "CB_SPLITERAL"; break;
        case CB_FUNCTION:
            retstr = "CB_FUNCTION"; break;
        case CB_ID_UNITVAL:
            retstr = "CB_UNITVAL"; break;
        case CB_IMPLICIT:
            retstr = "CB_IMPLICIT"; break;
        case CB_LINES:
            retstr = "CB_LINES"; break;
        case CB_PAGES:
            retstr = "CB_PAGES"; break;
        case CB_LINE_NEXTPAGE:
            retstr = "CB_NEXTPAGE"; break;
        case CB_LITERAL:
            retstr = "CB_LITERAL"; break;
        case CB_SIZE:
            retstr = "CB_SIZE"; break;
        case CB_ADDRESS_IN:
            retstr = "CB_ADDRESSIN"; break;
        case CB_ADDRESS_OF:
            retstr = "CB_ADDRESSOF"; break;
    }
    return retstr;
}

int get_iddatatype(struct idvalStru * pid){
    CobFieldRecord * record = currentdiv->findField(pid->idStr);
    if(record == NULL) {
        return -1;
    } else {
        return record->dataType;
    }
}

string gen_idarithm(struct idvalStru * pid){
    stringstream s;
    int dataType = get_iddatatype(pid);
    s << gen_id(pid);
    if(dataType == -1) {
        s << ".valueStr";
        return s.str();
    }
    string datatypestr;
    switch(dataType){
        case CB_INT:
            datatypestr = ".intValue"; break;
        case CB_FLOAT:
            datatypestr = ".doubleValue"; break;
        default:
            datatypestr = ".valueStr";
            break;
    }
    if(!datatypestr.empty()) {
        s << datatypestr;
    }
    
    return s.str();
}

string gen_arithmaticqty(struct xvaldata * pxval){
    stringstream s;
    switch(pxval->type){
    case CB_IDENTIFIER: {
        s << gen_idarithm(pxval->identifier);
        break;
    }
    // STRING SPECIFIC
    case CB_LITERAL:{
        s << gen_value(pxval->litval);       
        break;
    }
    // STRING SPECIFIC
    case CB_SIZE: {
        s << "null";
        break;
    }
    case CB_N_LITERAL:
        s << gen_value(pxval->litval);
        break;
    case CB_C_LITERAL:
        s << gen_value(pxval->litval);
        break;
    case CB_LENGTH:
        s << gen_id(pxval->identifier);
        s << "length"; // this will need fix. see some good examples...
        break;
    case CB_ADDRESS:    
        s << gen_id(pxval->identifier);
        s << "getAddress()"; // this as well... 
        // This may be irrelevant in case of language that do not implement explicit pointer such as Java and C#
        break;
    }    
    return s.str();
}

string gen_tmpfrom_xvallst(void * plst, string tag, int pcount){
    
    stringstream fromstr;    
    if(plst == NULL) return string("/*(XXX: 701-YTC)*/\n");

    list <struct xvaldata *> * lst = (list <struct xvaldata *> *)plst; 
    list <struct xvaldata *>::iterator i;
    int datatype = 0;
    for(i = lst->begin(); i != lst->end(); ++i){
        struct xvaldata * item = (struct xvaldata *)(*i);
        int ttype = get_xval_datatype(item);
        if(ttype > datatype) datatype = ttype;
    }
    switch(datatype) {
        case CB_INT:
            fromstr << "int "; break;
        case CB_FLOAT:
            fromstr << "double "; break;            
        case CB_CHARPTR:
            fromstr << "String "; break;
        default:
            fromstr << "TypeID:" << datatype << "/*(XXX: 702-YTC)*/";
            break;
    }
    fromstr << tag << pcount << ";";
    return fromstr.str();
}

int get_xval_datatype(struct xvaldata * pxval){
    int datatype;
    
    switch(pxval->type){
    case CB_IDENTIFIER:
        datatype = get_iddatatype(pxval->identifier);
        break;
    case CB_LITERAL:{
        datatype = pxval->litval->type;
        break;
    }
    // STRING SPECIFIC
    case CB_SIZE: {
        datatype = CB_INT;
        break;
    }
    case CB_N_LITERAL:
        datatype = pxval->litval->type;
        break;
    case CB_C_LITERAL:
        datatype = pxval->litval->type;
        break;
    case CB_LENGTH:
        datatype = CB_INT;
        break;
    case CB_ADDRESS:    
        datatype = CB_INT;
        break;
    }        
    return datatype;
}
/// basic item gen strings: end
