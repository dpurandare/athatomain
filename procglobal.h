/*
 * File: procglobal.h
 * Created Date: Friday April 25th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 25th 2014 1:37:05 am
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on December 24, 2013, 9:26 PM
 */

#ifndef PROCGLOBAL_H
#define	PROCGLOBAL_H

#include "global.h"

enum proc_stmt_type_enum {
    CB_ST_MOVE          = 1,
    CB_ST_OPEN          = 2,
    CB_ST_CLOSE         = 3,
    CB_ST_WRITE         = 4,
    CB_ST_READ          = 5,
    CB_ST_RELEASE       = 6,
    CB_ST_RETURN        = 7,
    CB_ST_SET           = 8,
    CB_ST_SORT          = 9,
    CB_ST_DISPLAY       = 10,
    CB_ST_IFELSE        = 11,
    CB_ST_ACCEPT        = 12,
    CB_ST_ADD           = 13,
    CB_ST_SUBTRACT      = 14,
    CB_ST_MULTIPLY      = 15,
    CB_ST_DIVIDE        = 16,
    CB_ST_COMPUTE       = 17,
    CB_ST_STOP          = 18,
    CB_ST_USE           = 19,
    CB_ST_GOTO          = 20,
    CB_ST_ALTER         = 21,
    CB_ST_EXIT          = 22,
    CB_ST_CALL          = 23,
    CB_ST_ENTER         = 24,
    CB_ST_MERGE         = 25,
    CB_ST_EVALUATE      = 26,
    CB_ST_REWRITE       = 27,
    CB_ST_GOBACK        = 28,
    CB_ST_PURGE         = 29,
    CB_ST_UNLOCK        = 30,
    CB_ST_CANCEL        = 31,
    CB_ST_DELETE        = 32,
    CB_ST_STRING        = 33,
    CB_ST_UNSTRING      = 34,
    CB_ST_CONTINUE      = 35,
    CB_ST_SEARCH        = 36,
    CB_ST_INITIALIZE    = 37,
    CB_ST_INSPECT       = 38
};
enum add_type_enum {
    CB_MS_SIMPLE = 1,
    CB_MS_GIVING = 2,
    CB_MS_CORR   = 3
};
enum divide_type_enum {
    CB_DIV_INTO                 = 1,
    CB_DIV_INTO_GIVING          = 2,
    CB_DIV_BY_GIVING            = 3,
    CB_DIV_INTO_GIVING_REM      = 4,
    CB_DIV_BY_GIVING_REM        = 5
};

// for opt_on_size_error need a pair of objects to be returned as void ptr. 
struct on_size_error_data {
    void * on_error; // this is the statement object pointed type case to void ptr
    void * not_on_error;
}; 

#ifdef	__cplusplus
extern "C" {
#endif
void * start_generic_list(void * pitem);    
void * addto_generic_list(void * plst, void * pitem);    
    
// list of identifiers or literal values
void * startXvalList(struct xvaldata * pxval);
void * addXvalListItem(void * plist, struct xvaldata * pxval);
void delete_xvallist(void * plst);
void * startGnameList(struct valueType * pgname);
void * addGnameListItem( void * pList, struct valueType * pgname);
void delete_gnamelist(void * pgnamelst);

// Add statement
void * construct_add_stmt( enum add_type_enum ptype, void * pfromlst, void * ptolst, 
                           void * pgivinglst, void * ponsize_error );

void * construct_on_error_data( void * ponerror, void * pnotonerror);
void delete_on_error_data(void * ponerrordata);

// Subtract statement
void * construct_subtract_stmt(enum add_type_enum ptype, void * plstfirst, void * pfromlst, 
                            void * pgiving, void * ponsize_error, int prounded );
// Multiply statement
void * construct_multiply_stmt(enum add_type_enum ptype, void * ptarget, void * pby, void * pgivinglst,
                            void * ponsize_error);
// Divide statement
void * construct_divide_stmt(enum divide_type_enum ptype, void * ptarget, void * pby_into, void * pgivinglst,
                            void * premainder, void * ponsize_error);

// Perform statement
struct _perform_option {
    int type;
    int times;  // forever ?
    struct idvalStru * id;
    int with_test_specified;    //default to zero
    int before_after;
    struct _condition * condition;
    void * perform_varying_list; 
};
struct _proc_names {
    int thruflag;
    char * target;
    char * to;
};
struct _perform_varying {
    struct valueType * target;
    struct valueType * from;
    struct valueType * to;
    struct _condition * condition;
};
enum perform_option_enum {
    CB_PO_FOREVER       = 1,
    CB_PO_NUMBER_TIMES  = 2,
    CB_PO_ID_TIMES      = 3,
    CB_PO_UNTIL         = 4,
    CB_PO_VARYING_UNTIL = 5
};

void * construct_perform_stmt(struct _proc_names * pnames, void * poptlist, void * pprocstmt);
struct _proc_names * construct_pnames(int throughflag, char * pfirst, char * psecond);
void * start_perform_options_list(struct _perform_option * popt);
void * addto_perform_options_list(void * plst, struct _perform_option * popt);
struct _perform_option * construct_perf_opt(int ptype, int pforever, 
                struct idvalStru * pid, int ptest, struct _condition * pcond,
                void * pvaryinglist);
void * start_perf_opt_varying_list( struct _perform_varying * pitem);
void * addto_perf_opt_varying_list( void * plst, struct _perform_varying * pitem);
struct _perform_varying * construct_perf_varying_item( struct valueType * ptarget,
                struct valueType * pfrom, struct valueType * pto, struct _condition * pcond);
void delete_perform_option_list(void * plst);
void delete_perform_varying_list(void * plst);
// Move statement
void * construct_move_stmt( int pcorr, struct valueType * pgname, void * plist); 

// IfElse statement 
struct _statements {
    int type;   // 1. ConSentence, 2. NEXT SENTENCE
    void * list;
}; 
void * construct_ifelse_stmt( struct _condition * pcond, struct _statements * pthen,
                              struct _statements * pelse);
struct _statements * construct_stmts_list( void * plist, int next_sentence );
void delete_statement_list(struct _statements * plst);

// Accept statement
struct _esc_excep_action {
    int esc_excep;
    struct  idvalStru * opt_id;
    void * proc_statement;
    struct _esc_excep_action * not_on_item;
};

struct _esc_excep_action * construct_esc_excp_item( 
                            int pesc_excp, void * pproc);
struct _esc_excep_action * update_esc_excp_item(int pesc_excp, 
                        struct idvalStru * popt_id, void * pproc, 
                        struct _esc_excep_action * pnot_on);
void delete_esc_excp_item(struct _esc_excep_action * pitem);

struct _position_clause {
    struct valueType * line;
    struct valueType * col;
    struct valueType * position;
};
struct _position_clause * construct_pos(int pwhere, struct valueType * pval);
struct _position_clause * update_pos(struct _position_clause * ppos, struct valueType * pval);

struct _with_clause_2 {
    int withenum;
    struct _position_clause * pos;
    struct valueType * val;
};
struct _with_clause_2 * construct_with_clause2(int penum, struct _position_clause * ppos, struct valueType * pval);
void * create_with2_list(struct _with_clause_2 * pitem);
void * addto_with2_list(void * plist, struct _with_clause_2 * pitem);

struct xvaldata * getXval(int type, struct idvalStru * pid, struct valueType * pval);
struct xvaldata * getXval2(int type, struct idvalStru * pid, int pival);

struct _accept_item {
    struct xvaldata * val;
    struct _with_clause_2 * with2val;
};
struct _accept_item * construct_accept_item(struct xvaldata * pval,
        struct _with_clause_2 * pwith2val);

void * create_accept_item_list( struct _accept_item * pitem );
void * addto_accept_item_list( void * plist, struct _accept_item * pitem );

// shared between Accept and Display statements. 
/*struct _at_clause_accept {
    int line_column; // 1- line, 2- column
    struct xvaldata * val;
};*/
struct _at_clause_accept {
    struct valueType * line;
    struct valueType * col;
};

struct _at_clause_accept * construct_at_clause_acc(struct valueType * pline, struct valueType * pcol);
struct xvaldata * get_from_clause(int ptype, struct idvalStru * pid, int pimplcit);
void * construct_accept_stmt(int                        ptype,
                             struct idvalStru *         pid,
                             struct xvaldata  *         pfrom,
                             void *                     paccept_item_list,
                             struct _esc_excep_action * pesc,
                             int                        pmsg_count,
                             struct _at_clause_accept * pat);
// Display statement
struct _disp_item {
    struct xvaldata  * id_clause;
    void * with_clause_list;    
};
struct _disp_screen_item {
    struct idvalStru * id;
    struct _at_clause_accept * at_clause;
};
struct _with_clause {
    int withenum;
    struct xvaldata * addinfo;
};
void * construct_display_stmt_sysname(void * psysnamelst,
                                      struct xvaldata * pupon,
                                      int padvancing);
void * construct_display_stmt_term(void * pdisp_itemlst);
void * construct_display_stmt_screen(void * pdisp_screen_lst);

void * start_disp_item_list(struct _disp_item * pitem);
void * addto_disp_item_list(void * plst, struct _disp_item * pitem);
void delete_disp_item_list(void * plst);
struct _disp_item * construct_disp_item (struct xvaldata * pid_clause, void * pwith_list);
struct _with_clause * construct_with_clause(int pwithenum, struct xvaldata * pval);
void * start_with_cl_item_list(struct _with_clause * pitem);
void * addto_with_cl_item_list(void * plst, struct _with_clause * pitem);
void delete_with_clause_list(void * plst);
struct _disp_screen_item * construct_disp_screen_item(
                struct idvalStru * pid, struct _at_clause_accept * pat);
void * create_create_screen_item_lst(struct _disp_screen_item * pitem);
void * addto_create_screen_item_lst(void * plst, struct _disp_screen_item * pitem);
void delete_screen_item_list(void * plst);

// Open statement
enum file_open_opt {
    CB_FO_WITH_LOCK      = 1,
    CB_FO_WITH_NO_REWIND = 2,
    CV_FO_REVERSED       = 3
};
void * create_int_list(int pval);
void * addto_int_list(void * plst, int pval);

struct _file_name_item {
    struct idvalStru * file_name;
    void * open_items; // int list can directly be deleted?
};
void * create_file_name_list(struct _file_name_item * pitem);
void * addto_file_name_list(void * plst, struct _file_name_item * pitem);
struct _file_name_item * construct_file_name(struct idvalStru * pfile_name, void * popen_items);

struct _open_file_type {
    int file_type;
    void * open_file_list;
};
struct _open_file_type * construct_open_file_type(int pfile_type, void * popen_file_list);
void * create_open_file_list(struct _open_file_type * pitem);
void * addto_open_file_list(void * plst, struct _open_file_type * pitem);
void delete_open_file_list(void * plst); // struct _open_file_type
void delete_file_name_item_list(void * plst); // struct _file_name_item list
void * construct_open_stmt(int pexclusive, void * popen_file_type_list);

// Close statement
enum close_file_option_enum {
    CB_CFO_REEL_NOREWIND = 1,
    CB_CFO_UNIT_NOREWIND = 2,
    CB_CFO_REEL_REMOVAL  = 3,
    CB_CFO_UNIT_REMOVAL  = 4,
    CB_CFO_NOREWIND      = 5,
    CB_CFO_LOCK          = 6
};
struct _close_file_item {
    struct idvalStru * file_name;
    int close_file_option;
};
struct _close_file_item * construct_close_file_item(struct idvalStru * pfile_name, int pclose_file_option);
void * start_close_file_list(struct _close_file_item * pitem);
void * addto_close_file_list(void * plst, struct _close_file_item * pitem);
void delete_close_file_list(void * plst);
void * construct_close_stmt(void * plst);

// Read statement
enum read_record_claues {
    CB_RR_RECORD        = 1,
    CB_RR_LOCK          = 2,
    CB_RR_NO_LOCK       = 3,
//    CB_RR_INTO          = 4 // removed and added for the identifier.
};
struct _at_end_action {
    void * at_end_action;       // proc statement
    void * not_at_end_action;   // again proc statement
};
struct _at_end_action * construct_at_end_clause(void * pend_proc, void * pnotend_proc);
void delete_at_end_clause(struct _at_end_action *);
enum next_prev_enum {
    CB_UNSPECIFIED = 0,
    CB_NEXT = 1,
    CB_PREVIOUS = 2
};
struct _invalid_key_action {
    void * invalid_key_proc;
    void * not_invalid_key_proc;
};
struct _invalid_key_action * construct_invalid_key_clause(void * pyes, void * pno);
void delete_invalid_key_action(void * pinvkeyaction);
void * construct_read_seq_stmt( struct idvalStru * file_name,
                                int next_prev,
                                int record_clause,
                                struct idvalStru * opt_id,
                                struct _at_end_action * end_action
);
void * construct_read_random_stmt( struct idvalStru * file_name,
                                int next_prev,
                                int record_clause,
                                struct idvalStru * opt_id,
                                struct idvalStru * opt_key,
                                struct _invalid_key_action * pinvalid_key
                                );
// Write statement
struct _action_pair {
    void * yes_action;       // proc statement
    void * no_action;        // again proc statement
};
void * construct_action_pair(void * yesaction, void * noaction);
void delete_action_pair(void * pactinpair);
struct _advaicing_clause {
    int before_after;
    int opt_advanc;
    struct xvaldata * advancing;
    void * end_of_page;         //struct _action_pair *
};
struct _advaicing_clause * construct_advancing_clause( int, int, struct xvaldata *); 
struct _advaicing_clause * conemp_advancing_clause();
struct _id_gname{
    struct idvalStru * ident;
    struct valueType * value;
};
struct _id_gname * gen_id_gname(struct idvalStru * pid, struct valueType * pval);
void * construct_write_stmt(struct _id_gname * pidgname, 
                            struct _advaicing_clause * padv);
void * construct_write_stmt2(struct _id_gname * pidgname, 
                             struct _invalid_key_action * keyvalidation);

void * construct_compute_stmt(void * plvallist,
                                int popt_rounded,
                                struct _arithmetic_expression * pexp,
                                int popt_not,
                                void * popt_on_error);
void * construct_rewrite_stmt(struct idvalStru * pid,
                             struct valueType * pfrom_clause,
                             void * pkeyvalidation);
void * construct_goback_stmt(); 
void * construct_purge_stmt(struct idvalStru * pid);
void * construct_release_stmt(struct idvalStru * pid, struct xvaldata * pval);
void * construct_unlock_stmt(struct idvalStru * pid);
void * construct_cancel_stmt(void * pitem_list);
void * construct_continue_stmt();
void * construct_goto_stmt1(char * pprocname);
void * construct_goto_stmt2(void * lprocnamelst, struct idvalStru * pid);

struct _strpair {
    char * first;
    char * second;
};
void * construct_strpair(char * str1, char * str2);
void * construct_alter_stmt(void * plst);
void * construct_return_stmt(struct idvalStru * pfilename,
                            int popt_record, 
                            struct xvaldata * pinto_identifier,
                            void * pend_action );
struct _delete_simple {
    struct idvalStru * filename;
    int opt_record;
    void * key_validation_action;
};
struct _delete_simple * construct_del_simple(struct idvalStru * pfilename, int popt_record, void * ponkey_action);
void * construct_delete_stmt(struct _delete_simple * pitem);
void * construct_delete_multi_stmt(void * pfilelst);
void delete_del_simple(struct _delete_simple * pitem);

// STRING statement
struct _str_argument {
    void * pgnamelst; 
    struct xvaldata * moditem; // this is also xval list
};
struct _str_argument * construct_str_argument(void * pitemlst, struct xvaldata * pmoditemlst);
void * construct_string_stmt(void * pstr_args, struct idvalStru * pid,
                             struct idvalStru * pptropt, 
                             struct _action_pair * pon_overflow); 
// STOP statement
enum _stop_option_enum {
    CB_SO_STOP_RUN = 1,
    CB_SO_STOP_RETURNING = 2,
    CB_SO_STOP_GIVING = 3,
    CB_SO_STOP_VAL = 4,
};
void * construct_stop_stmt(enum _stop_option_enum ptype, struct xvaldata * pval);
// EXIT statement
enum _exit_enum {
    CB_EX_SIMPLE = 1,
    CB_EX_PROGRAM = 2,
    CB_EX_PERFORM = 3,
    CB_EX_PARAGRAPH = 4,
    CB_EX_SECTION = 5
};
void * construct_exit_stmt(enum _exit_enum ptype, int pcycle);

// SET statement
/*
struct _address_item {
    int type;
    struct idvalStru * id;
};
struct _address_item * construct_address_item(int ptype, struct idvalStru * pid);
void delete_address_item(struct _address_item * pitem);
void delete_address_item_list(void * plst);

struct _up_down_item {
    void * itemlst;   // xval list
    int updown;
    struct xvaldata * val;
};
struct _up_down_item * construct_up_down_item(void * plst, int pupdown, 
        struct xvaldata * pval);

struct _mnemonic_item {
    void * item_list;  // xval list
    int onoff;
};
struct _mnemonic_item * construct_mnemonic_item(void * plst, int ponoff);

struct _condition_item {
    struct idvalStru * id;
    int true_false;
};
struct _condition_item * construct_condition_item(struct idvalStru * pid, int ptrue_false);

struct _set_address_item {
    void * addr_item_list; 
    struct _address_item * toitem;
};
struct _set_address_item * construct_set_address_item(void * paddr_item_list, 
                struct _address_item * ptoitem);
struct _set_pointer_item {
    void * itemlst;     // address_item list
    int updown;
    struct idvalStru * id;
};
struct _set_pointer_item * construct_set_pointer_item(void * pitemlst, int pupdown,
                struct idvalStru * pid);
struct _set_index_item {
    void * lst;         // item_list
    struct xvaldata * val;
};
struct _set_index_item * construct_set_index_item(void * plst,
                                                  struct xvaldata * pval);
enum _set_stmt_type_enum {
    CB_SET_INDEX  = 1,
    CB_SET_UPDOWN = 2,
    CB_SET_ONOFF  = 3,
    CB_SET_COND   = 4,
    CB_SET_ADDR   = 5,
    CB_SET_PTR    = 6
};
void * construct_set_stmt(enum _set_stmt_type_enum ptype, void * plst);
*/
enum _set_info_type {
    CB_SET_XVAL = 1,
    CB_SET_ON   = 2,
    CB_SET_OFF  = 3,
    CB_SET_TRUE = 4,
    CB_SET_FALSE= 5,
    CB_SET_NULL = 6
};
struct _set_item {
    enum _set_info_type type;
    struct xvaldata * xval;
};
enum _set_direction {
    CB_SET_TO   = 1,
    CB_SET_UPBY = 2,
    CB_SET_DOWNBY = 3
};
struct _set_item * cons_set_item(enum _set_info_type ptype, struct xvaldata * pval);
void delete_set_item_list(void * plst);

struct _set_clause {
    void * set_item_list;
    enum _set_direction direction;
    struct _set_item * ritem;
};
struct _set_clause * cons_set_clause(void * plst, enum _set_direction pdir, 
                        struct _set_item * pitem);
void delete_set_clause_list(void * plst);
void * cons_set_stmt(void * pset_clause_list);

// SORt and MERGE statement
struct _on_key_clause {
    int direction; // ascending, descending
    void * itemlist;
};
struct _on_key_clause * construct_on_key_clause(int pdir, void * plst);
void delete_on_key_clause_list(void * plst);

struct _file_io_clause {
    enum filetypeenum type; // 1- input
    char * proc_name;
    char * thru_proc_name;
    void * using_fname_list; //item_list
};
struct _file_io_clause * construct_file_io_clause(enum filetypeenum ptype,
                char * pprocname, char * pthru_procname, void * pfname_lst);
void delete_file_io_clause(struct _file_io_clause * pitem);

void * construct_sort_stmt( struct idvalStru * pid,
            void * ponkeylst,
            int popt_duplicate,
            struct idvalStru * pcollating_seq,
            struct _file_io_clause * pinput,
            struct _file_io_clause * poutput);
void * construct_merge_stmt(struct idvalStru * pfile_name,
        void * ponkey_lst, struct idvalStru * pcollating_seq,
        void * pusingfile, struct _file_io_clause * poutput);
// EVALUATE statement
enum _eval_enum {
    CB_EI_ANY           = 1,
    CB_EI_COND          = 2,
    CB_EI_TRUE          = 3,
    CB_EI_FALSE         = 4,
    CB_EI_EVAL_ITEMS    = 5,
    CB_EI_IDENTIFIER    = 6,
    CB_EI_LITERAL       = 7,
    CB_EI_ARITHM_EXP    = 8,
    CB_EI_M_WHEN        = 9,
    CB_EI_EVAL          = 10,
    CB_EI_GNAME         = 11
};
struct _eval_item {
    enum _eval_enum type;
    int notflag;
    struct _condition * cond;
    struct _eval_item * from_item;
    struct _eval_item * thru_item;
    struct idvalStru * id;
    struct valueType * litval;
    struct _arithmetic_expression * arithm_expr;
};
void delete_eval_item(struct _eval_item * pitem);
void delete_eval_item_list(void * plst);
struct _eval_item * construct_eval_item(enum _eval_enum ptype, void * pfirst, void * psecond);

struct _when_clause_item {
    struct _eval_item * when_item;
    void * when_also_item_lst;  // this is actually list of struct _eval_item *
    void * procstmt;
};
void delete_when_clause_item(struct _when_clause_item * pitem);
void delete_when_clause_item_list(void * plst);
struct _when_clause_item * construct_when_clause_item(
                struct _eval_item * pwhenitem,
                void * pwhenlst, void * pwhenaction);
void * construct_evaluate_stmt(struct _eval_item * pevlitem,
                void * palso_eval_item_lst,
                void * pwhen_clause_lst,
                void * popt_when_other_action);
// UNSTRING statement
struct _into_clause {
    struct idvalStru * id;
    struct idvalStru * delimin_id;
    struct idvalStru * countin_id;
};
struct _into_clause * construct_into_clause(struct idvalStru * pid,
                struct idvalStru * pdelimid,
                struct idvalStru * pcountinid);
struct _delim_clause {
    int byallflag;
    struct valueType * val;
    void * or_item_lst;
};
struct _delim_clause * construct_delim_clause(int pallflag, 
                        struct valueType * pval, void * por_itemlst);
struct _or_item {
    int allflag;
    struct valueType * val;
};
struct _or_item * construct_or_item(int pallflag, struct valueType * pitem);
void * construct_unstring_stmt(struct idvalStru * pid,
                        struct _delim_clause * pdelim_clause,
                        void * punstringintolist,
                        struct idvalStru * pwithptr,
                        struct idvalStru * ptallyingin,
                        struct _action_pair * ponoverflow);
// USE statement
struct _use_proc_option {
    int nameortype;
    struct idvalStru * filename;
    int filetype;
};
enum _use_on_item_type {
    CB_USEITEM_IDLIST = 1,
    CB_USEITEM_ALLPROC = 2,
    CB_USEITEM_ALLREF_OFID = 3
};
struct _use_on_item {
    enum _use_on_item_type type;
    struct idvalStru * id;
};
struct _use_on_item * cons_on_item(enum _use_on_item_type ptype,
                                   struct idvalStru * pid);
struct _use_proc_option * construct_use_proc_option(int ptype, 
                                struct idvalStru * pfilename, int pfiletype);
void * cons_use_stmt(int pglobal, int perr_excp, struct _use_proc_option * pprocopt);
void * cons_use_DBG_stmt(void * ponitems);
void * cons_use_after(int pglobal, int pbeg_end, int pfile_reel, 
                        struct _use_proc_option * pprocopt);
void * cons_use_bef_reporting(struct idvalStru * pfilename);

// SEARCH statement
struct _multi_when_clause {
    struct _eval_item * whenitem;
    void * andwhenitemlst;   //struct _eval_item * list
    void * imperativeaction; // proc_statements
};
struct _multi_when_clause * construct_multi_when_clause(struct _eval_item * pevalitem,
                void * pandwhenlst, void * pimpaction);
void * construct_search_all_stmt(struct idvalStru * pid, void * patend_clause, 
                struct _multi_when_clause * pmultiwhenclause);
struct _simple_when_item {
    struct _condition * cond;
    void * imperativeaction; // proc_statements
};
struct _simple_when_item * construct_simple_when_clause(struct _condition * pcond, void * pimpaction);
void * construct_search_stmt(struct idvalStru * pid, struct idvalStru * pvarying,
                void * patendaction, void * psimpcondlst);

// INSPECT & INITIALIZE statement
// modified entries begin
enum _inspect_item_selection {
    CB_ITEM_CHAR        = 1,
    CB_ITEM_ALL         = 2,
    CB_ITEM_LEADING     = 3,
    CB_ITEM_FIRST       = 4
};
void * construct_inspect_stmt(struct valueType * pval,
                        void * ptallying_item,
                        void * preplacing_clause,
                        void * pconverting_clause);
struct _tallying_item {
    struct idvalStru * id;
    enum _inspect_item_selection type;
    struct valueType * forval;
    void * before_after_lst; 
};
struct _tallying_item * construct_tallying_item(struct idvalStru * pid,
                        enum _inspect_item_selection ptype, struct valueType * pforval,
                        void * ptallying_for_itemlst);

void delete_tallying_item(struct _tallying_item * ptallying_item);
void delete_tallying_item_list(void * plst);

struct _before_after_item {
    int before_after;
    struct valueType * val;
};
struct _before_after_item * construct_bef_aft_item(int pbef_aft, struct valueType * pval);
void delete_bef_aft_item_list(void * plst);

struct _replacing_item{
    enum _inspect_item_selection type;
    struct valueType * targetval;
    struct valueType * byval;    
    void * before_after_lst; 
};
struct _replacing_item * construct_replacing_item(enum _inspect_item_selection ptype, struct valueType * ptargetval,
                struct valueType * pbyval, void * pbefaftlst);
void delete_replacing_item_list(void * plst);

struct _converting_clause {
    struct valueType * val;
    struct valueType * toval;
    void * before_after_lst; 
};
struct _converting_clause * construct_converting_clause( struct valueType * pval,
                        struct valueType * ptoval,
                        void * pbefaftlst);
void delete_converting_clause(struct _converting_clause * pconitem);
void delete_converting_clause_list(void * plst);
// modified entries end

struct _init_replacing_item {
    enum categoryname cattype;
    struct xvaldata * val;
};
struct _init_replacing_item * construct_init_replacing_item(enum categoryname pcat, struct xvaldata * pval);
void delete_init_replacing_item(struct _init_replacing_item * pitem);
void delete_init_replacing_item_list(void * plst);
void * construct_initialize_stmt(void * pitemlst, int pfiller, int pvalueclause,
                                        void * preplacingitemlst, int pdefault);


// CALL statement
struct _call_item {
    int type;   // gname - 1, OMMITED - 2
    struct valueType * val;
};
struct _call_item * construct_call_item(int ptype, struct valueType * pval);

enum _call_by_enum {
    CB_CALL_BY_REF = 1,
    CB_CALL_BY_CONTENT = 2,
    CB_CALL_BY_DEFAULT = 0
};
struct _call_using_item {
    enum _call_by_enum type;
    void * list;  //struct _call_item * itemval - list
};

struct _call_using_item * cons_call_using_item(enum _call_by_enum ptype, void * plst);
void delete_call_using_item(struct _call_using_item * pitem);

struct _call_details {
    void * using_item_list;
    struct idvalStru * giving;
    struct idvalStru * returning;
};
struct _call_details * construct_call_details(void * pcallingitemlst,
                struct idvalStru * pgiving, 
                struct idvalStru * preturning);
void delete_call_details(struct _call_details * pitem);
void * construct_call_stmt(struct xvaldata * pval, 
                struct _call_details * pcalldetail,
                struct _action_pair * ponoverflow, 
                struct _esc_excep_action * pexception);

void * construct_enter_stmt(char * planguage, char * proutine);

// START statement
struct _start_body_options {
    int type;   // 1- with rel-op
                // 2- with first record
    enum relational_operator oper;
    struct valueType * value;
    int with_size;      // 0 - not defined
                        // 1 - defined
    struct valueType * with_value;
    void * gnamelist;   // for option 2
};
struct _start_body_options * cons_start_body(int ptype, enum relational_operator pop,
                        struct valueType * pvalue, int pwith_size, 
                        struct valueType * pwith_value, void * pgnamelist);
void * cons_start_statement(struct idvalStru * pfilename, struct _start_body_options * pbody,
                        int preverse_order, struct _invalid_key_action * pkeyvalidation);

// INITIATE statement
void * cons_initiate_statement(char * prepo_name);

// TERMINATE statement
void * cons_terminate_statement(char * prepo_name);

// GENERATE statement
void * cons_generate_statement(char * prepo_name);

/****************************/
/* Procedure division start */
/****************************/
enum _size_option {
    CB_SIZE_NONE    = 1,
    CB_SIZE_AUTO    = 2,
    CB_SIZE_DEFAULT = 3,
    CB_SIZE_UNSIGNED = 4
};
struct _proc_param {
    int param_type;
    int size_option;
    int opt_val;
    int opt_flag;
    char * id;
};
struct _proc_param * construct_proc_param(int pparam_type,
                int psize_option, int popt_val,
                int popt_flag, char * pid);
struct _use_chain_return {
    void * useclause;
    void * chainclause;
    char * returning;
};
/******************************
*        main portion         *
*******************************/
struct _use_chain_return * construct_use_chain_retur_clause(
        void * puse, void * pchain, char * preturn);
void delete_use_chain_return(struct _use_chain_return * pitem);
void delete_proc_param_list(void * plst);

void * construct_section_header(char * psecname, struct valueType * pval);
void * construct_paragraph_header(char * pname);

void * start_sentence(void * pstmt);
void * addto_sentence(void * psentence, void * pstmt);

void * construct_proc_statements(void * pprocdivitem);

void * start_top_level_item(void * pitem);
void * addto_top_level_item(void * ptopitem, void * pitem);

void * construct_declaratives(void * pprocitemlst);
void * construct_procedure_division(struct _use_chain_return * pucr,
                                void * declarative, void * procitemlst);

/* Very important: Optimizations:
 * 1. _action_pair : replace all such occurrences. 
 * 
 * 
 *  
 *  
 */
/////////////////////////////////////////////////////////////////////////
// Do not write any code beyond this line. 
#ifdef	__cplusplus
}
#endif

#endif	/* PROCGLOBAL_H */

