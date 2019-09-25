/*
 * File: global.cpp
 * Created Date: Wednesday August 27th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday August 27th 2014 1:10:41 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 16, 2013, 12:57 PM
 */

#include "ast/CobProject.h"
#include "ast/CobFile.h"
#include "global.h"
#include "cobmain.h"
#include "procglobal.h"
#include "ast/CobFunctionDivision.h"
#include "proc/CobSectionDeclaration.h"
#include "proc/CobParagraphDeclaration.h"
#include "jgen/JGenerator.h"
#include "analysis/Analyzer.h"
#include <stdlib.h>
#include <iostream>
#include <list>
#include <setjmp.h>
#include <string.h>
#include <stdlib.h>
#define HASHLEN         100

/***********************************
 *             Globals             *
 ***********************************/
char char_buffer[BUFSIZE];
static jmp_buf cob_jmpbuf;
CobProject * gcbPrj;
CobDataDivision * currentdiv;
extern CobSectionDeclaration * gCurrentSectionDeclaration;
extern CobParagraphDeclaration * gCurrentParagraphDeclaration;

string gTargetPath; // target path for the file generation.
string gGenConfigPath;
string gIncludePath;
string gFirstFile;

char            **fileList;
unsigned        currentFile;
unsigned        nFiles;
char            * currentFileName;

extern "C" {
//////////////////////////////// extern c //////////////////////////////////
    
void setTargetPath(const char * str){
    gTargetPath = str;
}
const char * getTargetPath(){
    if(!gTargetPath.empty()) return gTargetPath.c_str();
    return NULL;
}
void setIncludePath(const char *str){
    gIncludePath = str;
}
const char * getIncludePath(){
    if(!gIncludePath.empty()) return gIncludePath.c_str();
    return NULL;
}
void setGenConfigPath(const char *str){
    gGenConfigPath = str;
}
const char * getGenConfigPath(){
    if(!gGenConfigPath.empty()) return gGenConfigPath.c_str();
    return NULL;    
}
void setFirstFile(char * pfilename){
    gFirstFile.append(pfilename);
}

const char * getFirstFile(){
    if(!gFirstFile.empty()) return gFirstFile.c_str();
    return NULL;
}

int gethash( const char * s){
    int val;
    for ( val = 0 ; *s != '\0'; )
        val += toupper(*s++);
    return( val % HASHLEN );    
}

char * getJname(const char * pname){
    unsigned char * itr; // walking 
    char buff[100]; 
    static char ret[100];
    
    memset(buff, 0, 100);
    memset(ret, 0, 100);
    
    if(pname){
        strcpy(buff, pname);
    }
    for( itr = (unsigned char * )buff; *itr; itr++ ) {
        *itr = (*itr == '-') ? '_' : *itr;
    }
    if(isdigit(buff[0])) {
        strcpy(ret, "CJ");
        strcat(ret, buff);
    } else {
        strcat(ret, buff);        
    }
    return ret; // no need to delete as this is a buffer. 
}

    
// used to read text multiline.
char * start_buffer(char *str)
{
    /* memcpy (char_buffer, '\0', BUFSIZE);*/
    strcpy( char_buffer, str);
    return char_buffer;
}
char * append_buffer(char *str)
{
    strcat(char_buffer, str);
    /* printf("inside append_buffer: %s", char_buffer); */
    return char_buffer;
}

// initialize_cpp
int initialize_cpp(void){
    // initialize the cpp system...
    gCurrentSectionDeclaration = NULL;
    gCurrentParagraphDeclaration = NULL;
    gcbPrj = NULL;
    currentdiv = NULL;
    return 0;
}
int release_cpp(void){
    delete gcbPrj;
    return 0; // some more error checking necessary. 
}

// CobProject related functions
void dumpProject(){
    if(gcbPrj) gcbPrj->dump();
}
void generate(){
    JGenerator * gen = new JGenerator(gcbPrj, string("sample"));
    gen->generate();
    delete gen;
}
void analyze(){
    // Right now generate the Analysis XML called analysis.xml
    // Walk the project and create necessary information for this xml.
    cout << "Analyzing the COBOL source.\n";
    Analyzer * analyzer = new Analyzer(gcbPrj);
    analyzer->analyze();    
}
// common functions
struct xvaldata * construct_xval( int valtype, void * valptr ){
    xvaltype * ret = NULL;
    if( valptr != NULL){
        ret = new xvaltype;
        ret->usetype = 0;
        ret->rounded = 0;    // default to 0
        ret->type = valtype;
        switch(valtype){
        case CB_IDENTIFIER:
            ret->identifier = (id_valwithopt *) valptr;
            break;
        case CB_N_LITERAL:
            ret->litval = (literalval *) valptr;
            break;
        case CB_C_LITERAL:
            ret->litval = (literalval *) valptr;
            break;
        case CB_LENGTH:
            ret->identifier = (id_valwithopt *) valptr;
            break;
        case CB_ADDRESS:    
            ret->identifier = (id_valwithopt *) valptr;
            break;
        }
    }
    return ret;
}
struct valueType * negate_numeric(literalval * pval){
    if(pval != NULL){
        switch(pval->type){
            case CB_INT:
                pval->intVal = pval->intVal * (-1);
                break;
            case CB_FLOAT:
                pval->floatVal = pval->floatVal * (-1.0);
                break;
            case CB_HEX_NO:
                pval->intVal = pval->intVal * (-1);
                break;
        }
    }
    return pval;
}
struct valueType * get_numliteral( double dval, int pival){
    literalval * ret = new literalval;
    ret->type = pival;
    switch(pival){
        case CB_INT:
            ret->intVal = dval;
            break;
        case CB_FLOAT:
            ret->floatVal = dval;
            break;
        case CB_HEX_NO:
            ret->intVal = dval;
            break;
    }
    ret->allflag = 0;
    return ret;
}
struct valueType * get_charliteral( char * pstr, int pival ){
    literalval * ret = new literalval;
    ret->type = pival;    
    if( pstr != NULL ){
        ret->type = CB_CHARPTR;
        ret->strVal = pstr;
    }
    ret->allflag = 0;
    return ret;
}
struct valueType * get_specialliteral( int pval, int pival ){
    literalval * ret = new literalval;
    ret->type = pival;
    ret->splVal = pval;
    return ret;
}
// functions used in parser to construct the data structures
// list of identifiers or literal values
void * startList(char *idStr) {
    //cout << "inside startList...\n";
    //cout << " the starting string :" << idStr << "\n";
    list <char *> * idList = NULL; 
    if (idStr != NULL) {
        idList = new list <char *>;
        idList->push_back(idStr);
    }
    return (void *) idList;
}
void * addListItem(void *idList, char *str){
    //cout << "inside addListItem...\n";
    if( idList != NULL) { 
        if( str != NULL )
            ((list <char *> *)idList)->push_back(str);
    }
    return (void *)idList;
}
void delete_strlist(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        char * item = (char *)(*i);
        if(item != NULL) delete item;
    }
    delete lst;    
}
void dump_strlist(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    int j = 0;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        char * item = (char *)(*i);
        if(j++ == 0){
            cout << item;
        } else {
            cout << ", " << item;
        }
    }
}

struct idvalStru * construct_identifier_1(char * str, void * inof, void * psubscripts) {
    struct idvalStru * retval = new struct idvalStru;
    retval->idStr = strdupx(str);
    retval->inofdata = inof;
    retval->subscripts = psubscripts;
    //retval->refs = prefs;
    retval->rounded = 0;
    return retval;
}

void * start_subscript_list(struct _subscript_item * item){
    list <struct _subscript_item *> * idList = new list <struct _subscript_item *>();
    if(item != NULL){
        idList->push_front(item);
    }
    return (void *) idList;
}
void * add_subscriptlist_item(void * lst, struct _subscript_item * prev){
    if(prev != NULL){
        ((list <struct _subscript_item *> *) lst)->push_front(prev);
    }
    return lst;
}
struct _subscript_item * cons_subscript_item(enum subscript_item_type ptype, 
            char * pidstr, struct valueType * plitval,
            struct _subscript_item * psubitem, int poper, 
            struct _subscript_item * psubitem2){
    struct _subscript_item * ret = new struct _subscript_item;
    ret->type = ptype;
    ret->idstr = pidstr;
    ret->litval = plitval;
    ret->subitem = psubitem;
    ret->oper = poper;
    ret->subitem2 = psubitem2;
    return ret;
}

valtype * construct_gname_id(id_valwithopt * pval){
    valtype * ret = new valtype;
    ret->type = CB_IDENTIFIER;
    ret->idval = pval;
    ret->rounded = 0;
    return ret;
}
valtype * construct_gname_function(id_valwithopt * pval, int ptype){
    valtype * ret = new valtype;
    ret->type = ptype;
    ret->idval = pval;
    ret->rounded = 0;
    return ret;
}

// Note: the use of valueType and xvaldata needs to be verified 
// for all special values. 
//  special case: advancing_clause
// implement ... after the change in the Subscript and Reference implementation
// this code has to be revisited and corrected. 
void dump_id(struct idvalStru * pid){
    cout << pid->idStr;
    // Subscript 
    if(pid->subscripts != NULL) {
        dump_subscript_list(pid->subscripts);
    }
    // Reference 
    //if(pid->refs != NULL) {
    //    dump_refnumbers(pid->refs);
    //}
    // in/of items 
    if(pid->inofdata != NULL){
        list <char *> * idList = (list <char *> *) pid->inofdata; 
        list <char *>::iterator i;  
        for(i = idList->begin(); i != idList->end(); ++i ){
            cout << (char *)(*i);
        }
    }
    // rounded
    if(pid->rounded) cout << "Rounded";
}
void dump_idlist(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    int j = 0;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct idvalStru * item = (struct idvalStru *)(*i);
        if(j++ > 0) cout << ", ";
        dump_id(item);
    }
}

//void dump_refnumbers(struct refnumbers * pref){
//    dump_subscript(pref->left);
//    cout << ":" << pref->right;
//}

void dump_subscript_list(void * plst){
    list <struct _subscript_item *> * slist = (list <struct _subscript_item *> *)plst;
    if(slist != NULL){
        cout << "(";
        list<struct _subscript_item *>::iterator i;  
        int count = 0;
        for(i = slist->begin(); i != slist->end(); ++i ){
            struct _subscript_item * subitem = (struct _subscript_item *)(*i);
            if(count > 0) cout << ", ";
            dump_subscript(subitem);
        }        
        cout << ")";
    }
}
void dump_subscript(struct _subscript_item * pitem){
    switch(pitem->type) {
        case CB_SUBITEM_ID       : {
            cout << pitem->idstr;
            break;
        }
        case CB_SUBITEM_LIT      : {
            dump_value(pitem->litval);
            break;
        }
        case CB_SUBITEM_SUBITEM  : {
            cout << "(";
            dump_subscript(pitem->subitem);
            cout << ")";
            break;
        }
        case CB_SUBITEM_ADD      : {
            dump_subscript(pitem->subitem);
            dump_op(pitem->oper); 
            dump_subscript(pitem->subitem);
            break;        
        }
        case CB_SUBITEM_SUBTRACT : {
            dump_subscript(pitem->subitem);
            dump_op(pitem->oper); 
            dump_subscript(pitem->subitem);
            break;        
        }
        case CB_SUBITEM_REF      : {
            dump_subscript(pitem->subitem);
            cout << ":";
            dump_subscript(pitem->subitem);
            break;
        }         
    }
}

const char * value_string(struct valueType * pval){
    stringstream s;
    if (pval != NULL) {
        //cout << "Value : ";
        switch(pval->type){
            case CB_INT:
                s << pval->intVal;
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
                // TODO : check for the in-of details at some moment of time
                s << pval->idval->idStr;
                break;
            case CB_SPECIAL:
                // TODO
                //dump_special_literal(pval->splVal);
                break;
            case CB_FUNCTION:
                break;
        }
    }

    return s.str().c_str();
}

void dump_value(struct valueType * pval){
    if (pval == NULL) return;
    //cout << "Value : ";
    switch(pval->type){
        case CB_INT:
            cout << pval->intVal;
            break;
        case CB_FLOAT:
            cout << pval->floatVal;
            break;
        case CB_HEX_NO:
            cout << pval->intVal;
            break;
        case CB_CHARPTR:
            cout << "\"" << pval->strVal << "\"";
            break;
        case CB_NUMERIC:
            // Check why this was defined...
            break;
        case CB_HEX:
            // Check this as well...
            break;
        case CB_IDENTIFIER:
            dump_id(pval->idval);
            break;
            /* Xval specific
        case CB_LENGTH:
            cout << " Length "; 
            dump_id(pval->idval);
            break;
        case CB_ADDRESS:
            cout << " Address ";
            dump_id(pval->idval);
            break;
        case CB_N_LITERAL:
            dump_value(pval.)
            break;
        case CB_C_LITERAL:
            break;
            */
        // All is not handled and check at some moment with the proper semantics. 
        case CB_SPECIAL:
            dump_special_literal(pval->splVal);
            break;
        case CB_FUNCTION:
            break;
            /*
        case CB_ID_UNITVAL:
            break;
        case CB_IMPLICIT:
            break;
             // printing specific
        case CB_LINES:
            break;
        case CB_PAGES:
            break;
        case CB_LINE_NEXTPAGE:
            break;
             // string statement
        case CB_LITERAL:
            break;
        case CB_SIZE:
            break;
             // set statement
        case CB_ADDRESS_IN:
            break;
        case CB_ADDRESS_OF:        
            break;
             */
    }
}
void dump_special_literal(int pval){
    switch(pval){
        case CB_SL_SPACES: 
            cout << "SPACES";
            break;
        case CB_SL_ZERO:
            cout << "ZEROS";
            break;
        case CB_SL_QUOTES:
            cout << "QUOTES";
            break;
        case CB_SL_HIGHVALUES:
            cout << "HIGHVALUES";
            break;
        case CB_SL_LOWVALUES:
            cout << "LOWVALUES";
            break;
        case CB_SL_NULL:
            cout << "NULL";
            break;
        case CB_SL_TRUE:
            cout << "TRUE";
            break;
        case CB_SL_FALSE:
            cout << "FALSE";
            break;
        case CB_SL_RECORDS:
            cout << "RECORDS";
            break;
        case CB_SL_CHARACTERS:
            cout << "CHARACTERS";
            break;
    }
}
void dump_xval(struct xvaldata * pxval){
    // implement when required...
    if(pxval->usetype != 0){
        // implement
        cout << "Implement : pending use type... \n";
        return;
    }
    switch(pxval->type){
    case CB_IDENTIFIER:
        dump_id(pxval->identifier);
        break;
    case CB_N_LITERAL:
        dump_value(pxval->litval);
        break;
    case CB_C_LITERAL:
        dump_value(pxval->litval);
        break;
    case CB_LENGTH:
        cout << "Length : ";
        dump_id(pxval->identifier);
        break;
    case CB_ADDRESS:    
        cout << "Address : ";
        dump_id(pxval->identifier);
        break;
    }    
}



void delete_id(struct idvalStru * pid){
    if(pid == NULL) return;
    
    delete pid->idStr;
    if(pid->subscripts != NULL) {
        delete_subscripts_list(pid->subscripts);
    }
//    if(pid->refs != NULL) {
//        delete_refnumbers(pid->refs);
//    }
    if(pid->inofdata != NULL){
        list <char *> * idList = (list <char *> *) pid->inofdata; 
        list <char *>::iterator i;  
        for(i = idList->begin(); i != idList->end(); ++i ){
            delete (char *)(*i);
        }
    } 
    delete pid;
}
void delete_idlist(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    int j = 0;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct idvalStru * item = (struct idvalStru *)(*i);
        if(item != NULL)
            delete_id(item);
    }
    delete lst;
}

void delete_subscripts_list(void * plst){
    if(plst == NULL) return;
    list <struct _subscript_item *> * slist = (list <struct _subscript_item *> *)plst;
    if(slist != NULL){
        list<struct _subscript_item *>::iterator i;  
        for(i = slist->begin(); i != slist->end(); ++i ){
            struct _subscript_item * subitem = (struct _subscript_item *)(*i);
            delete_subscript(subitem);
        }        
    }
    delete slist;
}
void delete_subscript(struct _subscript_item * pitem){
    if(pitem == NULL) return;
    if(pitem->idstr != NULL) delete pitem->idstr;
    if(pitem->litval != NULL) delete_value(pitem->litval);
    if(pitem->subitem != NULL) delete_subscript(pitem->subitem);
    if(pitem->subitem2 != NULL) delete_subscript(pitem->subitem2);
//    if(pitem->next != NULL) {
//        delete_subscript(pitem->next);
//    }
//    if(pitem->value != NULL)
//        delete_value(pitem->value);
    delete pitem;
}

void delete_value(struct valueType * pval){
    if(pval == NULL) return;
    switch(pval->type){
        case CB_IDENTIFIER:
            if(pval->idval != NULL) {
                delete_id(pval->idval);
            }
            break;
        case CB_CHARPTR:
            if(pval->strVal != NULL) delete pval->strVal;
            break;
    }
    delete pval;
}
void delete_xval(struct xvaldata * pxval){
    if(pxval == NULL) return;
    switch(pxval->type) {
        case CB_IDENTIFIER:
        case CB_LENGTH:
        case CB_ADDRESS:    
            if(pxval->identifier != NULL) delete_id(pxval->identifier);
            break;
        case CB_N_LITERAL:
        case CB_C_LITERAL:
            if(pxval->litval != NULL) delete_value(pxval->litval);
            break;
    }
    delete pxval;
}

// condition, expression and related functions
//1
struct _condition * construct_condition(struct _combinable_condition * pcomb_cond,
                                        struct _comb_abbr_cond_list * pcomb_abri_list) {
    struct _condition * ret = new struct _condition;
    ret->comb_cond = pcomb_cond;
    ret->comb_abri_cond_lst = pcomb_abri_list;
    return ret;
}
//2
struct _comb_abbr_cond_list * start_comb_abri_list(struct _combinable_abbrivated_condition * pabbr_item){
    struct _comb_abbr_cond_list * ret = new struct _comb_abbr_cond_list;
    list <struct _combinable_abbrivated_condition * > * itemlst = 
                new list <struct _combinable_abbrivated_condition * >;
    itemlst->push_back(pabbr_item);
    ret->item_list = (void *) itemlst;
    ret->count = 1;
    return ret;    
}
struct _comb_abbr_cond_list * add_comb_abri_list(
                        struct _comb_abbr_cond_list * plist, 
                        struct _combinable_abbrivated_condition * pitem){
    struct _comb_abbr_cond_list * ret = plist;
    list <struct _combinable_abbrivated_condition * > * itemlst = 
            (list <struct _combinable_abbrivated_condition * > *)ret->item_list;
    itemlst->push_back(pitem);
    ret->count++;
    return ret;
}

//3
struct _combinable_abbrivated_condition * construct_comb_abri_cond(
                struct _combinable_condition * pcomb_cond,
                struct _abbriviation_rest * pabbr_rest){
    struct _combinable_abbrivated_condition * ret = new struct _combinable_abbrivated_condition;
    ret->comb_cond = pcomb_cond;
    ret->abbri_rest = pabbr_rest;
    if( pcomb_cond == NULL) ret->type = CB_COMB_COND_ABBR;
    else ret->type = CB_COMB_COND_COMB;
    return ret;
}

struct _combinable_abbrivated_condition * update_comb_abri_cond(
                int and_or, 
                struct _combinable_abbrivated_condition * pcomb_abri){
    struct _combinable_abbrivated_condition * ret = pcomb_abri;
    ret->op = and_or;
    return ret;
}

//4
struct _combinable_condition * construct_comb_cond(
                int pnot, 
                struct _simple_condition * psimp_cond){
    struct _combinable_condition * ret = new struct _combinable_condition;
    ret->is_not = pnot;
    ret->simp_cond = psimp_cond;
    return ret;
}

//5
struct _abbriviation_rest * start_abri_item_list(struct _abbriviation_item * pitem){
    struct _abbriviation_rest * ret = new struct _abbriviation_rest;

    list <struct _abbriviation_item *> * retlist = new list <struct _abbriviation_item *>;
    retlist->push_back(pitem);
    ret->item_list = (void *) retlist;
    ret->count = 1;
    return ret;
}
struct _abbriviation_rest * add_abri_item_list(struct _abbriviation_rest * plist, 
                                        struct _abbriviation_item * pabbr_item) {
    struct _abbriviation_rest * ret = plist;
    list <struct _abbriviation_item *> * retlist = (list <struct _abbriviation_item *> *) plist->item_list;
    retlist->push_back(pabbr_item);
    ret->count++;
    return ret;
}
//6
struct _abbriviation_item * construct_Abbr_item(
                        struct _arithmetic_expression * parithm_expr,
                        struct _abbriviation_rest * pabbr_rest){
    struct _abbriviation_item * ret = new struct _abbriviation_item;
    ret->arithm_stmt = parithm_expr;
    ret->abbr_rest = pabbr_rest;
    return ret;
}
struct _abbriviation_item * update_abbr_item(int pnot, 
                        int prel_op, struct _abbriviation_item * pitem){
    struct _abbriviation_item * ret = pitem;
    ret->opt_not = pnot;
    ret->rel_op = prel_op;
    return ret;
}

//7
struct _simple_condition * construct_simp_cond(int ptype, struct _relational_condition * prel_cond){
    struct _simple_condition * ret = new struct _simple_condition;
    ret->type = ptype;
    ret->rel_condition = prel_cond;
    return ret;
}
struct _simple_condition * construct_simp_cond_id( int ptype, struct idvalStru * pid){
    struct _simple_condition * ret = new struct _simple_condition;
    ret->type = ptype;
    ret->identifier = pid;
    return ret;
}
struct _simple_condition * construct_simp_cond_cond( int ptype, struct _condition * pcond){
    struct _simple_condition * ret = new struct _simple_condition;
    ret->type = ptype;
    ret->cond = pcond;
    return ret;
}
//8
struct _relational_condition * construct_rel_cond(int ptype,
                                    int pis_not, int prel_op,
                                    struct _arithmetic_expression * pleft,
                                    struct _arithmetic_expression * pright){
    struct _relational_condition * ret = new struct _relational_condition;
    ret->type = ptype;
    ret->is_not = pis_not;
    ret->rel_op = prel_op;
    ret->left = pleft;
    ret->right = pright;
    return ret;
}
struct _relational_condition * construct_rel_cond_sign( int ptype, int psign_cond) {
    struct _relational_condition * ret = new struct _relational_condition;
    ret->type = ptype;
    ret->sign_cond = psign_cond;
    return ret;
}
struct _relational_condition * construct_rel_cond_class( int ptype,
                                        int pis_not,
                                        struct _arithmetic_expression * pleft,
                                        int pclass_item) {
    struct _relational_condition * ret = new struct _relational_condition;
    ret->type = ptype;
    ret->is_not = pis_not;
    ret->left = pleft;
    ret->class_item = pclass_item;
    return ret;
}
//9
struct _arithmetic_expression * construct_arithm_expr_gname(int ptype, valtype * pVal){
    struct _arithmetic_expression * ret = new struct _arithmetic_expression;
    ret->exp_type = ptype;
    ret->val = pVal;
    return ret;
}
struct _arithmetic_expression * construct_arithm_expr_class(int ptype, int pclass_item){
    struct _arithmetic_expression * ret = new struct _arithmetic_expression;
    ret->exp_type = ptype;
    ret->class_item = pclass_item;
    return ret;
}
struct _arithmetic_expression * construct_arithm_expr_simple(int ptype, int poper,
                                                 struct _arithmetic_expression * pleft,
                                                 struct _arithmetic_expression * pright){
    struct _arithmetic_expression * ret = new struct _arithmetic_expression;
    ret->exp_type = ptype;
    ret->oper = poper;
    ret->left = pleft;
    ret->right = pright;
    return ret;
}
struct _arithmetic_expression * construct_arithm_expr_unary(int ptype, int poper,
                                                 struct _arithmetic_expression * pleft){
    struct _arithmetic_expression * ret = new struct _arithmetic_expression;
    ret->exp_type = ptype;
    ret->oper = poper;
    ret->left = pleft;
    return ret;
}
struct _arithmetic_expression * construct_arithm_expr_bracket(int ptype, 
                                                 struct _arithmetic_expression * pleft){
    struct _arithmetic_expression * ret = new struct _arithmetic_expression;
    ret->exp_type = ptype;
    ret->left = pleft;
    return ret;
}
int reverse_sign(int porig){
    int ret;
    switch( porig ){
        case CB_SI_POSITIVE:
            ret = CB_SI_NEGATIVE;
            break;
        case CB_SI_NEGATIVE:
            ret = CB_SI_POSITIVE;
            break;
        case CB_SI_ZERO:
            ret = CB_SI_NON_ZERO;
            break;
    }
    return ret;
}
int reverse_logical_op(int porig){
    int ret;
    switch(porig){
        case CB_GT:
            ret = CB_LE;
            break;
        case CB_GE:
            ret = CB_LT;
            break;
        case CB_LT:
            ret = CB_GE;
            break;
        case CB_LE:
            ret = CB_GT;
            break;
        case CB_EQ:
            ret = CB_NE;
            break;
        case CB_NE:
            ret = CB_EQ;
            break;
    }
    return ret;
}

void dump_condition(struct _condition * pcond){
    if(pcond != NULL){
        if(pcond->comb_cond != NULL) dump_combinable_condition(pcond->comb_cond);
        if(pcond->comb_abri_cond_lst != NULL){
            //cout << "(";
            dump_comb_abri_cond_list(pcond->comb_abri_cond_lst);
            //cout << ")";
        }
    }
}
void dump_combinable_condition(struct _combinable_condition * pcombcond){
    if(pcombcond != NULL){
        if(pcombcond->is_not) cout << "!";
        if(pcombcond->simp_cond != NULL)
            dump_simple_condition(pcombcond->simp_cond);
    }
}
void dump_comb_abri_cond_list(struct _comb_abbr_cond_list * plst){
    if(plst == NULL)return;
    if(plst->item_list != NULL) {
        list <struct _combinable_abbrivated_condition * > * itemlst = 
            (list <struct _combinable_abbrivated_condition * > *) plst->item_list;
        list<struct _combinable_abbrivated_condition *>::iterator i;  
        for(i = itemlst->begin(); i != itemlst->end(); ++i ){
            struct _combinable_abbrivated_condition * item = 
                    (struct _combinable_abbrivated_condition *)(*i);
            if(item != NULL){
                dump_comb_abri_cond(item);
            }
        }
    }
}
void dump_simple_condition(struct _simple_condition * psimpcond){
    if(psimpcond == NULL) return;
    switch(psimpcond->type){
        case CB_SC_REL:
            if(psimpcond->rel_condition != NULL){
                dump_relational_condition(psimpcond->rel_condition);
            }
            break;
        case CB_SC_ID:
            if(psimpcond->identifier != NULL)
                dump_id(psimpcond->identifier);
            break;
        case CB_SC_COND:
            if(psimpcond->cond != NULL){
                cout << "(";
                dump_condition(psimpcond->cond);
                cout << ")";
            }
            break;
        default:
            break;
    }
}
void dump_comb_abri_cond(struct _combinable_abbrivated_condition * pitem){
    if(pitem == NULL) return;
    switch(pitem->op){
        case CB_LO_AND:
            cout << " && ";
            break;
        case CB_LO_OR:
            cout << " || ";
            break;
    }
    cout << "(";
    switch(pitem->type){
        case CB_COMB_COND_COMB:
            if(pitem->comb_cond)
                dump_combinable_condition(pitem->comb_cond);
            break;
        case CB_COMB_COND_ABBR:
            if(pitem->abbri_rest)
                dump_abbrivation_rest(pitem->abbri_rest);
            break;
    }
    cout << ")";
}
void dump_abbrivation_rest(struct _abbriviation_rest * pitem){
    if(pitem == NULL) return;
    if(pitem->item_list != NULL) {
        list <struct _abbriviation_item *> * itemlst = 
                    (list <struct _abbriviation_item *> *)pitem->item_list;
        list<struct _abbriviation_item *>::iterator i;  
        for(i = itemlst->begin(); i != itemlst->end(); ++i ){
            struct _abbriviation_item * item = (struct _abbriviation_item *)(*i);
            if(item != NULL){
                if(item->arithm_stmt != NULL)
                    dump_arithmetic_expression(item->arithm_stmt);
                if(item->abbr_rest != NULL)
                    dump_abbrivation_rest(item->abbr_rest);
            }
        }
    }
}
void dump_arithmetic_expression(struct _arithmetic_expression * paeitem){
    if(paeitem == NULL) return;
    switch(paeitem->exp_type){
        case CB_AE_GNAME:
            if(paeitem->val != NULL)
                dump_value(paeitem->val);
            break;
        case CB_AE_CLASS:
            // This should be handled as a special case... 
            cout << "The use of class item in this case is suspect. This is not parsed well\n";
            break;
        case CB_AE_SIMPLE:
            if(paeitem->oper != CB_AO_POWER){
                dump_arithmetic_expression(paeitem->left);
                dump_op(paeitem->oper);
                dump_arithmetic_expression(paeitem->right);
            } else {
                cout << "pow(";
                dump_arithmetic_expression(paeitem->left);
                cout << ", ";
                dump_arithmetic_expression(paeitem->right);
                cout << ")";
            }
            break;
        case CB_AE_QUOTE_EXP:
            if(paeitem->left != NULL){
                cout << "(";
                dump_arithmetic_expression(paeitem->left);
                cout << ")";
            }
            break;
        case CB_AE_UNRY:
            
            break;
    }
}

void dump_relational_condition(struct _relational_condition * prelcond){
    if(prelcond == NULL) return;
    
    switch(prelcond->type){
        case CB_RC_SINGLE:
            dump_arithmetic_expression(prelcond->left);
            break;        
        case CB_RC_SIMPLE:
            //cout << "(";
            dump_arithmetic_expression(prelcond->left);
            if(prelcond->is_not){
                dump_rel_op(reverse_logical_op(prelcond->rel_op));
            } else {
                dump_rel_op(prelcond->rel_op);
            }
            dump_arithmetic_expression(prelcond->right);
            //cout << ")";
            break;
        case CB_RC_SIGN:
            switch(prelcond->sign_cond){
                case CB_SI_POSITIVE:
                    cout << " > 0 ";
                    break;
                case CB_SI_NEGATIVE:
                    cout << " < 0 ";
                    break;
                case CB_SI_ZERO:
                    cout << " == 0 ";
                    break;
            }
            break;
        case CB_RC_CLASS:
            switch(prelcond->class_item){
                case CB_CI_NUMERIC:
                    // changed it as per the language later...
                    cout << "isnumeric(";
                    break;
                case CB_CI_ALPHABETIC:
                    cout << "isalpha(";
                    break;
                case CB_CI_ALPHA_UPPER:
                    cout << "isupper(";
                    break;
                case CB_CI_ALPHA_LOWER:
                    cout << "islower(";
                    break;
            }    
            dump_arithmetic_expression(prelcond->left);
            cout << ")";
            break;
        default:
            break;
    }
}

void dump_op(int pop){
    switch(pop){
        case CB_AO_PLUS:
            cout << " + ";
            break;
        case CB_AO_MINUS:
            cout << " - ";
            break;
        case CB_AO_MULTIPLY:
            cout << " * ";
            break;
        case CB_AO_DIVIDE:
            cout << " / ";
            break;
        //case CB_AO_POWER:
        //    cout << " ^ ";
        //    break;
        default:
            cout << "Error: wrong operator in subscript.\n";
            break;
    }
}
void dump_rel_op(int pop){
    switch(pop){
        case CB_GT:
            cout << " > ";
            break;
        case CB_GE:
            cout << " >= ";
            break;
        case CB_LT:
            cout << " < ";
            break;
        case CB_LE:
            cout << " <= ";
            break;
        case CB_EQ:
            cout << " == ";
            break;
        case CB_NE:
            cout << " != ";
            break;
    } 
}

/////////////
void delete_condition(struct _condition * pcond){
    if(pcond == NULL) return;
    delete_combinable_condition(pcond->comb_cond);
    delete_comb_abri_cond_list(pcond->comb_abri_cond_lst);
    delete pcond;
}
void delete_combinable_condition(struct _combinable_condition * pcombcond){
    if(pcombcond == NULL) return;
    delete_simple_condition(pcombcond->simp_cond);
    delete pcombcond;
}
void delete_comb_abri_cond_list(struct _comb_abbr_cond_list * plst){
    if(plst == NULL)  return;
    if(plst->item_list != NULL) {
        list <struct _combinable_abbrivated_condition * > * itemlst = 
            (list <struct _combinable_abbrivated_condition * > *) plst->item_list;
        list<struct _combinable_abbrivated_condition *>::iterator i;  
        for(i = itemlst->begin(); i != itemlst->end(); ++i ){
            struct _combinable_abbrivated_condition * item = 
                    (struct _combinable_abbrivated_condition *)(*i);
            delete_comb_abri_cond(item);
        }
        delete itemlst;
    }
    delete plst;
}
void delete_comb_abri_cond(struct _combinable_abbrivated_condition * pitem){
    if(pitem == NULL) return;
    if(pitem->comb_cond != NULL) delete_combinable_condition(pitem->comb_cond);
    if(pitem->abbri_rest != NULL) delete_abbrivation_rest(pitem->abbri_rest);
    delete pitem;
}
void delete_simple_condition(struct _simple_condition * psimpcond){
    if(psimpcond == NULL) return;
    switch(psimpcond->type){
    case CB_SC_REL:
        if(psimpcond->rel_condition != NULL) 
                    delete_relational_condition(psimpcond->rel_condition);
        break;
    case CB_SC_ID:
        if(psimpcond->identifier != NULL) delete_id(psimpcond->identifier);
        break;
    case CB_SC_COND:
        if(psimpcond->cond != NULL) delete_condition(psimpcond->cond);
        break;
    }
    delete psimpcond;
}
void delete_abbrivation_rest(struct _abbriviation_rest * pitem){
    if(pitem == NULL) return;
    if(pitem->item_list != NULL) {
        list <struct _abbriviation_item *> * itemlst = 
                    (list <struct _abbriviation_item *> *)pitem->item_list;
        list<struct _abbriviation_item *>::iterator i;  
        for(i = itemlst->begin(); i != itemlst->end(); ++i ){
            struct _abbriviation_item * item = (struct _abbriviation_item *)(*i);
            if(item != NULL){
                if(item->arithm_stmt != NULL)
                    delete_arithmetic_expression(item->arithm_stmt);
                if(item->abbr_rest != NULL)
                    delete_abbrivation_rest(item->abbr_rest);
                delete item;
            }
        }
        delete itemlst;
    }
    delete pitem;
}
void delete_arithmetic_expression(struct _arithmetic_expression * paeitem){
    if(paeitem == NULL) return;
    switch(paeitem->exp_type) {
    case CB_AE_GNAME:
        if(paeitem->val != NULL) delete_value(paeitem->val);
        break;
    case CB_AE_SIMPLE:
        if(paeitem->left != NULL) delete_arithmetic_expression(paeitem->left);
        if(paeitem->right != NULL) delete_arithmetic_expression(paeitem->right);
        break;
    case CB_AE_QUOTE_EXP:
        if(paeitem->left != NULL) delete_arithmetic_expression(paeitem->left);
        break;
    case CB_AE_UNRY:
        if(paeitem->left != NULL) delete_arithmetic_expression(paeitem->left);
        break;
    }
    delete paeitem;
}
void delete_relational_condition(struct _relational_condition * prelcond){
    if(prelcond == NULL) return;
    switch(prelcond->type) {
    case CB_RC_CLASS:
    case CB_RC_SINGLE:
        if(prelcond->left != NULL)delete_arithmetic_expression(prelcond->left);
        break;
    case CB_RC_SIMPLE:
        if(prelcond->left != NULL)delete_arithmetic_expression(prelcond->left);
        if(prelcond->right != NULL) delete_arithmetic_expression(prelcond->right);
        break;
    }
    delete prelcond;
}

/****************************************
 *         Identification Division         *
 ****************************************/
struct _id_option * cons_id_option(enum _ident_option_type ptype, char * pstr){
    struct _id_option * ret = new struct _id_option;
    ret->type = ptype;
    ret->val = pstr;
    return ret;
}
void * cons_identification_division(char * pprogname, int pcomm_initial, 
                                    void * pother_optlist, char * pfileName){
    void * ret;
    ret = (void *) new CobIdentificationDivision(pprogname, pcomm_initial, 
                                    pother_optlist, pfileName);
    return ret;
}
/****************************************
 *          Environment Division        *
 ****************************************/
struct _special_names * cons_special_names(int ptype, char * pcurrencysign){
    struct _special_names * ret = new struct _special_names;
    ret->type = ptype;
    ret->currencysign = pcurrencysign;
    return ret;
}
void delete_special_names_list(void * plst){
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _special_names * item = (struct _special_names *)(*i);
        if(item->currencysign != NULL) delete item->currencysign;
        delete item;
    }
    delete lst;        
}
void dump_special_names_list(void * plst){
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _special_names * item = (struct _special_names *)(*i);
        if(item != NULL){
            switch(item->type){
                case CB_SN_CURRENCY:
                    cout << "Currency Sign is: " << item->currencysign << " ";
                    break;
                case CB_SN_DECIMALPT:
                    cout << "Decimal Point is Comma ";
                    break;
                default:
                    cout << "Error: wrong special name.\n";
            }
        }
        cout << "\n";
    }    
}

struct _intpair * cons_intpair(int pfirst, int psecond){
    struct _intpair * ret = new struct _intpair;
    ret->first = pfirst;
    ret->second = psecond;
    return ret;
}
struct _obj_comp_clause * cons_obj_comp_clause(enum _obj_comp_clause_type ptype, 
                struct _intpair * pintpair, char * pstr, int ival){
    struct _obj_comp_clause * ret = new struct _obj_comp_clause;
    ret->type = ptype;
    ret->comp_memory = pintpair;
    ret->comp_sequence = pstr;
    ret->comp_segment = ival;
    return ret;
}
struct _object_computer_clauses * cons_object_computer_clauses(char * pname, 
                                                                void * plst){
    struct _object_computer_clauses * ret = new struct _object_computer_clauses;
    ret->comp_name = pname;
    ret->obj_comp_clause_lst = plst;
    return ret;
}

void delete_obj_comp_clause_lst(void * plst){
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _obj_comp_clause * item = (struct _obj_comp_clause *)(*i);
        if(item->comp_memory != NULL) delete item->comp_memory;
        if(item->comp_sequence != NULL) delete item->comp_sequence;
        delete item;
    }
    delete lst;    
}
void delete_object_computer_clauses(struct _object_computer_clauses * item) {
    if(item == NULL) return;
    if(item->comp_name != NULL) delete item->comp_name;
    if(item->obj_comp_clause_lst != NULL) delete_obj_comp_clause_lst(item->obj_comp_clause_lst);
    delete item;
}

void dump_obj_comp_clause_lst(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _obj_comp_clause * item = (struct _obj_comp_clause *)(*i);
        if(item != NULL){
            switch(item->type){
                case CB_OBJCOMP_MEM:
                    cout << "Memory Size: " << item->comp_memory->first << " ";
                    switch(item->comp_memory->second){
                        case CB_MEM_WORDS:
                            cout << "Words "; break;
                        case CB_MEM_CHARS:
                            cout << "Characters "; break;
                        case CB_MEM_MODULE:
                            cout << "Modules "; break;
                        default:
                            cout << "Error: wrong comp memory type.\n";
                    }
                    break;
                case CB_OBJCOMP_SEQ:
                    cout << "Program Collating Sequence is: " << item->comp_sequence << " ";
                    break;
                case CB_OBJCOMP_SEG:
                    cout << "Segment Limit is: " << item->comp_segment << " ";
                    break;
                default:
                    cout << "Error: wrond obj comp clause type\n";
                    break;
            }
        }
        cout << "\n";
    }
}
void dump_object_compute_clauses(struct _object_computer_clauses * item){
    if(item == NULL) return;
    if(item->comp_name != NULL) {
        cout << item->comp_name << " ";
        dump_obj_comp_clause_lst(item->obj_comp_clause_lst);
    } else {
        dump_obj_comp_clause_lst(item->obj_comp_clause_lst);
    }
}
struct _intcharpair * cons_intchar_pair(char * pstr, int ival){
    struct _intcharpair * ret = new struct _intcharpair;
    ret->strval = pstr;
    ret->intval = ival;
    return ret;
}
struct _config_section_option * cons_config_sec_option(
                enum _config_section_type ptype,
                struct _intcharpair * psource_comp_opt,
                struct _object_computer_clauses * pobj_comp_opt,
                void * pspecial_names_list,
                void * prepository_item_list
                ){
    struct _config_section_option * ret = new struct _config_section_option;
    ret->type = ptype;
    ret->source_comp_opt = psource_comp_opt;
    ret->obj_comp_opt = pobj_comp_opt;
    ret->special_names_list = pspecial_names_list;
    ret->repository_items_list = prepository_item_list;
    return ret;
}
struct _same_clause * cons_same_clause( int psame_opt, void * pfilenamelist){
    struct _same_clause * ret = new struct _same_clause;
    ret->same_opt = psame_opt;
    ret->file_name_list = pfilenamelist;
    return ret;
}
void delete_file_name_list(void * plst){
    if(plst == NULL) return;
    list<void *> * lst = (list<void *> *) plst;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct idvalStru * item = (struct idvalStru *)(*i);
        if(item != NULL) delete_id(item);
    }
    delete lst;    
}

struct _intidpair * cons_int_id_pair(int pval, struct idvalStru * pid){
    struct _intidpair * ret = new struct _intidpair;
    ret->ival = pval;
    ret->idval = pid;
    return ret;
}
struct _io_control_item * cons_io_control_item(enum _io_control_type ptype, 
                        struct _same_clause * psame_clause,
                        void * pmulti_file_lst){
    struct _io_control_item * ret = new struct _io_control_item;
    ret->type = ptype;
    ret->same_clause = psame_clause;
    ret->multi_file_lst = pmulti_file_lst;
    return ret;
}
void dump_io_control_item(struct _io_control_item * pitem){
    if(pitem == NULL) return;
    switch(pitem->type){
        case CB_IOCONTROL_SAME:
            if(pitem->same_clause != NULL){
                cout << "Same ";
                switch(pitem->same_clause->same_opt){
                    case CB_SAME_RECORD: 
                        cout << "Record "; break;
                    case CB_SAME_SORT:
                        cout << "Sort "; break;
                    case CB_SAME_SORT_MERGE:
                        cout << "Sort-Merge "; break;
                    default:
                        cout << "Error: Wrong same clause item type.\n"; break;
                }
                cout << "Area For ";
                if(pitem->same_clause->file_name_list != NULL)
                    dump_idlist(pitem->same_clause->file_name_list);
            }
            break;
        case CB_IOCONTROL_MULTI:
            if(pitem->multi_file_lst != NULL){
                cout << "Multiple file tape contains: \n";
                list <void *> * lst = (list <void *> *)pitem->multi_file_lst;
                list <void *>::iterator i;
                for(i = lst->begin(); i != lst->end(); ++i ){
                    struct _intidpair * item = (struct _intidpair *)(*i);
                    if(item->idval != NULL) dump_id(item->idval);
                    if(item->ival > 0) cout << " Position " << item->ival;
                }
                cout << "\n";
            }
            break;
        default: 
            cout << "Error: wrong IO Control item type.\n";
    }
}
void delete_io_control_item(struct _io_control_item * pitem){
    if(pitem == NULL) return;
    if(pitem->same_clause != NULL){
        if(pitem->same_clause->file_name_list != NULL){
            delete_file_name_list(pitem->same_clause->file_name_list);
        }
        delete pitem->same_clause;
    }
    if(pitem->multi_file_lst != NULL){
        list <struct _intidpair *> * lst = (list <struct _intidpair *> *)pitem->multi_file_lst;
        list <struct _intidpair *>::iterator i;
        for(i = lst->begin(); i != lst->end(); ++i ){
            struct _intidpair * item = (struct _intidpair *)(*i);
            if(item->idval != NULL) delete_id(item->idval);
            delete item;
        }
        delete lst;
    }
    delete pitem;
}

struct _gnamepair_int * cons_file_assignment_clause(struct valueType * pfilename, 
                            struct valueType * poptfilename, int pdevicetype){
    struct _gnamepair_int * ret = new struct _gnamepair_int;
    ret->first = pfilename;
    ret->second = poptfilename;
    ret->ival = pdevicetype;
    return ret;
}
const char * dump_device_file_name(int pdevtype){
    stringstream s;
    switch(pdevtype){
        case CB_DISPLAY:
            s << "DISPLAY";
            break;
        case CB_INPUT:
            s << "INPUT";
            break;
        case CB_OUTPUT:
            s << "OUTPUT";
            break;
        case CB_INPUT_OUTPUT:
            s << "INPUT OUTPUT";
            break;
        case CB_RANDOM:
            s << "RANDOM";
            break;
        case CB_TAPE:
            s << "TAPE";
            break;
        default:
            s << "Invalid File Type";
            break;
    }
    return s.str().c_str();
}

struct _int_xval * cons_accessmode_clause(int pmode, 
                                          struct xvaldata * prelativekey){
    struct _int_xval * ret = new struct _int_xval;
    ret->pival = pmode;
    ret->pxval = prelativekey;
    return ret;
}
void dump_accessmode_clause(struct _int_xval * pval){
    if(pval == NULL) return;
    cout << "Access Mode :"; 
    switch(pval->pival){
        case CB_FM_SEQUENTIAL:
            cout << "Sequential";
            break;
        case CB_FM_RANDOM:
            cout << "Random";
            break;
        case CB_FM_DYNAMIC:
            cout << "Dynamic";
            break;
        default: 
            cout << "Wrong type... possible error";
            break;
    }
    if(pval->pxval != NULL){
        cout << " Relative key :";
        dump_xval(pval->pxval);
    }
}
void dump_lock_mode_clause(int pival){
    cout << "Lock Mode :";
    switch(pival){
        case CB_LM_MAN_ON_MUL_REC:
            cout << "MANUAL WITH LOCK ON MULTIPLE LOCK";
            break;
        case CB_LM_AUT_ON_MUL_REC:
            cout << "AUTOMATIC WITH LOCK ON MULTIPLE LOCK";
            break;
        case CB_LM_EXCLUSIVE:
            cout << "EXCLUSIVE";
            break;
        default:
            cout << "Bad mode. Possible error";
            break;
    }
}
struct _record_key_clause * cons_record_key_clause( struct xvaldata * pdata_name,
                                                char * psplip_key_name,
                                                void * psplit_key_value_list){
    struct _record_key_clause * ret = new struct _record_key_clause;
    ret->data_name = pdata_name;
    ret->splip_key_name = psplip_key_name;
    ret->split_key_value_list = psplit_key_value_list;
    return ret;
}
struct _record_key_clause * mod_record_key_clause(struct _record_key_clause * porig,
                                                int pdup){
    struct _record_key_clause * ret = porig;
    ret->duplicate_flag = pdup;
    return ret;
}
void dump_record_key_clause(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _record_key_clause * item = (struct _record_key_clause *)(*i);
        if(item != NULL){
            if(item->data_name != NULL){
                cout << "Key:";
                dump_xval(item->data_name);
            } else {
                cout << "Split Key:" << item->splip_key_name;
                if(item->split_key_value_list != NULL){
                    cout << " = "; 
                    dump_strlist(item->split_key_value_list);
                }    
            }
        }
    }
}
void delete_record_key_clause(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _record_key_clause * item = (struct _record_key_clause *)(*i);
        if(item != NULL){
            if(item->data_name != NULL){
                delete_xval(item->data_name);
            }
            if(item->splip_key_name != NULL)
                delete item->splip_key_name;
            if(item->split_key_value_list != NULL)
                delete_strlist(item->split_key_value_list);
            delete item;
        }
    }
    delete lst;
}

struct _file_control_clause * cons_fcc_item_gnamepair(enum filecontrolclausetype ptype, struct _gnamepair_int * pval){
    struct _file_control_clause * ret = new struct _file_control_clause;
    if(ptype == CB_FCC_ASSIGN) {
        ret->type = CB_FCC_ASSIGN;
        ret->file_assignment_clause = pval;
    }
    return ret;
}
struct _file_control_clause * cons_fcc_item_int(enum filecontrolclausetype ptype, int pival){
    struct _file_control_clause * ret = new struct _file_control_clause;
    switch(ptype){
        case CB_FCC_RESERVE:
            ret->type = CB_FCC_RESERVE;
            ret->reserve_clause = pival;
            break;
        case CB_FCC_ORG:
            ret->type = CB_FCC_ORG;
            ret->organization_clause = pival;
            break;
        case CB_FCC_LOCK:
            ret->type = CB_FCC_LOCK;
            ret->lock_mode_clause = pival;
            break;
        default:
            break;
    }
    return ret;
}
struct _file_control_clause * cons_fcc_item_val(enum filecontrolclausetype ptype, struct valueType * pval){
    struct _file_control_clause * ret = new struct _file_control_clause;
    if(ptype == CB_FCC_PADDING) {
        ret->type = CB_FCC_PADDING;
        ret->padding_char = pval;
    }
    return ret;
}
struct _file_control_clause * cons_fcc_item_xval(enum filecontrolclausetype ptype, struct xvaldata * pval){
    struct _file_control_clause * ret = new struct _file_control_clause;
    switch(ptype){
        case CB_FCC_DELIM:
            ret->type = CB_FCC_DELIM;
            ret->delimiter_clause = pval;
            break;
        case CB_FCC_CODESET:
            ret->type = CB_FCC_CODESET;
            ret->code_set = pval;
            break;
        case CB_FCC_COLLATING:
            ret->type = CB_FCC_COLLATING;
            ret->collating_seq = pval;
            break;
        case CB_FCC_FILESTATUE:
            ret->type = CB_FCC_FILESTATUE;
            ret->file_status = pval;
            break;
        default:
            break;
    }
    return ret;
}
struct _file_control_clause * cons_fcc_item_int_xval(enum filecontrolclausetype ptype, struct _int_xval * pval){
    struct _file_control_clause * ret = new struct _file_control_clause;
    if(ptype == CB_FCC_ACCESS) {
        ret->type = CB_FCC_ACCESS;
        ret->access_mode_clause = pval;
    }
    return ret;
}
struct _file_control_clause * cons_fcc_item_reckey(enum filecontrolclausetype ptype, struct _record_key_clause * pval){
    struct _file_control_clause * ret = new struct _file_control_clause;
    if(ptype == CB_FCC_RECKEY) {
        ret->type = CB_FCC_RECKEY;
        ret->rec_key_clause = pval;
    }
    return ret;
}
struct _file_control_clause * cons_fcc_item_key(enum filecontrolclausetype ptype, void * pval){
    struct _file_control_clause * ret = new struct _file_control_clause;
    if(ptype == CB_FCC_KEYCLAUSE) {
        ret->type = CB_FCC_KEYCLAUSE;
        ret->alt_key_clause = pval;
    }
    return ret;
}
void dump_file_control_clause_list(void * plst){
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _file_control_clause * item = (struct _file_control_clause *)(*i);
        if(item != NULL) {
            switch(item->type){
                case CB_FCC_ASSIGN:
                    cout << "Assign to: ";
                    if(item->file_assignment_clause->ival == 0) {
                        // file and opt file
                        if(item->file_assignment_clause->first != NULL)
                            dump_value(item->file_assignment_clause->first);
                        if(item->file_assignment_clause->second != NULL){
                            cout << " Opt file: ";
                            dump_value(item->file_assignment_clause->second);
                        }
                    } else {
                        // device and opt file name
                        cout << "Device :";
                        cout << dump_device_file_name(item->file_assignment_clause->ival);
                        if(item->file_assignment_clause->second != NULL) {
                            cout << " Opt file: "; 
                            dump_value(item->file_assignment_clause->second);
                        }
                    }
                    break;
                case CB_FCC_RESERVE:
                    cout << "Reserve : " << item->reserve_clause << " Alternate Areas";
                    break;
                case CB_FCC_ORG:
                    cout << "Organization :";            
                    cout << dump_organization_clause(item->organization_clause);
                    break;
                case CB_FCC_PADDING:
                    cout << "Padding :";
                    dump_value(item->padding_char);
                    break;
                case CB_FCC_DELIM:
                    cout << "Delimiter :";
                    dump_xval(item->delimiter_clause);
                    break;
                case CB_FCC_ACCESS:
                    if(item->access_mode_clause != NULL){
                        dump_accessmode_clause(item->access_mode_clause);
                    }
                    break;
                case CB_FCC_LOCK:
                    dump_lock_mode_clause(item->lock_mode_clause);
                    break;
                case CB_FCC_CODESET:
                    cout << "Code Set:";
                    dump_xval(item->code_set);
                    break;
                case CB_FCC_COLLATING:
                    cout << "Collating Sequence:";
                    dump_xval(item->collating_seq);
                    break;
                case CB_FCC_RECKEY:
                    if(item->rec_key_clause != NULL){
                        if(item->rec_key_clause->data_name != NULL){
                            cout << "Record Key:";
                            dump_xval(item->rec_key_clause->data_name);
                        } else {
                            cout << "Record Split Key:" << item->rec_key_clause->splip_key_name;
                            if(item->rec_key_clause->split_key_value_list != NULL){
                                cout << " = "; 
                                dump_strlist(item->rec_key_clause->split_key_value_list);
                            }    
                        }
                    }
                    break;
                case CB_FCC_KEYCLAUSE:
                    if(item->alt_key_clause != NULL){
                        cout << "Alternate Keys: ";
                        dump_record_key_clause(item->alt_key_clause);
                    }
                    break;
                case CB_FCC_FILESTATUE:
                    if(item->file_status != NULL){
                        cout << "File status:";
                        dump_xval(item->file_status);
                    }
                    break;
            }
            cout << "\n";
        }
    }
}

void delete_file_control_clause_list(void * plst){
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _file_control_clause * item = (struct _file_control_clause *)(*i);
        if(item != NULL){
            switch(item->type) {
            case CB_FCC_ASSIGN:
                if(item->file_assignment_clause != NULL){
                    if(item->file_assignment_clause->first != NULL)
                        delete_value(item->file_assignment_clause->first);
                    if(item->file_assignment_clause->second != NULL)
                        delete_value(item->file_assignment_clause->second);
                    delete item->file_assignment_clause;
                }
                break;
            case CB_FCC_RESERVE:
                break;
            case CB_FCC_ORG:
                break;
            case CB_FCC_PADDING:
                if(item->padding_char != NULL)
                    delete_value(item->padding_char);
                break;
            case CB_FCC_DELIM:
                if(item->delimiter_clause != NULL)
                    delete_xval(item->delimiter_clause);
                break;
            case CB_FCC_ACCESS:
                if(item->access_mode_clause != NULL){
                    if(item->access_mode_clause->pxval != NULL)
                        delete_xval(item->access_mode_clause->pxval);
                    delete item->access_mode_clause;
                }
                break;
            case CB_FCC_LOCK:
                break;
            case CB_FCC_CODESET:
                if(item->code_set != NULL)
                    delete_xval(item->code_set);
                break;
            case CB_FCC_COLLATING:
                if(item->collating_seq != NULL)
                    delete_xval(item->collating_seq);
                break;
            case CB_FCC_RECKEY:
                if(item->rec_key_clause != NULL){
                    if(item->rec_key_clause->data_name != NULL)
                        delete_xval(item->rec_key_clause->data_name);
                    if(item->rec_key_clause->splip_key_name != NULL)
                        delete item->rec_key_clause->splip_key_name;
                    if(item->rec_key_clause->split_key_value_list != NULL)
                        delete_strlist(item->rec_key_clause->split_key_value_list);
                }
                break;
            case CB_FCC_KEYCLAUSE:
                if(item->alt_key_clause != NULL)
                    delete_record_key_clause(item->alt_key_clause);
                break;
            case CB_FCC_FILESTATUE: 
                if(item->file_status != NULL)
                    delete_xval(item->file_status);
                break;
            }
            delete item;
        }
    }
    delete lst;        
}

struct _file_control_expression * cons_file_control_expression(int poptflag, 
                char * pfilename, void * pfcc) {
    struct _file_control_expression * ret = new struct _file_control_expression;
    ret->optionalflag = poptflag;
    ret->filename = pfilename;
    ret->fcclist = pfcc;
    return ret;
}
const char * dump_organization_clause(int porganization_clause){
    stringstream s;
    switch(porganization_clause){
        case CB_FL_UNDEFINED:
            s << "Undefined";
            break;
        case CB_FL_LINE_SEQUENTIAL:
            s << "Line Sequential";
            break;
        case CB_FL_SEQUENTIAL:
            s << "Sequential";
            break;
        case CB_FL_BIN_SEQUENTIAL:
            s << "Binary Sequential";
            break;
        case CB_FL_RELATIVE:
            s << "Relative";
            break;
        case CB_FL_INDEXED:
            s << "Indexed";
            break;
        default:
            s << "Unknown file organization clause";
    }
    return s.str().c_str();
}
void * cons_environment_division(void * penv_div_lst){
    void * ret;
    ret = (void *) new CobEnvironmentDivision(penv_div_lst);
    return ret;
}
void * cons_configuration_section(void * pconf_sec_sectionlst){
    void * ret;
    ret = (void *) new CobConfigurationSection(pconf_sec_sectionlst);
    return ret;
}
void * cons_input_output_section(void * pfile_control, void * pio_section){
    void * ret;
    ret = (void *) new CobInputOutputSection(pfile_control, pio_section);
    return ret;
}
void * cons_io_control(void * piocontrol_itemlst){
    void * ret;
    ret = (void *) new CobIOControl(piocontrol_itemlst);
    return ret;
}
void * cons_file_control(void * pfile_ctrl_exprlst){
    void * ret;
    ret = (void *) new CobFileControl(pfile_ctrl_exprlst);
    return ret;
}

/****************************************
 *             Data Division            *
 ****************************************/
void * cons_data_division(void * pdata_div_items){
    void * ret;
    ret = (void *) new CobDataDivision(pdata_div_items);
    return ret;
}
void * cons_file_section(void * plst){
    void * ret;
    ret = (void *) new CobFileSection(plst);
    return ret;
}
void * cons_file_description(char * pname, void * poptionslst, void * pitemlst){
    void * ret;
    ret = (void *) new CobFileDescription(pname, poptionslst, pitemlst);
    return ret;
}
void * set_file_description_type(enum fdsd_enum ptype, void * pfield_descr_item){
    CobFileDescription * ret = (CobFileDescription *)pfield_descr_item;
    ret->setType(ptype);
    return ret;
}
void * cons_working_storage_section(void * pfdsditemlst){
    void * ret;
    ret = (void *) new CobWorkingStorageSection(pfdsditemlst);
    return ret;
}

struct _int_id * cons_int_id(enum datanames ptype, int pival, 
                             struct idvalStru * pid){
    struct _int_id * ret = new struct _int_id;
    ret->type = ptype;
    ret->ival = pival;
    ret->idval = pid;
    return ret;
}
struct _val_clause_item * cons_val_clause_item(struct idvalStru * pid,
                                               struct valueType * pval){
    struct _val_clause_item * ret = new struct _val_clause_item;
    ret->labelid = pid;
    ret->valitem = pval;
    return ret;
}
void dump_value_clause_list(void * plst){
    if(plst == NULL) return;
    
    cout << "Value of : ";
    
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _val_clause_item * item = (struct _val_clause_item *)(*i);
        if(item != NULL){
            if(item->labelid != NULL){
                dump_id(item->labelid); 
            }else {
                cout << "Label";
            }
            if(item->valitem != NULL){
                cout << " is ";
                dump_value(item->valitem);
            }
        }
    }
}

struct _block_contains_clause * cons_block_contains_clause(int pival, 
                                    int ptoival, enum special_lit_enum ptype){
    struct _block_contains_clause * ret = new struct _block_contains_clause;
    ret->ival = pival;
    ret->toival = ptoival;
    ret->type = ptype;
    return ret;
}
struct _record_contains_clause * cons_record_contains_clause( 
                        enum _record_contains_type ptype,
                        struct _intpair * pcontains,
                        void * precord_varyinglst){
    struct _record_contains_clause * ret = new struct _record_contains_clause;
    ret->type = ptype;
    ret->contains = pcontains;
    ret->record_varyinglst = precord_varyinglst;
    return ret;
}
void dump_record_contains_clause(struct _record_contains_clause * prcc){
    if(prcc == NULL) return;
    if(prcc->type == CB_REC_CON){
        cout << "Record Contains:";
        cout << prcc->contains->first;
        if(prcc->contains->second > 0){
            cout << " To " << prcc->contains->second;
        }
        cout << " Characters";
    }
    if(prcc->type == CB_REC_VAR){
        list <void *> * lst = (list <void *> *)prcc->record_varyinglst;
        if(lst != NULL){
            list <void *>::iterator i;
            for(i = lst->begin(); i != lst->end(); ++i ){
                struct _variation_clause * item = (struct _variation_clause *)(*i);
                if(item != NULL){
                    cout << "Record is varying ";
                    if(item->type == CB_VAR_FROMTO){
                        cout << "From " << item->fromto->first 
                             << " To " << item->fromto->second;
                    }else if(item->type == CB_VAR_DEPEND){
                        if(item->depend != NULL){
                            cout << " Depending on ";
                            dump_id(item->depend);
                        }
                    }
                }                
            }
        }
    }
}
struct _variation_clause * cons_variation_clause(enum _variation_clause_type ptype,
                                struct _intpair * pfromto, 
                                struct idvalStru * pdepend){
    struct _variation_clause * ret = new struct _variation_clause;
    ret->type = ptype;
    ret->fromto = pfromto;
    ret->depend = pdepend;
    return ret;
}
struct _linage_clause * cons_linage_clause(struct _int_id * pidival,
                                struct _int_id * pidifooting,
                                struct _int_id * piditop,
                                struct _int_id * pidibottom){
    struct _linage_clause * ret = new struct _linage_clause;
    ret->idival = pidival;
    ret->idifooting = pidifooting;
    ret->iditop = piditop;
    ret->idibottom = pidibottom;
    return ret;
}
struct _fd_sd_option * cons_fdsd_opt_int(enum _fd_sd_option_type ptype, int pival){
    struct _fd_sd_option * ret = new struct _fd_sd_option;
    ret->type = ptype;
    if( ptype == CB_FDSD_EXTERNAL ) ret->is_ext = pival;
    if( ptype == CB_FDSD_GLOBAL) ret->is_global = pival;
    return ret;
}
struct _fd_sd_option * cons_fdsd_opt_void(enum _fd_sd_option_type ptype, void * pval){
    struct _fd_sd_option * ret = new struct _fd_sd_option;
    ret->type = ptype;
    switch (ptype){
        case CB_FDSD_LAB_REC_CLAUSE :
            ret->label_rec_clause = pval;
            break;
        case CB_FDSD_DATA_REC_CLAUSE :
            ret->data_records_clause = pval;
            break;
        case CB_FDSD_VAL_OF_CLAUSE :
            ret->value_oflst = pval;
            break;
        default:
            break;
    }
    return ret;
}
struct _fd_sd_option * cons_fdsd_opt_reccon(enum _fd_sd_option_type ptype, 
                                    struct _record_contains_clause * precconcl){
    struct _fd_sd_option * ret = new struct _fd_sd_option;
    ret->type = ptype;
    ret->recconcl = precconcl;
    return ret;
}
struct _fd_sd_option * cons_fdsd_opt_blockcon(enum _fd_sd_option_type ptype, 
                                    struct _block_contains_clause * pblocconcl){
    struct _fd_sd_option * ret = new struct _fd_sd_option;
    ret->type = ptype;
    ret->blocconcl = pblocconcl;
    return ret;
}
struct _fd_sd_option * cons_fdsd_opt_linage_clause(enum _fd_sd_option_type ptype, 
                                    struct _linage_clause * plinagecl){
    struct _fd_sd_option * ret = new struct _fd_sd_option;
    ret->type = ptype;
    ret->linagecl = plinagecl;
    return ret;
}
void dump_linage_clause(struct _linage_clause * pitem){
    if(pitem == NULL) return;
    
    cout << "Linage is "; dump_intid(pitem->idival);
    if(pitem->idifooting != NULL){
        cout << "\nWith Footing at: "; dump_intid(pitem->idifooting);
    }
    if(pitem->iditop != NULL){
        cout << "\nLines At Top:"; dump_intid(pitem->iditop);
    }
    if(pitem->idibottom != NULL){
        cout << "\nLines At Bottom:"; dump_intid(pitem->idibottom);
    }
}
void dump_intid(struct _int_id * pintid){
    if(pintid == NULL) return;
    
    switch(pintid->type){
        case CB_IDENTIFIER:
            cout << pintid->ival;
            break;
        case CB_INT:
            dump_id(pintid->idval);
            break;
        default:
            break;
    }
}
void delete_linage_clause(struct _linage_clause * pitem){
    if(pitem == NULL) return;
    if(pitem->idival != NULL) {
        if(pitem->idival->idval != NULL) delete_id(pitem->idival->idval);
        delete pitem->idival;
    }
    if(pitem->idifooting != NULL) {
        if(pitem->idifooting->idval != NULL) delete_id(pitem->idifooting->idval);
        delete pitem->idifooting;
    }
    if(pitem->iditop != NULL) {
        if(pitem->iditop->idval != NULL) delete_id(pitem->iditop->idval);
        delete pitem->iditop;
    }
    if(pitem->idibottom != NULL) {
        if(pitem->idibottom->idval != NULL) delete_id(pitem->idibottom->idval);
        delete pitem->idibottom;
    }
    delete pitem;
}

struct _fd_sd_option * cons_fdsd_opt_codeset(enum _fd_sd_option_type ptype, char * pstr){
    struct _fd_sd_option * ret = new struct _fd_sd_option;
    ret->type = ptype;
    ret->codeset = pstr;
    return ret;
}
struct _fd_sd_option * cons_fdsd_opt_report(enum _fd_sd_option_type ptype, char * pstr){
    struct _fd_sd_option * ret = new struct _fd_sd_option;
    ret->type = ptype;
    ret->reportname = pstr;
    return ret;
}

void dump_fd_sd_opt_list(void * plst){
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _fd_sd_option * item = (struct _fd_sd_option *)(*i);
        if(item != NULL){
            switch(item->type){
                case CB_FDSD_EXTERNAL:
                    cout << "Is External";
                    break;
                case CB_FDSD_GLOBAL:
                    cout << "Is External";
                    break;
                case CB_FDSD_LAB_REC_CLAUSE:
                    if(item->label_rec_clause != NULL){
                        cout << "Label Records: ";
                        dump_strlist(item->label_rec_clause);
                    } else {
                        cout << "Label Record Standard";
                    }
                    break;
                case CB_FDSD_REC_CON_CLAUSE:
                    dump_record_contains_clause(item->recconcl);
                    break;
                case CB_FDSD_BLO_CON_CLAUSE:
                    if(item->blocconcl != NULL){
                        cout << "Block Contains:";
                        cout << item->blocconcl->ival;
                        if(item->blocconcl->toival != 0){
                            cout << " To" << item->blocconcl->toival;
                        }
                        if(item->blocconcl->type == CB_SL_RECORDS){
                            cout << " Records";
                        } else if(item->blocconcl->type == CB_SL_CHARACTERS){
                            cout << " Characters";
                        }
                    }
                    break;
                case CB_FDSD_DATA_REC_CLAUSE:
                    if(item->data_records_clause != NULL){
                        cout << "Data Records is/are: ";
                        dump_strlist(item->data_records_clause);
                    }
                    break;
                case CB_FDSD_VAL_OF_CLAUSE:
                    dump_value_clause_list(item->value_oflst);
                    break;
                case CB_FDSD_LINAGE_CLAUSE:
                    dump_linage_clause(item->linagecl);
                    break;
                case CB_FDSD_CODESET_CLAUSE:
                    if(item->codeset != NULL)
                        cout << "Code set: " << item->codeset;
                    break;
                case CB_FDSD_REPORT_CLAUSE:
                    if(item->reportname != NULL)
                        cout << "Report name: " << item->reportname;
                    break;
            }
            cout << "\n";
        }
    }
}

struct _occurance * construct_occurance(int pfrom, int pto, char * pdependingon){
    struct _occurance * ret = new struct _occurance;
    ret->from = pfrom;
    ret->to = pto;
    ret->denepdingon = pdependingon;
    return ret;
}
struct _usageclause * construct_usage_clause(enum usage_clause_enum pusage, int pval){
    struct _usageclause * ret = new struct _usageclause;
    ret->usage_enum = pusage;
    ret->usage_val = pval;
    return ret;
}
void dump_usage_clause_enum(enum usage_clause_enum pval){
    switch(pval){
    case CB_UC_BINARY:
        cout << "BINARY";
        break;
    case CB_UC_COMP:
        cout << "COMP";
        break;
    case CB_UC_COMP_1:
        cout << "COMP1";
        break;
    case CB_UC_COMP_2:
        cout << "COMP2";
        break;
    case CB_UC_COMP_3:
        cout << "COMP3";
        break;
    case CB_UC_COMP_4:
        cout << "COMP4";
        break;
    case CB_UC_COMP_5:
        cout << "COMP5";
        break;
    case CB_UC_COMP_6:
        cout << "COMP6";
        break;
    case CB_UC_DISPLAY:
        cout << "DISPLAY";
        break;
    case CB_UC_INDEX:
        cout << "INDEX";
        break;
    case CB_UC_PACKED_DECIMAL:
        cout << "PACKED DECIMAL";
        break;
    case CB_UC_POINTER:
        cout << "POINTER";
        break;
    }
}

struct _gnamepair * cons_value_pair(struct valueType * pfirst, 
                struct valueType * psecond){
    struct _gnamepair * ret = new struct _gnamepair;
    ret->first = pfirst;
    ret->second = psecond;
    return ret;
}
void dump_gnamepairlst(void * plst){
    if(plst == NULL) return;

    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _gnamepair * item = (struct _gnamepair *)(*i);
        dump_value(item->first);
        if(item->second) {
            cout << " THRU ";
            dump_value(item->second);
        }
    }
}
void delete_gnamepairlst(void * plst){
    if(plst == NULL) return;

    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _gnamepair * item = (struct _gnamepair *)(*i);
        if(item->first) delete_value(item->first);
        if(item->second) delete_value(item->second);
        delete item;
    }
    delete lst;
}

struct _dataclause * cons_dataclause_str(enum _data_clause_enum ptype, char * pstr){
    struct _dataclause * ret = new struct _dataclause;
    ret->type = ptype;
    if( ptype == CB_DC_REDEFINE) ret->redefines = pstr;
    if( ptype == CB_DC_PICTURE) ret->pictureclause = pstr;
    return ret;
}
struct _dataclause * cons_dataclause_int(enum _data_clause_enum ptype, int pival){
    struct _dataclause * ret = new struct _dataclause;
    ret->type = ptype;
    switch( ptype ) {
        case CB_DC_EXTERN:
            ret->isexternal = pival;
            break;
        case CB_DC_GLOBAL:
            ret->isglobal = pival;
            break;
        case CB_DC_SIGN:
            ret->sign = pival;
            break;
        case CB_DC_SYNCH:
            ret->synch = pival;
            break;
        case CB_DC_JUSTIFY:
            ret->justification = pival;
            break;
        case CB_DC_BLANK:
            ret->blank_clause = pival;
            break;
        default:
            break;
    }
    return ret;
}
struct _dataclause * cons_dataclause_gnamepairlst(enum _data_clause_enum ptype, 
                                                  void * pgenpairlst){
    struct _dataclause * ret = new struct _dataclause;
    ret->type = ptype;
    ret->dataclauseval = pgenpairlst;
    return ret;
}
struct _dataclause * cons_dataclause_usage(enum _data_clause_enum ptype, 
                                           struct _usageclause * puval){
    struct _dataclause * ret = new struct _dataclause;
    ret->type = ptype;
    ret->dc_usage = puval;
    return ret;
}
struct _dataclause * cons_dataclause_occur(enum _data_clause_enum ptype, 
                                           struct _occurance * poval){
    struct _dataclause * ret = new struct _dataclause;
    ret->type = ptype;
    ret->occurs = poval;
    return ret;
}
struct _dataclause * cons_dataclause_rename(enum _data_clause_enum ptype, char * pfld, char * pthrufld){
    struct _dataclause * ret = new struct _dataclause;
    ret->type = ptype;
    ret->renamefld = pfld;
    ret->renamethru = pthrufld;
    return ret;
}

// field description, instance of the class could be created and passed on
void * cons_field_description(int pival, char * pfillerorid, void * popt_data_clauses){
    void * ret;
    ret = (void *) new CobFieldRecord(pival, pfillerorid, popt_data_clauses);
    return ret;
}
void delete_field_description_list(void * plst){
    list <void *> * fldlst = (list <void *> *) plst;
    list <void *>::iterator i;  
    for(i = fldlst->begin(); i != fldlst->end(); ++i ){
        delete (CobFieldRecord *)(*i);
    }
    delete fldlst;    
}

/****************************************
 *        Screen section options        *
 ****************************************/
struct _location_details * cons_location_details(enum _location_type_enum ptype,
                                                struct valueType * plocval){
    struct _location_details * ret = new struct _location_details;
    ret->type = ptype;
    ret->locval = plocval;
    return ret;
}
struct _intintstr * cons_number_option(enum datanames ptype, int pival, char * pstr){
    struct _intintstr * ret = new struct _intintstr;
    ret->type = ptype;
    ret->val = pival;
    ret->str = pstr;
    return ret;
}
void dump_number_option(struct _intintstr * pitem){
    if(pitem == NULL) return;
    
    cout << " Number is ";
    switch(pitem->type){
        case CB_INT: cout << pitem->val << " "; break;
        case CB_CHARPTR: cout << pitem->str << " "; break;
        default:
            break;
    }
}

struct _screen_descr_option * cons_scr_descr_options(
                            enum _screen_description ptype,
                            struct idvalStru * pid,
                            struct _intintstr * pnumber_clause,
                            struct valueType * pval,
                            char * ppicstr,
                            struct _location_details * ploc_details){
    struct _screen_descr_option * ret = new struct _screen_descr_option;
    ret->type = ptype;
    ret->id = pid;
    ret->number_clause = pnumber_clause;
    ret->val = pval;
    ret->picstr = ppicstr;
    ret->loc_details = ploc_details;
    return ret;
}
void dump_screen_descr_option(struct _screen_descr_option * pitem){
    if(pitem != NULL){
        switch((int)pitem->type){
            case CB_SCRDSC_BACKGROUND        :
                cout << "Background is " ;  
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_BACKGROUNDCOLOR:
                cout << "Background Color is "; 
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_FOREGROUND :
                cout << "Foreground ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);                
                break;
            case CB_SCRDSC_FOREGROUNDCOLOR :
                cout << "Foreground Color ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_USAGEDISPLAY      :
                cout << "Usage is Display ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            // sign clause
            case CB_LEADING:
                cout << "Sign is Leading ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_TRAILING:
                cout << " Sign is Trailing ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_AUTO              :
                cout << "Auto ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_AUTO_SKIP         :
                cout << "Auto Skip ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_SECURE            :
                cout << "Secure ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_REQUIRED          :
                cout << "Required ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_FULL              :
                cout << "Full ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_BELL              :
                cout << "Bell ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_BEEP              :
                cout << "Beep ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_BLANK_SCREEN      :
                cout << "Blank Screen ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_BLANK_LINE        :
                cout << "Blank Line ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_BLANK_REMAINDER   :
                cout << "Blank Remainder ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_BLINK             :
                cout << "Blink ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_ERASE_EOS         :
                cout << "Erase EOS ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_ERASE_EOL         :
                cout << "Erase EOL ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_ERASE_SCREEN      :
                cout << "Erase Screen ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_HIGHLIGHT         :
                cout << "Highlight ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_NO_HIGHLIGHT      :
                cout << "No Highlight ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_LOWLIGHT          :
                cout << "Low Light ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_REVERSE           :
                cout << "Reverse ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_REVERSEVIDEO      :
                cout << "Reverse Video ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_UNDERLINE         :
                cout << "Underline ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_LINE              :
                cout << "Line ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_COLUMN            :
                cout << "Column ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_BLANK_WHEN_ZERO   :
                cout << "Blank When Zero ";
                dump_id(pitem->id); cout << " "; 
                dump_number_option(pitem->number_clause);
                break;
            case CB_SCRDSC_VALUE             :
                // implement: special treatment. to be handled 
                cout << "Value is "; dump_value(pitem->val);
                break;
            case CB_SCRDSC_PICTURE           :
                // implement: special treatment
                cout << "Picture is " << pitem->picstr << " ";
                switch(pitem->loc_details->type){
                    case CB_LOC_FROM: 
                        cout << "From "; dump_value(pitem->loc_details->locval);
                        break;
                    case CB_LOC_TO:
                        cout << "To "; dump_value(pitem->loc_details->locval);
                        break;
                    case CB_LOC_USING:
                        cout << "Using "; dump_value(pitem->loc_details->locval);
                        break;
                }
                break;
            default:
                cout << "Error: wrong screen description type.\n";
        }   
    }
}

struct _screen_descr_entry * cons_screen_descr_entry(int plevel, char * pnameorfiller, void * poptlst){
    struct _screen_descr_entry * ret = new struct _screen_descr_entry;
    ret->level = plevel;
    ret->nameorfiller = pnameorfiller;
    ret->screen_descr_optionlst = poptlst;
    return ret;
}
void * cons_screen_section(void * pscreen_dscr_list){
    void * ret;
    ret = (void *) new CobScreenSection(pscreen_dscr_list);
    return ret;
}

/****************************************
 *    Communication section options     *
 ****************************************/
struct _gnameint * cons_gnameint(int pival, struct valueType * pgval){
    struct _gnameint * ret = new struct _gnameint;
    ret->ival = pival;
    ret->gnameval = pgval;
    return ret;
}
struct _comm_inp * construct_comm_inp(enum _comm_inp_type pcomminptype, 
                                      struct valueType * pval){
    struct _comm_inp * ret = new struct _comm_inp;
    ret->comminptype = pcomminptype;
    ret->val = pval;
    return ret;
}
void delete_comm_inp(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _comm_inp * item = (struct _comm_inp *)(*i);
        if(item->val != NULL) delete_value(item->val);
        if(item->idlist != NULL) delete_strlist(item->idlist);
        delete item;
    }
    delete lst;    
}
void dump_comm_inp(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _comm_inp * item = (struct _comm_inp *)(*i);
        if(item != NULL){
            // INITIAL INPUT comm_item_type IS gname identifier_list
            if(item->initialflag){
                cout << "INITIAL ";
            }
            cout << "INPUT "; // in case of I-O. check this well. 
            dump_comm_inp_type(item->comminptype);            
            if(item->val != NULL) dump_value(item->val);
            cout << " ";
            if(item->idlist != NULL) 
                dump_strlist(item->idlist);
        }
    }    
}
void dump_comm_inp_type(enum _comm_inp_type ptype){
    switch(ptype) {
        case CB_SYM_QUEUE    : cout << "Symbolic Queue";   break;
        case CB_SYM_SUBQ1    : cout << "Symbolic Sub-queue 1";  break;
        case CB_SYM_SUBQ2    : cout << "Symbolic Sub-queue 2";  break;
        case CB_SYM_SUBQ3    : cout << "Symbolic Sub-queue 3";  break;
        case CB_SYM_MSG_DATE : cout << "Message Date";      break;
        case CB_SYM_MSG_TIME : cout << "Message Time";      break;
        case CB_SYM_SOURCE   : cout << "Symbolic Source";   break;
        case CB_TXT_LENGTH   : cout << "Text Length";       break;
        case CB_END_KEY      : cout << "End Key";           break;
        case CB_STATUS_KEY   : cout << "Status Key";        break;
        case CB_MSG_COUNT    : cout << "Message Count";     break;
        case CB_SYM_TERM     : cout << "Symbolic Terminal"; break;
        default: cout << "Error.. Wrong type";              break;
    }
    cout << " ";
}

struct _comm_output_item * cons_comm_outitem_val(enum _comm_output_type ptype, 
                                                struct valueType * pval){
    struct _comm_output_item * ret = new struct _comm_output_item;
    ret->type = ptype;
    ret->val = pval;
    return ret;
}
struct _comm_output_item * cons_comm_outitem_dest(enum _comm_output_type ptype, 
                                                int pival, void * plst){
    struct _comm_output_item * ret = new struct _comm_output_item;
    ret->type = ptype;
    ret->ival = pival;
    ret->indexlst = plst;
    return ret;
}
void delete_comm_output(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _comm_output_item * item = (struct _comm_output_item *)(*i);
        if(item->val != NULL) delete_value(item->val);
        if(item->indexlst != NULL) delete_xvallist(item->indexlst);
        delete item;
    }
    delete lst;    
}
void dump_comm_output(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _comm_output_item * item = (struct _comm_output_item *)(*i);
        if(item != NULL){
            switch(item->type){
                case CB_COMOUT_DEST      :
                    cout << "Destination count is: ";
                    dump_value(item->val);
                    break;
                case CB_COMOUT_TXTLEN    :
                    cout << "Text Length is: ";
                    dump_value(item->val);
                    break;
                case CB_COMOUT_STAKEY    :
                    cout << "Status key is: ";
                    dump_value(item->val);
                    break;
                case CB_COMOUT_DEST_TAB  :
                    cout << "Destination table occurs: " << item->ival << " ";
                    cout << "Indexed by: ";
                    dump_strlist(item->indexlst);
                    break;
                case CB_COMOUT_ERRKEY    :
                    cout << "Error key is: ";
                    dump_value(item->val);                    
                    break;
                case CB_COMOUT_SYMDEST   :
                    cout << "Symbolic Destination is: ";
                    dump_value(item->val);
                    break;
                default:
                    cout << "Error wrong comm_output_type ";
                    break;
            }
        }
        cout << "\n";
    }    
}

struct _comm_sec_detail_opt * cons_comm_sec_details_opt(enum filetypeenum ptype, 
                                        void * pcommtyplst){
    struct _comm_sec_detail_opt * ret = new struct _comm_sec_detail_opt;
    ret->type = ptype;
    switch(ptype) {
        case CB_FT_INPUT:
            ret->comminput = pcommtyplst;
            break;
        case CB_FT_OUTPUT:
            ret->commoutput = pcommtyplst;
            break;
        case CB_FT_I_O:
            ret->commio = pcommtyplst;
            break;
        default:
            break;
    }
    return ret;
}
struct _comm_section_item * cons_comm_section_item(char * pcdname, 
                                struct _comm_sec_detail_opt * pcomsecdetailsopts,
                                void * pfdsditemlst){
    struct _comm_section_item * ret = new struct _comm_section_item;
    ret->cdname = pcdname;
    ret->comm_sec_detail_options = pcomsecdetailsopts;
    ret->fdsditemlst = pfdsditemlst;
    return ret;
}
void * cons_communication_section(void * pcomm_section_details){
    void * ret;
    ret = (void *) new CobCommunicationSection(pcomm_section_details);
    return ret;
}
 /****************************************
  *    Local storage section options     *
  ****************************************/
void * cons_local_storage_section(void * pfd_sd_itemlst){
    void * ret;
    ret = (void *)new CobLocalStorageSection(pfd_sd_itemlst);
    return ret;
}
/****************************************
  *        Linkage section options       *
  ****************************************/
void * cons_linkage_section(void * pfd_sd_itemlst){
    void * ret;
    ret = (void *)new CobLinkageSection(pfd_sd_itemlst);
    return ret;
}
/*******************************************
 *            Top level nodes              *
 *******************************************/
void * cons_project(void * nested_prog_list){
    void * ret;
    gcbPrj= new CobProject(nested_prog_list);
    ret = (void *) gcbPrj;
    return ret;
}
void * cons_program_definition(
                        void * pidentification_div,
                        void * penvironment_div,
                        void * pdata_div,
                        void * pproc_div,
                        void * pnested_prog){
    void * ret;
    ret = (void *) new CobFile(pidentification_div,penvironment_div,
                               pdata_div, pproc_div, pnested_prog);
//    ((CobFile *)ret)->setFileName(fileList[currentFile-2]);
    ((CobFile *)ret)->setFileName(currentFileName);
    return ret;
}
void * cons_function_division(char * pfunc_name, char * pfileName){
    void * ret;
    ret = (void *) new CobFunctionDivision(pfunc_name, pfileName);
    return ret;
}
void * cons_function_definition(void * pfunc_div,
                                void * penvironment_div,
                                void * pdata_div,
                                void * pproc_division){
    void * ret;
    ret = (void *) new CobFile(pfunc_div, penvironment_div, pdata_div, 
                               pproc_division);
    return ret;
}
void * cobc_malloc (const size_t size)
{
    void *mptr;        
    mptr = calloc (1, size);
    if (!mptr) {
            fprintf (stderr, "Cannot allocate %d bytes of memory - Aborting\n", (int)size);
            fflush (stderr);
            (void)longjmp (cob_jmpbuf, 1);
    }
    return mptr;
}

struct _picture_info * construct_picture(char * str) {
    struct _picture_info	* pic;
    const char		*p;
    size_t		idx = 0;
    size_t		buffcnt = 0;
    size_t		at_beginning;
    size_t		at_end;
    int			p_char_seen = 0;
    int			s_char_seen = 0;
    int			cur_char_seen = 0;
    int			category = 0;
    int			size = 0;
    int			allocated = 0;
    int			digits = 0;
    int			scale = 0;
    int			s_count = 0;
    int			v_count = 0;
    int			i;
    int			n;
    unsigned char	c;
    unsigned char	lastonechar = 0;
    unsigned char	lasttwochar = 0;
    unsigned char	buff[SMALL_BUFF];

    pic = new struct _picture_info;
    pic->str = NULL;
    if (strlen (str) > 50) {
            goto error;
    }
    memset (buff, 0, sizeof (buff));
    for (p = str; *p; p++) {
            n = 1;
            c = *p;
repeat:
            /* count the number of repeated chars */
            while (p[1] == c) {
                    p++, n++;
            }

            /* add parenthesized numbers */
            if (p[1] == '(') {
                    i = 0;
                    p += 2;
                    for (; *p == '0'; p++) {
                            ;
                    }
                    for (; *p != ')'; p++) {
                            if (!isdigit (*p)) {
                                    goto error;
                            } else {
                                    allocated++;
                                    if (allocated > 9) {
                                            goto error;
                                    }
                                    i = i * 10 + (*p - '0');
                            }
                    }
                    if (i == 0) {
                            goto error;
                    }
                    n += i - 1;
                    goto repeat;
            }

            switch (c) {
            case 'A':
                    if (s_char_seen || p_char_seen) {
                            goto error;
                    }
                    category |= PIC_ALPHABETIC;
                    break;

            case 'X':
                    if (s_char_seen || p_char_seen) {
                            goto error;
                    }
                    category |= PIC_ALPHANUMERIC;
                    break;

            case '9':
                    category |= PIC_NUMERIC;
                    digits += n;
                    if (v_count) {
                        scale += n;
                    }
                    break;

            case 'N':
                    if (s_char_seen || p_char_seen) {
                            goto error;
                    }
                    category |= PIC_NATIONAL;
                    break;

            case 'S':
                    category |= PIC_NUMERIC;
                    if (category & PIC_ALPHABETIC) {
                            goto error;
                    }
                    s_count += n;
                    if (s_count > 1 || idx != 0) {
                            goto error;
                    }
                    s_char_seen = 1;
                    continue;

            case ',':
            case '.':
                    category |= PIC_NUMERIC_EDITED;
                    if (s_char_seen || p_char_seen) {
                            goto error;
                    }
                    /* implement: check for the current decimal point from Config section */
                    /*if (c != current_program->decimal_point) {*/
                    if (c != '.' || c != ',') {
                            break;
                    }
            case 'V':
//                    category |= PIC_NUMERIC;   // DSP:X1-22 APR 2012. 
                    category |= PIC_NUMERIC_EDITED;
                    if (category & PIC_ALPHABETIC) {
                            goto error;
                    }
                    v_count += n;
                    if (v_count > 1) {
                            goto error;
                    }
                    break;

            case 'P':
                    category |= PIC_NUMERIC;
                    if (category & PIC_ALPHABETIC) {
                            goto error;
                    }
                    if (p_char_seen) {
                            goto error;
                    }
                    at_beginning = 0;
                    at_end = 0;
                    switch (buffcnt) {
                    case 0:
                            /* P..... */
                            at_beginning = 1;
                            break;
                    case 1:
                            /* VP.... */
                            /* SP.... */
                            if (lastonechar == 'V' || lastonechar == 'S') {
                                    at_beginning = 1;
                            }
                            break;
                    case 2:
                            /* SVP... */
                            if (lasttwochar == 'S' && lastonechar == 'V') {
                                    at_beginning = 1;
                            }
                            break;
                    }
                    if (p[1] == 0 || (p[1] == 'V' && p[2] == 0)) {
                            /* .....P */
                            /* ....PV */
                            at_end = 1;
                    }
                    if (!at_beginning && !at_end) {
                            goto error;
                    }
                    p_char_seen = 1;
                    if (at_beginning) {
                            v_count++;	/* implicit V */
                    }
                    digits += n;
                    if (v_count) {
                            scale += n;
                    } else {
                            scale -= n;
                    }
                    break;

            case '0':
            case 'B':
            case '/':
                    category |= PIC_EDITED;
                    if (s_char_seen || p_char_seen) {
                            goto error;
                    }
                    break;

            case '*':
            case 'Z':
                    category |= PIC_NUMERIC_EDITED;
                    if (category & PIC_ALPHABETIC) {
                            goto error;
                    }
                    if (s_char_seen || p_char_seen) {
                            goto error;
                    }
                    digits += n;
                    if (v_count) {
                            scale += n;
                    }
                    break;

            case '+':
            case '-':
                    category |= PIC_NUMERIC_EDITED;
                    if (category & PIC_ALPHABETIC) {
                            goto error;
                    }
                    if (s_char_seen || p_char_seen) {
                            goto error;
                    }
                    digits += n - 1;
                    if(s_count > 0) {
                            ++digits;
                    }
                    s_count++;
                    break;

            case 'C':
                    category |= PIC_NUMERIC_EDITED;
                    if (!(p[1] == 'R' && p[2] == 0)) {
                            goto error;
                    }
                    if (s_char_seen || p_char_seen) {
                            goto error;
                    }
                    p++;
                    s_count++;
                    break;

            case 'D':
                    category |= PIC_NUMERIC_EDITED;
                    if (!(p[1] == 'B' && p[2] == 0)) {
                            goto error;
                    }
                    if (s_char_seen || p_char_seen) {
                            goto error;
                    }
                    p++;
                    s_count++;
                    break;

            default:
                    // implement. change this 
                    /* if (c == current_program->currency_symbol) {*/
                    if (c == '$') {
                            category |= PIC_NUMERIC_EDITED;
                            if(cur_char_seen == 0) {
                                    digits += n - 1;
                                    cur_char_seen = 1;
                            } else {
                                    digits += n;
                            }
                            /* FIXME: need more check */
                            break;
                    }

                    goto error;
            }

            /* calculate size */
            if (c != 'V' && c != 'P') {
                    size += n;
            }
            if (c == 'C' || c == 'D' || c == 'N') {
                    size += n;
            }

            /* store in the buffer */
            buff[idx++] = c;
            lasttwochar = lastonechar;
            lastonechar = c;
            memcpy (&buff[idx], (unsigned char *)&n, sizeof(int));
            idx += sizeof(int);
            ++buffcnt;
    }
    buff[idx] = 0;

    if (size == 0 && v_count) {
            goto error;
    }
    /* set picture */
    pic->orig = strdupx(str);
    pic->size = size;
    pic->digits = (unsigned char)digits;
    pic->scale = (signed char)scale;
    pic->have_sign = (unsigned char)s_count;

    /* set picture category */
    switch (category) {
    case PIC_ALPHABETIC:
            pic->category = CB_CAT_ALPHABETIC;
            break;
    case PIC_NUMERIC:
            pic->category = CB_CAT_NUMERIC;
            if (digits > 36) {
                cout << "Numeric field cannot be larger than 36 digits";
            }
            break;
    case PIC_ALPHANUMERIC:
    case PIC_NATIONAL:
            pic->category = CB_CAT_ALPHANUMERIC;
            break;
    case PIC_NUMERIC_EDITED:
            pic->str = (char *) cobc_malloc (idx + 1);
            memcpy (pic->str, buff, idx);
            pic->category = CB_CAT_NUMERIC_EDITED;
            pic->lenstr = idx;
            break;
    case PIC_EDITED:
    case PIC_ALPHABETIC_EDITED:
    case PIC_ALPHANUMERIC_EDITED:
    case PIC_NATIONAL_EDITED:
            pic->str = (char *) cobc_malloc (idx + 1);
            memcpy (pic->str, buff, idx);
            pic->category = CB_CAT_ALPHANUMERIC_EDITED;
            pic->lenstr = idx;
            break;
    default:
            goto error;
    }
    goto end;

error:
    cout << "Invalid picture string - " << str ;

end:
    return pic;        
}
    
int datatype_from_category(int pcat){
    int rettype;
    switch(pcat){
    case CB_CAT_NONE:
        rettype = CB_NULL;
        break;
    case CB_CAT_ALPHABETIC:
        rettype = CB_CHARPTR;
        break;
    case CB_CAT_ALPHANUMERIC:
        rettype = CB_CHARPTR;
        break;
    case CB_CAT_ALPHANUMERIC_EDITED:
        rettype = CB_CHARPTR;
        break;
    case CB_CAT_DATA_POINTER:
        rettype = CB_ADDRESS; // implement... see example and fix this if required. 
        break;
    case CB_CAT_NUMERIC:
        // implement ... this needs some thought. When the 99V99 type 
        rettype = CB_INT;
        break;
    case CB_CAT_NUMERIC_EDITED:
        rettype = CB_FLOAT;
        break;
    case CB_CAT_ALL:
        rettype = CB_NULL; // implement. Check if this appear anywhere anytime...
        break;
    case CB_CAT_BOOLEAN:
        rettype = CB_BOOLEAN;
        break;
    case CB_CAT_NATIONAL:
        rettype = CB_CHARPTR;
        break;
    case CB_CAT_NATIONAL_EDITED:
        rettype = CB_CHARPTR;
        break;
    case CB_CAT_OBJ_REF:
        rettype = CB_ADDRESS; // implement... check if ID also needs to be datatype.
        break;
    case CB_CAT_INDEX:
        rettype = CB_INT; // implement ... assumed to be int. check if otherwise in some other context.
        break;
    }
    return rettype;
}
char * strdupx(const char * s)
{
    char * nulstr = NULL;
  size_t len = 1+strlen(s);
  char *p = (char *) malloc(len);
  memcpy(p, s, len);
  if(p)
      return p;
  return nulstr;
//  return p ? memcpy(p, s, len) : nulstr;
}
//////////////////////////////// extern c //////////////////////////////////
}
/*  Level processing. Check what order is stored in the list before processing. 
 * 01
 *    05
 *    05
 *       10
 *       10
 *          20
 *          20
 *       10
 *    05
 *       10
 *          20
 *    05
 * 02
 * 
 *  if previous item exists
 *      handle all special cases: 66, 77, 78, 88, etc. 
 *      create special entries for these. 
 *      if param.level is greater than previous item
 *          the param is a child 
 *          pop previous, add the param as child, push modified item 
 *      else 
 *          push the param on stack
 *  at the end:
 *      pop the items 
 *      push front in the list
 *  sym-tab should have entry for all items, including child items
 * 
 *  This has to be developed as a stand alone global function so that it
 *  can be used in the working storage section as well. 
 * 
 * 
 */        

/* 
 * 1. CobProject
 * 2.     CobFile
 * 3.         CobIdentificationDivision
 * 4.         CobEnvironmentDivision
 * 5.         CobDataDivision
 * 6.         CobProcedureDivision
 * 3. CobIdentificationDivision
 *      string  programName
 *      int     common_initial  common 1, initial 2, absent 0
 *      string  author
 *      string  installation
 *      string  date_written
 *      string  security_options
 *      string  remarks
 * 4. CobEnvironmentDivision
 * 7.     CobConfigurationSection
 * 8.     CobInputOutputSection
 * 9.         FileControlCollection     --- Collection
 * 10.             CobFileControl
 *                 CobSortMergeFileControl
 * 11.        CobIOControl
 * 10. CobFileControl
 *      string  fileRecordName
 *      int     fileType  - this is device as well.
 *      string  fileName
 *      int     organization    { line sequential, sequential, binary sequential, relative, indexed }
 *          ....details will follow later 
 * 5. CobDataDivision
 * 12.     CobFileSection
 * 13.         FileDescriptionCollection    --- Collection
 * 14.             CobFileDescription     ...this will hold FD
 *                      ... options 
 * 15.                 RecordCollection     --- Collection
 * 16.                     CobFieldRecord
 * 17.     CobWorkingStorageSection
 * 15.         RecordCollection             --- Collection
 * 16.             CobFieldRecord
 * 18.     CobLinkageSection            --Later
 * 19.     CobCommunicationSection      --Later
 * 20.     CobScreenSection             --Later
 * 
 * 21. CobProcedureDivision
 *      ... using clause information
 *      ... returning clause information
 * 22.     CobDeclaratives
 * 23.     SectionCollection               --- Collection
 * 24.         CobSectionDeclaration
 * 25.             ParagraphCollection      --- Collection
 * 26.                 CobParagraphDeclaration
 * 27.                     StatementCollection      --- Collection.
 *
 * 28                         CobStatement    ... Abstract that can be implemented by the rest 
 * 
 * 
 */
 /*
 TASKS: 
    The PHNADD01.cbl file 
    -Check all working storage section. Done

 Nov 18 tasks:
    sort_statement      : done
    release_statement   : done
    return_statement    : done
    compute_statement   : done
    All classes for the FD/SD and record implementation
    Display the FD/SD/Working Storage and records properly from the C++ code.

    -try sample java code with the sequential read and write

    list <void *> * lst = (list <void *> *)plst;
    list <void *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i ){
        
        delete (  *)(*i);
    }
    delete lst;    
    
 
 */

/* run time type identification: This will be used throughout.
 http://en.wikibooks.org/wiki/C%2B%2B_Programming/RTTI
 */