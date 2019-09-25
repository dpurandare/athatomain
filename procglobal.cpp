/*
 * File:   procglobal.cpp
 * Procedure Division related items. Separated in order to 
 * reduce the compilation.
 */
/*
 * File: procglobal.cpp
 * Created Date: Wednesday August 27th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Wednesday August 27th 2014 7:08:40 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 */
#include <list>
#include "procglobal.h"
#include "global.h"
#include "procinc.h"
#include "ast/CobProcedureDivision.h"
#include "proc/CobSectionDeclaration.h"
#include "proc/CobParagraphDeclaration.h"
#include "proc/CobSentence.h"
#include "proc/CobStmtInitiate.h"

using namespace std;
/***********************************
 *             Globals             *
 ***********************************/
CobSectionDeclaration * gCurrentSectionDeclaration;
CobParagraphDeclaration * gCurrentParagraphDeclaration;


extern "C" {
/***********************************
 *      Function declarations      *
 ***********************************/
void * start_generic_list(void * pitem){
    list <void *> * retLst = new list <void *>;
    retLst->clear();
    if(pitem != NULL) retLst->push_back(pitem);
    return retLst;
}
void * addto_generic_list(void * plst, void * pitem){
    list <void *> * retLst = (list <void *> *)plst;
    if(pitem != NULL) retLst->push_back(pitem);
    return retLst;
}
    
// list of identifiers or literal values
void * startXvalList(struct xvaldata * pxval){
    list <struct xvaldata *> * listptr = new list <struct xvaldata *>;
    listptr->push_back(pxval);
    return (void *) listptr;
}
void * addXvalListItem(void * plist, struct xvaldata * pxval){
    list <struct xvaldata *> * ret = (list <struct xvaldata *> *) plist;
    ret->push_back(pxval);
    return (void *) ret;
}
void delete_xvallist(void * plst){
    if(plst == NULL) return;
    list <struct xvaldata *> * xvallist = (list <struct xvaldata *> *) plst;
    list <struct xvaldata *>::iterator i;  
    for(i = xvallist->begin(); i != xvallist->end(); ++i ){
        struct xvaldata * item = (struct xvaldata *)(*i);
        if(item != NULL) delete_xval(item);
    }
    delete xvallist;    
}
void * startGnameList(struct valueType * pgname){
    list <struct valueType *> * ret =  new list <struct valueType *>;
    ret->push_back(pgname);
    return (void *) ret;
}
void * addGnameListItem( void * plist, struct valueType * pgname){
    list <struct valueType *> * ret = (list <struct valueType *> *) plist;
    ret->push_back(pgname);
    return (void *) ret;
}
void delete_gnamelist(void * pgnamelst){
    list <struct valueType *> * tlst = (list <struct valueType *> *)pgnamelst;
    if(tlst == NULL) return;
    list<struct valueType *>::iterator i;  
    for(i = tlst->begin(); i != tlst->end(); ++i ){
        struct valueType * item = (struct valueType *)(*i);
        if(item != NULL) delete_value(item);
    }
    delete tlst;
}

// Add statement    
void * construct_add_stmt( enum add_type_enum ptype, void * pfromlst, void * ptolst, 
                           void * pgivinglst, void * ponsize_error ){
    void * ret;
    ret = (void *) new CobStmtAdd(ptype, pfromlst, ptolst, pgivinglst, ponsize_error);                            
    return ret;
}
void * construct_on_error_data( void * ponerror, void * pnotonerror){
    struct on_size_error_data * ret = new struct on_size_error_data;
    ret->on_error = ponerror;
    ret->not_on_error = pnotonerror;
    return (void *) ret;
}
void delete_on_error_data(void * ponerrordata){
    struct on_size_error_data * item = (struct on_size_error_data *)ponerrordata;
    if(item->on_error != NULL) delete (CobProcDivItem *)item->on_error;
    if(item->not_on_error != NULL) delete (CobProcDivItem *)item->not_on_error;
    delete item;
}

// Subtract statement
void * construct_subtract_stmt(enum add_type_enum ptype, void * plstfirst, void * pfromlst, 
                            void * pgiving, void * ponsize_error, int prounded ){
    void * ret = (void *) new CobStmtSubtract(ptype, plstfirst, pfromlst, 
                            pgiving, ponsize_error, prounded);
    return ret;
}
// Multiply statement
void * construct_multiply_stmt(enum add_type_enum ptype, void * ptarget, void * pby, void * pgivinglst,
                            void * ponsize_error) {
    void * ret = (void *) new CobStmtMultiply(ptype, ptarget, pby, pgivinglst,
                                        ponsize_error);
    return ret;
}
// Divide statement
void * construct_divide_stmt(enum divide_type_enum ptype, void * ptarget, void * pby_into, void * pgivinglst,
                            void * premainder, void * ponsize_error){
    void * ret = new CobStmtDivide(ptype, ptarget, pby_into, pgivinglst,
                            premainder, ponsize_error);    
    return ret;
}
void * construct_perform_stmt(struct _proc_names * pnames, void * poptlist, void * pprocstmt){
    void * ret;
    ret = (void *)new CobStmtPerform(pnames, poptlist, pprocstmt);
    return ret;
}
struct _proc_names * construct_pnames(int throughflag, char * pfirst, char * psecond){
    struct _proc_names * ret =  new struct _proc_names;
    ret->thruflag = throughflag;
    ret->target = pfirst;
    ret->to = psecond;
    return ret;
}
void * start_perform_options_list(struct _perform_option * popt){
    return start_generic_list((void *) popt);
}
void * addto_perform_options_list(void * plst, struct _perform_option * popt){
    return addto_generic_list(plst, (void*) popt);
}
struct _perform_option * construct_perf_opt(int ptype, int pforever, 
                struct idvalStru * pid, int ptest, struct _condition * pcond,
                void * pvaryinglist) {
    struct _perform_option * ret = new struct _perform_option;
    ret->type = ptype;
    ret->times = pforever;
    ret->id = pid;
    ret->with_test_specified = ptest;
    ret->condition = pcond;
    ret->perform_varying_list = pvaryinglist;
    return ret;
}
void * start_perf_opt_varying_list( struct _perform_varying * pitem){
    return start_generic_list((void *) pitem);
}
void * addto_perf_opt_varying_list( void * plst, struct _perform_varying * pitem){
    return addto_generic_list(plst, (void *) pitem);
}
struct _perform_varying * construct_perf_varying_item( struct valueType * ptarget,
                struct valueType * pfrom, struct valueType * pto, struct _condition * pcond){
    struct _perform_varying * ret = new struct _perform_varying;
    ret->target = ptarget;
    ret->from = pfrom;
    ret->to = pto;
    ret->condition = pcond;
    return ret;
}
void delete_perform_option_list(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _perform_option * item = (struct _perform_option *)(*i);
        if(item != NULL){
            if(item->id != NULL) delete_id(item->id);
            if(item->condition != NULL) delete_condition(item->condition);
            if(item->perform_varying_list) 
                delete_perform_varying_list(item->perform_varying_list);
            delete item;
        }
    }
    delete lst;
}
void delete_perform_varying_list(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _perform_varying * item = (struct _perform_varying *)(*i); 
        if(item != NULL){
            if(item->target != NULL) delete_value(item->target);
            if(item->from != NULL) delete_value(item->from);
            if(item->to != NULL) delete_value(item->to);
            if(item->condition != NULL) delete_condition(item->condition);
            delete item;
        }
    }
    delete lst;
}
// Move statement
void * construct_move_stmt( int pcorr, struct valueType * pgname, void * plist){
    void * ret;
    ret = (void *)new CobStmtMove(pcorr, pgname, plist);
    return ret;
}
// IfElse statement
void * construct_ifelse_stmt( struct _condition * pcond, struct _statements * pthen,
                              struct _statements * pelse){
    void * ret;
    ret = (void *) new CobStmtIfElse(pcond, pthen, pelse);
    return ret;
}
struct _statements * construct_stmts_list( void * plist, int next_sentence ){
    struct _statements * ret = new struct _statements;
    ret->list = plist;
    ret->type = next_sentence;
    return ret;
}
void delete_statement_list(struct _statements * plst){
    if(plst == NULL) return;
    
//    list<void *> * lst = (list<void *> *) plst;
//    list<void *>::iterator i;  
//    
//    for(i = lst->begin(); i != lst->end(); ++i ){
//        delete (CobProcDivItem *)(*i);
//    }
    if(plst != NULL){
//        check if this is correct. 
//        if(plst->list != NULL) delete (CobSentence *)plst;
        delete (CobSentence *) plst;
    }
}
// Accept statement
struct _esc_excep_action * construct_esc_excp_item( 
                            int pesc_excp, void * pproc){
    struct _esc_excep_action * ret = new struct _esc_excep_action;
    ret->esc_excep = pesc_excp;
    ret->proc_statement = pproc;
    return ret;
}
struct _esc_excep_action * update_esc_excp_item(int pesc_excp, 
                        struct idvalStru * popt_id, void * pproc, 
                        struct _esc_excep_action * pnot_on){
    struct _esc_excep_action * ret = pnot_on;
    ret->esc_excep = pesc_excp;
    ret->opt_id = popt_id;
    ret->proc_statement = pproc;
    return ret;
}
void delete_esc_excp_item(struct _esc_excep_action * pitem){
    if(pitem == NULL) return;
    if(pitem->opt_id != NULL) delete_id(pitem->opt_id);
    if(pitem->proc_statement != NULL) delete (CobSentence *)pitem->proc_statement;
    if(pitem->not_on_item != NULL) delete_esc_excp_item(pitem->not_on_item);
    delete pitem;
}

struct _position_clause * construct_pos(int pwhere, struct valueType * pval){
    struct _position_clause * ret = new struct _position_clause;
    if(pwhere == 1) {
        ret->col = pval;
    } else {
        ret->position = pval;
    }
    return ret;
}
struct _position_clause * update_pos(struct _position_clause * ppos, struct valueType * pval){
    struct _position_clause * ret = ppos;
    ret->line = pval;
    return ret;
}    
struct _with_clause_2 * construct_with_clause2(int penum, struct _position_clause * ppos,struct valueType * pval){
    struct _with_clause_2 * ret = new struct _with_clause_2;
    ret->withenum = penum;
    ret->pos = ppos;
    ret->val = pval;
    return ret;
}
void * create_with2_list(struct _with_clause_2 * pitem){
    return start_generic_list((void *) pitem);
}
void * addto_with2_list(void * plist, struct _with_clause_2 * pitem){
    return addto_generic_list(plist, (void *) pitem);
}
struct xvaldata * getXval(int ptype, struct idvalStru * pid, struct valueType * pval){
    struct xvaldata * ret = new struct xvaldata;
    ret->type = ptype;
    ret->identifier = pid;
    ret->litval = pval;
    return ret;
}
struct _accept_item * construct_accept_item(struct xvaldata * pval,
        struct _with_clause_2 * pwith2val){
    struct _accept_item * ret = new struct _accept_item;
    ret->val = pval;
    ret->with2val = pwith2val;
    return ret;
}
void * create_accept_item_list( struct _accept_item * pitem ){
    return start_generic_list((void *) pitem);
}
void * addto_accept_item_list( void * plist, struct _accept_item * pitem ){
    return addto_generic_list(plist, (void *) pitem);
}
struct _at_clause_accept * construct_at_clause_acc(struct valueType * pline, struct valueType * pcol){
/*struct _at_clause_accept * construct_at_clause_acc(int plc, struct xvaldata * pval) { */
    struct _at_clause_accept * ret = new struct _at_clause_accept;
    ret->line = pline;
    ret->col = pcol;
    return ret;
}
// remember while implementing this. This is used at two places. 
struct xvaldata * get_from_clause(int ptype, struct idvalStru * pid, int pimplcit){
    struct xvaldata * ret = new struct xvaldata;
    ret->type = ptype;
    ret->usetype = 0;
    ret->identifier = pid;
    ret->imp = pimplcit;
    return ret;
}
struct xvaldata * getXval2(int ptype, struct idvalStru * pid, int pival){
    struct xvaldata * ret = new struct xvaldata;
    ret->identifier = pid;
    ret->usetype = ptype;
    ret->type = ptype;
    return ret;    
}
void * construct_accept_stmt(int                        ptype,
                             struct idvalStru *         pid,
                             struct xvaldata  *         pfrom,
                             void *                     paccept_item_list,
                             struct _esc_excep_action * pesc,
                             int                        pmsg_count,
                             struct _at_clause_accept * pat){
    void * ret;
    ret = (void *)new CobStmtAccept(ptype, pid, pfrom, paccept_item_list, pesc,
                                        pmsg_count, pat);
    return ret;
}
// Display statement
void * construct_display_stmt_sysname(void * psysnamelst,
                                      struct xvaldata * pupon,
                                      int padvancing){
    void * ret;
    ret = (void *) new CobStmtDisplay(psysnamelst, pupon, padvancing);
    return ret;
}
void * construct_display_stmt_term(void * pdisp_itemlst){
    void * ret;
    ret = (void *) new CobStmtDisplay(CobStmtDisplay::CB_TERM, pdisp_itemlst);
    return ret;    
}
void * construct_display_stmt_screen(void * pdisp_screen_lst){
    void * ret;
    ret = (void *) new CobStmtDisplay(CobStmtDisplay::CB_SCREEN, pdisp_screen_lst);
    return ret;    
}

void * start_disp_item_list(struct _disp_item * pitem){
    return start_generic_list((void *) pitem);
}
void * addto_disp_item_list(void * plst, struct _disp_item * pitem){
    return addto_generic_list(plst, (void *) pitem);
}
void delete_disp_item_list(void * plst){
    list <void *> * lst = (list <void *> *)plst;
    if(lst == NULL) return;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _disp_item * item = (struct _disp_item *)(*i);
        if(item != NULL) {
            delete_xval(item->id_clause);
            //item->with_clause_list;
            delete_with_clause_list(item->with_clause_list);
        }
    }
    delete lst;    
}

struct _disp_item * construct_disp_item (struct xvaldata * pid_clause, void * pwith_list){
    struct _disp_item * ret = new struct _disp_item;
    ret->id_clause = pid_clause;
    ret->with_clause_list = pwith_list;
    return ret;
}
struct _with_clause * construct_with_clause(int pwithenum, struct xvaldata * pval){
    struct _with_clause * ret = new struct _with_clause;
    ret->withenum = pwithenum;
    ret->addinfo = pval;
    return ret;
}
void * start_with_cl_item_list(struct _with_clause * pitem){
    return start_generic_list((void *) pitem);
}
void * addto_with_cl_item_list(void * plst, struct _with_clause * pitem){
    return addto_generic_list(plst, (void *) pitem);
}
void delete_with_clause_list(void * plst){
    list <void *> * lst = (list <void *> *)plst;
    if(lst == NULL) return;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _with_clause * item = (struct _with_clause *)(*i);
        if(item != NULL){
            delete_xval(item->addinfo);
            delete item;
        }
    }
    delete lst;
}

struct _disp_screen_item * construct_disp_screen_item(
                struct idvalStru * pid, struct _at_clause_accept * pat){
    struct _disp_screen_item * ret = new struct _disp_screen_item;
    ret->id = pid;
    ret->at_clause = pat;
    return ret;
}
void * create_create_screen_item_lst(struct _disp_screen_item * pitem){
    return start_generic_list((void *) pitem);
}
void * addto_create_screen_item_lst(void * plst, struct _disp_screen_item * pitem){
    return addto_generic_list(plst, (void *) pitem);
}
void delete_screen_item_list(void * plst){
    list <void *> * lst = (list <void *> *)plst;
    if(lst == NULL) return;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _disp_screen_item * item = (struct _disp_screen_item *)(*i);
        if(item != NULL) { 
            if(item->id != NULL) delete_id(item->id);
            if(item->at_clause != NULL) {
                if(item->at_clause->col != NULL)
                    delete_value(item->at_clause->col);
                if(item->at_clause->line != NULL)
                    delete_value(item->at_clause->line);
                delete item->at_clause;
            }
            delete item;
        }
    }
    delete lst;
}

// Open statement
void * create_int_list(int pval){
    list <int> * ret =  new list <int>;
    ret->push_back(pval);
    return ret;
}
void * addto_int_list(void * plst, int pval){
    list <int> * ret = (list <int> *) plst;
    ret->push_back(pval);
    return ret;
}
void * create_file_name_list(struct _file_name_item * pitem){
    return start_generic_list((void *) pitem);
}
void * addto_file_name_list(void * plst, struct _file_name_item * pitem){
    return addto_generic_list(plst, (void *) pitem);
}
struct _file_name_item * construct_file_name(struct idvalStru * pfile_name, void * popen_items){
    struct _file_name_item * ret = new struct _file_name_item;
    ret->file_name = pfile_name;
    ret->open_items = popen_items;
    return ret;
}
struct _open_file_type * construct_open_file_type(int pfile_type, void * popen_file_list){
    struct _open_file_type * ret = new struct _open_file_type;
    ret->file_type = pfile_type;
    ret->open_file_list = popen_file_list;
    return ret;
}
void * create_open_file_list(struct _open_file_type * pitem){
    return start_generic_list((void *) pitem);
}
void * addto_open_file_list(void * plst, struct _open_file_type * pitem){
    return addto_generic_list(plst, (void *) pitem);
}
void delete_open_file_list(void * plst){ //// struct _open_file_type
    list <void *> * lst = (list <void *> *)plst;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _open_file_type * item = (struct _open_file_type *)(*i);
        if(item != NULL){
            if(item->open_file_list != NULL) {
                delete_file_name_item_list(item->open_file_list);
            } 
        }
    }
    delete lst;
}
void delete_file_name_item_list(void * plst){ //struct _file_name_item
    list <void *> * lst = (list <void *> *)plst;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _file_name_item * item = (struct _file_name_item *)(*i);
        if(item != NULL){
            if(item->file_name != NULL) delete_id(item->file_name);
            if(item->open_items != NULL) delete (list <void *> *) (item->open_items);
            delete item;
        }
    }
    delete lst;
}
void * construct_open_stmt(int pexclusive, void * popen_file_type_list){
    void * ret;
    ret = (void *) new CobStmtOpen(pexclusive, popen_file_type_list);
    return ret;
}
// Close Statement
struct _close_file_item * construct_close_file_item(struct idvalStru * pfile_name, int pclose_file_option){
    struct _close_file_item * ret = new struct _close_file_item;
    ret->file_name = pfile_name;
    ret->close_file_option = pclose_file_option;
    return ret;
}
void * start_close_file_list(struct _close_file_item * pitem){
    return start_generic_list((void *) pitem);
}
void * addto_close_file_list(void * plst, struct _close_file_item * pitem){
    return addto_generic_list(plst, (void *) pitem);
}
void delete_close_file_list(void * plst){
    if(plst == NULL) return;
    list <void *> * cilst = (list <void *> *)plst;
    list <void *>::iterator i;  
    for(i = cilst->begin(); i != cilst->end(); ++i ){
        struct _close_file_item * cfitem = (struct _close_file_item *)(*i);
        if(cfitem != NULL) {
            if(cfitem->file_name != NULL)delete_id(cfitem->file_name);
            delete cfitem;
        }
    }
    delete cilst;
}
void * construct_close_stmt(void * plst){
    void * ret;
    ret = (void *) new CobStmtClose(plst);
    return ret;
}

// Read statement
struct _at_end_action * construct_at_end_clause(void * pend_proc, void * pnotend_proc){
    struct _at_end_action * ret = new struct _at_end_action;
    ret->at_end_action = pend_proc;
    ret->not_at_end_action = pnotend_proc;
    return ret;
}
void delete_at_end_clause(struct _at_end_action * pitem){
    if(pitem->at_end_action != NULL) {
        delete (CobProcDivItem *)pitem->at_end_action;
    }
    if(pitem->not_at_end_action != NULL) {
        delete (CobProcDivItem *)pitem->not_at_end_action;
    }
    delete pitem;    
}

struct _invalid_key_action * construct_invalid_key_clause(void * pyes, void * pno){
    struct _invalid_key_action * ret = new struct _invalid_key_action;
    ret->invalid_key_proc = pyes;
    ret->not_invalid_key_proc = pno;
    return ret;
}
void delete_invalid_key_action(void * pinvkeyaction){
    if(pinvkeyaction == NULL) return;
    struct _invalid_key_action * item = (struct _invalid_key_action *)pinvkeyaction;
    if(item->invalid_key_proc != NULL) {
        delete (CobProcDivItem *)item->invalid_key_proc;
    }
    if(item->not_invalid_key_proc != NULL) {
        delete (CobProcDivItem *)item->not_invalid_key_proc;
    }
    delete item;
}

void * construct_read_seq_stmt( struct idvalStru * pfile_name,
                                int pnext_prev,
                                int precord_clause,
                                struct idvalStru * popt_id,
                                struct _at_end_action * pend_action
                              ){
    void * ret;
    ret = (void *) new CobStmtRead(pfile_name, pnext_prev, precord_clause, 
                                        popt_id, pend_action);
    return ret;
    
}
void * construct_read_random_stmt( struct idvalStru * pfile_name,
                                int next_prev,
                                int precord_clause,
                                struct idvalStru * popt_id,
                                struct idvalStru * popt_key,
                                struct _invalid_key_action * pinvalid_key
                                ){
    void * ret;
    ret = (void *) new CobStmtRead(pfile_name, next_prev, precord_clause,
                                    popt_id, popt_key, pinvalid_key);
    return ret;
}
// Write statement
void * construct_action_pair(void * yesaction, void * noaction){
    struct _action_pair * ret = new struct _action_pair;
    ret->yes_action = yesaction;
    ret->no_action = noaction;
    return (void *) ret;
}
void delete_action_pair(void * pactinpair){
    if(pactinpair == NULL) return;
    struct _action_pair * actpair = (struct _action_pair *)pactinpair;
    if(actpair->yes_action != NULL) {
        CobSentence * stmt = (CobSentence *)(actpair->yes_action);
        delete (CobProcDivItem *)(actpair->yes_action);
        actpair->yes_action = NULL;
    }
    if(actpair->no_action != NULL) {
        delete (CobSentence *)actpair->no_action;
        actpair->no_action = NULL;
    }
    delete actpair;
}
struct _advaicing_clause * construct_advancing_clause( int pbefore_after, 
                int popt_advancing, struct xvaldata * padvancing_clause){
    struct _advaicing_clause * ret = new struct _advaicing_clause;
    ret->before_after = pbefore_after;
    ret->opt_advanc = popt_advancing;
    ret->advancing = padvancing_clause;
    return ret;
}
struct _advaicing_clause * conemp_advancing_clause(){
    struct _advaicing_clause * ret = new struct _advaicing_clause;
    ret->before_after = -1;
    ret->opt_advanc = -1;
    ret->advancing = NULL;
    return ret;    
}
struct _id_gname * gen_id_gname(struct idvalStru * pid, struct valueType * pval){
    struct _id_gname * ret = new struct _id_gname;
    ret->ident = pid;
    ret->value = pval;
    return ret;
}
void * construct_write_stmt(struct _id_gname * pidgname, 
                            struct _advaicing_clause * padv){
    void * ret;
    ret = (void *) new CobStmtWrite(pidgname, padv);
    return ret;
}
void * construct_write_stmt2(struct _id_gname * pidgname, 
                            struct _invalid_key_action * keyvalidation){
    void * ret;
    ret = (void *) new CobStmtWrite(pidgname, keyvalidation);
    return ret;
}
void * construct_compute_stmt(void * plvallist,
                                int popt_rounded,
                                struct _arithmetic_expression * pexp,
                                int popt_not,
                                void * popt_on_error){
    void * ret;
    ret = (void *) new CobStmtCompute(plvallist, popt_rounded, pexp,popt_not, 
                                    popt_on_error);;
    return ret;
}
void * construct_rewrite_stmt(struct idvalStru * pid,
                             struct valueType * pfrom_clause,
                             void * pkeyvalidation){
    void * ret;
    ret = (void *) new CobStmtRewrite(pid, pfrom_clause, pkeyvalidation);
    return ret;
}
void * construct_goback_stmt(){
    void * ret;
    ret = (void *) new CobStmtGoback();
    return ret;
}
void * construct_purge_stmt( struct idvalStru * pid){
    void * ret;
    ret = (void *) new CobStmtPurge(pid);
    return ret;    
}
void * construct_release_stmt(struct idvalStru * pid, struct xvaldata * pval){
    void * ret;
    ret = (void *) new CobStmtRelease(pid, pval);
    return ret;            
}
void * construct_unlock_stmt(struct idvalStru * pid){
    void * ret;
    ret = (void *) new CobStmtUnlock(pid);
    return ret;            
}
void * construct_cancel_stmt(void * pitem_list){ /* (struct xvaldata * pval */
    void * ret;
    ret = (void *) new CobStmtCancel(pitem_list);
    return ret; 
}
void * construct_continue_stmt(){
    void * ret;
    ret = (void *) new CobStmtContinue();
    return ret; 
}
void * construct_goto_stmt1(char * pprocname){
    void * ret;
    ret = (void *) new CobStmtGoto(pprocname);
    return ret;     
}
void * construct_goto_stmt2(void * lprocnamelst, struct idvalStru * pid){
    void * ret;
    ret = (void *) new CobStmtGoto(lprocnamelst, pid);
    return ret;     
}
void * construct_strpair(char * str1, char * str2){
    struct _strpair * ret = new struct _strpair;
    ret->first = str1;
    ret->second = str2;
    return ret;         
}
void * construct_alter_stmt(void * plst){
    void * ret;
    ret = (void *) new CobStmtAlter(plst);
    return ret;         
}
void * construct_return_stmt(struct idvalStru * pfilename,
                            int popt_record, 
                            struct xvaldata * pinto_identifier,
                            void * pend_action ){
    void * ret;
    ret = (void *) new CobStmtReturn(pfilename,popt_record, 
                                        pinto_identifier, pend_action);
    return ret;             
}
struct _delete_simple * construct_del_simple(struct idvalStru * pfilename, int popt_record, void * ponkey_action){
    struct _delete_simple * ret = new struct _delete_simple;
    ret->filename = pfilename;
    ret->opt_record = popt_record;
    ret->key_validation_action = ponkey_action;
    return ret;
}
void delete_del_simple(struct _delete_simple * pitem){
    if(pitem == NULL) return;
    if(pitem->filename != NULL) delete_id(pitem->filename);
    if(pitem->key_validation_action != NULL) 
        delete_invalid_key_action(pitem->key_validation_action);
    delete pitem;
}

void * construct_delete_stmt(struct _delete_simple * pitem){
    void * ret;
    ret = (void *) new CobStmtDelete(pitem);
    return ret;
}
void * construct_delete_multi_stmt(void * pfilelst){
    void * ret;
    ret = (void *) new CobStmtDelete(pfilelst);
    return ret;
}
struct _str_argument * construct_str_argument(void * pitemlst, struct xvaldata * pmoditemlst){
    struct _str_argument * ret =  new struct _str_argument;
    ret->pgnamelst = pitemlst;
    ret->moditem = pmoditemlst;
    return ret;
}
void * construct_string_stmt(void * pstr_args, struct idvalStru * pid,
                             struct idvalStru * pptropt, 
                             struct _action_pair * pon_overflow){
    void * ret;
    ret = (void *) new CobStmtString(pstr_args, pid, pptropt, pon_overflow);
    return ret;
}
void * construct_stop_stmt(enum _stop_option_enum ptype, struct xvaldata * pval){
    void * ret;
    ret = (void *) new CobStmtStop(ptype, pval);
    return ret;    
}
void * construct_exit_stmt(enum _exit_enum ptype, int pcycle){
    void * ret;
    ret = (void *) new CobStmtExit(ptype, pcycle);
    return ret;        
}
/*
struct _address_item * construct_address_item(int ptype, struct idvalStru * pid){
    struct _address_item * ret = new struct _address_item;
    ret->type = ptype;
    ret->id = pid;
    return ret;            
}
void delete_address_item(struct _address_item * pitem){
    if(pitem == NULL) return;
    if(pitem->id != NULL) delete_id(pitem->id);
    delete pitem;
}
void delete_address_item_list(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _address_item * item = (struct _address_item *)(*i);
        delete_address_item(item);
    }
    delete lst;
}
struct _up_down_item * construct_up_down_item(void * plst, int pupdown, 
        struct xvaldata * pval){
    struct _up_down_item * ret = new struct _up_down_item;
    ret->itemlst = plst;
    ret->updown = pupdown;
    ret->val = pval;
    return ret;
}
struct _condition_item * construct_condition_item(struct idvalStru * pid, int ptrue_false){
    struct _condition_item * ret = new struct _condition_item;
    ret->id = pid;
    ret->true_false = ptrue_false;
    return ret;
}
struct _set_address_item * construct_set_address_item(void * paddr_item_list, 
                struct _address_item * ptoitem){
    struct _set_address_item * ret = new struct _set_address_item;
    ret->addr_item_list = paddr_item_list;
    ret->toitem = ptoitem;
    return ret;
}
struct _set_pointer_item * construct_set_pointer_item(void * pitemlst, int pupdown,
                struct idvalStru * pid){
    struct _set_pointer_item * ret = new struct _set_pointer_item;
    ret->itemlst = pitemlst;
    ret->updown = pupdown;
    ret->id = pid;
    return ret;
}
struct _mnemonic_item * construct_mnemonic_item(void * plst, int ponoff){
    struct _mnemonic_item * ret = new struct _mnemonic_item;
    ret->item_list = plst;
    ret->onoff = ponoff;
    return ret;
}
struct _set_index_item * construct_set_index_item(void * plst,
                                                  struct xvaldata * pval){
    struct _set_index_item * ret = new struct _set_index_item;
    ret->lst = plst;
    ret->val = pval;
    return ret;
}
void * construct_set_stmt(enum _set_stmt_type_enum ptype, void * plst){
    void * ret;
    ret = (void *) new CobStmtSet(ptype, plst);
    return ret;
}
*/ 
////////// SET statement : modified
struct _set_item * cons_set_item(enum _set_info_type ptype, struct xvaldata * pval){
    struct _set_item * ret = new struct _set_item;
    ret->type = ptype;
    ret->xval = pval;
    return ret;
}
void delete_set_item_list(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _set_item * item = (struct _set_item *)(*i);
        if(item != NULL) {
            if(item->xval != NULL) {
                delete_xval(item->xval);
            }
            delete item;
        }
    }
    delete lst;
}

struct _set_clause * cons_set_clause(void * plst, enum _set_direction pdir, 
                        struct _set_item * pitem){
    struct _set_clause * ret = new struct _set_clause;
    ret->set_item_list = plst;
    ret->direction = pdir;
    ret->ritem = pitem;
    return ret;
}
void delete_set_clause_list(void * plst){
    if(plst == NULL) return;
    list <void *> * lst = (list <void *> *)plst;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _set_clause * item = (struct _set_clause *)(*i);
        if(item != NULL){
            if(item->set_item_list != NULL)
                delete_set_item_list(item->set_item_list);
            if(item->ritem != NULL){
                if(item->ritem->xval != NULL)
                    delete_xval(item->ritem->xval);
                delete item->ritem;
            }
            delete item;
        }
    }
    delete lst;
}

void * cons_set_stmt(void * pset_clause_list){
    void * ret;
    ret = (void *) new CobStmtSet(pset_clause_list);
    return ret;    
}


////////////////////////////////////////////////
struct _on_key_clause * construct_on_key_clause(int pdir, void * plst){
    struct _on_key_clause * ret = new struct _on_key_clause;
    ret->direction = pdir;
    ret->itemlist = plst;
    return ret;
}
void delete_on_key_clause_list(void * plst){
    if(plst == NULL) return;
    list<void *> * lst = (list<void *> *) plst;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _on_key_clause * item = (struct _on_key_clause *)(*i);
        if(item != NULL) {
            if(item->itemlist != NULL)
                delete_xvallist(item->itemlist);
            delete item;
        }
    }
    delete lst;
}

struct _file_io_clause * construct_file_io_clause(enum filetypeenum ptype,
                char * pprocname, char * pthru_procname, void * pfname_lst){
    struct _file_io_clause * ret = new struct _file_io_clause;
    ret->type = ptype;
    ret->proc_name = pprocname;
    ret->thru_proc_name = pthru_procname;
    ret->using_fname_list = pfname_lst;
    return ret;
}
void delete_file_io_clause(struct _file_io_clause * pitem){
    if(pitem == NULL) return;
    if(pitem->proc_name != NULL) delete pitem->proc_name;
    if(pitem->thru_proc_name != NULL) delete pitem->thru_proc_name;
    if(pitem->using_fname_list != NULL) delete_xvallist(pitem->using_fname_list);
    delete pitem;
}

void * construct_sort_stmt( struct idvalStru * pid,
            void * ponkeylst,
            int popt_duplicate,
            struct idvalStru * pcollating_seq,
            struct _file_io_clause * pinput,
            struct _file_io_clause * poutput){
    void * ret;
    ret = (void *) new CobStmtSort(pid, ponkeylst, popt_duplicate, pcollating_seq,
                                pinput, poutput);
    return ret;
}
void * construct_merge_stmt(struct idvalStru * pfile_name,
        void * ponkey_lst, struct idvalStru * pcollating_seq,
        void * pusingfile, struct _file_io_clause * poutput){
    void * ret;
    ret = (void *) new CobStmtMerge(pfile_name, ponkey_lst, pcollating_seq,
                                    pusingfile, poutput);
    return ret;
}
struct _eval_item * construct_eval_item(enum _eval_enum ptype, void * pfirst, void * psecond){
    struct _eval_item * ret = new struct _eval_item;
    ret->type = ptype;
    switch(ptype) {
        case CB_EI_ANY: break;
        case CB_EI_COND: 
            ret->cond = (struct _condition *) pfirst; 
            break;
        case CB_EI_TRUE:  break;
        case CB_EI_FALSE:  break;
        case CB_EI_EVAL:
            ret->from_item = (struct _eval_item *) pfirst;
            break;
        case CB_EI_EVAL_ITEMS: 
            ret->from_item = (struct _eval_item *) pfirst;
            ret->thru_item = (struct _eval_item *) psecond;
            break;
        case CB_EI_IDENTIFIER: 
            ret->id = (struct idvalStru *) pfirst; 
            break;
        case CB_EI_LITERAL:
            ret->litval = (struct valueType *) pfirst;
            break;
        case CB_EI_ARITHM_EXP:
            ret->arithm_expr = (struct _arithmetic_expression *)pfirst;
            break;
        case CB_EI_M_WHEN:
            ret->id = (struct idvalStru *)pfirst;
            ret->from_item = (struct _eval_item *)psecond;
            break;
        case CB_EI_GNAME:    
            ret->litval = (struct valueType *) pfirst;
            break;
    }
    return ret;
}
struct _when_clause_item * construct_when_clause_item(
                struct _eval_item * pwhenitem,
                void * pwhenlst, void * pwhenaction){
    struct _when_clause_item * ret =  new struct _when_clause_item;
    ret->when_item = pwhenitem,
    ret->when_also_item_lst = pwhenlst;
    ret->procstmt = pwhenaction;
    return ret;
}
void delete_eval_item(struct _eval_item * pitem){
    if(pitem == NULL) return;
    switch(pitem->type) {
        case CB_EI_COND: 
            if(pitem->cond != NULL) delete_condition(pitem->cond);
            break;
        case CB_EI_EVAL:
            if(pitem->from_item != NULL) delete_eval_item(pitem->from_item);
            break;
        case CB_EI_EVAL_ITEMS: 
            if(pitem->from_item != NULL) delete_eval_item(pitem->from_item);
            if(pitem->thru_item != NULL) delete_eval_item(pitem->thru_item);
            break;
        case CB_EI_IDENTIFIER: 
            if(pitem->id != NULL) delete_id(pitem->id);
            break;
        case CB_EI_LITERAL:
            if(pitem->litval != NULL) delete_value(pitem->litval);
            break;
        case CB_EI_ARITHM_EXP:
            if(pitem->arithm_expr != NULL) delete_arithmetic_expression(pitem->arithm_expr);
            break;
        case CB_EI_M_WHEN:
            if(pitem->id != NULL) delete_id(pitem->id);
            if(pitem->from_item != NULL) delete_eval_item(pitem->from_item);
            break;
        case CB_EI_GNAME:    
            if(pitem->litval != NULL) delete_value(pitem->litval);
            break;
        default: break;
    }
    delete pitem;
}
void delete_eval_item_list(void * plst){
    if(plst == NULL) return;
    list <void *> * lst =(list <void *> *) plst; 
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _eval_item * pitem = (struct _eval_item *)(*i); 
        if(pitem != NULL)
            delete_eval_item(pitem);
    }
    delete lst;    
}
void delete_when_clause_item(struct _when_clause_item * pitem){
    if(pitem == NULL) return;
    if(pitem->when_also_item_lst != NULL) {
        delete_eval_item_list(pitem->when_also_item_lst); 
    } else {
        if(pitem->when_item != NULL) delete_eval_item(pitem->when_item);        
    }         
    if(pitem->procstmt != NULL) delete (CobProcDivItem *)pitem->procstmt;
    delete pitem;
}
void delete_when_clause_item_list(void * plst){
    if(plst == NULL) return;
    list <void *> * lst =(list <void *> *) plst; 
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _when_clause_item * pitem = (struct _when_clause_item *)(*i); 
        delete_when_clause_item(pitem);
    }
    delete lst;    
}
void * construct_evaluate_stmt(struct _eval_item * pevlitem,
                void * palso_eval_item_lst,
                void * pwhen_clause_lst,
                void * popt_when_other_action){
    void * ret;
    ret = (void *)new CobStmtEvaluate(pevlitem, palso_eval_item_lst,
                                      pwhen_clause_lst, popt_when_other_action);
    return ret;
}

struct _into_clause * construct_into_clause(struct idvalStru * pid,
                struct idvalStru * pdelimid,
                struct idvalStru * pcountinid){
    struct _into_clause * ret = new struct _into_clause;
    ret->id = pid;
    ret->delimin_id = pdelimid;
    ret->countin_id = pcountinid;
    return ret;
}
struct _delim_clause * construct_delim_clause(int pallflag, 
                        struct valueType * pval, void * por_itemlst){
    struct _delim_clause * ret = new struct _delim_clause;
    ret->byallflag = pallflag;
    ret->val = pval;
    ret->or_item_lst = por_itemlst;
    return ret;
}
struct _or_item * construct_or_item(int pallflag, struct valueType * pitem){
    struct _or_item * ret = new struct _or_item;
    ret->allflag = pallflag;
    ret->val = pitem;
    return ret;
}
void * construct_unstring_stmt(struct idvalStru * pid,
                        struct _delim_clause * pdelim_clause,
                        void * punstringintolist,
                        struct idvalStru * pwithptr,
                        struct idvalStru * ptallyingin,
                        struct _action_pair * ponoverflow){
    void * ret;
    ret = (void *) new CobStmtUnstring(pid, pdelim_clause, punstringintolist,
                                        pwithptr, ptallyingin, ponoverflow);
    return ret;
}
struct _use_on_item * cons_on_item(enum _use_on_item_type ptype,
                                   struct idvalStru * pid){
    struct _use_on_item * ret = new struct _use_on_item;
    ret->type = ptype;
    ret->id = pid;
    return ret;
}
struct _use_proc_option * construct_use_proc_option(int ptype, struct idvalStru * pfilename, int pfiletype){
    struct _use_proc_option * ret = new struct _use_proc_option;
    ret->nameortype = ptype;
    ret->filetype = pfiletype;
    ret->filename = pfilename;
    return ret;
}
void * cons_use_stmt(int pglobal, int perr_excp, struct _use_proc_option * pprocopt){
    void * ret;
    ret = (void *) new CobStmtUse(pglobal, perr_excp, pprocopt);
    return ret;
}
void * cons_use_DBG_stmt(void * ponitems){
    void * ret;
    ret = (void *) new CobStmtUse(ponitems);
    return ret;    
}
void * cons_use_after(int pglobal, int pbeg_end, int pfile_reel, 
                        struct _use_proc_option * pprocopt){
    void * ret;
    ret = (void *) new CobStmtUse(pglobal, pbeg_end, pfile_reel, pprocopt);
    return ret;
}
void * cons_use_bef_reporting(struct idvalStru * pfilename){
    void * ret;
    ret = (void *) new CobStmtUse(pfilename);
    return ret;
}
//struct _replacing_item * construct_replacing_item(int pcatname, struct xvaldata * pval){
//    struct _replacing_item * ret = new struct _replacing_item;
//    ret->cat_name = pcatname;
//    ret->val = pval;
//    return ret;
//}
struct _replacing_item * construct_replacing_item(enum _inspect_item_selection ptype, 
                struct valueType * ptargetval, struct valueType * pbyval, 
                void * pbefaftlst) {
    struct _replacing_item * ret = new struct _replacing_item;
    ret->type = ptype;
    ret->targetval = ptargetval;
    ret->byval = pbyval;
    ret->before_after_lst = pbefaftlst;
    return ret;
}
void delete_replacing_item_list(void * plst){
    if(plst == NULL) return;
    list<void *> * lst = (list<void *> *) plst;
    list<void *>::iterator i;  
    for(i = lst->begin(); i != lst->end(); ++i ){
        struct _replacing_item * item = (struct _replacing_item *)(*i);
        if(item != NULL) {
            if(item->byval) delete_value(item->byval);
            if(item->targetval) delete_value(item->targetval);
            if(item->before_after_lst) 
                delete_bef_aft_item_list(item->before_after_lst);
            delete item;
        }
    }
    delete lst;    
}

//void delete_replacing_item_list(void * plst){
//    if(plst == NULL) return;
//    list<void *> * lst = (list<void *> *) plst;
//    list<void *>::iterator i;  
//    for(i = lst->begin(); i != lst->end(); ++i ){
//        struct _replacing_item * item = (struct _replacing_item *)(*i);
//        if(item != NULL) {
//            delete_xval(item->val);
//            delete item;
//        }
//    }
//    delete lst;    
//}

struct _multi_when_clause * construct_multi_when_clause(struct _eval_item * pevalitem,
                void * pandwhenlst, void * pimpaction){
    struct _multi_when_clause * ret = new struct _multi_when_clause;
    ret->whenitem = pevalitem;
    ret->andwhenitemlst = pandwhenlst;
    ret->imperativeaction = pimpaction;
    return ret;
}
void * construct_search_all_stmt( struct idvalStru * pid, void * patend_clause, 
                struct _multi_when_clause * pmultiwhenclause){
    void * ret;
    ret = (void *) new CobStmtSearch(pid, patend_clause, pmultiwhenclause);
    return ret;
}
void * construct_search_stmt(struct idvalStru * pid, struct idvalStru * pvarying,
                void * patendaction, void * psimpcondlst){
    void * ret;
    ret = (void *)new CobStmtSearch(pid, pvarying, patendaction, psimpcondlst);
    return ret;
}
struct _simple_when_item * construct_simple_when_clause(struct _condition * pcond, void * pimpaction){
    struct _simple_when_item * ret = new struct _simple_when_item;
    ret->cond = pcond;
    ret->imperativeaction = pimpaction;
    return ret;
}
//struct _before_after_inspect * construct_bef_aft_item(int pbef_aft, struct valueType * pval){
//    struct _before_after_inspect * ret = new struct _before_after_inspect;
//    ret->before_after = pbef_aft;
//    ret->val = pval;
//    return ret;
//}
struct _before_after_item * construct_bef_aft_item(int pbef_aft, struct valueType * pval){
    struct _before_after_item * ret = new struct _before_after_item;
    ret->before_after = pbef_aft;
    ret->val = pval;
    return ret;
}

void delete_bef_aft_item_list(void * plst){
    list <void *> * balst = (list <void *> *) plst;
    if(balst != NULL) {
        list <void *>::iterator i;
        for(i = balst->begin(); i != balst->end(); ++i ){
            struct _before_after_item * baitem = 
                                        (struct _before_after_item *)(*i);
            if(baitem != NULL) {
                if(baitem->val != NULL) delete_value(baitem->val);
                delete baitem;
            }
        }
        delete balst;
    }        
}

//struct _alf_item * construct_afl_item(struct valueType * pval, struct valueType * pbyval,
//                                        void * pbefaftlst){
//    struct _alf_item * ret = new struct _alf_item;
//    ret->val = pval;
//    ret->byval = pbyval;
//    ret->befaftlst = pbefaftlst;
//    return ret;
//}
//struct _inspect_replacing_item * construct_insp_rep_item(int ptype, 
//                        struct valueType * pbyval,
//                        void * pbef_aft_list,
//                        int pall_lead_first,
//                        void * palf_itemlist){
//    struct _inspect_replacing_item * ret = new struct _inspect_replacing_item;
//    ret->type = ptype;
//    ret->byval = pbyval;
//    ret->bef_aft_list = pbef_aft_list;
//    ret->all_lead_first = pall_lead_first;
//    ret->alf_item_list = palf_itemlist;
//    return ret;
//}
struct _converting_clause * construct_converting_clause( struct valueType * pval,
                        struct valueType * ptoval,
                        void * pbefaftlst){
    struct _converting_clause * ret = new struct _converting_clause;
    ret->val = pval;
    ret->toval = ptoval;
    ret->before_after_lst = pbefaftlst;
    return ret;
}
void delete_converting_clause(struct _converting_clause * pconitem){
    if(pconitem == NULL) return;
    if(pconitem->val) delete_value(pconitem->val);
    if(pconitem->toval) delete_value(pconitem->toval);
    if(pconitem->before_after_lst) delete_bef_aft_item_list(pconitem->before_after_lst);
    delete pconitem;
}
void delete_converting_clause_list(void * plst){
    if(plst == NULL) return;
    list <struct _converting_clause *> * lst = (list <struct _converting_clause *> *) plst;
    list <struct _converting_clause *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i){
        struct _converting_clause * item = (struct _converting_clause *)(*i);
        if(item) delete_converting_clause(item);
    }
    delete lst;
}

//struct _converting_clause * construct_converting_clause( struct valueType * pval,
//                        struct valueType * ptoval, void * pbefaftlst) {
//    struct _converting_clause * ret = new struct _converting_clause;
//    ret->val = pval;
//    ret->toval = ptoval;
//    ret->befaftlst = pbefaftlst;
//    return ret;
//}

struct _init_replacing_item * construct_init_replacing_item(enum categoryname pcat, struct xvaldata * pval){
    struct _init_replacing_item * ret = new struct _init_replacing_item;
    ret->cattype = pcat;
    ret->val = pval;
    return ret;
}
void delete_init_replacing_item(struct _init_replacing_item * pitem){
    if(pitem == NULL) return;
    if(pitem->val != NULL) delete_xval(pitem->val);
    delete pitem;
}
void delete_init_replacing_item_list(void * plst){
    if(plst == NULL) return;
    list <struct _init_replacing_item *> * lst = (list <struct _init_replacing_item *> *) plst;
    list <struct _init_replacing_item *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i){
        struct _init_replacing_item * item = (struct _init_replacing_item *)(*i);
        if(item) delete_init_replacing_item(item);
    }
    delete lst;
}

void * construct_initialize_stmt(void * pitemlst, int pfiller, int pvalueclause,
                                        void * preplacingitemlst, int pdefault){
    void * ret;
    ret = (void *)new CobStmtInitialize(pitemlst, pfiller, pvalueclause,
                                        preplacingitemlst, pdefault);
    return ret;
}
struct _tallying_item * construct_tallying_item(struct idvalStru * pid,
                        enum _inspect_item_selection ptype, struct valueType * pforval,
                        void * ptallying_for_itemlst){
    struct _tallying_item * ret = new struct _tallying_item;
    ret->id = pid;
    ret->type = ptype;
    ret->forval = pforval;
    ret->before_after_lst = ptallying_for_itemlst;
    return ret;
}
void delete_tallying_item(struct _tallying_item * ptallying_item){
    if(ptallying_item == NULL) return;    
    if(ptallying_item->id != NULL) delete_id(ptallying_item->id);
    if(ptallying_item->forval != NULL)
        delete_value(ptallying_item->forval);
    if(ptallying_item->before_after_lst) delete_bef_aft_item_list(ptallying_item->before_after_lst);
    delete ptallying_item; 
}
void delete_tallying_item_list(void * plst){
    if(plst == NULL) return;
    list <struct _tallying_item *> * lst = (list <struct _tallying_item *> *)plst;
    list <struct _tallying_item *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i){
        struct _tallying_item * item = (struct _tallying_item *)(*i);
        if(item) delete_tallying_item(item);
    }
    delete lst;
}
//void delete_inspect_replacting_item(struct _inspect_replacing_item * pitem){
//    if(pitem == NULL) return;
//    if(pitem->byval != NULL) delete_value(pitem->byval);
//    if(pitem->bef_aft_list != NULL){
//        delete_bef_aft_inspect_list(pitem->bef_aft_list);
//    }
//    if(pitem->alf_item_list != NULL){
//        
//    }
//}
//void delete_inspect_replacing_item_list(void * plst){
//    if(plst == NULL) return;
//    list <void *> * lst = (list <void *> *) plst;
//    list <void *>::iterator i;
//    for(i = lst->begin(); i != lst->end(); ++i ){
//        struct _inspect_replacing_item * item = 
//                (struct _inspect_replacing_item *)(*i);
//        if(item != NULL) delete_inspect_replacing_item_list(item);
//    }
//    delete lst;
//}
//void delete_bef_aft_inspect_list(void * plst){
//    list <void *> * balst = (list <void *> *) plst;
//    if(balst != NULL) {
//        list <void *>::iterator i;
//        for(i = balst->begin(); i != balst->end(); ++i ){
//            struct _before_after_inspect * baitem = 
//                                        (struct _before_after_inspect *)(*i);
//            if(baitem != NULL) {
//                if(baitem->val != NULL) delete_value(baitem->val);
//                delete baitem;
//            }
//        }
//        delete balst;
//    }    
//}
//void delete_alf_item_list(void * plst){
//    list <void *> * alflst = (list <void *> *) plst;
//    if(alflst != NULL) {
//        list <void *>::iterator i;
//        for(i = alflst->begin(); i != alflst->end(); ++i ){
//            struct _alf_item * alfitem = (struct _alf_item *)(*i);
//            if(alfitem != NULL) {
//                if(alfitem->val != NULL) delete_value(alfitem->val);
//                if(alfitem->byval != NULL) delete_value(alfitem->byval);
//                if(alfitem->befaftlst != NULL) 
//                    delete_bef_aft_inspect_list(alfitem->befaftlst);
//                delete alfitem;
//            }
//        }
//        delete alflst;
//    }        
//}
//void delete_converting_clause(struct _converting_clause * pconitem){
//    if(pconitem == NULL) return;
//    if(pconitem->val != NULL) delete_value(pconitem->val);
//    if(pconitem->toval != NULL) delete_value(pconitem->toval);
//    if(pconitem->befaftlst != NULL) delete_bef_aft_inspect_list(pconitem->befaftlst);
//    delete pconitem;
//}
void * construct_inspect_stmt(struct valueType * pval,
                        void * ptallying_item,
                        void * preplacing_clause,
                        void * pconverting_clause){
    void * ret;
    ret = (void *) new CobStmtInspect(pval, ptallying_item, preplacing_clause, 
                                        pconverting_clause);
    return ret;
}

struct _call_item * construct_call_item(int ptype, struct valueType * pval){
    struct _call_item * ret = new struct _call_item;
    ret->type = ptype;
    ret->val = pval;
    return ret;
}
struct _call_using_item * cons_call_using_item(enum _call_by_enum ptype, void * plst){
    struct _call_using_item * ret = new struct _call_using_item;
    ret->type = ptype;
    ret->list = plst;
    return ret;
}

struct _call_details * construct_call_details(void * pcallingitemlst,
                struct idvalStru * pgiving, 
                struct idvalStru * preturning){
    struct _call_details * ret = new struct _call_details;
    ret->using_item_list = pcallingitemlst;
    ret->giving = pgiving;
    ret->returning = preturning;
    return ret;
}
void delete_call_details(struct _call_details * pitem){
    if(pitem == NULL) return;
    list <void *> * lst = (list <void *> *)pitem->using_item_list;
    if(lst != NULL){
        list<void *>::iterator i;  
        for(i = lst->begin(); i != lst->end(); ++i ){
            struct _call_using_item * callitem = (struct _call_using_item *)(*i);
            if(callitem != NULL) {
                delete_call_using_item(callitem);
            }
        }
        delete lst;        
    }
    if(pitem->giving != NULL) delete_id(pitem->giving);
    if(pitem->returning != NULL) delete_id(pitem->returning);
    delete pitem;
}
void delete_call_using_item(struct _call_using_item * pitem){
    if(pitem == NULL) return;
    list <void *> * lst = (list <void *> *)pitem->list;
    if(lst != NULL){
        list<void *>::iterator i;  
        for(i = lst->begin(); i != lst->end(); ++i ){
            struct _call_item * item = (struct _call_item *)(*i);
            if(item != NULL){
                if(item->val != NULL) delete_value(item->val);
                delete item;
            }
        }
        delete lst;
    }
    delete pitem;
}

void * construct_call_stmt(struct xvaldata * pval, 
                struct _call_details * pcalldetail,
                struct _action_pair * ponoverflow, 
                struct _esc_excep_action * pexception){
    void * ret;
    ret = (void *) new CobStmtCall(pval, pcalldetail, ponoverflow, pexception);
    return ret;
}

void * construct_enter_stmt(char * planguage, char * proutine){
    void * ret = NULL;
    // this is obsolete statement. Means to use multiple programming languages 
    // in the same program. Removed in newer version of ANSI COB 85.
    return ret;
}
// START statement
struct _start_body_options * cons_start_body(int ptype, enum relational_operator pop,
                        struct valueType * pvalue, int pwith_size, 
                        struct valueType * pwith_value, void * pgnamelist){
    struct _start_body_options * ret = new struct _start_body_options;
    ret->type = ptype;
    ret->oper = pop;
    ret->value = pvalue;
    ret->with_size = pwith_size;
    ret->with_value = pwith_value;
    ret->gnamelist = pgnamelist;
    return ret;
}
void * cons_start_statement(struct idvalStru * pfilename, struct _start_body_options * pbody,
                        int preverse_order, struct _invalid_key_action * pkeyvalidation){
    void * ret = (void *) new CobStmtStart(pfilename, pbody, preverse_order, pkeyvalidation);
    return ret;
}

// INITIATE statement
void * cons_initiate_statement(char * prepo_name){
    void * ret;
    ret = (void *) new CobStmtInitiate(prepo_name);
    return ret;
}
// TERMINATE statement
void * cons_terminate_statement(char * prepo_name){
    void * ret;
    ret = (void *) new CobStmtTerminate(prepo_name);
    return ret;
}
// GENERATE statement
void * cons_generate_statement(char * prepo_name){
    void * ret;
    ret = (void *) new CobStmtGenerate(prepo_name); 
    return ret;    
}

///////////////////////////////////////////////////////////////////
struct _proc_param * construct_proc_param(int pparam_type,
                int psize_option, int popt_val,
                int popt_flag, char * pid){
    struct _proc_param * ret = new struct _proc_param;
    ret->param_type = pparam_type;
    ret->size_option = psize_option;
    ret->opt_val = popt_val;
    ret->opt_flag = popt_flag;
    ret->id = pid;
    return ret;
}
struct _use_chain_return * construct_use_chain_retur_clause(
        void * puse, void * pchain, char * preturn){
    struct _use_chain_return * ret = new struct _use_chain_return;
    ret->useclause = puse;
    ret->chainclause = pchain;
    ret->returning = preturn;
    return ret;
}
void delete_use_chain_return(struct _use_chain_return * pitem){
    if(pitem == NULL) return;
    list <struct _proc_param *> * ulst = (list <struct _proc_param *> *) pitem->useclause;
    if(ulst != NULL) delete_proc_param_list(ulst);
    list <struct _proc_param *> * clst = (list <struct _proc_param *> *) pitem->chainclause;
    if(clst != NULL) delete_proc_param_list(clst);
    if(pitem->returning != NULL) delete pitem->returning;
}
void delete_proc_param_list(void * plst){
    list <struct _proc_param *> * lst = (list <struct _proc_param *> *)plst;
    list <struct _proc_param *>::iterator i;
    for(i = lst->begin(); i != lst->end(); ++i){
        struct _proc_param * item = (*i);
        if(item->id != NULL) delete item->id;
        delete item;
    }
    delete lst;
}

void * construct_section_header(char * psecname, struct valueType * pval){
    void * ret;
    ret = (void *) new CobSectionDeclaration(psecname, pval);
    gCurrentSectionDeclaration = (CobSectionDeclaration *)ret;
    return ret;
}
// This needs revisit...
void * construct_paragraph_header(char * pname){
    void * ret;
    ret = (void *) new CobParagraphDeclaration(pname);
    gCurrentParagraphDeclaration = (CobParagraphDeclaration *)ret;
    if(gCurrentSectionDeclaration != NULL) {
        gCurrentSectionDeclaration->add_item(gCurrentParagraphDeclaration);
        ret = NULL;
    }
    return ret;
}
// This needs revisit...
void * construct_proc_statements(void * pprocdivitem){
    void * ret;
    if(gCurrentParagraphDeclaration != NULL) {
        gCurrentParagraphDeclaration->add_item((CobProcDivItem *) pprocdivitem);
        ret = NULL;
    } else if(gCurrentSectionDeclaration != NULL) {
        gCurrentSectionDeclaration->add_item((CobProcDivItem *) pprocdivitem);
        ret = NULL;
    } else {
        ret = (CobProcDivItem *) pprocdivitem;
    }
    return ret;
}

void * start_sentence(void * pstmt){
    CobSentence * ret = new CobSentence();
    if(pstmt != NULL) {
        ret->add_item((CobProcDivItem *)pstmt);
    }
    return (void *) ret;
}
void * addto_sentence(void * psentence, void * pstmt){
    CobSentence * sentence = (CobSentence * )psentence;
    if(pstmt != NULL) {
        sentence->add_item((CobProcDivItem *)pstmt);
    }
    return (void *)sentence;
}

void * start_top_level_item(void * pitem){
    CobProcDivItem * ret = new CobProcDivItem(); // empty item
    ret->add_item((CobProcDivItem *)pitem);
    return (void *) ret;
}
void * addto_top_level_item(void * ptopitem, void * pitem){
    CobProcDivItem * ret = (CobProcDivItem *) ptopitem;
    ret->add_item((CobProcDivItem *)pitem);
    return (void *)ret;
}

void * construct_declaratives(void * pprocitemlst){
    void * ret;
    ret = (void *) new CobDeclaratives(pprocitemlst);
    return ret;
}

void * construct_procedure_division(struct _use_chain_return * pucr,
                                void * declarative, void * procitemlst){
    void * ret;
    ret = (void *) new CobProcedureDivision(pucr, declarative, procitemlst);
    
    // once the procedure division is set the current paragraph and current section should 
    // be set to null.
    gCurrentParagraphDeclaration = NULL;
    gCurrentSectionDeclaration = NULL;
    
    return ret; // change this later. 
}

/************   extern C ************/
}