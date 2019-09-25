/*
 * File: token.y
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 8:39:28 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 */

%{
#include <stdio.h>
#include <stdlib.h>
#include "global.h"
#include "cobmain.h"
#include "util/reswords.h"
#include "procglobal.h"
#define YYERROR_VERBOSE 1
%}

 /* %define parse.error verbose  looks like Bison 2.3 is not supporting it.*/

/***************************************************************************** 
                               Token Definitions 
 *****************************************************************************/
%token ACCEPT ACCESS ADD ADDRESS ADVANCING AFTER ALL ALPHABET ALPHABETIC_TOK
%token ALPHABETIC_LOWER ALPHABETIC_UPPER ALPHANUMERIC ALPHANUMERIC_EDITED ALSO
%token ALTER ALTERNATE AND ANY ARE AREA AREAS ASCENDING AS ASSIGN AT AUTHOR AUTO 
%token AUTOMATIC BACKGROUND
%token BACKGROUNDCOLOR BEEP BEFORE BEGINNING BELL BINARY BLANK BLINK BLOCK BOTTOM BY
%token CALL CALL_CONV_C CALL_CONV_STDCALL CALL_LOADLIB CANCEL CD CENTER CF CH 
%token CHAIN CHAINING CHARACTER CHARACTERS CLASS CLOSE CMD_LINE COBWORD
%token CODE CODE_SET COLLATING COLOR COLUMN COLUMNS COMMA COMMON COMMUNICATION  
%token COMP COMP1 COMP2 COMP3 COMP4 COMP5 COMP6 COMPX COMPUTE CONDITIONAL  
%token CONFIGURATION CONSOLE CONTAINS CONTENT CONTINUE CONTROL CONTROLS CONVERT
%token CONVERTING COPY CORRESPONDING COUNT CURRENCY CURSOR CYCLE
%token DARK DATA DATA_POINTER DATE_COMPILED DATE_WRITTEN DATE_TIME DE DEBUGGING 
%token DECIMAL_POINT DECLARATIVES _DEFAULT DELETE DELIMITED DELIMITER DEPENDING 
%token DESCENDING DETAIL DISK DISPLAY DISPLAY_SCREEN DIRECTION DIVIDE DIVISION 
%token DOWN DUPLICATES DYNAMIC DBCS
%token ECHOTOKEN ELSE END END_ACCEPT END_ADD END_CALL END_CALL_LOADLIB END_CHAIN 
%token END_COMPUTE END_DELETE END_DISPLAY END_DIVIDE END_EVALUATE END_FUNCTION 
%token END_IF END_MULTIPLY END_OF_PAGE END_PERFORM END_PROGRAM END_READ 
%token END_RETURN END_REWRITE END_SEARCH END_START END_STRINGCMD END_SUBTRACT 
%token END_UNSTRING END_WRITE ENTER ENVIRONMENT ENVIRONMENT_VARIABLE EOL 
%token EOS EQUAL EQUALS ERASE ERROR_TOK EVALUATE EXCEPTION EXIT EXCLUSIVE EXTEND 
%token EXTERNAL FALSE_TOK FD FILEX FILE_CONTROL FILE_ID FILE_TOK FILLER 
%token FINAL FIRST FOOTING FOR FOREVER FOREGROUND FOREGROUNDCOLOR FROM FULL 
%token FUNCTION FUNCTION_ID GENERATE GIVING GLOBAL GO GOBACK GREATER GROUP
%token HEADING HIGH HIGHLIGHT HIGHVALUES IDENTIFICATION IF IGNORE IN INDEXM 
%token INDEXED INDICATE INITIALIZE INITIAL_TOK INKEY INITIATE INPUT INPUT_OUTPUT 
%token INSPECT INSTALLATION INTO INVALID I_O I_O_CONTROL IS INTRINSIC JUSTIFIED KEY
%token LABEL LAST LEADING LEFT LENGTH LESS LIMIT LIMITS LINAGE LINE LINES  
%token LINKAGE LISTSEP LITERAL LOCK LOCAL_STORAGE LOW LOWER LOWLIGHT LOWVALUES LPAR
%token MANUAL MEMORY MERGE MINUS MODE MODULES MOVE MULTIPLE MULTIPLY
%token NATIVE NEGATIVE NEXT NO NOECHO NOT NOTEXCEP NULL_TOK NUMBER NUMBERS
%token NUMERIC NUMERIC_EDITED
%token OBJECT_COMPUTER OCCURS OF OFF OMITTED ON ONLY OPEN OPTIONAL OR ORDER
%token ORGANIZATION OTHER OUTPUT OVERFLOW_TOK
%token PACKED_DECIMAL PADDING PAGE_TOK  PARAGRAPH PERIOD PERFORM /* PAGE_COUNTER */
%token PF PH PICTURE PLUS POINTER POSITION POSITIVE PREVIOUS PRINTER PROCEDURE 
%token PROCEDURES PROCEED PROGRAM PROGRAM_ID PURGE
%token QUOTES
%token RANDOM RD READ READY RECORD RECORDS RECURSIVE REDEFINES REEL REFERENCE  
%token REFERENCES RELATIVE RELEASE REMAINDER REMARK REMOVAL RENAMES REPLACING REPORT  
%token REPORTING REPORTS REPOSITORY REQUIRED RESERVE RESERVED RESERVED_VIDEO RESET
%token RETURN_TOK RETURNING REVERSEVIDEO REWIND REWRITE RF RH RIGHT ROUNDED RUN
%token SAME SCREEN SD SEARCH SECTION SECURE SECURITY SEGMENT_LIMIT SELECT 
%token SENTENCE SEPARATE SEQUENCE SEQUENTIAL SET SIGN SIZE SORT SORT_MERGE 
%token SOURCE SOURCE_COMPUTER SPACES SPECIAL_NAMES STANDARD STANDARD_1 
%token STANDARD_2 START STATUS STD_ERROR STD_INPUT STD_OUTPUT STOP STRINGCMD 
%token SUBTRACT SUM SYNCHRONIZED
%token TALLYING TAPE TCOBPROTO1 TCOBPROTO2 TELLYING TERMINATE TEST THAN THEN  
%token THRU TIMES TO TOKDUMMY TOP TRACE TRAILING TRUE_TOK TYPE 
%token UNDERLINE UNIT UNLOCK _UNSIGNED UNSTRING UNTIL UP UPDATE UPON UPPER  
%token USAGE USAGENUM USE USING VALUE  VALUE_LITERAL VARYING
%token WHEN WITH WORDS WORKING_STORAGE WRITE
%token LT LE GT GE EQ NE
%token ZERO

%token REVERSED_VIDEO REVERSE _TIME DATE_AND_TIME YYYYDDD YYYYMMDD _DAY _DATE
%token CENTURY_DAY CENTURY_DATE _ESCAPE TAB AUTO_SKIP PROMPT 
%token REVERSED DAY_AND_TIME _MESSAGE DAY_OF_WEEK LPARAN_SUB RPARAN_SUB 
%token _COLON _PLUS _MINUS _POW_OP UNARY_SIGN 

/***************************************************************************** 
                                Operator Precedence 
 *****************************************************************************/
%left  _PLUS _MINUS  _COLON 
%left  _MULTIPLY _DIVIDE
%left  UNARY_SIGN
%left  _POW_OP

%left  OR
%left  AND
%right NOT
%right OF
/***************************************************************************** 
                                Type Definitions 
 *****************************************************************************/
%union {
    int     ival;
    char*   sval;
    float   fval;
    long    longVal;
    void *  itemList;
    void *  object;
    struct  valueType *     varVal;
    struct  idvalStru *     idValWithOpt;
    /* struct  refnumbers *    refnumbers; */
    /* struct  _subscript *    subscrval; */
    struct  _subscript_item * subscritem;
    struct  xvaldata *      xvaldatatype;
    void *  subscrlst;
    struct  _usageclause *  dsuageitem;
    struct  valueType *     literalval;
    struct  _occurance *    occur;
    struct  _condition *                  cond;
    struct  _comb_abbr_cond_list *        comb_abri_cond_list;
    struct  _combinable_abbrivated_condition *   comb_abri_cond_item;
    struct  _combinable_condition *  comb_cond;
    struct  _abbriviation_rest *     abbr_rest;
    struct  _abbriviation_item *     abbr_item;
    struct  _arithmetic_expression * arithm_expr;
    struct  _relational_condition *  rel_cond;
    struct  _simple_condition *      simp_cond;
    /* procedure division */
    struct  _perform_option * perf_opt;
    struct  _proc_names * pnames;
    struct  _perform_varying * perf_varying;
    struct  _statements * stmts;    /* for ifelse */
    struct  _esc_excep_action * esc_excp;
    struct  _position_clause * pos_clause;
    struct  _with_clause_2 * with2;
    struct  _with_clause * withclause;
    struct  _accept_item * accitem;
    struct  _at_clause_accept * at_cl_accept;
    struct  _disp_item * disp_item;
    struct  _disp_screen_item * disp_screen_item;
    struct  _file_name_item * file_name_item;
    struct  _open_file_type * open_file_type;
    struct  _close_file_item * close_file_item;
    struct  _at_end_action * atend_action;
    struct  _invalid_key_action * invalid_action;
    struct  _advaicing_clause * advn_clause;
    struct  _id_gname * idgname;
    struct  _strpair * strpair;
    struct  _delete_simple * del_simple;
    struct  _str_argument * str_arg;
    struct  _action_pair * action_pair;
    /* old set statement 
    struct  _address_item * addr_item;
    struct  _up_down_item * updown_item;
    struct  _mnemonic_item * mnem_item;
    struct  _condition_item * cond_item;
    struct  _set_address_item * set_addr_item;
    struct  _set_pointer_item * set_ptr_item;
    struct  _set_index_item * set_idx_item;
    */
    struct _set_item * setitem;
    struct _set_clause * setclause;

    struct  _on_key_clause * onkey_clause;
    struct  _file_io_clause * fileIOclause;
    struct  _eval_item * evalitem;
    struct  _when_clause_item * whenclauseitem;
    struct  _into_clause * intoclause;
    struct  _delim_clause * delimclause;
    struct  _or_item * oritem;
    struct  _use_proc_option * useprocopt;
    struct  _use_on_item * useonitem;
    struct  _multi_when_clause * multiwhen;
    struct  _simple_when_item * simpwhen;
    struct  _before_after_item * befaftitem;
    struct  _replacing_item * replitem;
    struct  _alf_item * aflitem;
    struct  _converting_clause * convclause;
    struct  _init_replacing_item * init_rep_item;
    struct  _tallying_item * tallyingitem;
    struct  _call_item * callitem;
    struct  _call_using_item * callusingitem;
    struct  _call_details * calldetails;
    struct  _proc_param * procitem;
    struct  _use_chain_return * usechainret;

    /**** Environment div *******/
    void * cobobject;
    struct _special_names * spnames;
    struct _obj_comp_clause * objcompcl;
    struct _object_computer_clauses *  objectcompclauses;
    struct _intcharpair * intchrpair;
    struct _intpair * intpair;
    struct _config_section_option * cfgsecopt;
    struct _io_control_item * iocontrolitem;
    struct _same_clause * sameclause;
    struct _intidpair * intidpair;
    struct _file_control_clause * filecontrolclause;
    struct _file_control_expression * filecontrolexpr;
    struct _gnamepair_int * gnamepairint;
    struct _record_key_clause * reckeyclause;
    struct _int_xval * intxval;

    struct _fd_sd_option * fdsdoption;
    struct _linage_clause * linageclause;
    struct _int_id * idint;
    struct _val_clause_item * valclauseitem;
    struct _block_contains_clause * blockcontains;
    struct _record_contains_clause * reccontainsclause;
    struct _variation_clause * variationclause;
    struct _dataclause * dataclause;
    struct _usageclause * usageclause;
    struct _occurance * occuranceclause;
    /* struct _gnamepair_list * valuepairlst; */
    struct _gnamepair * gnamepair;
    struct _comm_inp * comminp;
    struct _comm_output_item * commout;
    struct _comm_sec_detail_opt * comsecdetail;
    struct _comm_section_item * commsecitem;
    struct _screen_descr_entry * scrdescrentry;

    struct _location_details * locdetails;
    struct _intintstr * numberoption;
    struct _screen_descr_option * scrdescropt;
    struct _id_option * idoption;
    struct _start_body_options * startbody;
}
%token <ival> INTEGER_LITERAL 
%token <fval> NUMBER_LITERAL FLOAT_LITERAL 
%token <longVal> HEX_NUMBER_LITERAL
%token <sval> IDENTIFIER DQUOTE_LITERAL SQUOTE_LITERAL TXTLINE 
%token <sval> PICTURE_STR HEX_STRING

/*************************************
 *                types              *
 *************************************/
%type <cond> condition
%type <comb_abri_cond_list> opt_comb_abri_condition comb_abri_cond_list
%type <comb_abri_cond_item> comb_abri_cond comb_abri
%type <comb_cond> combinable_condition
%type <abbr_rest> abbreviation_rest abbr_rest_list
%type <abbr_item> abbreviation_item abbr_rest_item
%type <arithm_expr> arithmetic_expression
%type <rel_cond> relational_condition
%type <simp_cond> simple_condition

%type <sval> txt_lines txt_line identifier opt_data_name 
%type <sval> name_or_filler
%type <ival> opt_not device_file_name organization_clause /* opt_length */ 
%type <ival> integer category_name file_type mode_type lock_mode special_literal
%type <ival> leading_trailing opt_to_int
%type <itemList> identifier_list  opt_data_name_list opt1 item_list item_list_rounded
    to_clause_lst
%type <varVal> gname opt_gname
%type <idValWithOpt> identifier_1
/*%type <refnumbers> opt_reference */
/*%type <subscrval> subscript start_index */
%type <subscritem> subscript_item subscript
%type <subscrlst> opt_subscripts subscripts
%type <xvaldatatype> xval xval_rounded
%type <literalval> signed_nliteral numeric_literal char_literal all_literal 
%type <literalval> literal without_all_literal gliteral 
%type <dsuageitem> usage_clause
%type <ival> class_item sign_indicator relational_operator mod_relational_operator
 rel_op opt_isnot opt_reversed_order
%type <ival> and_or sign_condition


/*************************************
 *     Identification div types      *
 *************************************/
%type <sval> program_name
%type <idoption> id_option author_option installation_option date_written_option
    date_compiled_option security_option remarks_option
%type <object> other_options opt_other_options identification_division
%type <ival> common_or_initial opt_prog_desc
/*************************************
 *       Environment div types       *
 *************************************/
%type <cobobject> environment_division opt_env_div_options env_div_options 
    env_div_section configuration_section input_output_section

%type <object> configuration_section_options special_names_options opt_special_names_options 
    special_names_clauses object_clauses_list gnamelist repository_name repository_list
    opt_repository repository_options

%type <spnames>  special_names_opt 
%type <ival> obj_comp_segment mem_option opt_debug_mode opt_intrinsic
%type <sval> obj_comp_sequence computer_name
%type <objcompcl> obj_comp_clause
%type <objectcompclauses> object_computer_clauses object_comp_options
%type <intchrpair> source_comp_options
%type <intpair> obj_comp_memory
%type <cfgsecopt> config_section_option

%type <object> io_control_option opt_io_control io_control_list multiple_file_list
    multiple_file_tape_clause
%type <iocontrolitem> io_control_item
%type <sameclause>  same_clause
%type <ival> opt_same_option same_option multiple_file_position 
%type <intidpair> multiple_file

%type <object> file_control_option file_control_expression_list
%type <ival> opt_fileinfo 
%type <filecontrolclause> file_control_clauses
%type <filecontrolexpr> file_control_expression

%type <gnamepairint> opt_file_assignment_clause file_assignment_clause file_name_clause
%type <ival> opt_reserve_clause reserve_clause opt_organization_clause 
     opt_lock_mode_clause lock_mode_clause reserve_item opt_with_duplicates
%type <xvaldatatype> opt_delimiter_clause delimiter_clause opt_code_set_clause 
    code_set_clause opt_collating_seq_clause collating_seq_clause 
    opt_file_status_clause file_status_clause 
    delim_type opt_relative_key 
%type <varVal> opt_padding_clause padding_clause opt_file_name
%type <object> opt_alternate_key_clause alternate_key_clause alternate_key_item_list
%type <reckeyclause> opt_record_key_clause record_key_clause record_key_opt
    alt_key_item
%type <intxval> opt_access_mode_clause access_mode_clause 
/*************************************
 *           Data div types          *
 *************************************/
%type <object> opt_identifier_list data_division_items data_division
    data_division_option file_section_options working_storage_section_options local_storage_section
    linkage_section_options communication_section_options screen_section_options
    data_div_item opt_file_section_fd_sd_options file_section_fd_sd_options 
    opt_working_storage_section_items working_storage_section_items
    opt_fd_sd_item_list fd_sd_item_list fd_sd_main opt_fd_sd_options fd_sd_option fd_sd_options
    value_of_clause value_clause_list data_records_clause label_records_clause 
    variation_clauses opt_variation_clauses record_is_varying fd_item_entry
    field_description opt_data_clauses data_clauses opt_value_list opt_value_clause_1
    file_control_clauses_list
%type <ival> comm_inp_type screen_descr_item records_character opt_ext_clause
    opt_global_clause opt_sign_clause opt_sync_clause opt_justification_clause
    opt_blank_when_clause 
%type <fdsdoption> fd_sd_opt
%type <sval> codeset_clause opt_redefine_clause opt_pic_clause opt_through_id 
    report_clause report_name opt_dependingon
%type <linageclause> linage_clause
%type <idint> id_int opt_footing opt_top opt_bottom
%type <valclauseitem> val_clause_item
%type <idValWithOpt> label_id depending_on_clause
%type <blockcontains> block_contains_clause
%type <reccontainsclause> record_contains_clause
%type <intpair> record_contains from_to_clause 
%type <variationclause> var_clause
%type <dataclause> data_clause opt_renames_clause
 /* %type <varVal> opt_thru_value */
 /* %type <valuepairlst> opt_value_clause_1 */ 
%type <gnamepair> opt_value_1
%type <usageclause> opt_usage_clause
%type <occuranceclause> opt_occurs_clause occurs_clause  /* single_occurance */
    multi_occurance

%type <object> linkage_section_items communication_section_detail_list
    opt_comm_output_items comm_output_items comm_sec_output opt_indexed_by_list
    indexed_by_list comm_sec_input comm_sec_IO 
%type <comminp> comm_inp comm_input_items comm_sec_input_item comm_sec_IO_item
    comm_IO_items
%type <ival> opt_initial 
%type <commout> comm_output_item
/* %type <commio> comm_IO_item */
%type <comsecdetail> comm_section_detail_options
%type <commsecitem> communication_section_item

%type <object> screen_description_entry_list screen_description_options
%type <scrdescrentry> screen_description_entry 
%type <scrdescropt> screen_descr_option
%type <numberoption> opt_number_clause number_clause number_option
%type <locdetails> location_details

/*************************************
 *        procedure div types        *
 *************************************/
%type <object> procedure_division proc_param_list proc_div_using_clause 
    proc_div_chainging_clause section_header paragraph_header /*invalid_statement */
    declarative_clause proc_div_declaratives_clause proc_item_list proc_item    
    
%type <sval> proc_div_return_clause section_name
%type <ival> opt_param_type param_type size_optional opt_size_optional proc_optional
    opt_integer opt_from_int 
%type <procitem> proc_param
%type <varVal> opt_literal
%type <usechainret> opt_using_chaining_returning

%type <itemList> from_arg_list to_arg_list move_item_list
%type <varVal> to_arg
%type <ival> opt_rounded implicit_def_clause

%type <object> proc_statement opt_proc_statements perform_statement add_statement 
    subtract_statement multiply_statement divide_statement move_statement 
    ifelse_statement accept_statement display_statement 
    open_statement close_statement read_statement write_statement 
    compute_statement rewrite_statement goback_statement purge_statement 
    release_statement unlock_statement cancel_statement continue_statement
    goto_statement alter_statement return_statement delete_statement 
    string_statement stop_statement exit_statement set_statement sort_statement 
    merge_statement evaluate_statement unstring_statement use_statement 
    search_statement initialize_statement inspect_statement call_statement 
    enter_statement start_statement initiate_statement terminate_statement
    generate_statement
%type <object> add_clause proc_statements
%type <object> opt_on_size_error on_size_error not_on_size_error 
%type <object> opt_perform_proc /* opt_proc_statements */
%type <itemList> opt_perform_options_list perform_options_list perform_varying_list
%type <perf_opt> perform_option 
%type <ival> before_after perform_test
%type <pnames> perform_proc 
%type <sval> proc_name
%type <perf_varying> perform_varying

%type <object> statement_list opt_action with_clause_2_list opt_with_clause_2_list
%type <stmts> statements else_proc_statements opt_else_clause opt_then_clause
    then_proc_statements
%type <ival> with_clause2 with_clause at_clause escape_exception
%type <idValWithOpt> opt_id
%type <esc_excp> opt_not_on opt_escape_exception_action
%type <pos_clause> col_clause position_clause
%type <with2> with_clause_2_item 
%type <xvaldatatype> id_opt_unit from_clause identifier_clause opt_xval
%type <accitem> accept_item
%type <object> accept_item_list 
%type <at_cl_accept> at_clause_accept opt_at_clause 

%type <withclause> opt_with_clause_item

%type <varVal> opt_column_clause
%type <object> display_upon_sysname display_term_io display_screen_name
    display_item_list disp_screen_list
%type <object> sysname_list opt_with_clause opt_with_clause_list
%type <xvaldatatype> opt_upon
%type <ival> opt_advancing
%type <disp_item> display_item
%type <disp_screen_item> disp_screen

%type <ival> open_option opt_exclusive
%type <object> opt_open_option_list open_option_list open_file_list open_file_type_list
%type <idValWithOpt> file_name
%type <file_name_item> file_item
%type <open_file_type> open_file_type

%type <ival> close_file_option
%type <close_file_item> close_file_item
%type <object> close_file_list

%type <idValWithOpt> read_base opt_identifier opt_key_clause
%type <ival> record_clause  opt_next_previous next_previous_record opt_record_clause
%type <object> not_end_proc_stmt end_proc_stmt opt_invalid_key_action opt_not_invalid_key_action
%type <atend_action> end_action opt_end_action
%type <invalid_action> opt_keyvalidation_action keyvalidation_action

%type <object> opt_not_end_of_page_action opt_end_of_page_action endof_page opt_endof_page
%type <xvaldatatype> advancing_clause 
%type <ival> opt_advanc
%type <advn_clause> write_printer opt_record_advancing_clause
%type <varVal> opt_from_clause
%type <idgname> record_name_clause

%type <sval> opt_proc_name
%type <object> proc_name_list alter_proc_list
%type <strpair> alter_proc_item
%type <ival> opt_record

%type <xvaldatatype> opt_into_identifier 
%type <del_simple> delete_simple_statement
%type <object> multi_file_statement

%type <xvaldatatype> mod_item
%type <object> string_arguments /* modified_item_list */
%type <idValWithOpt> with_pointer_opt
%type <str_arg> str_argument

%type <object> noton_overflow_action on_overflow_action on_overflow opt_on_overflow

%type <object> stop_option 
%type <ival> opt_cycle 

/*
up_down on_off true_false
%type <object> 
    up_down_list mnemonic_onoff_list condition_list 
    set_address_clause
    address_clause_list 
    address_item_list 
    pointer_clause_list 
    set_pointer_clause
    set_index_type 
 %type <addr_item> address_item 

%type <updown_item> up_down_item
%type <mnem_item> mnemonic_item
%type <idValWithOpt> condition_name
%type <cond_item> condition_item

%type <set_addr_item> set_address_item 
%type <set_ptr_item> set_pointer_item
%type <set_idx_item> set_index_item 
*/

%type <setitem> set_item
%type <setclause> set_clause
%type <ival> set_direction
%type <object> set_item_list set_clause_list

%type <object> on_key_clause_item_list
%type <ival> opt_key opt_duplicate_inorder
%type <onkey_clause> on_key_clause
%type <idValWithOpt> opt_collating_sequence
%type <sval> opt_through
%type <fileIOclause> file_input_clause file_output_clause

%type <object> file_name_list using_file_clause
%type <object> opt_when_other_clause also_item_list when_clause_list 
    also_eval_item_list opt_also_eval_item_list opt_when_also_item_list
%type <evalitem> eval_item when_item also_item /* opt_thru_eval_item */
%type <whenclauseitem> when_clause_item

%type <ival> opt_on opt_for opt_global opt_standard error_exception opt_all opt_file_reel_unit
    opt_beginning_end
%type <useonitem> on_item
%type <idValWithOpt> tallying_in_opt  opt_delimiter_in opt_count_in /* opt_delim_in opt_count_in */
%type <object> into_clause_list unstring_into_clause opt_or_item_list or_item_list on_items
%type <intoclause> into_clause
%type <delimclause> opt_delimit_clause
%type <oritem> or_item
%type <useprocopt> proc_option
%type <object> replacing_item_list /* tallying_for_item_list */
    /* tfi_item_list
    inspect_replacing_item_list alf_item_list */
%type <ival> opt_filler opt_default_clause 

%type <evalitem> m_when_clause_item and_when_clause_item 
%type <object> and_when_clause_item_list opt_and_when_clause_item_list imperative_statement
    simple_when_cond_list single_search all_search search_clause opt_at_end_clause
%type <multiwhen> multi_when_clause
%type <simpwhen> s_w_c_item
%type <idValWithOpt> opt_varying_clause 

%type <befaftitem> before_after_item
%type <object> before_after_list opt_before_after_list

%type <init_rep_item> replacing_item

/* %type <aflitem> alf_item tfi_item */
%type <ival> opt_value_clause /* all_leading_first */
%type <object> opt_replacing_clause inspect_replacing_clause opt_insp_replacing_clause
    inspect_replacing_clause_list converting_clause_list
%type <convclause> converting_clause opt_insp_converting_clause
/* %type <ins_rep_item> inspect_replacing_item tallying_for_item */
%type <tallyingitem> tallying_clause 
%type <ival> char_lead_trail
%type <object> opt_insp_tallying_clause tallying_clause_list

%type <callitem> call_item
%type <callusingitem> using_item by_reference_item by_content_item
%type <object> call_item_list using_item_list 
%type <idValWithOpt> opt_returning opt_giving
%type <calldetails> call_details
/* 
call_item_giving_returning 
*/
%type <sval> language_name routine_name
%type <varVal> opt_with_size 
%type <startbody> start_body_option 
%type <xvaldatatype> opt_release_from 
/*******************************************
 *            Top level nodes              *
 *******************************************/
%type <object> project_start nested_prog_list source_item program_definition
    function_definition nested_prog function_division
    program_mandatory 

/*****************************************************************************/
%%
/***************************************************************************** 
 *                               PARSER START                                *
 *****************************************************************************/
project_start:
    nested_prog_list { 
        dbg_print(DBG_PARSER, ".... Reached the start node .....\n"); 
        $$ = cons_project($1);
    }
    ;
nested_prog_list:
    source_item     { 
        dbg_print(DBG_PARSER, ".... Reached nested prog list : source item.....\n"); 
        $$ = start_generic_list((void *) $1);
    }
    | nested_prog_list source_item {
        $$ = addto_generic_list($1, (void *) $2);
        dbg_print(DBG_PARSER, ".... Reached nested prog list : list .....\n"); 
    }
    ;
source_item:
    program_definition      { 
        dbg_print(DBG_PARSER, ".... Reached source item : program definition.....\n"); 
        $$ = $1; 
    }
    | function_definition   { 
        dbg_print(DBG_PARSER, ".... Reached source item : function definition.....\n"); 
        $$ = $1; 
    }
    ;
program_definition:
    identification_division
    environment_division	
    data_division	
    procedure_division
    nested_prog
    end_program  { 
        dbg_print(DBG_PARSER, ".... Reached program definition .....\n"); 
        $$ = cons_program_definition($1, $2, $3, $4, $5);
    }
    ;
nested_prog:
    { $$ = NULL; }
    | 
    program_mandatory  { 
        $$ = start_generic_list((void *) $1); 
        dbg_print(DBG_PARSER, ".... Reached nested program : program def .....\n"); 
    }
    | nested_prog program_mandatory { 
        $$ = addto_generic_list($1, $2);
        dbg_print(DBG_PARSER, ".... Reached nested program : program def list.....\n"); 
    }
    ;
program_mandatory:
    identification_division
    environment_division	
    data_division
    procedure_division
    nested_prog
    end_mandatory  { 
        dbg_print(DBG_PARSER, ".... Reached program mandatory .....\n"); 
        $$ = cons_program_definition($1, $2, $3, $4, $5);
    }
    ; 
end_mandatory:
    END_PROGRAM program_name PERIOD
    | END PROGRAM program_name PERIOD
    ;
function_definition:
    function_division
    environment_division
    data_division
    procedure_division
    end_function  { 
        dbg_print(DBG_PARSER, ".... Reached function definition .....\n"); 
        $$ = cons_function_definition($1, $2, $3, $4);
    }
    ;
end_function:
    END_FUNCTION program_name PERIOD
    ;
end_program:
    | end_mandatory
    ;
    /*
    | END_PROGRAM program_name PERIOD
    | END PROGRAM program_name PERIOD
    ;
    */
function_division:
    FUNCTION_ID PERIOD program_name as_literal PERIOD {
        $$ = cons_function_division($3, currentFileName);
    }
    ;
as_literal:
    | AS LITERAL
    ;

 /***************************************************************************** 
  *                          IDENTIFICATION DIVISION                          *
  *****************************************************************************/
identification_division:    
    IDENTIFICATION DIVISION PERIOD            
    PROGRAM_ID PERIOD   
    program_name opt_period opt_recursive
    opt_prog_desc
    opt_other_options     {
        $$ = cons_identification_division($6, $9, $10, currentFileName);
    }
    | 
    error { dbg_print(DBG_PARSER, "Error in identification division"); }
    ; /* Many more things to complete but for now*/

program_name: 
    identifier  {  
        $$ = $1;
    }
 /* | error { dbg_print(DBG_PARSER, "Error in identification division"); } */
    ; 	
opt_recursive:
    | RECURSIVE PERIOD
    ;
opt_prog_desc:
    { $$ = 0; }
    | IS common_or_initial opt_program opt_period { $$ = $2; }
    ;
common_or_initial:
    COMMON          { $$ = CB_COMMON; }
    | INITIAL_TOK   { $$ = CB_INITIAL; }
    ;
opt_program:
    | PROGRAM
    ;
opt_other_options: {
        $$ = NULL;
    }
    | other_options { $$ = $1; }
    ;
other_options:
    id_option { $$ = start_generic_list((void *) $1); }
    | other_options id_option {
        $$ = addto_generic_list($1, $2);
    }
    ;
id_option:
    author_option           { $$ = $1; }
    | installation_option   { $$ = $1; }
    | date_written_option   { $$ = $1; }
    | date_compiled_option  { $$ = $1; }
    | security_option       { $$ = $1; }
    | remarks_option        { $$ = $1; }
    ;
author_option:
    AUTHOR PERIOD txt_lines opt_period { 
        $$ = cons_id_option(CB_IDD_AUTHOR, $3);
    }
    ;
installation_option:
    INSTALLATION PERIOD txt_lines opt_period { 
        $$ = cons_id_option(CB_IDD_INSTALL, $3);
    }
    ; 
date_written_option:
    DATE_WRITTEN PERIOD txt_lines opt_period { 
        $$ = cons_id_option(CB_IDD_DATEWRI, $3);
    }
    ;
date_compiled_option:
    DATE_COMPILED PERIOD txt_lines opt_period { 
        $$ = cons_id_option(CB_IDD_DATECOM, $3);
    }
    ;
security_option:
    SECURITY PERIOD txt_lines opt_period{ 
        $$ = cons_id_option(CB_IDD_SECURITY, $3);
    }
    ;
remarks_option:
    REMARK PERIOD txt_lines opt_period{ 
        $$ = cons_id_option(CB_IDD_REMARKS, $3);
    }
    ;
txt_lines:
    txt_line opt_period {
        /* printf("the text line is %s\n", $1); */
        $$ = start_buffer($1);
        }
    | txt_lines txt_line opt_period {
        /* printf("the text line in two %s\n", $2); */
        $$ = append_buffer($2);
        }
    ;
txt_line:
    IDENTIFIER {    
        $$ = $1;
        dbg_print(DBG_TRACE, "literal : %s\n", $1);
        }
    | DQUOTE_LITERAL {
        $$ = $1;
        dbg_print(DBG_TRACE, "literal : %s\n", $1); 
        }
    | SQUOTE_LITERAL {
        $$ = $1;    
        }
    ;

 /***************************************************************************** 
                              ENVIRONMENT DIVISION  
 *****************************************************************************/
environment_division:
    { $$ = NULL; } /* ref IC233A-1 newcob.val */
    | ENVIRONMENT DIVISION PERIOD
    opt_env_div_options  {
 /*   | error { dbg_print(DBG_PARSER, "Error in ENVIRONMENT DIVISION"); } */
        $$ = cons_environment_division($4);
    }
    ;
opt_env_div_options: 
    { $$ = NULL; }
    | env_div_options {
        $$ = $1;
    }
    ;
env_div_options:
    env_div_section { $$ = start_generic_list((void *) $1); }
    | env_div_options env_div_section {
        $$ = addto_generic_list($1, $2);
    }
    ;
env_div_section:
    configuration_section   { $$ = $1; }
    | input_output_section  { $$ = $1; }
    ;

 /*************************************
  *       Configuration section       *
  *************************************/
configuration_section:
    CONFIGURATION SECTION PERIOD
    configuration_section_options { 
        $$ = cons_configuration_section($4); 
    }
    ;
configuration_section_options:
    config_section_option { $$ = start_generic_list((void *) $1); } 
    | configuration_section_options config_section_option {
        $$ = addto_generic_list($1, $2);
    }
    ;
config_section_option:
    source_comp_options {
        $$ = cons_config_sec_option(CB_CONFIG_SEC_SOURCE, $1, NULL, NULL, NULL);
    }
    | object_comp_options {
        $$ = cons_config_sec_option(CB_CONFIG_SEC_OBJECT, NULL, $1, NULL, NULL);
    }
    | special_names_clauses {
        $$ = cons_config_sec_option(CB_CONFIG_SEC_SPNAMES, NULL, NULL, $1, NULL);
    }
    | repository_options {
        $$ = cons_config_sec_option(CB_CONFIG_SEC_REPOSITORY, NULL, NULL, NULL, $1);
    }
    ;
/*********** Repository **************/
repository_options:
    REPOSITORY PERIOD opt_repository {
        $$ = $3;
    }
    ;
opt_repository:
    { $$ = NULL; }
    | repository_list PERIOD {
        $$ = $1;
    }
    ;
repository_list:
    repository_name { $$ = start_generic_list((void *) $1); }
    | repository_list repository_name {
        $$ = addto_generic_list($1, $2);
    }
    ;
repository_name:
    FUNCTION gnamelist opt_intrinsic  {
        $$ = $2;
    }
    | FUNCTION ALL INTRINSIC  {
        $$ = NULL;  
    }
    ;
opt_intrinsic:
    { $$ = 0; }
    | INTRINSIC { $$ = 1; }
    ;

/******* Source Comp Options ********/
source_comp_options:
    SOURCE_COMPUTER PERIOD IDENTIFIER 
    opt_debug_mode opt_period{
        $$ = cons_intchar_pair($3, $4);
    }
    ;
opt_debug_mode: 
    { $$ = 0; }
    | WITH DEBUGGING MODE PERIOD {
        $$ = 1;
    }
    ;
/******* Object Comp Options ********/
object_comp_options:
    OBJECT_COMPUTER PERIOD
    object_computer_clauses opt_period{ $$ = $3; }
    ;
object_computer_clauses:
    computer_name PERIOD    {
        $$ = cons_object_computer_clauses($1, NULL); 
    }
    | computer_name  object_clauses_list PERIOD {
        $$ = cons_object_computer_clauses($1, $2);
    }
    | object_clauses_list PERIOD {
        $$ = cons_object_computer_clauses(NULL, $1);
    }
    ;
computer_name:
    IDENTIFIER  { $$ = $1; }
    ;
object_clauses_list:
    obj_comp_clause { $$ = start_generic_list((void *) $1); } 
    | object_clauses_list obj_comp_clause {
        $$ = addto_generic_list($1, $2);
    }
    ;
obj_comp_clause:
    obj_comp_memory {
        /* int pair */
        $$ = cons_obj_comp_clause(CB_OBJCOMP_MEM, $1, NULL, 0); 
    }
    | obj_comp_sequence {
        /* char */
        $$ = cons_obj_comp_clause(CB_OBJCOMP_SEQ, NULL, $1, 0);
    }
    | obj_comp_segment {
        /* int */
        $$ = cons_obj_comp_clause(CB_OBJCOMP_SEG, NULL, NULL, $1);
    }
    ;
obj_comp_memory:
    MEMORY SIZE integer mem_option { $$ = cons_intpair($3, $4); }
    ;
mem_option:
    WORDS           { $$ = CB_MEM_WORDS; }
    | CHARACTERS    { $$ = CB_MEM_CHARS; }
    | MODULES       { $$ = CB_MEM_MODULE; }
    ;
obj_comp_sequence:
    PROGRAM COLLATING SEQUENCE IS IDENTIFIER  { $$ = $5; }
    ;
obj_comp_segment:
    SEGMENT_LIMIT IS integer { $$ = $3; }
    ;

/******* Special Names Clause ********/
special_names_clauses:
    SPECIAL_NAMES PERIOD
    opt_special_names_options { $$ = $3; }
    ;
opt_special_names_options:
    { $$ = NULL; }
    | special_names_options { $$ = $1; }
    ;
special_names_options:
    special_names_opt { $$ = start_generic_list((void *) $1); } 
    | special_names_options special_names_opt {
        $$ = addto_generic_list($1, $2);
    }
    ;
special_names_opt:
    CURRENCY SIGN IS IDENTIFIER PERIOD  {
        $$ = cons_special_names(CB_SN_CURRENCY, $4);
    }
    | DECIMAL_POINT IS COMMA PERIOD {
        $$ = cons_special_names(CB_SN_DECIMALPT, NULL);
    }
    ;
 /*************************************
  *       Input-output section        *
  *************************************/
input_output_section:
    /*
    opt_inpout_sec_header file_control_option io_control_option { 
        $$ = cons_input_output_section($2, $3);
    }
    |   As the parent handles the list operation, in case multiple of these 
        appear, should not be a problem.
    */
    opt_inpout_sec_header file_control_option  {
        $$ = cons_input_output_section($2, NULL);
    }
    | opt_inpout_sec_header io_control_option {
        $$ = cons_input_output_section(NULL, $2);
    } /*
    | error { 
        dbg_print(DBG_PARSER, "Error in input_output_section"); 
        $$ = NULL;
    } */
    ;
opt_inpout_sec_header:
    | INPUT_OUTPUT SECTION PERIOD
    ;
 /*************************************
  *       I-O-CONTROL                 *
  *************************************/
io_control_option:
    I_O_CONTROL PERIOD opt_io_control { 
        $$ = cons_io_control($3); 
    }
    ;
opt_io_control:
    { $$ = NULL; }
    | io_control_list PERIOD { $$ = $1; }
    ;
io_control_list:
    io_control_item  { $$ = start_generic_list((void *) $1); }
    | io_control_list io_control_item  {
        $$ = addto_generic_list($1, $2);
    }
    ;
io_control_item:
    /* as per rmss there is one more clause called RETURN clause */
    same_clause {
        /* this is struct _same_clause ptr */
        $$ = cons_io_control_item(CB_IOCONTROL_SAME, $1, NULL);
    }
    | multiple_file_tape_clause {
        $$ = cons_io_control_item(CB_IOCONTROL_MULTI, NULL, $1); 
    }
    ;
same_clause:
    SAME opt_same_option AREA FOR file_name_list  { 
        $$ = cons_same_clause( $2, $5 );
    }
    ;
opt_same_option: 
    { $$ = CB_SAME_ABSENT; }
    | same_option { $$ = $1; } 
    ;
same_option:
    RECORD          { $$ = CB_SAME_RECORD; }
    | SORT          { $$ = CB_SAME_SORT; }
    | SORT_MERGE    { $$ = CB_SAME_SORT_MERGE; }
    ;
file_name_list: /* identifier_1 list */
    file_name   { $$ = start_generic_list((void *) $1); }
    | file_name_list file_name {
        $$ = addto_generic_list($1, $2);
    }
    | file_name_list comma_opt file_name {
        $$ = addto_generic_list($1, $3);
    }
    ;
multiple_file_tape_clause:
    MULTIPLE FILEX TAPE CONTAINS multiple_file_list {
        $$ = $5;
    }
    ;
multiple_file_list:
    multiple_file  { $$ = start_generic_list((void *) $1); }
    | multiple_file_list multiple_file  {
        $$ = addto_generic_list($1, $2);
    }
    ;
multiple_file:
    file_name multiple_file_position {
        $$ = cons_int_id_pair($2, $1);
    }
    ;
multiple_file_position:
    { $$ = 0; }
    | POSITION integer { $$ = $2; }
    ;
/*****************************
 *        File-Control       *
 *****************************/
file_control_option:
    FILE_CONTROL PERIOD
    file_control_expression_list { 
        $$ = cons_file_control($3); 
    }
    ;

file_control_expression_list:
    file_control_expression  { $$ = start_generic_list((void *) $1); }
    | file_control_expression_list file_control_expression {
        $$ = addto_generic_list($1, $2);
    }
    ;
file_control_expression:
    SELECT opt_fileinfo identifier /* {
                    dbg_print(DBG_TRACE, "setting record name \n");
                    setFCIRecordName($3);
                    dbg_print(DBG_TRACE, "setting record name done \n");
            } */
    file_control_clauses_list
    opt_period {
        $$ = cons_file_control_expression($2, $3, $4);
    }
    ; 
opt_fileinfo:
    {   /* 
        dbg_print(DBG_TRACE, "setting flag 0 \n");
        setFCIOptFlag(0); 
        dbg_print(DBG_TRACE, "setting flag 0 done\n");
        */
        $$ = CB_OPT_NOTDEFINED;
    }
    | opt_not OPTIONAL  { 
        if($1 == 0) {
            $$ = CB_OPT_OPTIONAL;
            /* setFCIOptFlag(1); */
        }
        else { 
            $$ = CB_OPT_NOTOPTIONAL;
            /* setFCIOptFlag(2); */
        }
    }
    ;

file_control_clauses_list:
    file_control_clauses { $$ = start_generic_list((void *) $1); }
    | file_control_clauses_list file_control_clauses {
        $$ = addto_generic_list($1, $2);
    }
    ;

file_control_clauses:
    opt_file_assignment_clause {
        $$ = cons_fcc_item_gnamepair(CB_FCC_ASSIGN, $1);
    }
    | opt_reserve_clause {
        $$ = cons_fcc_item_int(CB_FCC_RESERVE, $1);
    }
    | opt_organization_clause {
        $$ = cons_fcc_item_int(CB_FCC_ORG, $1);
    }
    | opt_padding_clause{
        $$ = cons_fcc_item_val(CB_FCC_PADDING, $1);
    }
    | opt_delimiter_clause {
        $$ = cons_fcc_item_xval(CB_FCC_DELIM, $1);
    }
    | opt_access_mode_clause {
        $$ = cons_fcc_item_int_xval(CB_FCC_ACCESS, $1);
    }
    | opt_lock_mode_clause {
        $$ = cons_fcc_item_int(CB_FCC_LOCK, $1);
    }
    | opt_code_set_clause {
        $$ = cons_fcc_item_xval(CB_FCC_CODESET, $1);
    }
    | opt_collating_seq_clause {
        $$ = cons_fcc_item_xval(CB_FCC_COLLATING, $1);
    }
    | opt_record_key_clause {
        $$ = cons_fcc_item_reckey(CB_FCC_RECKEY, $1);
    }
    | opt_alternate_key_clause {
        $$ = cons_fcc_item_key(CB_FCC_KEYCLAUSE, $1);
    }
    | opt_file_status_clause {
        $$ = cons_fcc_item_xval(CB_FCC_FILESTATUE, $1);
    }

   /* {
        $$ = cons_file_control_clause($1, $2, $3, $4, $5, $6, $7, $8,
                                      $9, $10, $11, $12);
    } */
    ;

opt_file_assignment_clause: // struct _gnamepair_int *
    file_assignment_clause { $$ = $1; }
    ;
opt_reserve_clause: // int
    reserve_clause { $$ = $1; }
    ;
opt_organization_clause: // int
    organization_clause  { $$ = $1; }
    ;
opt_padding_clause: // gname
    padding_clause { $$ = $1; }
    ;
opt_delimiter_clause: // xval
    delimiter_clause { $$ = $1; }
    ;
opt_access_mode_clause: // struct _int_xval *
    access_mode_clause { $$ = $1; }
    ;
opt_lock_mode_clause: // int
    lock_mode_clause { $$ = $1; }
    ;
opt_code_set_clause: //xval
    code_set_clause { $$ = $1; }
    ;
opt_collating_seq_clause: //xval
    collating_seq_clause { $$ = $1; }
    ;
opt_record_key_clause: // struct _record_key_clause *
    record_key_clause { $$ = $1; }
    ;
opt_alternate_key_clause: //void *
    alternate_key_clause { $$ = $1; }
    ;
opt_file_status_clause: //xval
    file_status_clause { $$ = $1; }
    ;

reserve_clause:
    RESERVE reserve_item ALTERNATE area {
        $$ = $2;
    }
    ;
reserve_item:
    NO  { $$ = -1;}
    | integer { $$ = $1; }
    ;
area:
    AREA | AREAS
    ;
file_assignment_clause:
    /* This clause has a lot of variations across implementations. 
        This clause will need revisit so that conformance to specific 
        implementations would be possible. Right now going with the rmss 
     */
    ASSIGN opt_to file_name_clause	{ /* many more options to handle */
        $$ = $3;
    }
    ;
file_name_clause:
    gname opt_file_name {
        $$ = cons_file_assignment_clause($1, $2, 0);
    } 
    | device_file_name opt_file_name {
        $$ = cons_file_assignment_clause(NULL, $2, $1);
    }
    ;
/*
    DQUOTE_LITERAL {
        setFCIAssignTo($1); setFCIAssignFlag(8);
    }
    | identifier {
        setFCIAssignTo($1); setFCIAssignFlag(7);
    }
    | device_file_name opt_file_name {
        setFCIAssignTo($2); setFCIAssignFlag($1);
    }
    ; */
/* for now. This will need enhancements specific to the OS as well as */
/* specific to the resultant conversion */

device_file_name:
      DISPLAY       { $$ = CB_DISPLAY; }
    | INPUT         { $$ = CB_INPUT; }
    | OUTPUT        { $$ = CB_OUTPUT; }
    | INPUT_OUTPUT  { $$ = CB_INPUT_OUTPUT; }
    | RANDOM        { $$ = CB_RANDOM; }
    | TAPE          { $$ = CB_TAPE; }
    ;
opt_file_name:
    { $$ = NULL; }
    | gname  {
        $$ = $1;
    }
    ;
organization_clause:
    ORGANIZATION is_opt LINE SEQUENTIAL   { $$ = CB_FL_LINE_SEQUENTIAL; }
    | ORGANIZATION is_opt SEQUENTIAL        { $$ = CB_FL_SEQUENTIAL; }
    | ORGANIZATION is_opt BINARY SEQUENTIAL { $$ = CB_FL_BIN_SEQUENTIAL; }
    | ORGANIZATION is_opt RELATIVE          { $$ = CB_FL_RELATIVE; }
    | ORGANIZATION is_opt INDEXED           { $$ = CB_FL_INDEXED; }
    ;
padding_clause:
    PADDING CHARACTER is_opt gname  { /* literal or identifter */
        $$ = $4;
    }
    ;
delimiter_clause:
    RECORD DELIMITER is_opt delim_type  { $$ = $4; }
    ;
delim_type:
    STANDARD_1  { $$ = NULL; } 
        /* when this node is null it should mean it is STANDARD_1 */
    | xval   { /* this is delimiter_name could be string literal or identifier */
        $$ = $1;
    }
    ;
access_mode_clause:
    ACCESS MODE is_opt mode_type opt_relative_key {
        $$ = cons_accessmode_clause($4, $5);
    }
    ;
mode_type:
    SEQUENTIAL  { $$ = CB_FM_SEQUENTIAL; }
    | RANDOM    { $$ = CB_FM_RANDOM; }
    | DYNAMIC   { $$ = CB_FM_DYNAMIC; }
    ;
opt_relative_key: 
    { $$ = NULL; }
    | RELATIVE KEY is_opt xval { /* data name: identifier or literal */
        $$ = $4; 
    }
    ;
lock_mode_clause: /* ref : rmss */
    LOCK MODE is_opt lock_mode { $$ = $4; }
    ;
lock_mode:
    MANUAL WITH LOCK ON opt_multiple records      { $$ = CB_LM_MAN_ON_MUL_REC; }
    | AUTOMATIC WITH LOCK ON opt_multiple records { $$ = CB_LM_AUT_ON_MUL_REC; }
    | EXCLUSIVE                                   { $$ = CB_LM_EXCLUSIVE; }
    ;
opt_multiple:
    | MULTIPLE
    ;
records:
    RECORD
    | RECORDS
    ;
code_set_clause:
    CODE_SET is_opt xval { /* alphabet name as per rmss */
        $$ = $3;
    }
    ;
collating_seq_clause:
    COLLATING SEQUENCE is_opt xval  { /* alphabet name as per rmss */
        $$ = $4;
    }
    ;
record_key_clause:
    RECORD KEY is_opt record_key_opt
    opt_with_duplicates {
        $$ = mod_record_key_clause($4, $5);
    }
    ;
record_key_opt:
    xval { $$ = cons_record_key_clause( $1, NULL, NULL); }
    | identifier EQ identifier_list {
        $$ = cons_record_key_clause( NULL, $1, $3);
    }
    ;
identifier_list:
    identifier  { $$ = start_generic_list((void *) $1); }
    | identifier_list identifier  {
        $$ = addto_generic_list($1, $2);
    }
    | identifier_list comma_opt identifier  {
        $$ = addto_generic_list($1, $3);
    }
    ;
alternate_key_clause:
    alternate_key_item_list { $$ = $1; }
    ;
alternate_key_item_list:
    alt_key_item { $$ = start_generic_list((void *) $1); }
    | alternate_key_item_list alt_key_item  {
        $$ = addto_generic_list($1, $2);
    }
    ;
alt_key_item:
    ALTERNATE RECORD KEY 
    is_opt record_key_opt opt_with_duplicates {
        $$ = mod_record_key_clause($5, $6);
    }
    ;
opt_with_duplicates:
    { $$ = 0; }
    | WITH DUPLICATES { $$ = 1; }
    ;
file_status_clause:
    FILEX STATUS IS xval {
        $$ = $4;
    }
    ;
opt_period:
    /* empty */
    | PERIOD
    ;
 /***************************************************************************** 
                               DATA DIVISION  
 *****************************************************************************/	
data_division:
    { $$ = NULL; }
    | 
    DATA DIVISION PERIOD
    data_division_option {
        $$ = cons_data_division($4);
        dbg_print(DBG_PARSER, "In Data Division ...\n"); 
    } 
    | error PERIOD { dbg_print(DBG_ERROR, "Error in Data Division ...\n"); 
        $$ = NULL; yyerrok;
    } 
    ;
data_division_option:
    { $$ = NULL; }
    |
    data_division_items { $$ = $1; }
    ;
data_division_items:
    data_div_item { $$ = start_generic_list((void *) $1); }
    | data_division_items data_div_item {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
data_div_item:
    file_section_options                { $$ = $1; }
    | working_storage_section_options   { $$ = $1; }
    | linkage_section_options           { $$ = $1; }
    | communication_section_options     { $$ = $1; }
    | screen_section_options            { $$ = $1; }
    | report_section_options            { $$ = NULL;}
    | local_storage_section             { $$ = $1; }
    ;
 /****************************************
  *        file section options          *
  ****************************************/	
file_section_options :
    FILEX SECTION PERIOD
    opt_file_section_fd_sd_options {
        $$ = cons_file_section($4);
        dbg_print(DBG_PARSER, "In file section ...\n"); 
    }
    | error { dbg_print(DBG_ERROR, "Error in file section ...\n"); }
    ;
opt_file_section_fd_sd_options:
    { $$ = NULL; }
    | file_section_fd_sd_options { $$ = $1; }
    ;
file_section_fd_sd_options:
    fd_sd_option { $$ = start_generic_list((void *) $1); }
    | file_section_fd_sd_options fd_sd_option {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
fd_sd_option:
    FD fd_sd_main   {
        /* addFileDiscriptor(CB_FD_FD); */
        $$ = set_file_description_type( CB_FD_FD, $2);
    }
    | SD fd_sd_main {
        /* addFileDiscriptor(CB_FD_SD); */
        $$ = set_file_description_type( CB_FD_SD, $2); // this needs to be modified with the FD/SD flag. 
    }
    ;
fd_sd_main:
    identifier opt_period
    opt_fd_sd_options opt_period
    opt_fd_sd_item_list  {
        dbg_print(DBG_TRACE, "FD_SD_MAIN: Identifier ....: %s\n", $1); 
        $$ = cons_file_description($1, $3, $5);
    }   
    ;
opt_fd_sd_item_list:
    { $$ = NULL; } /* in case of REPORT the list is null */
    | fd_sd_item_list { $$ = $1; }
    ;
opt_fd_sd_options:
    { $$ = NULL; }
    | fd_sd_options { $$ = $1; }
    ;
fd_sd_options:
    fd_sd_opt opt_period { $$ = start_generic_list((void *) $1); }
    | fd_sd_options fd_sd_opt opt_period  {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
fd_sd_opt:
    is_opt EXTERNAL             { $$ = cons_fdsd_opt_int(CB_FDSD_EXTERNAL, 1); }
    | is_opt GLOBAL             { $$ = cons_fdsd_opt_int(CB_FDSD_GLOBAL, 1); }
    | label_records_clause      { $$ = cons_fdsd_opt_void(CB_FDSD_LAB_REC_CLAUSE, $1); }
    | record_contains_clause    { 
        $$ = cons_fdsd_opt_reccon(CB_FDSD_REC_CON_CLAUSE, $1); 
        /* this will define the size of the record in case of FORMAT-U type files - IBM. 
           This should override the item 01 sizes while read/write. When this is not defined the record 
           length is determined by largest of the 01 level field. When RECORD IS VARYING defined it depends 
           on the size defined in the second integer. When RECORD IS VARYING DEPENDING on IDF, size is take
           from IDF.
           Create the routine that takes the FD record and tell you the physical size that can be passed on to 
           to the DataItem class in constructor. 
        */
    }
    | block_contains_clause     { 
        $$ = cons_fdsd_opt_blockcon(CB_FDSD_BLO_CON_CLAUSE, $1); 
        /* this can be ignored. File handling in object oriented lang will leave these details to immpelemtation */
    }
    | data_records_clause       { $$ = cons_fdsd_opt_void(CB_FDSD_DATA_REC_CLAUSE, $1); }
    | value_of_clause           { $$ = cons_fdsd_opt_void(CB_FDSD_VAL_OF_CLAUSE, $1); }
    | linage_clause             { $$ = cons_fdsd_opt_linage_clause(CB_FDSD_LINAGE_CLAUSE, $1); }
    | codeset_clause            { $$ = cons_fdsd_opt_codeset(CB_FDSD_CODESET_CLAUSE, $1); }
    | report_clause             { $$ = cons_fdsd_opt_report(CB_FDSD_REPORT_CLAUSE, $1); }
    ;

report_clause:
    REPORT is_opt report_name {
        $$ = $3;
    }
    | REPORTS is_opt report_name {
        $$ = $3;
    }
    ;
report_name:
    identifier  { $$ = $1; }
    ;
codeset_clause:
    CODE_SET is_opt identifier { $$ = $3; }
    ;
linage_clause:
    LINAGE is_opt id_int opt_footing opt_top opt_bottom { 
        $$ = cons_linage_clause($3, $4, $5, $6);
    }
    ;
id_int:
    identifier_1    {  $$ = cons_int_id( CB_IDENTIFIER, 0, $1); }
    | integer       {  $$ = cons_int_id( CB_INT, $1, NULL); }
    ;
opt_footing:
    { $$ = NULL; }
    | WITH FOOTING AT id_int { $$ = $4; }
    ;
opt_top:
    { $$ = NULL; }
    | LINES AT TOP id_int { $$ = $4; }
    ;
opt_bottom:
    { $$ = NULL; }
    | LINES AT BOTTOM id_int { $$ = $4; }
    ;
value_of_clause:
    VALUE OF value_clause_list  { $$ = $3; }
    ;
value_clause_list:
    val_clause_item { $$ = start_generic_list((void *) $1); }
    | value_clause_list val_clause_item  {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
val_clause_item:
    label_id is_opt gname {
        $$ = cons_val_clause_item($1, $3);
    } 
    ;
label_id:
    LABEL   { $$ = NULL; } /* if the label_id is null it means it is LABEL */
    | identifier_1 { $$ = $1; }
    ;
data_records_clause: // void pur
    DATA RECORD IS identifier_list      { $$ = $4; }
    | DATA RECORDS ARE identifier_list  { $$ = $4; }
    ;
label_records_clause:   /* void ptr */
    LABEL RECORDS ARE STANDARD PERIOD   { $$ = NULL; } /* NULL means standard */
    | LABEL RECORDS identifier_list     { $$ = $3; }
    ;
block_contains_clause:
    BLOCK CONTAINS integer opt_to_int records_character {
        $$ = cons_block_contains_clause($3, $4, $5);
    }
    ;
records_character:
    RECORDS         { $$ = CB_SL_RECORDS; }
    | CHARACTERS    { $$ = CB_SL_CHARACTERS; }
    ;
record_contains_clause: // struct _record_contains_clause ptr
    record_contains     { /* struct _intpair ptr */
        $$ = cons_record_contains_clause(CB_REC_CON, $1, NULL);
    }
    | record_is_varying { /* void ptr */
        $$ = cons_record_contains_clause(CB_REC_VAR, NULL, $1);
    }
    ;
record_contains:
    RECORD CONTAINS integer opt_to_int CHARACTERS {
        $$ = cons_intpair($3, $4);
        /* come back again. In some variants CHARACTERS is optional */
    }
    ;
opt_to_int:
    { $$ = 0; }
    | TO integer { $$ = $2; }
    ;
opt_from_int:
    { $$ = 0; }
    | FROM integer  { $$ = $2; }
    ;
record_is_varying:
    RECORD IS VARYING IN SIZE 
    opt_variation_clauses  { $$ = $6; }
    ;
opt_variation_clauses:
    { $$ = NULL; }
    | variation_clauses { $$ = $1; }
    ;
variation_clauses:
    var_clause  { $$ = start_generic_list((void *) $1); }
    | variation_clauses var_clause {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
var_clause:
    from_to_clause          { 
        $$ = cons_variation_clause(CB_VAR_FROMTO, $1, NULL); 
    }
    | depending_on_clause   {
        $$ = cons_variation_clause(CB_VAR_DEPEND, NULL, $1); 
    }
    ;
from_to_clause:
    opt_from_int opt_to_int CHARACTERS  {
        $$ = cons_intpair($1, $2);
    }
    ;
depending_on_clause:
    DEPENDING ON identifier_1 {
        $$ = $3;
    }
    ;
fd_sd_item_list:
    fd_item_entry   { $$ = start_generic_list((void *) $1); }
    | fd_sd_item_list fd_item_entry {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
fd_item_entry:
    field_description { $$ = $1; }
    ; 
field_description: /* the information to be filled in CobFieldRecord */
    integer
    name_or_filler   
    opt_data_clauses 
    opt_period           { 
        $$ = cons_field_description($1, $2, $3);
    }
    ;
integer:
    INTEGER_LITERAL {  $$ = $1; }
    ;
name_or_filler:
                    { $$ = NULL; }
    | FILLER        { $$ = strdup("FILLER"); }
    | IDENTIFIER    { $$ = strdup($1); }
    ; 
opt_data_clauses:
    { $$ = NULL; }
    | data_clauses { $$ = $1; }
    ;
data_clauses:
    data_clause  { 
        $$ = start_generic_list((void *) $1); 
        dbg_print(DBG_TRACE, "Inside : Data clause \n"); 
    }
    | data_clauses data_clause {
        $$ = addto_generic_list($1, (void *)$2);
        dbg_print(DBG_TRACE, "Inside : Data clause -list \n"); 
    }
    ;
data_clause:                       
    opt_redefine_clause     { $$ = cons_dataclause_str(CB_DC_REDEFINE, $1); }
    | opt_pic_clause        { $$ = cons_dataclause_str(CB_DC_PICTURE, $1); } 
    | opt_value_clause_1    { $$ = cons_dataclause_gnamepairlst(CB_DC_VALUE, $1); }
    | opt_usage_clause      { $$ = cons_dataclause_usage(CB_DC_USAGE, $1); }
    | opt_ext_clause        { $$ = cons_dataclause_int(CB_DC_EXTERN, $1); }
    | opt_global_clause     { $$ = cons_dataclause_int(CB_DC_GLOBAL, $1); }
    | opt_sign_clause       { $$ = cons_dataclause_int(CB_DC_SIGN, $1); }
    | opt_occurs_clause     { $$ = cons_dataclause_occur(CB_DC_OCCUR, $1); }
    | opt_sync_clause       { $$ = cons_dataclause_int(CB_DC_SYNCH, $1); }
    | opt_justification_clause  { $$ = cons_dataclause_int(CB_DC_JUSTIFY, $1); } 
    | opt_blank_when_clause     { $$ = cons_dataclause_int(CB_DC_BLANK, $1); } 
    | opt_renames_clause    { $$ = $1; }
    ; 
opt_renames_clause:
    RENAMES identifier opt_through_id { 
        cons_dataclause_rename(CB_DC_RENAMES, $2, $3); 
    }
    ;
opt_through_id:
    { $$ = NULL; }
    | THRU identifier { $$ = $2; }
    ;
opt_redefine_clause:
    REDEFINES identifier { $$ = $2; }
    ;
opt_pic_clause:
    PICTURE is_opt 
    PICTURE_STR     { $$ = strdup($3); }
    ;
is_opt:
    | IS 
    ;
/* this fails with the CONDITIONS.CBL
opt_value_clause_1:
    VALUE is_opt gname opt_thru_value { 
        $$ = cons_value_pairorlst($3, $4, NULL); 
    }
    | VALUE is_opt from_arg_list {
        $$ = cons_value_pairorlst(NULL, NULL, $3);
    }
    ;
opt_thru_value:
    { $$ = NULL; }
    | THRU gname {
        $$ = $2;
    }
    ;
*/
/**** new implementation ****/
opt_value_clause_1: 
    VALUE is_opt opt_value_list {
        $$ = $3;
    } 
    ;
opt_value_list:
    opt_value_1  { $$ = start_generic_list((void *) $1); } 
    | opt_value_list opt_value_1 {
        $$ = addto_generic_list($1, (void *)$2);
    }
    | opt_value_list comma_opt opt_value_1 {
        $$ = addto_generic_list($1, (void *)$3);
    }
    ;

opt_value_1:
    gname   { 
        $$ = cons_value_pair($1, NULL); 
    }
    | gname THRU gname { 
        $$ = cons_value_pair($1, $3); 
    }
    ;
/**** new implementation ****/

opt_usage_clause:   
    USAGE is_opt usage_clause  { 
        $$ = $3;
        dbg_print(DBG_TRACE, "Inside : USAGE clause \n"); 
    }
                        /*  check this with appropriate examples...  
                            opt_usage usage_clause opt_integer
                            | usage_clause opt_integer */
    | usage_clause opt_integer {
        $$ = $1;
    }
    ;

opt_usage:
    USAGE is_opt
    ; 
usage_clause:
    BINARY INTEGER_LITERAL  { $$ = construct_usage_clause(CB_UC_BINARY, $2); }
    | COMP                  { $$ = construct_usage_clause(CB_UC_COMP, 0); }
    | COMP1                 { $$ = construct_usage_clause(CB_UC_COMP_1, 0); }
    | COMP2                 { $$ = construct_usage_clause(CB_UC_COMP_2, 0); }
    | COMP3 INTEGER_LITERAL { $$ = construct_usage_clause(CB_UC_COMP_3, $2); }
    | COMP4 INTEGER_LITERAL { $$ = construct_usage_clause(CB_UC_COMP_4, $2); }
    | COMP5 INTEGER_LITERAL { $$ = construct_usage_clause(CB_UC_COMP_5, $2); }
    | COMP6                 { $$ = construct_usage_clause(CB_UC_COMP_6, 0); }
    | DISPLAY               { $$ = construct_usage_clause(CB_UC_DISPLAY, 0); }
    | INDEXM                { $$ = construct_usage_clause(CB_UC_INDEX, 0); }
    | PACKED_DECIMAL        { $$ = construct_usage_clause(CB_UC_PACKED_DECIMAL, 0); }
    | POINTER               { $$ = construct_usage_clause(CB_UC_POINTER, 0); }
    ;
opt_ext_clause:
    IS EXTERNAL  { $$ = 1; }
    ;
opt_global_clause:
    IS GLOBAL    { $$ = 1; }
    ;
opt_sign_clause: 
    opt_sign is_opt
    leading_trailing
    opt_separate_char { $$ = $3; }
    ;
opt_sign:
    | SIGN
    ;
leading_trailing:
    LEADING         { $$ = CB_LEADING; }
    | TRAILING      { $$ = CB_TRAILING; }
    ;
opt_separate_char:
    | SEPARATE CHARACTER
    ;
opt_occurs_clause:
    OCCURS
    occurs_clause { $$ = $2; }
    ;
occurs_clause:
/*    single_occurance { 
        $1->multi = 0; 
        $$ = $1;
    }
    | */ 
    multi_occurance { 
        $1->multi = 1; 
        $$ = $1;
    }
    ;
/*
single_occurance:
    INTEGER_LITERAL TIMES   { $$ = construct_occurance($1, 0, NULL); }
    | INTEGER_LITERAL       { $$ = construct_occurance($1, 0, NULL); }
    ; */
multi_occurance:
    INTEGER_LITERAL opt_to_int opt_times 
    opt_dependingon
    opt_asc_dsc_key_list opt_indexedby_list {
        dbg_print(DBG_PARSER, "Inside : occurance clause - multi \n"); 
        $$ = construct_occurance($1, $2, $4);
    }
    ;
opt_times:
    | TIMES
    ;
opt_dependingon:
    { $$ = NULL; }
    | DEPENDING ON identifier {
        $$ = $3;
    }
    ;
opt_asc_dsc_key_list:
    | asc_dsc_key_list
    ;
asc_dsc_key_list:
    asc_dsc_key
    | asc_dsc_key_list asc_dsc_key
    ;
asc_dsc_key:
    opt_asc_or_dsc KEY is_opt from_arg_list
    ;
opt_asc_or_dsc:
    | asc_or_dsc
    ;
asc_or_dsc:
    ASCENDING
    | DESCENDING
    ;
opt_indexedby_list:
    | indexedby_list
    ;
indexedby_list:
    indexedby
    | indexed_by_list indexedby
    ;
indexedby:
    INDEXED BY from_arg_list
    ;
opt_sync_clause:
    SYNCHRONIZED LEFT       { $$ = CB_SY_LEFT; }
    | SYNCHRONIZED RIGHT    { $$ = CB_SY_RIGHT; }
    ;
opt_justification_clause:
    JUSTIFIED RIGHT         { $$ = 1; }
    ;
opt_blank_when_clause:
    BLANK WHEN ZERO         { $$ = 1; }
    ;
 /****************************************
  *   Working storage section options    *
  ****************************************/
working_storage_section_options:
    WORKING_STORAGE SECTION opt_period
    opt_working_storage_section_items  {
        $$ = cons_working_storage_section($4);
    }
    | error PERIOD{ dbg_print(DBG_TRACE, "Error in Working storage section ...\n"); }
    ;
opt_working_storage_section_items:
    { $$ = NULL; }
    | working_storage_section_items { $$ = $1; }
    ;
working_storage_section_items: 
    fd_sd_item_list {
        /* addFieldDiscriptionList(NULL, CB_WS_SECTION); */
        $$ = $1;
    }
    ;

 /****************************************
  *    Local storage section options     *
  ****************************************/
local_storage_section:
    LOCAL_STORAGE SECTION opt_period
    fd_sd_item_list {
        $$ = cons_local_storage_section($4);
    }

 /****************************************
  *        Linkage section options       *
  ****************************************/
linkage_section_options:
    LINKAGE SECTION PERIOD
    linkage_section_items { $$ = cons_linkage_section($4); }
    ;
linkage_section_items:
    fd_sd_item_list { $$ = $1; }
    ;
 /****************************************
  *    Communication section options     *
  ****************************************/
communication_section_options:
    COMMUNICATION SECTION PERIOD
    communication_section_detail_list {
        $$ = cons_communication_section($4);
    }
    ;
communication_section_detail_list:
    communication_section_item { $$ = start_generic_list((void *) $1); } 
    | communication_section_detail_list communication_section_item {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
communication_section_item:
    CD identifier FOR
    comm_section_detail_options
    fd_sd_item_list
    opt_period  {
        $$ = cons_comm_section_item($2, $4, $5);
    }
    ;
comm_section_detail_options:
    comm_sec_input      { $$ = cons_comm_sec_details_opt( CB_FT_INPUT, $1); }
    | comm_sec_output   { $$ = cons_comm_sec_details_opt( CB_FT_OUTPUT, $1); }
    | comm_sec_IO       { $$ = cons_comm_sec_details_opt( CB_FT_I_O, $1); }
    ;
comm_sec_input:
    comm_sec_input_item { $$ = start_generic_list((void *) $1); } 
    | comm_sec_input comm_sec_input_item {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
comm_sec_input_item:
    opt_initial INPUT
    comm_input_items {
        $3->initialflag = $1;
        $$ = $3;
    }
    ;
opt_initial: 
    { $$ = 0; }    
    | "INITIAL" { $$ = 1; }
    ;
comm_input_items:
    comm_inp
    opt_identifier_list  {
        $1->idlist = $2;
        $$ = $1;
    }
    ;
comm_inp: 
    comm_inp_type is_opt gname {
        $$ = construct_comm_inp($1, $3);
    }
    ;
comm_inp_type:
    "SYMBOLIC" "QUEUE"          { $$ = CB_SYM_QUEUE; }
    | "SYMBOLIC" "SUB-QUEUE-1"  { $$ = CB_SYM_SUBQ1; }
    | "SYMBOLIC" "SUB-QUEUE-2"  { $$ = CB_SYM_SUBQ2; }
    | "SYMBOLIC" "SUB-QUEUE-3"  { $$ = CB_SYM_SUBQ3; }
    | "MESSAGE" _DATE           { $$ = CB_SYM_MSG_DATE; }
    | "MESSAGE" _TIME           { $$ = CB_SYM_MSG_TIME; }
    | "SYMBOLIC" SOURCE         { $$ = CB_SYM_SOURCE; }
    | "TEXT" LENGTH             { $$ = CB_TXT_LENGTH; }
    | END KEY                   { $$ = CB_END_KEY; }
    | STATUS KEY                { $$ = CB_STATUS_KEY; }
    | "MESSAGE" COUNT           { $$ = CB_MSG_COUNT; }
    | "SYMBOLIC" "TERMINAL"     { $$ = CB_SYM_TERM; }
    ;
opt_identifier_list:
    { $$ = NULL; }
    | identifier_list { $$ = $1; }
    ;
comm_sec_output:
    OUTPUT
    opt_comm_output_items { $$ = $2; }
    ;
opt_comm_output_items:
    { $$ = NULL; }
    | comm_output_items { $$ = $1; }
    ;
comm_output_items:
    comm_output_item { $$ = start_generic_list((void *) $1); } 
    | comm_output_items comm_output_item  {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
comm_output_item:
    "DESTINATION" COUNT is_opt gname    { 
        $$ = cons_comm_outitem_val(CB_COMOUT_DEST, $4);
    }
    | "TEXT" LENGTH is_opt gname {
        $$ = cons_comm_outitem_val(CB_COMOUT_TXTLEN, $4);
    }
    | STATUS KEY is_opt gname {
        $$ = cons_comm_outitem_val(CB_COMOUT_STAKEY, $4);
    }
    | "DESTINATION" "TABLE" OCCURS integer opt_indexed_by_list {
        $$ = cons_comm_outitem_dest(CB_COMOUT_DEST_TAB, $4, $5);
    }
    | ERROR_TOK KEY is_opt gname {
        $$ = cons_comm_outitem_val(CB_COMOUT_ERRKEY, $4);
    }
    | "SYMBOLIC" "DESTINATION" is_opt gname {
        $$ = cons_comm_outitem_val(CB_COMOUT_SYMDEST, $4);
    }
    ;
opt_indexed_by_list: { $$ = NULL; }
    | indexed_by_list { $$ = $1; }
    ;
indexed_by_list:
    INDEXED BY item_list { $$ = $3; }
    ;

comm_sec_IO:
    comm_sec_IO_item { $$ = start_generic_list((void *) $1); }
    | comm_sec_IO comm_sec_IO_item {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
comm_sec_IO_item:
    opt_initial I_O
    comm_IO_items {
        $3->initialflag = $1;
        $$ = $3;
    }
    ;
/* for optimization used the structure that is used for inp */
comm_IO_items:
    comm_inp { $$ = $1; }
    ;

/* comm_IO_item:
    "MESSAGE" _DATE is_opt gname            { $$ = cons_comm_IO_item( CB_COMIO_MSGDATE, $4); }
    | "MESSAGE" _TIME is_opt gname          { $$ = cons_comm_IO_item( CB_COMIO_MSGTIME, $4); }
    | "SYMBOLIC" "TERMINAL" is_opt gname    { $$ = cons_comm_IO_item( CB_COMIO_SYMTERM, $4); }
    | "TEXT" LENGTH is_opt gname            { $$ = cons_comm_IO_item( CB_COMIO_TXTLEN, $4); }
    | END KEY is_opt gname                  { $$ = cons_comm_IO_item( CB_COMIO_ENDKEY, $4); }
    | STATUS KEY is_opt gname               { $$ = cons_comm_IO_item( CB_COMIO_STAKEY, $4); }
    ; */
 /****************************************
  *        Screen section options        *
  ****************************************/
screen_section_options:
        /* this needs elaboration */
    SCREEN SECTION PERIOD
    screen_description_entry_list {
        $$ = cons_screen_section($4);
    }
    ;
screen_description_entry_list:
    screen_description_entry { $$ = start_generic_list((void *) $1); }
    | screen_description_entry_list screen_description_entry {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
screen_description_entry:
    integer name_or_filler
    screen_description_options
    opt_period {
        $$ = cons_screen_descr_entry($1, $2, $3);
    }
    ;
screen_description_options:
    screen_descr_option  { $$ = start_generic_list((void *) $1); } 
    | screen_description_options screen_descr_option  {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
screen_descr_option:
    screen_descr_item is_opt opt_id opt_number_clause {
        $$ = cons_scr_descr_options( $1, $3, $4, NULL, NULL, NULL);
    }
    | opt_value gname {
        $$ = cons_scr_descr_options(CB_SCRDSC_VALUE, NULL, NULL, $2, NULL, NULL);
    }
    | opt_pic_clause location_details {
        $$ = cons_scr_descr_options(CB_SCRDSC_PICTURE, NULL, NULL, NULL, $1, $2);
    }
    ;
opt_number_clause: 
    { $$ = NULL; }
    | number_clause { $$ = $1; }
    ;
screen_descr_item:
    BACKGROUND          { $$ =  CB_SCRDSC_BACKGROUND; }
    | BACKGROUNDCOLOR   { $$ =  CB_SCRDSC_BACKGROUNDCOLOR; }
    | FOREGROUND        { $$ =  CB_SCRDSC_FOREGROUND; }
    | FOREGROUNDCOLOR   { $$ =  CB_SCRDSC_FOREGROUNDCOLOR; }
    | opt_usage DISPLAY { $$ =  CB_SCRDSC_USAGEDISPLAY; }
    | opt_sign_clause   { $$ =  $1; }
    | AUTO              { $$ =  CB_SCRDSC_AUTO; }
    | AUTO_SKIP         { $$ =  CB_SCRDSC_AUTO_SKIP; }
    | SECURE            { $$ =  CB_SCRDSC_SECURE; }
    | REQUIRED          { $$ =  CB_SCRDSC_REQUIRED; }
    | FULL              { $$ =  CB_SCRDSC_FULL; }
    | BELL              { $$ =  CB_SCRDSC_BELL; }
    | BEEP              { $$ =  CB_SCRDSC_BEEP; }
    | BLANK SCREEN      { $$ =  CB_SCRDSC_BLANK_SCREEN; }
    | BLANK LINE        { $$ =  CB_SCRDSC_BLANK_LINE; }
    | BLANK REMAINDER   { $$ =  CB_SCRDSC_BLANK_REMAINDER; }
    | BLINK             { $$ =  CB_SCRDSC_BLINK; }
    | ERASE EOS         { $$ =  CB_SCRDSC_ERASE_EOS; }
    | ERASE EOL         { $$ =  CB_SCRDSC_ERASE_EOL; }
    | ERASE SCREEN      { $$ =  CB_SCRDSC_ERASE_SCREEN; }
    | HIGHLIGHT         { $$ =  CB_SCRDSC_HIGHLIGHT; }
    | NO HIGHLIGHT      { $$ =  CB_SCRDSC_NO_HIGHLIGHT; }
    | LOWLIGHT          { $$ =  CB_SCRDSC_LOWLIGHT; }
    | REVERSE           { $$ =  CB_SCRDSC_REVERSE; }
    | REVERSEVIDEO      { $$ =  CB_SCRDSC_REVERSEVIDEO; }
    | UNDERLINE         { $$ =  CB_SCRDSC_UNDERLINE; }
    | LINE              { $$ =  CB_SCRDSC_LINE; }
    | COLUMN            { $$ =  CB_SCRDSC_COLUMN; }
    | BLANK WHEN ZERO   { $$ =  CB_SCRDSC_BLANK_WHEN_ZERO; }
    ;
number_clause:
    NUMBER is_opt number_option {
        $$ = $3;
    }
    ;
number_option:
    PLUS integer    { $$ = cons_number_option(CB_INT, $2, NULL); }
    | identifier    { $$ = cons_number_option(CB_CHARPTR, 0, $1); }
    ;
opt_value:
    | VALUE is_opt
    ;
location_details:
    FROM gname      { $$ = cons_location_details(CB_LOC_FROM, $2); }
    | TO gname      { $$ = cons_location_details(CB_LOC_TO, $2); }
    | USING gname   { $$ = cons_location_details(CB_LOC_USING, $2); }
    ;
 /****************************************
  *        Report section options        *
  ****************************************/

report_section_options:
    REPORT SECTION PERIOD
    opt_report_descr_list
    ;
opt_report_descr_list:
    | report_descr_list
    ;
report_descr_list:
    report_descr_item
    | report_descr_list report_descr_item
    ;
report_descr_item:
    RD report_name 
    opt_report_options PERIOD
    report_group_descr_list
    ;
opt_report_options:
    | report_options
    ;
report_options:
    report_option_item
    | report_options report_option_item
    ; 
report_option_item:
    is_global
    | code_clause
    | control_clause
    | page_clause
    ;
is_global:
    is_opt GLOBAL
    ; 
code_clause:
    CODE gname
    ;
control_clause:
    opt_control opt_final gnamelist
    ;
gnamelist:
    gname { $$ = start_generic_list((void *)$1); }
    | gnamelist gname {
            $$ = addto_generic_list($1, (void *)$2); 
    }
    | gnamelist COMMA gname {
        $$ = addto_generic_list($1, (void *)$3); 
    }
    ;

opt_control:
    CONTROL is_opt
    | CONTROLS ARE
    ;
page_clause:
    PAGE_TOK opt_limit_clause 
    integer opt_lines 
    opt_heading_clause
    opt_first_detail 
    opt_last_detail
    opt_footing_clause
    ;
opt_limit_clause:
    | LIMIT IS
    | LIMITS ARE
    ;
opt_heading_clause:
    HEADING integer
    ;
opt_first_detail:
    FIRST DETAIL integer
    ;
opt_last_detail:
    LAST DETAIL integer
    ;
opt_footing_clause:
    FOOTING integer
    ;
report_group_descr_list:
    report_group_descr_item
    | report_group_descr_list report_group_descr_item
    ;
report_group_descr_item:
    level_no optdataname
    report_group_opt_list
    PERIOD
    ;
level_no:
    integer
    ;
optdataname:
    | identifier
    ;
report_group_opt_list:
    report_group_opt
    | report_group_opt_list report_group_opt
    ; 
report_group_opt:
    line_number_clause
    | next_group_clause
    | type_clause
    | repo_usage_clause
    | picture_clause
    | sign_clause
    | justified_clause
    | opt_blank_when_clause
    | column_number_clause
    | source_clause
    | value_is_clause
    | sum_clause
    | group_indicate_clause
    ;
line_number_clause:
    LINE opt_number is_opt opt_plus integer opt_on_next_page
    ;
opt_number:
    | NUMBER 
    ;
opt_plus:
    | PLUS
    ;
opt_on_next_page:
    | ON NEXT PAGE_TOK
    ;
next_group_clause:
    NEXT GROUP is_opt 
    int_next_page
    ;
int_next_page:
    integer
    | PLUS integer
    | NEXT PAGE_TOK
    ;
type_clause:
    TYPE is_opt
    report_type_code
    opt_gname
    opt_final
    ;
report_type_code:
    | REPORT HEADING
    | RH
    | PAGE_TOK HEADING
    | PH
    | CONTROL HEADING
    | CH
    | DETAIL
    | DE
    | CONTROL FOOTING
    | CF
    | PAGE_TOK FOOTING
    | PF
    | REPORT FOOTING
    | RF
    ;
opt_gname:  { $$ = NULL; }
    | gname { $$ = $1; }
    ;
opt_final:
    | FINAL
    ;
repo_usage_clause:
    USAGE is_opt DISPLAY
    | DISPLAY
    ;
picture_clause:
    PICTURE is_opt PICTURE_STR
    ;
sign_clause:
    SIGN is_opt leading_trailing SEPARATE CHARACTER
    ;
justified_clause:
    JUSTIFIED RIGHT
    ;
column_number_clause:
    COLUMN opt_number is_opt integer
    ;
source_clause:
    SOURCE is_opt identifier_1
    ;
value_is_clause:
    VALUE is_opt gname
    ;
sum_clause:
    SUM sum_details_list
    opt_reset_on
    ;
sum_details_list:
    sum_detail
    | sum_details_list sum_detail
    ;
sum_detail:
    identifier_list opt_upon_idlist
    ;
opt_upon_idlist:
    | UPON identifier_list
    ;
opt_reset_on:
    | reset_on
    ;
reset_on:
    RESET ON gname
    | RESET ON FINAL
    ; 
group_indicate_clause:
    GROUP INDICATE
    ;

 /***************************************************************************** 
  *                            PROCEDURE DIVISION                             *
  *****************************************************************************/	
procedure_division:
    { $$ = NULL; }    /* empty */
    | 
    PROCEDURE DIVISION 
    opt_using_chaining_returning
    PERIOD
    proc_div_declaratives_clause
    proc_item_list {
        $$ = construct_procedure_division($3, $5, $6 );
    }
    | error PERIOD { dbg_print(DBG_ERROR, "Error in Procedure Division ...\n"); 
        $$ = NULL; yyerrok;
    } 
    ;
opt_using_chaining_returning:
    proc_div_using_clause
    proc_div_chainging_clause
    proc_div_return_clause {
        $$ = construct_use_chain_retur_clause($1, $2, $3);
    }
    ;
proc_div_using_clause:
    { $$ = NULL; }
    | USING proc_param_list { $$ = $2; }
    ;
proc_div_chainging_clause: 
    { $$ = NULL; }
    | CHAINING proc_param_list { $$ = $2; }
    ;
proc_div_return_clause: 
    { $$ = NULL; }
    | RETURNING IDENTIFIER { $$ = $2; }
    ;
proc_param_list:
    proc_param { $$ = start_generic_list((void *)$1); }
    | proc_param_list proc_param {
        $$ = addto_generic_list($1, (void *)$2); 
    }
    | proc_param_list comma_opt proc_param {
        $$ = addto_generic_list($1, (void *)$3); 
    }
    ;
proc_param:
    opt_param_type opt_size_optional opt_integer proc_optional identifier {
        $$ = construct_proc_param($1, $2, $3, $4, $5);
    }
    ;
opt_param_type:
    { $$ = CB_CALL_BY_DEFAULT; }
    | param_type { $$ = $1; }
    ;
param_type:         
    BY REFERENCE    { $$ = CB_CALL_BY_REF; }
    | BY VALUE      { $$ = CB_CALL_BY_CONTENT; }
    ;
opt_size_optional: 
    { $$ = 0; }
    | size_optional  
    ;
size_optional:
    SIZE is_opt AUTO        { $$ = CB_SIZE_AUTO; }
    | SIZE is_opt _DEFAULT  { $$ = CB_SIZE_DEFAULT; }
    | _UNSIGNED SIZE is_opt { $$ = CB_SIZE_UNSIGNED; }
    | SIZE is_opt           { $$ = CB_SIZE_NONE; }
    ;
proc_optional:
    { $$ = 0; }
    | OPTIONAL { $$ = 1; }
    ;
opt_integer:
    { $$ = -1; }
    | integer { $$ = $1; }
    ;
proc_div_declaratives_clause: 
    { $$ = NULL; }
    | declarative_clause { $$ = $1; }
    ;
declarative_clause:
    DECLARATIVES opt_period
    proc_item_list
    END DECLARATIVES opt_period {
        $$ = construct_declaratives($3);
    }
    ;
proc_item_list:
    proc_item { $$ = start_top_level_item((void *)$1); }
    | proc_item_list proc_item {
        $$ = addto_top_level_item($1, (void *)$2); 
    }
/*
    proc_item { $$ = start_generic_list((void *)$1); }
    | proc_item_list proc_item {
        $$ = addto_generic_list($1, (void *)$2); 
    }
*/
    ;
proc_item:
    section_header  { 
        $$ = $1;
    }
    | paragraph_header          { 
        $$ = $1;
    }
    | proc_statements opt_period    { /* returns sentence */
        dbg_print(DBG_TRACE, "    proc_item: Proc statements\n"); 
        $$ = construct_proc_statements($1);
    } /*
    | invalid_statement         { 
        dbg_print(DBG_TRACE, "    proc_item: Invalid statement\n");
        $$ = NULL;
    } 
    | error PERIOD {
        dbg_print(DBG_TRACE, "    error occurred in proc_item.\n"); 
        $$ = NULL;
    } */
    | PERIOD { 
        $$ = NULL; 
    }
    ;
section_header:
    section_name SECTION opt_literal PERIOD {
        $$ = construct_section_header($1, $3);
        dbg_print(DBG_PARSER, "Section - %s\n", $1); 
    }
    ;
section_name:
    IDENTIFIER { $$ = $1; }
    ;
opt_literal:
    { $$ = NULL; }
    | gname  { $$ = $1; }
    ;
paragraph_header:
    IDENTIFIER PERIOD { 
        $$ = construct_paragraph_header($1); 
        dbg_print(DBG_PARSER, "Paragraph - %s\n",$1 ); 
    }
    ;
  /*
invalid_statement:
    identifier { 
        dbg_print(DBG_PARSER, "Inside invalid_statement....\n"); 
        $$ = NULL; 
    }*/  /* change this later */

    /* this is invalid statement as just identifier is found. 
        mark error and do as you do for the error */
    ;
statement_list:
    proc_statements  { 
        dbg_print(DBG_TRACE, "statement_list: proc statements\n"); 
        $$ = $1;
    }
    ; 
proc_statements:
    proc_statement { $$ = start_sentence($1); }
    | proc_statements proc_statement {
        $$ = addto_sentence($1, $2);
    }
/*
    proc_statement { $$ = start_generic_list($1); }
    | proc_statements proc_statement {
        $$ = addto_generic_list($1, $2);
    }
*/
    ;
proc_statement:
    perform_statement       { $$ = $1; dbg_print(DBG_PARSER, "STMT: perform\n"); }
    | move_statement        { $$ = $1; dbg_print(DBG_PARSER, "STMT: move\n"); }
    | open_statement        { $$ = $1; dbg_print(DBG_PARSER, "STMT: open\n"); }
    | close_statement       { $$ = $1; dbg_print(DBG_PARSER, "STMT: close\n"); }
    | write_statement       { $$ = $1; dbg_print(DBG_PARSER, "STMT: write\n"); }
    | read_statement        { $$ = $1; dbg_print(DBG_PARSER, "STMT: read\n"); }
    | release_statement     { $$ = $1; dbg_print(DBG_PARSER, "STMT: release\n"); }
    | return_statement      { $$ = $1; dbg_print(DBG_PARSER, "STMT: return\n"); }
    | set_statement         { $$ = $1; dbg_print(DBG_PARSER, "STMT: set\n"); }
    | sort_statement        { $$ = $1; dbg_print(DBG_PARSER, "STMT: sort\n"); }
    | display_statement     { $$ = $1; dbg_print(DBG_PARSER, "STMT: display\n"); }
    | ifelse_statement      { $$ = $1; dbg_print(DBG_PARSER, "STMT: ifelse\n"); }
    | accept_statement      { $$ = $1; dbg_print(DBG_PARSER, "STMT: accept\n"); }
    | add_statement         { $$ = $1; dbg_print(DBG_PARSER, "STMT: add\n"); }
    | subtract_statement    { $$ = $1; dbg_print(DBG_PARSER, "STMT: subtract\n"); }
    | multiply_statement    { $$ = $1; dbg_print(DBG_PARSER, "STMT: multiply\n"); }
    | divide_statement      { $$ = $1; dbg_print(DBG_PARSER, "STMT: divide\n"); }
    | compute_statement     { $$ = $1; dbg_print(DBG_PARSER, "STMT: compute\n"); }
    | stop_statement        { $$ = $1; dbg_print(DBG_PARSER, "STMT: stop\n"); }
    | use_statement         { $$ = $1; dbg_print(DBG_PARSER, "STMT: use\n"); }
    | goto_statement        { $$ = $1; dbg_print(DBG_PARSER, "STMT: go to\n"); }
    | alter_statement       { $$ = $1; dbg_print(DBG_PARSER, "STMT: alter\n"); }
    | exit_statement        { $$ = $1; dbg_print(DBG_PARSER, "STMT: exit\n"); }
    | call_statement        { $$ = $1; dbg_print(DBG_PARSER, "STMT: call\n"); }
    | enter_statement       { $$ = $1; dbg_print(DBG_PARSER, "STMT: enter\n"); }
    | merge_statement       { $$ = $1; dbg_print(DBG_PARSER, "STMT: merge\n"); }
    | evaluate_statement    { $$ = $1; dbg_print(DBG_PARSER, "STMT: evaluate\n"); }
    | rewrite_statement     { $$ = $1; dbg_print(DBG_PARSER, "STMT: rewrite\n"); }
    | goback_statement      { $$ = $1; dbg_print(DBG_PARSER, "STMT: goback\n"); }
    | purge_statement       { $$ = $1; dbg_print(DBG_PARSER, "STMT: purge\n"); }
    | unlock_statement      { $$ = $1; dbg_print(DBG_PARSER, "STMT: unlock\n"); }
    | cancel_statement      { $$ = $1; dbg_print(DBG_PARSER, "STMT: cancel\n"); }
    | delete_statement      { $$ = $1; dbg_print(DBG_PARSER, "STMT: delete\n"); }
    | string_statement      { $$ = $1; dbg_print(DBG_PARSER, "STMT: string\n"); }
    | unstring_statement    { $$ = $1; dbg_print(DBG_PARSER, "STMT: unstring\n"); }
    | continue_statement    { $$ = $1; dbg_print(DBG_PARSER, "STMT: continue\n"); }
    | search_statement      { $$ = $1; dbg_print(DBG_PARSER, "STMT: search\n"); }
    | initialize_statement  { $$ = $1; dbg_print(DBG_PARSER, "STMT: initialize\n"); }
    | inspect_statement     { $$ = $1; dbg_print(DBG_PARSER, "STMT: inspect\n"); }
    | start_statement       { $$ = $1; dbg_print(DBG_PARSER, "STMT: start\n"); }
    | initiate_statement    { $$ = $1; dbg_print(DBG_PARSER, "STMT: initiate\n"); }
    | terminate_statement   { $$ = $1; dbg_print(DBG_PARSER, "STMT: terminate\n"); }
    | generate_statement    { $$ = $1; dbg_print(DBG_PARSER, "STMT: generate\n"); }
 /*   | NEXT SENTENCE */

    | error PERIOD { dbg_print(DBG_ERROR, "Error in Procedure statement ...\n"); 
        $$ = NULL; yyerrok;
    }    
    ;

 /***************************************************************************** 
                              INITIALIZE Statement  
 *****************************************************************************/	
initialize_statement:
    INITIALIZE
    item_list
    opt_filler
    opt_value_clause
    opt_replacing_clause
    opt_default_clause {
        $$ = construct_initialize_stmt($2, $3, $4, $5, $6);
    }
    ;
opt_filler:
    { $$ = 0; }
    | WITH FILLER { $$ = 1; }
    ;
opt_value_clause:
    { $$ = CB_CAT_NONE; }
    | category_name opt_to VALUE { $$ = $1; }   /* category name */
    ;
opt_replacing_clause:
    { $$ = NULL; }
    | THEN REPLACING replacing_item_list {
        $$ = $3;
    }
    ;
replacing_item_list:
    replacing_item { $$ = start_generic_list((void *)$1); }
    | replacing_item_list replacing_item {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
replacing_item:
    category_name DATA BY xval  {
        $$ = construct_init_replacing_item($1, $4);
    }
    ;
category_name:
    ALL                     { $$ = CB_CAT_ALL; }
    | ALPHABETIC_TOK        { $$ = CB_CAT_ALPHABETIC; }
    | ALPHANUMERIC          { $$ = CB_CAT_ALPHANUMERIC; }
    | ALPHANUMERIC_EDITED   { $$ = CB_CAT_ALPHANUMERIC_EDITED; }
    | DATA_POINTER          { $$ = CB_CAT_DATA_POINTER; }
    | NUMERIC               { $$ = CB_CAT_NUMERIC; }
    | NUMERIC_EDITED        { $$ = CB_CAT_NUMERIC_EDITED; }
    ;
opt_default_clause:
    { $$ = 0; }
    | THEN TO _DEFAULT { $$ = 1; }
    ;
 /***************************************************************************** 
                              INSPECT Statement 
    Modified on : Mar 26. The earlier version is too big and scattered. 
 *****************************************************************************/	
inspect_statement:
    INSPECT gname  /* identifier_1 */ 
    opt_insp_tallying_clause
    opt_insp_replacing_clause
    opt_insp_converting_clause {
        $$ = construct_inspect_stmt($2, $3, $4, $5);
    }
    ;
opt_insp_tallying_clause:
    { $$ = NULL; }
    | tallying_clause_list { $$ = $1; }
    ;
tallying_clause_list:
    tallying_clause  { $$ = start_generic_list((void *)$1); }
    | tallying_clause_list tallying_clause {
        $$ = addto_generic_list($1, (void *)$2); 
    }
    ;
tallying_clause: 
    TALLYING identifier_1 FOR char_lead_trail opt_gname opt_before_after_list {
        $$ = construct_tallying_item($2, $4, $5, $6);
    }
    ;
char_lead_trail:
    CHARACTERS  { $$ = CB_ITEM_CHAR; }
    | ALL       { $$ = CB_ITEM_ALL; }
    | LEADING   { $$ = CB_ITEM_LEADING; }
    | FIRST     { $$ = CB_ITEM_FIRST; }
    ;
opt_before_after_list:
    { $$ = NULL; }
    | before_after_list  { $$ = $1; }
    ;
before_after_list:
    before_after_item  { $$ = start_generic_list((void *)$1); }
    | opt_before_after_list before_after_item {
        $$ = addto_generic_list($1, (void *)$2); 
    }
    ;
before_after_item:
    before_after INITIAL_TOK gname  {
        $$ = construct_bef_aft_item($1, $3);
    }
    ;
opt_insp_replacing_clause:
    { $$ = NULL; }
    | inspect_replacing_clause_list { $$ = $1; }
    ;
inspect_replacing_clause_list:
    inspect_replacing_clause { $$ = start_generic_list((void *)$1); }
    | inspect_replacing_clause_list inspect_replacing_clause {
        $$ = addto_generic_list($1, (void *)$2); 
    }
    ;
inspect_replacing_clause:
    REPLACING char_lead_trail gname BY gname opt_before_after_list { 
        $$ = construct_replacing_item($2, $3, $5, $6);
    }
    ;
opt_insp_converting_clause:
    { $$ = NULL; }
    | converting_clause_list { $$ = $1; }
    ;
converting_clause_list:
    converting_clause  { $$ = start_generic_list((void *)$1); }
    | converting_clause_list converting_clause {
        $$ = addto_generic_list($1, (void *)$2); 
    }
    ;
converting_clause:
    CONVERTING gname TO gname 
    opt_before_after_list  {
        $$ = construct_converting_clause( $2, $4, $5 );
    }
    ;
/***************************************************************************** 
                              SEARCH  Statement 
 *****************************************************************************/	
search_statement:
    SEARCH
    search_clause
    end_search {
        $$ = $2;
    }
    ;
end_search:
    | END_SEARCH
    ;
search_clause:
    single_search { $$ = $1; }
    | all_search  { $$ = $1; }
    ;
single_search:
    identifier_1 opt_varying_clause
    opt_at_end_clause
    simple_when_cond_list {
        $$ = construct_search_stmt($1, $2, $3, $4);
    }
    ;
opt_varying_clause:
    { $$ = NULL; }
    | VARYING identifier_1 { $$ = $2; }
    ;
opt_at_end_clause:
    { $$ = NULL; }
    | AT END proc_statements { $$ = $3; }
    ;
simple_when_cond_list:
    s_w_c_item      { $$ = start_generic_list((void *)$1); } 
    | simple_when_cond_list s_w_c_item {
        $$ = addto_generic_list($1, (void *)$2); 
    }
    ;
s_w_c_item:
    WHEN condition imperative_statement {
        $$ = construct_simple_when_clause($2, $3);
    }
    ;
all_search:
    ALL identifier_1
    opt_at_end_clause
    multi_when_clause {
        $$ = construct_search_all_stmt( $2, $3, $4 );
    }
    ;
multi_when_clause:
    WHEN m_when_clause_item 
    opt_and_when_clause_item_list
    imperative_statement {
        $$ = construct_multi_when_clause($2, $3, $4);
    }
    ;
imperative_statement:
    proc_statements { $$ = $1; } 
    | NEXT SENTENCE { $$ = NULL; } /* this needs to be checked later... */
    ;
opt_and_when_clause_item_list:
    { $$ = NULL; }
    | and_when_clause_item_list {
        $$ = $1;
    }
    ;
and_when_clause_item_list:
    and_when_clause_item  { $$ = start_generic_list((void *)$1); } 
    | and_when_clause_item_list and_when_clause_item {
        $$ = addto_generic_list($1, (void *)$2); 
    }
    ;
and_when_clause_item:
    AND m_when_clause_item { $$ = $2; }
    ;
m_when_clause_item:
    /*identifier_1 eq_variants eval_item { 
        $$ = construct_eval_item(CB_EI_M_WHEN, (void *) $1, (void *) $3);
    } 
    | */
    condition {
        $$ = construct_eval_item(CB_EI_COND, (void *)$1, NULL);
    }
    ;
/*
eq_variants: 
    is_opt _eq 
    ; */ 
 /***************************************************************************** 
                              ENTER Statement: Obsolate 
 *****************************************************************************/	
enter_statement:
    ENTER language_name routine_name {
        printf("ENTER is obsolate and is not implemented...");
        $$ = construct_enter_stmt($2, $3);
    }
    ;
language_name:
    identifier { $$ = $1; }
    ;
routine_name:
    identifier { $$ = $1; }
    ;
 /***************************************************************************** 
                                MERGE Statement  
 *****************************************************************************/	
merge_statement:
    MERGE file_name on_key_clause_item_list
    opt_collating_sequence
    using_file_clause
    file_output_clause  {
        $$ = construct_merge_stmt($2, $3, $4, $5, $6);
    }
    ;
using_file_clause:
    USING file_name_list {
        $$ = $2;
    }
    ;
 /***************************************************************************** 
                                EVALUATE Statement   
 *****************************************************************************/	
evaluate_statement:
    EVALUATE 
    eval_item  opt_also_eval_item_list
    when_clause_list opt_when_other_clause
    end_evaluate   {
        $$ = construct_evaluate_stmt($2, $3, $4, $5);
    }
    ;
end_evaluate:
    END_EVALUATE
    ;
opt_also_eval_item_list:
    { $$ = NULL; }
    | also_eval_item_list { $$ = $1; }
    ;
also_eval_item_list:
    ALSO eval_item  { $$ = start_generic_list((void *) $2); }
    | also_eval_item_list ALSO eval_item {
        $$ = addto_generic_list($1, (void *) $3);
    }
    ;
when_clause_list:
    when_clause_item  { $$ = start_generic_list((void *) $1); }
    | when_clause_list when_clause_item {
        $$ = addto_generic_list($1, (void *) $2);
    }
    ;
when_clause_item:
    WHEN when_item
    opt_when_also_item_list
    proc_statements  {
        $$ = construct_when_clause_item($2, $3, $4);
    }
    ;
when_item:
    ANY             { $$ = construct_eval_item(CB_EI_ANY, NULL, NULL); }
    | TRUE_TOK      { $$ = construct_eval_item(CB_EI_TRUE, NULL, NULL); }
    | FALSE_TOK     { $$ = construct_eval_item(CB_EI_FALSE, NULL, NULL); }
    | opt_not eval_item  {                 
        ($2)->notflag = $1;
        $$ = construct_eval_item(CB_EI_EVAL, $2, NULL); 
    } 
        /* need to fix the NOT later: fixed now */
    ;
opt_when_also_item_list:
    { $$ = NULL; }
    | also_item_list { $$ = $1; }
    ;
also_item_list:
    also_item  { $$ = start_generic_list((void *) $1); }
    | also_item_list also_item {
        $$ = addto_generic_list($1, (void *) $2);
    }
    ;
also_item:
    ALSO when_item  { $$ = $2; }
    ;
/*
opt_thru_eval_item: 
    { $$ = NULL; }
    | THRU eval_item { $$ = $2; }
    ; 
*/
eval_item:
    gname           { $$ = construct_eval_item(CB_EI_GNAME, (void *) $1, NULL); }
/*    | identifier_1  { $$ = construct_eval_item(CB_EI_IDENTIFIER, (void *) $1, NULL); }
    | literal     { $$ = construct_eval_item(CB_EI_LITERAL, (void *) $1, NULL); } */
    | arithmetic_expression { $$ = construct_eval_item(CB_EI_ARITHM_EXP, (void *) $1, NULL); }
    | TRUE_TOK    { $$ = construct_eval_item(CB_EI_TRUE, NULL, NULL); }
    | FALSE_TOK   { $$ = construct_eval_item(CB_EI_FALSE, NULL, NULL); }
    | eval_item THRU eval_item 
                  { $$ = construct_eval_item(CB_EI_EVAL_ITEMS, $1, $3); }
    | condition     { $$ = construct_eval_item(CB_EI_COND, $1, NULL); }
    ;
opt_when_other_clause:
    { $$ = NULL; }
    | WHEN OTHER proc_statements { $$ = $3; }
    ;
 /***************************************************************************** 
                                REWRITE  Statement   
 *****************************************************************************/	
rewrite_statement:
    REWRITE identifier_1 opt_from_clause
    opt_keyvalidation_action
    end_rewrite {
        $$ = construct_rewrite_stmt( $2, $3, $4 );
    }
    ;
end_rewrite:
    END_REWRITE
    ;
 /***************************************************************************** 
                                GOBACK Statement   
 *****************************************************************************/	
goback_statement:
    GOBACK { $$ = construct_goback_stmt(); }
    ;
 /***************************************************************************** 
                                PURGE Statement   
 *****************************************************************************/	
purge_statement:
    PURGE identifier_1 { $$ = construct_purge_stmt($2); }
    ;
 /***************************************************************************** 
                                RELEASE Statement   
 *****************************************************************************/	
release_statement:
    RELEASE identifier_1 opt_release_from {
        $$ = construct_release_stmt($2, $3);
    }
    ;
opt_release_from:
    { $$ = NULL; }
    | FROM xval {
        $$ = $2;
    }
    ;
 /***************************************************************************** 
                                UNLOCK Statement   
 *****************************************************************************/	
unlock_statement:
    UNLOCK file_name record_token {
        $$ = construct_unlock_stmt($2);
    }
    ;
record_token:
    RECORD
    |RECORDS
    ;
 /***************************************************************************** 
                                CANCEL Statement   
 *****************************************************************************/	
cancel_statement:
    CANCEL item_list { $$ = construct_cancel_stmt($2); }
    ;
 /***************************************************************************** 
                                CONTINUE Statement   
 *****************************************************************************/	
continue_statement:
    CONTINUE { $$ = construct_continue_stmt(); }
    ;
 /***************************************************************************** 
                                DELETE Statement   
 *****************************************************************************/	
delete_statement:
    DELETE delete_simple_statement end_delete {
        $$ = construct_delete_stmt($2);
    }
    | DELETE multi_file_statement end_delete {
        $$ = construct_delete_multi_stmt($2);
    }
    ;
delete_simple_statement:
    file_name opt_record
    opt_keyvalidation_action {
        $$ = construct_del_simple($1, $2, $3);
    }
    ;
multi_file_statement:
    FILEX item_list {
        $$ = $2;
    }
    ;
end_delete:
    | END_DELETE
    ;
 /***************************************************************************** 
                                CALL Statement   
 *****************************************************************************/	
call_statement:
    CALL opt_program xval 
    call_details
    opt_on_overflow 
    opt_escape_exception_action
    /* opt_keyvalidation_action */
    opt_end_call {
        $$ = construct_call_stmt($3, $4, $5, $6);
    }
    ;

call_details:
    { $$ = NULL; }
    | USING using_item_list
    opt_giving
    opt_returning {
        $$ = construct_call_details($2, $3, $4);
    }
    ;
opt_giving:
    { $$ = NULL; }
    | GIVING identifier_1 { $$ = $2; }
    ;
opt_returning:
    { $$ = NULL; }
    | RETURNING identifier_1 { $$ = $2; }
    ;
using_item_list:
    using_item {
        $$ = start_generic_list((void *) $1);
    }
    | using_item_list comma_opt using_item {
        $$ = addto_generic_list($1, (void *)$3);
    }
    | using_item_list using_item {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;

using_item:
    by_reference_item { $$ = $1; }
    | by_content_item { $$ = $1; }
    | call_item_list  { $$ = cons_call_using_item(CB_CALL_BY_DEFAULT, $1); }
    ;

by_reference_item:
    BY REFERENCE call_item_list {
        $$ = cons_call_using_item(CB_CALL_BY_REF, $3);
    }
    ;
by_content_item:
    BY CONTENT call_item_list {
        $$ = cons_call_using_item(CB_CALL_BY_CONTENT, $3);
    }
    ;
call_item_list:
    call_item   {
        $$ = start_generic_list((void *) $1);
    }
    | call_item_list comma_opt call_item  {
        $$ = addto_generic_list($1, (void *)$3);
    }
    | call_item_list call_item  {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
call_item:
    gname       { $$ = construct_call_item(1, $1); }
    | OMITTED   { $$ = construct_call_item(2, NULL); }
    ;
opt_end_call:
    | END_CALL
    ;
opt_on_overflow:
    /* {   $$ = NULL; } 
    | */
    on_overflow {
        $$ = $1;
    }
    ;
on_overflow:
    on_overflow_action
    noton_overflow_action {
        $$ = construct_action_pair($1, $2);
    }
    ;
on_overflow_action: 
    { $$ = NULL; }
    | ON OVERFLOW_TOK proc_statements {
        $$ = $3;
    }
    ;
noton_overflow_action:
    { $$ = NULL; }
    | NOT ON OVERFLOW_TOK proc_statements {
        $$ = $4;
    }
    ;

 /***************************************************************************** 
                                STRING Statement   
 *****************************************************************************/	
string_statement:
    STRINGCMD string_arguments
    INTO identifier_1
    with_pointer_opt
    opt_on_overflow
    end_string  {
        $$ = construct_string_stmt($2, $4, $5, $6);
    }
    ;
string_arguments:
    str_argument {
        $$ = start_generic_list((void *) $1);
    }
    | string_arguments str_argument {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
str_argument:
    from_arg_list DELIMITED BY mod_item {
        $$ = construct_str_argument($1, $4);
    }
mod_item:
    identifier_1  { $$ = getXval(CB_IDENTIFIER, $1, NULL); }
    | gliteral    { $$ = getXval(CB_LITERAL, NULL, $1); }
    | SIZE        { $$ = getXval(CB_SIZE, NULL, NULL); }
    ;
with_pointer_opt:
    { $$ = NULL; }
    | WITH POINTER identifier_1 { $$ = $3; }
    ;
end_string:
    | END_STRINGCMD
    ;
 /***************************************************************************** 
                                UNSTRING Statement   
 *****************************************************************************/	
unstring_statement:
    UNSTRING identifier_1
    opt_delimit_clause
    unstring_into_clause
    with_pointer_opt
    tallying_in_opt
    opt_on_overflow
    end_unstring {
        $$ = construct_unstring_stmt($2, $3, $4, $5, $6, $7);
    }
    ; 
opt_delimit_clause:
    DELIMITED BY opt_all gname opt_or_item_list {
        $$ = construct_delim_clause($3, $4, $5);
    }
    ;
opt_or_item_list:
    { $$ = NULL; }
    | or_item_list {
        $$ = $1;
    }
    ;
or_item_list:
    or_item     { $$ = start_generic_list((void *) $1); }
    | or_item_list or_item {
        $$ = addto_generic_list($1, (void *) $2);
    }
    ;
or_item:
   /* OR opt_all from_arg_list {    changed Mar:22 */
    OR opt_all gname {
        $$ = construct_or_item($2, $3);
    }
    ;
opt_all:
    { $$ = 0; }
    | ALL   { $$ = 1; }
    ; 
unstring_into_clause:
    INTO into_clause_list { $$ = $2; }
    ;
into_clause_list:
    into_clause     { $$ = start_generic_list((void *) $1); }
    | into_clause_list into_clause {
        $$ = addto_generic_list($1, (void *) $2);
    }
    | into_clause_list comma_opt into_clause {
        $$ = addto_generic_list($1, (void *) $3);
    }
    ;
into_clause:
    identifier_1 
    opt_delimiter_in
    opt_count_in {
        $$ = construct_into_clause($1, $2, $3); 
    }
    ;
opt_delimiter_in:
    { $$ = NULL; }
    | DELIMITER IN identifier_1 {
        $$ = $3;
    }
    ;
opt_count_in:
    { $$ = NULL; }
    | COUNT IN identifier_1 {
        $$ = $3; 
    }
    ;
tallying_in_opt:
    { $$ = NULL; }
    | TALLYING IN identifier_1  { $$ = $3; }
    ;
end_unstring:
    | END_UNSTRING
    ;
 /* 
USE Statement   
RMSS syntax does not handle following-
    USE BEFORE REPORTING SalesPersonGrp.
*/

use_statement:
    USE opt_global AFTER opt_standard 
    error_exception PROCEDURE opt_on proc_option {
        $$ = cons_use_stmt($2, $5, $8);
    }
    | 
    USE opt_for DEBUGGING opt_on on_items {
        $$ = cons_use_DBG_stmt($5);
    }
    | 
    USE opt_global AFTER opt_standard opt_beginning_end 
    opt_file_reel_unit LABEL PROCEDURE opt_on proc_option 
    {
        $$ = cons_use_after($2, $5, $6, $10);
    }
    | 
    USE opt_global BEFORE REPORTING identifier_1 
    {
        $$ = cons_use_bef_reporting($5);
    }
    ;

opt_on:     
    { $$ = 0; }
    | ON    { $$ = 1; }
    ;
opt_for:    
    { $$ = 0; }
    | FOR   { $$ = 1; }
    ;
opt_file_reel_unit:
    { $$ = 0; }
    | FILEX { $$ = 1; }
    | REEL  { $$ = 2; }
    | UNIT  { $$ = 3; }
    ;
on_items:
    on_item { $$ = start_generic_list((void *) $1); }
    | on_items on_item {
        $$ = addto_generic_list($1, (void *) $2);
    }
    ;
on_item:
    identifier_1        { $$ = cons_on_item(CB_USEITEM_IDLIST, $1); }
    | ALL PROCEDURES    { $$ = cons_on_item(CB_USEITEM_ALLPROC, NULL); } 
    | ALL REFERENCES OF identifier_1 { 
            $$ = cons_on_item(CB_USEITEM_ALLREF_OFID, $4); 
    } 
    ;
opt_global:     
    { $$ = 0; }
    | GLOBAL    { $$ = 1; }
    ;
opt_standard:   
    { $$ = 0; }
    | STANDARD  { $$ = 1; }
    ;
opt_beginning_end:
                { $$ = 0; }
    | BEGINNING { $$ = 1; }
    | END       { $$ = 2; }
    ;
error_exception: 
    ERROR_TOK   { $$ = CB_ERROR; }
    | EXCEPTION { $$ = CB_EXCEPTION; }
    ;
proc_option:
    file_name    { $$ = construct_use_proc_option(1, $1, 0); }
    | file_type  { $$ = construct_use_proc_option(2, NULL, $1); }
    ;
/*****************************************************************************
 *                               GOTO Statement                              *
 *****************************************************************************/	
goto_statement:
    GO opt_to opt_proc_name {
        /* simple and alterable */
        $$ = construct_goto_stmt1($3);
    }
    | GO opt_to proc_name_list DEPENDING ON identifier_1 {
        /* depending on */
        $$ = construct_goto_stmt2($3, $6);
    }
    ;
opt_proc_name:
    { $$ = NULL;  /* this is funny */ }
    | proc_name { $$ = $1; }
    ;
proc_name_list: /* proc_nane is char ptr */
    identifier { $$ = start_generic_list((void *) $1); }
    | proc_name_list identifier {
        $$ = addto_generic_list( $1, (void *) $2);
    }
    ;
/***************************************************************************** 
 *                              ALTER Statement                              *
 *****************************************************************************/
alter_statement:
    ALTER alter_proc_list {
        $$ = construct_alter_stmt($2);
    }
    ;
alter_proc_list:
    alter_proc_item  {
        $$ = start_generic_list($1);
    }
    | alter_proc_list alter_proc_item {
        $$ = addto_generic_list( $1, $2);
    }
    ;
alter_proc_item:
    proc_name TO opt_proceed_to proc_name {
        $$ = construct_strpair($1, $4);
    }
    ;
opt_proceed_to:
    | PROCEED TO
    ;
 /***************************************************************************** 
                                EXIT Statement   
 *****************************************************************************/	
exit_statement:
    EXIT            { $$ = construct_exit_stmt(CB_EX_SIMPLE, 0); }
    | EXIT PROGRAM  { $$ = construct_exit_stmt(CB_EX_PROGRAM, 0); }
    | EXIT PERFORM opt_cycle { $$ = construct_exit_stmt(CB_EX_PERFORM, $3); }
    | EXIT PARAGRAPH    { $$ = construct_exit_stmt(CB_EX_PARAGRAPH, 0); }
    | EXIT SECTION      { $$ = construct_exit_stmt(CB_EX_SECTION, 0); }
    ;
opt_cycle:
    { $$ = 0; }
    | CYCLE { $$ = 1; }
    ;
/***************************************************************************** 
                               PERFORM Statement   
 *****************************************************************************/	
perform_statement:
    PERFORM
    opt_perform_proc {
        $$ = construct_perform_stmt($2, NULL, NULL);
    }
    |
    PERFORM 
    opt_perform_proc 
    opt_perform_options_list 
    end_perform { 
        $$ = construct_perform_stmt($2, $3, NULL);
    }
    | 
    PERFORM 
    opt_perform_options_list 
/*    proc_statements */
    opt_proc_statements
    END_PERFORM { 
        $$ = construct_perform_stmt(NULL, $2, $3);
    }
    ;
opt_perform_options_list:
    { $$ = NULL; }
    | perform_options_list {
        $$ = $1;
    }
    ;
perform_options_list:
    perform_option  {
        $$ = start_perform_options_list($1);
    }
    | perform_options_list perform_option {
        dbg_print(DBG_TRACE, "In the perform option with the statements...\n");
        $$ = addto_perform_options_list($1, $2);
    }
    ;

opt_proc_statements: 
    {
        $$ = NULL;
    }
    |  
    proc_statements { 
        $$ = $1;
    }
    ;

end_perform:
    | END_PERFORM 
    ; 

opt_perform_proc:
 /*   { $$ = NULL; }
    | */

    perform_proc { $$ = $1; }
    ;
perform_proc:
    proc_name {
        $$ = construct_pnames(0, $1, NULL);
    }
    | proc_name THRU proc_name {
        $$ = construct_pnames(1, $1, $3);
    }
    ;
proc_name:
    identifier { $$ = $1; }
    ;
perform_option:
    FOREVER {
        $$ = construct_perf_opt(CB_PO_FOREVER, 0, NULL, CB_ABSENT, NULL, NULL);
    }
    | integer TIMES  { /* This is the issue, you may get variable as well*/
        $$ = construct_perf_opt(CB_PO_NUMBER_TIMES, $1, NULL, CB_ABSENT, NULL, NULL);
    }
    | identifier_1 TIMES {
        $$ = construct_perf_opt(CB_PO_ID_TIMES, 0, $1, CB_ABSENT, NULL, NULL);
    }
    | perform_test UNTIL condition { 
        dbg_print(DBG_TRACE, "perform_options: until **********\n");
        dbg_print(DBG_TRACE, "DUMPING CONDITION *************uncomment the dump.\n");
        /* dump_condition($3); */
        dbg_print(DBG_TRACE, "\nDUMPING CONDITION *************\n");
        $$ = construct_perf_opt(CB_PO_UNTIL, 0, NULL, $1, $3, NULL);
    }
    | perform_test VARYING perform_varying_list {
        $$ = construct_perf_opt(CB_PO_VARYING_UNTIL, 0, NULL, $1, NULL, $3);
    }
    ;
perform_test:
    { $$ = CB_ABSENT; }
    | WITH TEST before_after {
        $$ = $3;
    }
    ;
perform_varying_list:
    perform_varying {
        $$ = start_perf_opt_varying_list( $1 );
    }
    | perform_varying_list AFTER perform_varying {
        $$ = addto_perf_opt_varying_list( $1, $3);
    }
    ;
perform_varying:
    gname FROM gname BY gname UNTIL condition {
        $$ = construct_perf_varying_item( $1, $3, $5, $7);
    }
    ;
before_after:
    BEFORE  {
        $$ = CB_BEFORE;
    }
    | AFTER  { 
        dbg_print(DBG_TRACE, "before_after: AFTER\n");
        $$ = CB_AFTER;
    }
    ;
/***************************************************************************** 
                                STOP Statement   
 *****************************************************************************/	
stop_statement:
    STOP
    stop_option { $$ = $2; }
    ;
stop_option:
    RUN                     { $$ = construct_stop_stmt(CB_SO_STOP_RUN, NULL); }
    | RUN RETURNING xval    { $$ = construct_stop_stmt(CB_SO_STOP_RETURNING, $3); }
    | RUN GIVING xval       { $$ = construct_stop_stmt(CB_SO_STOP_GIVING, $3); }
    | xval                  { $$ = construct_stop_stmt(CB_SO_STOP_VAL, $1); }
    ;
/*
stop_statement:
    STOP RUN opt_ret_giving 
    | STOP xval 
    ;
opt_ret_giving:
    | RETURNING xval
    | GIVING xval
    ; *
/***************************************************************************** 
                                FILE OPERATIONS 
 *****************************************************************************/	
/***************************************************************************** 
                                OPEN Statement   
 *****************************************************************************/	
open_statement:
    OPEN
    opt_exclusive
    open_file_type_list {
        $$ = construct_open_stmt($2, $3);
    }
    ;
opt_exclusive:
    { $$ = 0; }
    | EXCLUSIVE { $$ = 1; }
    ;
open_file_type_list:
    open_file_type  {
        $$ = create_open_file_list($1);
    }
    | open_file_type_list open_file_type {
        $$ = addto_open_file_list($1, $2);
    }
    ;
open_file_type:
    file_type
    open_file_list {
        $$ = construct_open_file_type($1, $2);
    }
    ;
file_type:
    INPUT           { $$ = CB_FT_INPUT; }
    | OUTPUT        { $$ = CB_FT_OUTPUT; }
    | I_O           { $$ = CB_FT_I_O; }
    | INPUT_OUTPUT  { $$ = CB_FT_I_O; }
    | EXTEND        { $$ = CB_FT_EXTEND; }
    ;
open_file_list:
    file_item  { $$ = create_file_name_list($1) ; }
    | open_file_list file_item {
        $$ = addto_file_name_list($1, $2); 
    }
    ;
file_item:
    file_name
    opt_open_option_list {
        $$ = construct_file_name($1, $2);
    }
    ;
file_name:
    identifier_1  { $$ = $1; }
    /* check if this could be anything else. what is the name comes form some array item */
    ;
opt_open_option_list:
    { $$ = NULL; }
    | open_option_list {
        $$ = $1;
    }
    ;
open_option_list:
    open_option  { $$ = create_int_list($1); }
    | open_option_list open_option {
        $$ = addto_int_list($1, $2);
    }
    ;
open_option:
    WITH LOCK           { $$ = CB_FO_WITH_LOCK; }
    | WITH NO REWIND    { $$ = CB_FO_WITH_NO_REWIND; }
    | REVERSED          { $$ = CV_FO_REVERSED; }
    ;
/***************************************************************************** 
                                CLOSE Statement   
 *****************************************************************************/	
close_statement:
    CLOSE
    close_file_list {
        $$ = construct_close_stmt($2);
    }
    ;
close_file_list:
    close_file_item {
        $$ = start_close_file_list($1);
    }
    | close_file_list close_file_item {
        $$ = addto_close_file_list($1, $2);
    }
    | close_file_list comma_opt close_file_item {
        $$ = addto_close_file_list($1, $3);
    }
    ;
close_file_item:
    file_name
    close_file_option {
        $$ = construct_close_file_item($1, $2);
    }
    ;
close_file_option:
    { $$ = 0; }
    | REEL WITH NO REWIND     { $$ = CB_CFO_REEL_NOREWIND; }
    | UNIT WITH NO REWIND   { $$ = CB_CFO_UNIT_NOREWIND; }
/*    | reel_unit WITH NO REWIND */
    | REEL FOR REMOVAL      { $$ = CB_CFO_REEL_REMOVAL; }
    | UNIT FOR REMOVAL      { $$ = CB_CFO_UNIT_REMOVAL; }
/*    | reel_unit FOR REMOVAL */
    | WITH NO REWIND        { $$ = CB_CFO_NOREWIND; }
    | WITH LOCK             { $$ = CB_CFO_LOCK; }
    ;
/*reel_unit:
    REEL
    | UNIT
    ; */
 /***************************************************************************** 
                                READ Statement   
 *****************************************************************************/	
read_statement:
    read_base 
    opt_next_previous 
    opt_record_clause 
    opt_identifier 
    opt_end_action 
    end_read
    {
         /* this is for sequential access files */
         $$ = construct_read_seq_stmt($1, $2, $3, $4, $5);
    }
    | read_base 
    opt_next_previous 
    opt_record_clause 
    opt_identifier 
    opt_key_clause 
    opt_keyvalidation_action 
    end_read
    {
        /* random access file */
        dbg_print(DBG_TRACE, "reached the random access read stmt...\n");
        $$ = construct_read_random_stmt($1, $2, $3, $4, $5, $6);
    }
    ;
read_base:
    READ file_name  {  $$ = $2; }
    ;
opt_next_previous:
    next_previous_record { $$ = $1; }
    ;
next_previous_record:
    { $$ = CB_UNSPECIFIED;}
    | RECORD             { $$ = CB_UNSPECIFIED; } 
    | NEXT RECORD        { $$ = CB_NEXT; }
    | PREVIOUS RECORD    { $$ = CB_PREVIOUS; }
    ;
opt_record_clause:
    { $$ = CB_UNSPECIFIED; }
    | record_clause { $$ = $1; }
    ;
record_clause:
    WITH LOCK           { $$ = CB_RR_LOCK; }
    | WITH NO LOCK      { $$ = CB_RR_NO_LOCK; }
    ;
opt_identifier:
    { $$ = NULL; }
    | INTO identifier_1            { $$ = $2; }
    ;
opt_key_clause:
    { $$ = NULL; }
    | KEY IS identifier_1 {
        $$ = $3; 
    }
    ;
opt_end_action:
    end_action {
        $$ = $1;
    }
    ;
end_action: 
    end_proc_stmt
    not_end_proc_stmt {
        $$ = construct_at_end_clause($1, $2);
    }
    ;
end_proc_stmt:
    { $$ = NULL; }
    | AT END statement_list { 
        dbg_print(DBG_TRACE, "reached here ...\n"); 
        $$ = $3; 
    }
    ;
not_end_proc_stmt:
    { $$ = NULL; }
    | NOT AT END statement_list { $$ = $4; }
    ;
end_read:
    | END_READ
    ;
 /***************************************************************************** 
                                WRITE Statement   
 *****************************************************************************/	
write_statement:
    record_name_clause write_printer end_write    {   
        /* sequential */
        dbg_print(DBG_TRACE, "write-sequential ...\n"); 
        $$ = construct_write_stmt($1, $2);
    }
    | record_name_clause opt_keyvalidation_action end_write { 
        /* relative and indexed */
        dbg_print(DBG_TRACE, "write-relative and indexed ...\n"); 
        $$ = construct_write_stmt2($1, $2);
    }
/*    | error { dbg_print(DBG_ERROR, "write_statement: error in write statement\n");}   */
    ;
record_name_clause:
    WRITE identifier_1 opt_from_clause {
        $$ = gen_id_gname($2, $3);
    }
    ;
opt_from_clause:
    { $$ = NULL; }
    | FROM gname { $$ = $2; }
    ;
end_write:
    | END_WRITE 
    ;
opt_keyvalidation_action:
    { $$ = NULL; }
    | keyvalidation_action { $$ = $1; }
    ;
keyvalidation_action:
    opt_invalid_key_action
    opt_not_invalid_key_action {
        $$ = construct_invalid_key_clause($1, $2);
    }
    ;
opt_invalid_key_action:
    { $$ = NULL; }
    | INVALID KEY proc_statements {
        $$ = $3; 
    }
    ;
opt_not_invalid_key_action:
    { $$ = NULL; }
    | NOT INVALID KEY proc_statements {
        $$ = $4;
    }
    ;
write_printer:
    opt_record_advancing_clause
    opt_endof_page {
        $$->end_of_page = $2;   /* this is in the struct _advaicing_clause */
    }
    ;
opt_record_advancing_clause: 
    { $$ = conemp_advancing_clause(); }
    | before_after opt_advanc 
        advancing_clause { 
            dbg_print(DBG_TRACE, "found before after advancing.\n");
            $$ = construct_advancing_clause($1, $2, $3);
      }
    ;
opt_advanc:
    { $$ = 0; }
    | ADVANCING { $$ = 1; }
    ;

advancing_clause:
    xval opt_lines    {              /* line_clause */ /* xval should retuen either INTEGER or identifier */
        $$ = $1;
        $$->usetype = CB_LINES;
    }
    | TO LINE xval ON NEXT PAGE_TOK  { /* line_on_next_page */
        $$ = $3; $$->usetype = CB_LINE_NEXTPAGE;
    }
    | identifier_1     {              /* page_clause */ 
        /* check this. This may fail if not implemented correctly... */
        $$ = getXval2(CB_IDENTIFIER, $1, 0);
        $$->usetype = CB_IDENTIFIER;
    }
    | PAGE_TOK  {                     /* page_clause */
        $$ = getXval2(CB_PAGES, NULL, 0);
    }
    ;
opt_lines:
    | LINE
    | LINES
    ;

opt_endof_page: 
    endof_page { $$ = $1; }
    ;
endof_page:
    opt_end_of_page_action
    opt_not_end_of_page_action {
        $$ = construct_action_pair($1, $2);
    } 
    ;
opt_end_of_page_action:
    { $$ = NULL; }
    | AT END_OF_PAGE proc_statement {
        $$ = $3; 
    }
    ;
opt_not_end_of_page_action:
    { $$ = NULL; }
    | NOT AT END_OF_PAGE proc_statement {
        $$ = $4; 
    }
    ;
/***************************************************************************** 
                                SORT Statement   
 *****************************************************************************/	
sort_statement:
    SORT file_name 
    on_key_clause_item_list 
    opt_duplicate_inorder
    opt_collating_sequence
    file_input_clause
    file_output_clause {
        $$ = construct_sort_stmt( $2, $3, $4, $5, $6, $7);
    }
    ;
on_key_clause_item_list:
    on_key_clause { $$ = start_generic_list((void *) $1); }
    | on_key_clause_item_list on_key_clause {
        $$ = addto_generic_list($1, (void *) $2);
    }
    ;
on_key_clause:
    ON ASCENDING opt_key item_list {
        $$ = construct_on_key_clause(1, $4);
    }
    | ON DESCENDING opt_key item_list {
        $$ = construct_on_key_clause(2, $4);
    }
    ;
opt_key:
    { $$ = 0; }
    | KEY   { $$ = 1; }
    ;
opt_duplicate_inorder: 
    { $$ = 0; }
    | WITH DUPLICATES IN ORDER { $$ = 1; }
    ;
opt_collating_sequence:
    { $$ = NULL; }
    | COLLATING SEQUENCE is_opt identifier_1 {
        $$ = $4; 
    }
    ;
file_input_clause:
    INPUT PROCEDURE is_opt IDENTIFIER opt_through {
        $$ = construct_file_io_clause(CB_FT_INPUT, $4, $5, NULL);
    }
    | USING item_list {
        $$ = construct_file_io_clause(CB_FT_INPUT, NULL, NULL, $2);
    }
    ;
opt_through: 
    { $$ = NULL; }
    | THRU IDENTIFIER {
        $$ = $2;
    }
    ;
file_output_clause:
    OUTPUT PROCEDURE is_opt IDENTIFIER opt_through {
        $$ = construct_file_io_clause(CB_FT_OUTPUT, $4, $5, NULL);
    }
    | GIVING item_list {
        $$ = construct_file_io_clause(CB_FT_OUTPUT, NULL, NULL, $2);
    }
    ;
 /***************************************************************************** 
                                RETURN Statement   
    Should be an error if used without anywhere than SORT and MERGE? Check.
 *****************************************************************************/	
return_statement:
    RETURN_TOK file_name opt_record opt_into_identifier
    opt_end_action end_return {
        $$ = construct_return_stmt($2, $3, $4, $5);
    }
    ;
opt_record:
    { $$ = 0; }
    | RECORD { $$ = 1; }
    ;
opt_into_identifier:
    { $$ = NULL; }
    | INTO xval     {    /* identifier or literal */
        $$ = $2;
    }
    ;
end_return:
    | END_RETURN
    ;
 /***************************************************************************** 
                                SET Statement   
SET ENVIRONMENT not handled     : Syntax can be handled, not in V1.0
SET program_pointer TO ENTERY   : Syntax can be handled, not in V1.0

INDEX : the index increment-decrement (UP-DOWN) and absolute value assignment 
88 FIELD : 
What is USAGE INDEX data item? See page 7-21 of OpenCobol users guide for example.
When defined USAVE INDEX the field is used elsewhere as index field. Just to ensure 
the data type is integer and external access to index field, dynamic index, etc. 

 *****************************************************************************/	
set_statement:
    SET set_clause_list {
        $$ = cons_set_stmt($2);
    }
    ;
set_clause_list:
    set_clause { $$ = start_generic_list((void *) $1); }
    | set_clause_list set_clause {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
set_clause:
    set_item_list set_direction set_item {
        $$ = cons_set_clause($1, $2, $3);
    }
    ;
set_direction:
    TO          { $$ = CB_SET_TO; }
    | UP BY     { $$ = CB_SET_UPBY; }
    | DOWN BY   { $$ = CB_SET_DOWNBY; }
    ;
set_item_list:
    set_item { $$ = start_generic_list((void *) $1); }
    | set_item_list set_item {
        $$ = addto_generic_list($1, (void *)$2);
    }
    ;
set_item:
    xval            { $$ = cons_set_item(CB_SET_XVAL, $1); }
    | ON            { $$ = cons_set_item(CB_SET_ON, NULL); }
    | OFF           { $$ = cons_set_item(CB_SET_OFF, NULL); }
    | TRUE_TOK      { $$ = cons_set_item(CB_SET_TRUE, NULL); }
    | FALSE_TOK     { $$ = cons_set_item(CB_SET_FALSE, NULL); }
    | NULL_TOK      { $$ = cons_set_item(CB_SET_NULL, NULL); }
    ;

 /***************************************************************************** 
SCREEN OPERATIONS
DISPLAY Statement   
need to check the syntax and clean it first. 
 *****************************************************************************/	
display_statement:
    display_upon_sysname  { 
        dbg_print(DBG_TRACE, "display_statement: sysname\n"); 
        $$ = $1;
    }
    | display_term_io       { 
        dbg_print(DBG_TRACE, "display_statement: termio\n"); 
        $$ = $1;
    }
    | display_screen_name   { 
        dbg_print(DBG_TRACE, "display_statement: screen name\n"); 
        $$ = $1;
    }/*
    | error { dbg_print(DBG_ERROR, "display_statement: error in display statement\n");}
    */
    ;
 /* Display - Sysname */
display_upon_sysname:
    DISPLAY sysname_list   /* the required thing is identifier or literal */
    opt_upon
    opt_advancing {
        $$ = construct_display_stmt_sysname( $2, $3, $4 );
    }
    ;
sysname_list:
    from_arg_list {
        $$ = $1;
    }
    ; 
    /*optimized as the from_arg_list gives gname list 
    gname { $$ = start_generic_list((void *) $1); }
    | sysname_list comma_opt gname {
        $$ = addto_generic_list($1, (void *)$3);
    } 

    xval { $$ = start_generic_list((void *) $1); }
    | sysname_list comma_opt xval {
        $$ = addto_generic_list($1, (void *)$3);
    }
    ;*/
opt_upon:
    { $$ = NULL; }
    | UPON xval  {   /* this is either mnemonic name or low-volume-io name */
        $$ = $2; 
    }
    ;
opt_advancing:
    { $$ = 0; }
    | WITH NO ADVANCING { $$ = 1; }
    ;
 /* Display - Termio */
display_term_io:
    DISPLAY
    display_item_list {
        $$ = construct_display_stmt_term($2);
    }
    ;
display_item_list:
    display_item {
        $$ = start_disp_item_list($1);
    }
    | display_item_list display_item {
        $$ = addto_disp_item_list($1, $2);
    }
    ;
display_item:
    identifier_clause  /* xval     */
    opt_with_clause  { /* void ptr */ 
        $$ = construct_disp_item($1, $2);
    }
    ;
identifier_clause:
    id_opt_unit {  /* this is xval */
        $$ = $1;
    }
    ;
opt_with_clause:
    { $$ = NULL; }
    | opt_with_clause_list {
        $$ = $1;
    }
    ;
opt_with_clause_list:
    opt_with_clause_item {
        $$ = start_with_cl_item_list($1);
    }
    | opt_with_clause_list opt_with_clause_item {
        $$ = addto_with_cl_item_list($1, $2);
    }
    ;
opt_with_clause_item:
    WITH with_clause opt_xval  {
        $$ = construct_with_clause($2, $3);
    }
    ;
opt_xval:
    { $$ = NULL; }
    | xval { $$ = $1; } 
    ;
with_clause:
    AT at_clause    { $$ = $2; } /* xval */
    | BEEP          { $$ = CB_WC_BEEP; }
    | BELL          { $$ = CB_WC_BELL; }
    | BLINK         { $$ = CB_WC_BLINK; }
    | CONTROL       { $$ = CB_WC_CONTROL; } /* xval */
    | CONVERT       { $$ = CB_WC_CONVERT; }
    | ERASE EOL     { $$ = CB_WC_ERASE_EOL; }
    | ERASE EOS     { $$ = CB_WC_ERASE_EOS; }
    | HIGH          { $$ = CB_WC_HIGH; }
    | HIGHLIGHT     { $$ = CB_WC_HIGHLIGHT; }
    | LOW           { $$ = CB_WC_LOW; }
    | LOWLIGHT      { $$ = CB_WC_LOWLIGHT; }
    | MODE IS BLOCK { $$ = CB_WC_MODE_IS_BLOCK; }
    | reverse       { $$ = CB_WC_REVERSE; }
    | SIZE          { $$ = CB_WC_SIZE; } /* xval */
    ;
at_clause:
    LINE        { $$ = CB_WC_AT_LINE; }
    | COLUMN    { $$ = CB_WC_AT_COLUMN; } /* COL is covered with the same token */
    | POSITION  { $$ = CB_WC_AT_POSITION; }
    ;
 /* Display - Screen Name */
display_screen_name:
    DISPLAY 
    disp_screen_list {
        $$ = construct_display_stmt_screen($2);
    }
    ;
disp_screen_list:
    disp_screen {
        $$ = create_create_screen_item_lst($1);
    }
    | disp_screen_list disp_screen {
        $$ = addto_create_screen_item_lst($1, $2);
    }
    ;
disp_screen:
    identifier_1
    opt_at_clause {
        $$ = construct_disp_screen_item($1, $2);
    }
    ;
/* optimized for simplicity...
disp_screen:
    screen_name
    opt_screen_at_item 
    ;
screen_name:
    identifier_1
    ;
opt_screen_at_item:
    opt_at_clause
    ;
*/    
 /***************************************************************************** 
                                MOVE Statement   
check the grammar, semantics and implement this

 *****************************************************************************/	
move_statement:
    MOVE CORRESPONDING gname TO move_item_list {
        $$ = construct_move_stmt( 1, $3, $5 );
    }
    | MOVE gname TO move_item_list {
        $$ = construct_move_stmt( 0, $2, $4 );
    }
    ;
move_item_list: 
    to_arg_list { $$ = $1; }
    ;
/* changed this to to_arg_list for simplicity as it is already implemented and 
uses gname.
    move_item
    | move_item_list comma_opt move_item 
    ;
move_item:
    identifier_1
    ;
*/
 /***************************************************************************** 
                                IFELSE Statement   
check the grammar, semantics and implement this

 *****************************************************************************/	
ifelse_statement:
    IF condition opt_then_clause opt_else_clause opt_end_if {
        $$ = construct_ifelse_stmt( $2, $3, $4 );
    }
    ;
opt_then_clause: 
    statements              { $$ = $1; }
    | then_proc_statements  { $$ = $1; }
    ;
then_proc_statements:
    THEN statements         { $$ = $2; }
    ;
opt_else_clause:
    nullable                { $$ = NULL; }
    | else_proc_statements  { $$ = $1; }
    ;
else_proc_statements:
    ELSE statements { 
        dbg_print(DBG_TRACE, "Else clause found\n"); 
                            { $$ = $2; }
    }
    ;
statements:
    statement_list   { $$ = construct_stmts_list( $1, 1 ); }
    | NEXT SENTENCE  { $$ = construct_stmts_list( NULL, 2 ); }
    ;
opt_end_if:
    | END_IF
    ;
/***************************************************************************** 
                                ACCEPT Statement   : 
check the grammar again and optimize-

Check and implement... Accepting from Command Line Arguments 
Check and implement... Accepting from Environment Variables
Check and implement... screen name type. semantics not clear
Check and implement... Input CD - semantics not clear.
*****************************************************************************/	
accept_statement:
    ACCEPT identifier_1 from_clause end_accept 
    { 
            /* sysname or implicit def */
        $$ = construct_accept_stmt(1, $2, $3, NULL, NULL, 0, NULL);
    }
    | ACCEPT accept_item_list opt_escape_exception_action end_accept {
            /* term i-o type */
        $$ = construct_accept_stmt(2, NULL, NULL, $2, $3, 0, NULL);
    }
    | ACCEPT identifier_1 _MESSAGE COUNT end_accept {
            /* input CD */
        $$ = construct_accept_stmt(3, $2, NULL, NULL, NULL, 1, NULL);
    }
    | ACCEPT identifier_1 opt_at_clause opt_escape_exception_action end_accept {
            /* screen name type */
       $$ = construct_accept_stmt(4, $2, NULL, NULL, $4, 0, $3);
    }
    ;
from_clause:
    FROM identifier_1    {  /* check if xval is needed here...*/
        $$ = get_from_clause(CB_IDENTIFIER, $2, 0);
    }
    | FROM implicit_def_clause {
        $$ = get_from_clause(CB_IMPLICIT, NULL, $2);
    }
    ;
end_accept:
    | END_ACCEPT
    ;
opt_at_clause:
    AT at_clause_accept { $$ = $2; }
    ;
/* Mar 18: changed. 
at_clause_accept:
    LINE NUMBER xval     {   
        $$ = construct_at_clause_acc( 1, $3 );
    }
    | COLUMN NUMBER xval {
        $$ = construct_at_clause_acc( 2, $3 );
    }
    ;
*/

at_clause_accept:
    LINE NUMBER gname  
    opt_column_clause {
        $$ = construct_at_clause_acc( $3, $4 );
    }
    ;
opt_column_clause:
    { $$ = NULL; }
    | COLUMN NUMBER gname {
        $$ = $3;
    }
    ;
implicit_def_clause:
    CENTURY_DATE        { $$ = CB_ID_CENTURY_DATE; } 
    | CENTURY_DAY       { $$ = CB_ID_CENTURY_DAY; }
    | _DATE             { $$ = CB_ID_DATE; }
    | _DATE YYYYMMDD    { $$ = CB_ID_DATE_YYYYMMDD; }
    | DATE_AND_TIME     { $$ = CB_ID_DATE_TIME; }
    | DATE_COMPILED     { $$ = CB_ID_DATE_COMPILED; }
    | _DAY              { $$ = CB_ID_DAY; }
    | _DAY YYYYDDD      { $$ = CB_ID_DAY_YYYYDDD; }
    | DAY_AND_TIME      { $$ = CB_ID_DAY_TIME; }
    | DAY_OF_WEEK       { $$ = CB_ID_DAY_WEEK; }
    | _TIME             { $$ = CB_ID_TIME; }
    | _ESCAPE KEY       { $$ = CB_ID_ESCAPE; }
    | EXCEPTION STATUS  { $$ = CB_ID_EXCEPTION; }
    ;
accept_item_list:
    accept_item {
        $$ = create_accept_item_list( $1 );
    }
    | accept_item_list accept_item {
        $$ = addto_accept_item_list( $1, $2 );
    }
    ;
accept_item:
    id_opt_unit
    opt_with_clause_2_list {
        $$ = construct_accept_item( $1, $2 );
    }
    ;
id_opt_unit:
    identifier_1  { 
        $$ = getXval(CB_IDENTIFIER, $1, NULL);
    }
    | identifier_1 UNIT gname  {
        $$ = getXval(CB_ID_UNITVAL, $1, $3);
    }
    ;
opt_with_clause_2_list: {
        $$ = NULL;
    } 
    | with_clause_2_list {
        $$ = $1;
    }
    ;
with_clause_2_list:
    with_clause_2_item  {
        $$ = create_with2_list($1);
    }
    | with_clause_2_list with_clause_2_item {
        $$ = addto_with2_list($1, $2);
    }
    ;
with_clause_2_item:
    WITH with_clause2 gname {
        $$ = construct_with_clause2($2, NULL, $3);
    }
    | AT position_clause   { /* moved here from with clause2 for simplicity */
        $$ = construct_with_clause2(0, $2, NULL);
    }
    ;
with_clause2:
    AUTO            { $$ = CB_WC_AUTO; }
    | AUTO_SKIP     { $$ = CB_WC_AUTO_SKIP; }
    | NO BEEP       { $$ = CB_WC_NO_BEEP; }
    | BEFORE _TIME  { $$ = CB_WC_BEFORE_TIME; } /* gname check how the time is entered.*/
    | NO BELL       { $$ = CB_WC_NO_BELL; }
    | BLANK         { $$ = CB_WC_BLANK; }
    | CONTROL       { $$ = CB_WC_CONTROL; }     /*  gname identifier or literal */
    | CONVERT       { $$ = CB_WC_CONVERT; }
    | CURSOR        { $$ = CB_WC_CURSER; }      /*  gname  identifier or literal */
    | ECHOTOKEN     { $$ = CB_WC_ECHO; }
    | ERASE EOL     { $$ = CB_WC_ERASE_EOL; }
    | ERASE EOS     { $$ = CB_WC_ERASE_EOS; }
    | HIGH          { $$ = CB_WC_HIGH; }
    | HIGHLIGHT     { $$ = CB_WC_HIGHLIGHT; }
    | LOW           { $$ = CB_WC_LOW; }
    | LOWLIGHT      { $$ = CB_WC_LOWLIGHT; }
    | MODE IS BLOCK { $$ = CB_WC_MODE_IS_BLOCK; }
    | OFF           { $$ = CB_WC_OFF; }
    | PROMPT CHARACTER IS { $$ = CB_WC_PROMPT_CHAR; } /* gname  identifier or literal */
    | reverse       { $$ = CB_WC_REVERSE; }
    | SECURE        { $$ = CB_WC_SECURE; }
    | SIZE          { $$ = CB_WC_SIZE; }        /* gname  identifier or literal */
    | TAB           { $$ = CB_WC_TAB; }
    | UPDATE        { $$ = CB_WC_UPDATE; }
    ;
reverse:
    REVERSE | REVERSED | REVERSED_VIDEO
    ;
position_clause:
    AT LINE opt_number gname col_clause {
        $$ = update_pos($5, $4);
    }
    ;
col_clause:
    COLUMN opt_number gname  {
        $$ = construct_pos(1, $3); 
    }
    | POSITION opt_number gname {
        $$ = construct_pos(2, $3);
    }
    ;
opt_escape_exception_action:
    {   $$ = NULL; }
    | ON escape_exception opt_id opt_action opt_not_on {
        $$ = update_esc_excp_item($2, $3, $4, $5);
    }
    ;
opt_not_on:
    { $$ = NULL; }
    | NOT ON escape_exception proc_statements {
        $$ = construct_esc_excp_item( $3, $4 );
    }
    ;
escape_exception:
    _ESCAPE         { $$ = CB_ESCAPE; }
    | EXCEPTION     { $$ = CB_EXCEPTION; }
    ;
opt_id:
    { $$ = NULL; }
    | identifier_1 { $$ = $1; }
    ;
opt_action: 
    proc_statements { $$ = $1; }
    ;
 /***************************************************************************** 
                                ADD Statement   
check the semantics and implement this
void * construct_add_stmt( int type, void * pfromlst, void * ptolst, 
                            void * onsize_error, int rounded );
type 1 : simple
type 2 : giving
type 3 : corresponding
 *****************************************************************************/	
add_statement:
    /* ADD */
    add_clause
    end_add {
        $$ = $1;
    }
    ;
add_clause:
    ADD item_list_rounded TO item_list_rounded opt_on_size_error {
         dbg_print(DBG_TRACE, "add_clause: add option 1 \n"); 
         $$ = construct_add_stmt( CB_MS_SIMPLE, $2, $4, NULL, $5);
    }
    | ADD item_list_rounded to_clause_lst GIVING item_list_rounded opt_on_size_error {
         dbg_print(DBG_TRACE, "add_clause: add option 2 \n"); 
         $$ = construct_add_stmt( CB_MS_GIVING, $2, $3, $5, $6 );    
    }    
    | ADD CORRESPONDING xval TO xval opt_rounded opt_on_size_error  {
         dbg_print(DBG_TRACE, "add_clause: add option 3 \n"); 
         $$ = construct_add_stmt( CB_MS_CORR, $3, $5, NULL, $7);             
    }
    ;
to_clause_lst:
    { $$ = NULL; }
    | TO item_list_rounded {
        $$ = $2;
    }
    ;
/*****************************************************************************/

/* Made a decision to change this to xval based so that this is handled similar 
   to the other operations.

   from_arg_list TO to_arg_list opt_on_size_error {
         dbg_print(DBG_TRACE, "add_clause : add option 1 \n"); 
         $$ = construct_add_stmt( CB_MS_SIMPLE, $1, $3, NULL, $4);
    }
    | from_arg_list TO to_arg_list GIVING to_arg_list opt_on_size_error {
         dbg_print(DBG_TRACE, "add_clause : add option 2 \n"); 
         $$ = construct_add_stmt( CB_MS_GIVING, $1, $3, $5, $6 );    
    }    
    | CORRESPONDING xval TO xval opt_rounded opt_on_size_error  {
         dbg_print(DBG_TRACE, "add_clause : add option 3 \n"); 
         $$ = construct_add_stmt( CB_MS_CORR, $2, $4, NULL, $6);             
    }
*/
    
from_arg_list:
    gname { 
        dbg_print(DBG_TRACE, "from_arg_list: gname \n"); 
        $$ = startGnameList( $1 );
    }
    | from_arg_list gname {
        dbg_print(DBG_TRACE, "from_arg_clause: adding item no comma... \n");         
        $$ = addGnameListItem( $1, $2 );
    }
    | from_arg_list comma_opt gname {
        dbg_print(DBG_TRACE, "from_arg_clause: adding item comma... \n");         
        $$ = addGnameListItem( $1, $3 );
    }
    ;
to_arg_list:
    to_arg  { 
        dbg_print(DBG_TRACE, "to_arg_list: to_arg\n"); 
        $$ = startGnameList( $1 );
    }
    | to_arg_list to_arg { 
        dbg_print(DBG_TRACE, "to_arg_list: list \n"); 
        $$ = addGnameListItem( $1, $2 );
    }
    | to_arg_list comma_opt to_arg { 
        dbg_print(DBG_TRACE, "to_arg_list: list \n"); 
        $$ = addGnameListItem( $1, $3 );
    }
    ;
to_arg:
    gname opt_rounded  {          /* xval opt_rounded */
        $1->rounded = $2;
        $$ = $1;
    }
    ;
opt_rounded:
    { $$ = 0; }
    | ROUNDED { $$ = 1; }
    ;
opt_not:
    nullable    { $$ = 0; }
    | NOT       { $$ = 1; }
    ;
/*
opt_no:
    | NO   
    ;
*/
nullable:
    ;
opt_on_size_error:
    on_size_error
    not_on_size_error {
        $$ = construct_on_error_data( $1, $2 );
    }
    ;
on_size_error: {
        $$ = NULL;
    } 
    | ON SIZE ERROR_TOK proc_statement {
        $$ = $4;
    }
    ;
not_on_size_error: {
        $$ = NULL;
    }
    | NOT ON SIZE ERROR_TOK proc_statement {
        $$ = $5;
    }
    ;
end_add:
    | END_ADD
    ;

 /***************************************************************************** 
                                SUBTRACT Statement   
check the grammar, semantics and implement this
void * construct_subtract_stmt( int type, void * plstfirst, void * pfromlst, 
                            void * giving, void * onsize_error, int rounded );
 *****************************************************************************/	
subtract_statement:
    SUBTRACT item_list FROM item_list_rounded
        opt_on_size_error end_subtract {
        $$ = construct_subtract_stmt( CB_MS_SIMPLE, $2, $4, NULL, $5, 0 ); 
    }
    | SUBTRACT item_list FROM xval GIVING item_list_rounded  
        opt_on_size_error end_subtract {
        $$ = construct_subtract_stmt( CB_MS_GIVING, $2, $4, $6, $7, 0 ); 
    }
    | SUBTRACT CORRESPONDING identifier_1 FROM identifier_1 
        opt_rounded opt_on_size_error end_subtract {
        $$ = construct_subtract_stmt( CB_MS_CORR, $3, $5, NULL, $7, $6 ); 
    }
    ;
item_list:
    xval  {
        $$ = startXvalList( $1 );
    }
    | item_list xval {
        $$ = addXvalListItem( $1, $2 );
    }
    | item_list comma_opt xval {
        $$ = addXvalListItem( $1, $3 );
    }
    ;
item_list_rounded:
    xval_rounded {
        $$ = startXvalList( $1 );
    }
    | item_list_rounded xval_rounded {
        $$ = addXvalListItem( $1, $2 );
    }
    | item_list_rounded comma_opt xval_rounded {
        $$ = addXvalListItem( $1, $3 );
    }
    ;
xval_rounded:
    xval {
        $1->rounded = 0;
        $$ = $1;
    }
    | xval ROUNDED {
        $1->rounded = 1;
        $$ = $1;
    } 
    ;
end_subtract:
    | END_SUBTRACT
    ;
 /***************************************************************************** 
                                MULTIPLY Statement   
check the semantics and implement this
void * construct_multiply_stmt( int type, void * ptarget, void * pby, void * givinglst
                            void * onsize_error);

 *****************************************************************************/	
multiply_statement:
    MULTIPLY xval BY item_list_rounded opt_on_size_error end_multiply {
        $$ = construct_multiply_stmt( CB_MS_SIMPLE, $2, $4, NULL, $5); 
    }
    | MULTIPLY xval BY xval GIVING item_list_rounded  
        opt_on_size_error end_multiply {
        $$ = construct_multiply_stmt( CB_MS_GIVING, $2, $4, $6, $7);
    }
    ;
end_multiply:
    | END_MULTIPLY
    ;
 /***************************************************************************** 
                                DIVIDE Statement   
check semantics and implement this
 *****************************************************************************/	
divide_statement:
    DIVIDE xval INTO item_list_rounded opt_on_size_error end_divide {
        $$ = construct_divide_stmt( CB_DIV_INTO, $2, $4, NULL, NULL, $5);
    }
    | DIVIDE xval INTO xval GIVING item_list_rounded opt_on_size_error end_divide {
        $$ = construct_divide_stmt( CB_DIV_INTO_GIVING, $2, $4, $6, NULL, $7);
    }
    | DIVIDE xval BY xval GIVING item_list_rounded opt_on_size_error end_divide {
        $$ = construct_divide_stmt( CB_DIV_BY_GIVING, $2, $4, $6, NULL, $7);
    }
    | DIVIDE xval INTO xval GIVING item_list_rounded REMAINDER xval
        opt_on_size_error end_divide {
        $$ = construct_divide_stmt( CB_DIV_INTO_GIVING_REM, $2, $4, $6, $8, $9);
    }
    | DIVIDE xval BY xval GIVING item_list_rounded REMAINDER xval
        opt_on_size_error end_divide {
        $$ = construct_divide_stmt( CB_DIV_BY_GIVING_REM, $2, $4, $6, $8, $9);
    }
    ;
 end_divide:
    | END_DIVIDE
    ;
 /***************************************************************************** 
                                COMPUTE Statement   
 *****************************************************************************/	
compute_statement:
    COMPUTE item_list_rounded opt_rounded 
    _eq arithmetic_expression
    opt_not opt_on_size_error
    end_compute {
        $$ = construct_compute_stmt($2, $3, $5, $6, $7);                                
    }
    ;
end_compute:
    | END_COMPUTE
    ;

 /***************************************************************************** 
                                START Statement   
    Syntax Reference : RM-COBOL has only one variant
    Fujitsu COBOL has two variants : one for relative files and three for indexed 
        files.
 *****************************************************************************/	
start_statement:
    START file_name
    start_body_option
    opt_reversed_order
    opt_keyvalidation_action
    end_start {
        $$ = cons_start_statement($2, $3, $4, $5);
    }
    ;
start_body_option:
    KEY mod_relational_operator gname
    opt_with_size   {        /* found only in RM Cobol */
        $$ = cons_start_body(1, $2, $3, 1, $4, NULL);
    }
    |
    FIRST RECORD            /* this variant is found in Fujutsu Cobol */
    KEY is_opt from_arg_list {
        $$ = cons_start_body(2, 0, NULL, 0, NULL, $5);
    }
    ;
end_start:
    | END_START
    ;
opt_with_size:
    { $$ = NULL; }
    | WITH SIZE gname {
        $$ = $3; 
    }
    ;
opt_reversed_order:
    { $$ = 0; }
    | WITH REVERSED ORDER {
        $$ = 1;
    }
    ;
mod_relational_operator:
    relational_operator { $$ = $1; }
    | is_opt FIRST      { $$ = CB_FIRST; }
    | is_opt LAST       { $$ = CB_LAST; }
    ;
/***************************************************************************** 
                                INITIATE Statement   
    used in case of reports. 
 *****************************************************************************/	

initiate_statement:
    INITIATE report_name {
        $$ = cons_initiate_statement($2);
    }
    ;

/***************************************************************************** 
                                TERMINATE Statement   
    used in case of reports. 
 *****************************************************************************/	
terminate_statement:
    TERMINATE report_name {
        $$ = cons_terminate_statement($2);
    }
    ;
/***************************************************************************** 
                                GENERATE Statement   
    used in case of reports. 
 *****************************************************************************/	
generate_statement:
    GENERATE report_name {
        $$ = cons_generate_statement($2);
    }
    ;
 /***************************************************************************** 
                                Primary Productions   
 *****************************************************************************/	
 /* the lexer and the primary productions need complete overhaul in next ver */
 /* Need to check gname and xval in next version */
xval:
    identifier_1        {
        $$ = construct_xval( CB_IDENTIFIER, (void *)$1);
    }
    | signed_nliteral   {
        $$ = construct_xval( CB_N_LITERAL, (void *)$1);
    }
    | char_literal {
        $$ = construct_xval( CB_C_LITERAL, (void *)$1);
    }
    | LENGTH OF identifier_1 {
        $$ = construct_xval( CB_LENGTH, (void *)$3);
    }
    | ADDRESS OF identifier_1 {
        $$ = construct_xval( CB_ADDRESS, (void *)$3);
    }
    | ADDRESS IN identifier_1 {
        $$ = construct_xval( CB_ADDRESS, (void *)$3);
    }
    ;
signed_nliteral:
    numeric_literal        {
        $$ = $1;
    }
    | _PLUS numeric_literal  {
        $$ = $2;
    }
    | _MINUS numeric_literal{
        $$ = negate_numeric($2);
    }
    ;
numeric_literal:
    INTEGER_LITERAL            { 
        $$ = get_numliteral( $1, CB_INT );
    }
    | NUMBER_LITERAL           { 
        $$ = get_numliteral( $1, CB_FLOAT);
    }
    | HEX_NUMBER_LITERAL       { 
        $$ = get_numliteral( $1, CB_HEX_NO);
    }
    ;
char_literal:
    SQUOTE_LITERAL             { 
        dbg_print(DBG_TRACE, "char_literal: Squote literal\n");
        $$ = get_charliteral( strdup($1), CB_CHARPTR );
    }
    | DQUOTE_LITERAL           {         
        dbg_print(DBG_TRACE, "char_literal: Dquote literal\n");
        $$ = get_charliteral( strdup($1), CB_CHARPTR );
    }
    | HEX_STRING               { 
        dbg_print(DBG_TRACE, "char_literal: Hex literal\n");
        $$ = get_charliteral( strdup($1), CB_CHARPTR );
    }
    ;

comma_opt: 
    COMMA     { dbg_print(DBG_TRACE, "comma_opt: Found comma\n"); }
    ;

/************************ identifier_1 ***************************/
identifier_1:
    identifier
    opt1 
    opt_subscripts 
    /* opt_reference  */ {
        /* $$ = construct_identifier_1( $1, $2, $3, $4); */
        $$ = construct_identifier_1( $1, $2, $3);
    }
    ;
identifier:
    IDENTIFIER {
        $$ = strdup($1);
    }
    ;
opt1: 
    { $$ = NULL; }
    | opt_data_name_list { $$ = $1; }
    ;
opt_subscripts:
    { $$ = NULL; }
    | lparan subscripts rparan  { 
        dbg_print(DBG_TRACE, "opt_subscripts: Subscripts found\n");
        $$ = $2;
    } 
    ;
opt_data_name_list:
     opt_data_name  { $$ = startList($1); }
    | opt_data_name_list opt_data_name  { $$ = addListItem($1, $2);}
    ;
opt_data_name:  /* the first one is data and the second is source */
    IN identifier    { $$ = $2; }
    | OF identifier  { $$ = $2; }
    ;
subscripts:
    subscript 
    { 
        $$ = start_subscript_list($1); 
    }
    | subscripts subscript 
    { 
        $$ = add_subscriptlist_item($1, $2); 
    }
    | subscripts comma_opt subscript 
    { 
        $$ = add_subscriptlist_item($1, $3); 
    }
    ;

subscript:
    subscript_item 
    { $$ = $1; }
    ;

subscript_item:
    identifier  {
        $$ = cons_subscript_item(CB_SUBITEM_ID, $1, NULL, NULL, 0, NULL);
    }
    | literal   {
        $$ = cons_subscript_item(CB_SUBITEM_LIT, NULL, $1, NULL, 0, NULL);        
    }
    | lparan subscript_item rparan {
        $$ = cons_subscript_item(CB_SUBITEM_SUBITEM, NULL, NULL, $2, 0, NULL);        
    }
    | subscript_item _PLUS subscript_item {
        $$ = cons_subscript_item(CB_SUBITEM_SUBITEM, NULL, NULL, $1, CB_AO_PLUS, $3);        
    }
    | subscript_item _MINUS subscript_item {
        $$ = cons_subscript_item(CB_SUBITEM_SUBITEM, NULL, NULL, $1, CB_AO_MINUS, $3);        
    }
    | subscript_item _COLON subscript_item {
        $$ = cons_subscript_item(CB_SUBITEM_SUBITEM, NULL, NULL, $1, CB_AO_COLON, $3);        
    }
    ;
/*
opt_reference:
    { $$ = NULL; }
    | lparan  reference_item rparan {
        dbg_print(DBG_TRACE,"*** Inside opt_reference....\n");
        
        $$ = construct_ref_numbers($2, $4); 
    }
reference_item:
    subscript_item _COLON integer
    ;
*/
 /***************************************************************************** 
                                gname   
 *****************************************************************************/	
gname:
    identifier_1            { 
        dbg_print(DBG_TRACE, "GNAME:identifier_1 \n"); 
        $$ = construct_gname_id($1);
    }
    | gliteral              { 
        dbg_print(DBG_TRACE, "GNAME:gliteral\n"); 
        $$ = $1;
    }
    | FUNCTION identifier_1 
    { 
        dbg_print(DBG_TRACE, "GNAME:FUNCTION\n"); 
        $$ = construct_gname_function($2, CB_FUNCTION);
    }
    ;
gliteral:
    without_all_literal   { $$ = $1; }
    | all_literal         { $$ = $1; }
    ;
without_all_literal:
    literal                 { 
        dbg_print(DBG_TRACE, "WithoutAllLiteral: Literal\n"); 
        $$ = $1;
    }
    | special_literal       { 
        dbg_print(DBG_TRACE, "WithoutAllLiteral: Special literal\n"); 
        $$ = get_specialliteral( $1, CB_SPECIAL);
    }
    ;
literal:
    signed_nliteral         { 
            dbg_print(DBG_TRACE, "literal: Signed n literal\n"); 
            $$ = $1;
        }
    | char_literal          { 
            dbg_print(DBG_TRACE, "literal: Char literal\n"); 
            $$ = $1;
        }
    ;
all_literal:
    ALL literal  {
            $2->allflag = 1;
            $$ = $2;
        }
    | ALL special_literal {
        $$ = get_specialliteral( $2, CB_SPECIAL);
        $$->allflag = 1;
    }
    ;
special_literal:
    SPACES          { $$ = CB_SL_SPACES; }
    | ZERO          { $$ = CB_SL_ZERO; }
    | QUOTES        { $$ = CB_SL_QUOTES; }
    | HIGHVALUES    { $$ = CB_SL_HIGHVALUES; }
    | LOWVALUES     { $$ = CB_SL_LOWVALUES; }
    | NULL_TOK      { $$ = CB_SL_NULL; }
    | TRUE_TOK      { $$ = CB_SL_TRUE; }
    | FALSE_TOK     { $$ = CB_SL_FALSE; }
    ;
 /***************************************************************************** 
                           EXPRESSION and CONDITIONS 
 *****************************************************************************/	
condition:               /* struct _condition */
    combinable_condition
    opt_comb_abri_condition  {
        dbg_print(DBG_TRACE, "Inside the cond feb14 -1 ..\n");
        $$ = construct_condition( $1, $2 );
        /* need a change here...
        When the opt_comb_abri_condition is not null the procession should be
        different. */
       
    }
/*    | error { dbg_print(DBG_ERROR, "error within condition \n");} */
    ;
opt_comb_abri_condition: /* struct _comb_abbr_cond_list */
    {   $$ = NULL; }
    | comb_abri_cond_list {
        dbg_print(DBG_TRACE, "Inside opt_comb_abri_condition...\n");
        $$ = $1;
    }
    ;
comb_abri_cond_list:    /* struct _comb_abbr_cond_list */
    comb_abri_cond      {
        $$ = start_comb_abri_list($1);
    }
    | comb_abri_cond_list comb_abri_cond {
        $$ = add_comb_abri_list($1, $2);
    }
    ;
comb_abri_cond:     /* struct _combinable_abbrivated_condition  */ 
    and_or
    comb_abri {
        dbg_print(DBG_TRACE, "Inside comb_abri_cond...\n");

        $$ = update_comb_abri_cond($1, $2);
    }
    ;
and_or:
    AND     { $$ = CB_LO_AND; }
    | OR    { $$ = CB_LO_OR;  }
    ;
comb_abri:          /* struct _combinable_abbrivated_condition  */ 
    combinable_condition  {
        $$ = construct_comb_abri_cond( $1, NULL);
    }
    | abbreviation_rest  {
        $$ = construct_comb_abri_cond( NULL, $1);
    }
    ;
combinable_condition:  /* struct _combinable_condition */
    simple_condition  {
        dbg_print(DBG_TRACE, "Inside the comb cond feb14 -1 ..\n");
        $$ = construct_comb_cond(0, $1);
    }
    | NOT simple_condition  {
        $$ = construct_comb_cond(1, $2);
    }
 /*   | error { dbg_print(DBG_ERROR, "error in combinable condition\n");} */
    ;
abbreviation_rest:   /* struct _abbriviation_rest */
    abbr_rest_list  {
        $$ = $1;
    } 
    ;
abbr_rest_list:     /* struct _abbriviation_rest */
    abbr_rest_item  {
        $$ = start_abri_item_list($1);
    }
    | abbr_rest_list abbr_rest_item {
        $$ = add_abri_item_list($1, $2);
    }
    ;
abbr_rest_item:     /* struct _abbriviation_item */
    opt_not relational_operator abbreviation_item {
        $$ = update_abbr_item($1, $2, $3);
    }
    ;
abbreviation_item:  /* struct _abbriviation_item */
    arithmetic_expression  {
        construct_Abbr_item($1, NULL);
    }
    | lparan  arithmetic_expression abbreviation_rest rparan {
        construct_Abbr_item($2, $3);
    }
    ;
simple_condition:
    relational_condition   {
        dbg_print(DBG_TRACE, "Inside the simple cond feb14 -1 ..\n");
        $$ = construct_simp_cond(CB_SC_REL, $1);
    } 
    /*
    | identifier_1  { 
        dbg_print(DBG_TRACE, "Inside simple_condition - found id\n");
        $$ = construct_simp_cond_id(CB_SC_ID, $1);
    } 
    | lparan identifier_1 rparan  { 
        dbg_print(DBG_TRACE, "Inside simple_condition (id)\n");
        $$ = construct_simp_cond_id(CB_SC_ID, $2);
    } 
    */
    | lparan condition rparan {
        dbg_print(DBG_TRACE, "Inside simple_condition \n");
        $$ = construct_simp_cond_cond(CB_SC_COND, $2);
    } 
    /*
    | error { dbg_print(DBG_ERROR, "error in simple condition\n");} 
    */
    ;
opt_isnot:
    is_opt
    opt_not     { $$ = $2; }
    ;
relational_condition:
    arithmetic_expression {
        dbg_print(DBG_TRACE, "Inside the rel cond feb14 -1 ..\n");
        $$ = construct_rel_cond(CB_RC_SINGLE, 0, 0, $1, NULL);        
    }
    | arithmetic_expression is_opt relational_operator arithmetic_expression {
        dbg_print(DBG_TRACE, "Inside the rel cond feb14 ..\n");
        $$ = construct_rel_cond(CB_RC_SIMPLE, 0, $3, $1, $4);
    }
    | arithmetic_expression is_opt NOT relational_operator arithmetic_expression {
        $$ = construct_rel_cond(CB_RC_SIMPLE, 1, $4, $1, $5);
    }
    | sign_condition {
        $$ = construct_rel_cond_sign(CB_RC_SIGN, $1);
    }
    | arithmetic_expression  opt_isnot class_item {
        $$ = construct_rel_cond_class(CB_RC_CLASS, $2, $1, $3);
    }
    | arithmetic_expression is_opt class_item    {
        $$ = construct_rel_cond_class(CB_RC_CLASS, 0, $1, $3);
    }
/*    | error { dbg_print(DBG_ERROR, "error in relational condition\n");} */
    ;
class_item:
    NUMERIC             { $$ = CB_CI_NUMERIC; }
    | ALPHABETIC_TOK    { $$ = CB_CI_ALPHABETIC; }
    | ALPHABETIC_LOWER  { $$ = CB_CI_ALPHA_UPPER; }
    | ALPHABETIC_UPPER  { $$ = CB_CI_ALPHA_LOWER; }
    ;
sign_condition:
    opt_isnot
    sign_indicator  {
        if($1 == 1) {
            $$ = reverse_sign($1);
        }
        else {
            $$ = $2;
        }
    }
    ;
sign_indicator:
    POSITIVE        { $$ = CB_SI_POSITIVE; }
    | NEGATIVE      { $$ = CB_SI_NEGATIVE; }
    | ZERO          { $$ = CB_SI_ZERO;     }
    ;
relational_operator:
    opt_isnot  
    rel_op     {
        if( $1 == 0 ) {
            $$ = $2;
        } else {
            $$ = reverse_logical_op( $2 );
        }
        dbg_print(DBG_TRACE, "Inside relational_operator...\n");
    }
    ;
rel_op:
    _gt     { $$ = CB_GT; }
    | _ge   { $$ = CB_GE; }
    | _lt   { $$ = CB_LT; }
    | _le   { $$ = CB_LE; }
    | _eq   { $$ = CB_EQ; }
    | _ne   { $$ = CB_NE; }
    ;
_gt:
    GREATER opt_than 
    | GT  ;
_ge:
    GREATER opt_than OR EQUAL opt_to
    | GE
    ;
_lt:
    LESS opt_than
    | LT ;
_le:
    LESS opt_than OR EQUAL opt_to
    | LE ;
_eq:
    EQUAL opt_to    { dbg_print(DBG_TRACE, "_eq: EQUAL opt_to \n"); }
    | EQUALS opt_to
    | EQ ;
_ne:        
    /* NOT EQUAL opt_to */
    NE 
    /* | NOT EQ opt_to */
    ;
opt_to: | TO ;
opt_than: | THAN ;

lparan:
    "(" {
                dbg_print(DBG_TRACE, "parser found LPARAN ( \n");
    }
    | LPARAN_SUB {
                dbg_print(DBG_TRACE, "parser found LPARAN_SUB \n");
    }
    ;
rparan:
    ")" {
                dbg_print(DBG_TRACE, "parser found RPARAN ) \n");
    }
    | RPARAN_SUB {
                dbg_print(DBG_TRACE, "parser found RPARAN_SUB \n");
    }
    ;
arithmetic_expression:
    gname {
        $$ = construct_arithm_expr_gname( CB_AE_GNAME, $1);
    }
    | lparan gname rparan {
        dbg_print(DBG_TRACE, "inside arithmetic_expression (gname) \n");        
        $$ = construct_arithm_expr_gname( CB_AE_GNAME, $2);
    }
    | class_item {
        $$ = construct_arithm_expr_class( CB_AE_CLASS, $1);
    }
    | arithmetic_expression _MULTIPLY arithmetic_expression { 
        dbg_print(DBG_TRACE, "Arithmetic_expression: _multiply\n");
        $$ = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_MULTIPLY, $1, $3);
     }
    | arithmetic_expression _DIVIDE arithmetic_expression   { 
        dbg_print(DBG_TRACE, "Arithmetic_expression: _plus\n");
        $$ = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_DIVIDE, $1, $3 );
      }
    | arithmetic_expression _PLUS arithmetic_expression {
        $$ = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_PLUS, $1, $3 );
    }
    | arithmetic_expression _MINUS arithmetic_expression {
        $$ = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_MINUS, $1, $3 );
    }
    | arithmetic_expression _POW_OP arithmetic_expression {
        $$ = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_POWER, $1, $3 );
    }
    | lparan arithmetic_expression rparan {
        $$ = construct_arithm_expr_bracket( CB_AE_QUOTE_EXP, $2 );
    }
    | _PLUS  arithmetic_expression  %prec UNARY_SIGN {
        $$ = construct_arithm_expr_unary( CB_AE_UNRY, CB_AO_PLUS, $2 );
    }
    | _MINUS arithmetic_expression  %prec UNARY_SIGN {
        $$ = construct_arithm_expr_unary( CB_AE_UNRY, CB_AO_MINUS, $2 );
    }
 /*   | error { dbg_print(DBG_TRACE, "error in arithmetic condition\n");} */
    ;
/***************************************************************************** 
                                end productions
 *****************************************************************************/	
%%

/***************************************************************************** 
                                Global functions
 - The yyerror could be modified to show the token name that caused parse error

 *****************************************************************************/	
void yyerror(s)
char *s;
{
   /* dbg_print(DBG_ERROR, "Error in source file- %s : Error code-%s : Line No. %d : line no. %d\n", fileList[currentFile-1], s, yychar, yylineno); 

    dbg_print(DBG_ERROR, "%s(%d) : error : code-%s : error at \"%s\"\n", 
                        fileList[currentFile-1], yylineno, s, (reverse_lookup(yychar) ? reverse_lookup(yychar) : "Reserved word") ); */

    dbg_print(DBG_ERROR, "%s(%d) : %s\n", 
                        fileList[currentFile-1], yylineno, s);
    dbg_print(DBG_ERROR, ">>>%s\n", currentline);
/*
    int totallen = strlen(currentline);
    int loclen = 0;
    if(reverse_lookup(yychar) != 0) loclen = strlen(strstr(currentline, reverse_lookup(yychar))); 
    for(int i = 0; i < totallen-loclen; i++) dbg_print(DBG_ERROR, "-");
    dbg_print(DBG_ERROR, "^");
*/
}

int yywrap()
{
    FILE *file = 0;
    if ((currentFile != 0) && (nFiles > 1) && (currentFile < nFiles)) {
        /*
         * we print out the statistics for the previous file.
         */
        fclose(yyin);     /* done with that file */
    }
    if(fileList[currentFile] != 0)
        currentFileName = fileList[currentFile];
    while (fileList[currentFile] != (char *)0) {
        /* dbg_print(DBG_PARSER, "file name --- %s\n", fileList[currentFile]); */
        printf("File --- : %s\n", fileList[currentFile]); 
        currentFileName = fileList[currentFile];

        file = fopen(fileList[currentFile++], "r");
        if (file != NULL) {
            /* 
             * the new file related handling can be called here...
             */
            /* AST handling. Creating a new file node...*/
            yylineno = 0;
            yyin = file;
            dbg_print(DBG_TRACE, "Opened file %s\n", fileList[currentFile-1]);
            break;
        }
        fprintf( stderr,  "could not open %s\n", fileList[currentFile-1]);
    }
    return (file ? 0 : 1); /* 0 means there's more input */
}

//TODO: 
// sometime in near future. No need for immediate addressing. extremely low priority.
// when the parser falls through it is expected to return the allocated block/nodes and the 
// program deletes those in due course of time.
// Freeing the memory in case of failure is essential and should be done using the 
// directive %destructor need to assign the specific destruction method for releasing 
// the nodes in case of failure. though this is not going to cause any issues as the 
// parser is not live protocol scanner that has to go on parsing indefinitely, it is 
// advisable to address this issue at some moment of time.

// Also, valgrind shows the leakage from flex. Need to see viable solution to free the 
// buffers allocated by flex and return the memory. Every time it is observed that 16K of
// block is leaked by flex. 
