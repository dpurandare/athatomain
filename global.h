/*
 * File: global.h
 * Created Date: Tuesday August 26th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Tuesday August 26th 2014 6:45:39 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 * Created on November 16, 2013, 1:43 PM
 */

#ifndef GLOBAL_H
#define	GLOBAL_H

/***********************************
 *     Defines and enumerations    *
 ***********************************/


#define BUFSIZE 2048
#define SMALL_BUFF 256
extern char char_buffer[BUFSIZE];

// Data division items
enum data_div_items{
    CBD_FILE_SECTION             = 1,
    CBD_WORKING_STORGAGE_SECTION = 2,
    CBD_LINKAGE_SECTION          = 3,
    CBD_COMMUNICATION_SECTION    = 4,
    CBD_SCREEN_SECTION           = 5,
    CBD_REPORT_SECTION           = 6,
    CBD_LOCALSTORAGE_SECTION     = 7
};

// Procedure item types...
enum proc_def_types {
    CB_PD_ITEM      = 0,
    CB_PD_SECTION   = 1,
    CB_PD_PARAGRAPH = 2,
    CB_PD_SENTENCE  = 3,
    CB_PD_STATEMENT = 4,
    CB_PD_STOP      = 5,
    CB_PD_SET       = 6,
    CB_PD_MOVE      = 7,
    CB_PD_IFELSE    = 8,
    CB_PD_EVALUATE  = 9,
    CB_PD_PERFORM   = 10,
    CB_PD_SEARCH    = 11,
    CB_PD_READ      = 12,
    CB_PD_WRITE     = 13,
    CB_PD_DELETE    = 14,
    CB_PD_RETURN    = 15
};

enum sign_clause_enum {
    CB_NOT_SPECIFICD    = 0,
    CB_LEADING          = 101,
    CB_TRAILING         = 102
};
// type definitions...
enum datanames {
    CB_NULL     = 0,
    CB_INT      = 1,
    CB_FLOAT    = 2,
    CB_BOOLEAN    = 3,
    CB_N_LITERAL  = 4,
    CB_C_LITERAL  = 5,
    CB_CHARPTR  = 6,
    CB_NUMERIC  = 7,
    CB_LITERAL    = 8,
    CB_HEX      = 9,
    CB_HEX_NO   = 10,
    CB_IDENTIFIER = 11,
    CB_LENGTH   = 12,
    CB_ADDRESS  = 13,
    CB_SPECIAL    = 14,
    CB_FUNCTION   = 15,
    CB_ID_UNITVAL = 16,
    CB_IMPLICIT   = 17,
    CB_LINES      = 18,
    CB_PAGES      = 19,
    CB_LINE_NEXTPAGE = 20,
    CB_SIZE       = 21,
    CB_ADDRESS_IN = 22,
    CB_ADDRESS_OF = 23
};
enum _common_items {
    CB_ON   = 1,
    CB_OFF  = 2,
    CB_UP   = 3,
    CB_DOWN = 4,
    CB_TRUE = 5,
    CB_FALSE= 6,
    CB_COMMON = 7,
    CB_INITIAL = 8
};

enum devicenames {
    CB_DISPLAY  = 1,
    CB_INPUT    = 2,
    CB_OUTPUT   = 3,
    CB_INPUT_OUTPUT = 4,
    CB_RANDOM   = 5,
    CB_TAPE     = 6
};
enum filetypeenum {
    CB_FT_INPUT    = 2,
    CB_FT_OUTPUT   = 3,
    CB_FT_I_O      = 4,
    CB_FT_EXTEND   = 5
};
enum fileaccesstype{
    CB_FL_UNDEFINED       = 0,
    CB_FL_LINE_SEQUENTIAL = 1,
    CB_FL_SEQUENTIAL      = 2,
    CB_FL_BIN_SEQUENTIAL  = 3,
    CB_FL_RELATIVE        = 4,
    CB_FL_INDEXED         = 5
};
enum fileaccessmode {
    CB_FM_SEQUENTIAL = 1,
    CB_FM_RANDOM = 2,
    CB_FM_DYNAMIC = 3
};
enum lockmodeenum {
    CB_LM_NONE = 0,
    CB_LM_MAN_ON_MUL_REC = 1,
    CB_LM_AUT_ON_MUL_REC = 2,
    CB_LM_EXCLUSIVE = 3
};
// Picture specific details 
#define PIC_ALPHABETIC		0x01
#define PIC_NUMERIC		0x02
#define PIC_NATIONAL		0x04
#define PIC_EDITED		0x08
#define PIC_ALPHANUMERIC	(PIC_ALPHABETIC | PIC_NUMERIC)
#define PIC_ALPHABETIC_EDITED	(PIC_ALPHABETIC | PIC_EDITED)
#define PIC_ALPHANUMERIC_EDITED	(PIC_ALPHANUMERIC | PIC_EDITED)
#define PIC_NUMERIC_EDITED	(PIC_NUMERIC | PIC_EDITED)
#define PIC_NATIONAL_EDITED	(PIC_NATIONAL | PIC_EDITED)
enum categoryname {
    CB_CAT_NONE         = 0,
    CB_CAT_ALPHABETIC   = 1,
    CB_CAT_ALPHANUMERIC = 2,
    CB_CAT_ALPHANUMERIC_EDITED = 3,
    CB_CAT_DATA_POINTER = 4,
    CB_CAT_NUMERIC      = 5,
    CB_CAT_NUMERIC_EDITED = 6,   
    CB_CAT_ALL          = 7,
    CB_CAT_BOOLEAN      = 8,
    CB_CAT_NATIONAL     = 9,
    CB_CAT_NATIONAL_EDITED = 10,
    CB_CAT_OBJ_REF      = 11,
    CB_CAT_INDEX        = 12
};

enum special_lit_enum {
    CB_SL_SPACES     = 1,          
    CB_SL_ZERO       = 2,   
    CB_SL_QUOTES     = 3,    
    CB_SL_HIGHVALUES = 4,  
    CB_SL_LOWVALUES  = 5,
    CB_SL_NULL       = 6,
    CB_SL_TRUE       = 7,
    CB_SL_FALSE      = 8,
    CB_SL_RECORDS    = 9,
    CB_SL_CHARACTERS = 10,
};
enum usage_clause_enum {
    CB_UC_BINARY   = 1,
    CB_UC_COMP     = 2,
    CB_UC_COMP_1   = 3,
    CB_UC_COMP_2   = 4,
    CB_UC_COMP_3   = 5,
    CB_UC_COMP_4   = 6,
    CB_UC_COMP_5   = 7,
    CB_UC_COMP_6   = 8,
    CB_UC_DISPLAY  = 9,
    CB_UC_INDEX    = 10,
    CB_UC_PACKED_DECIMAL = 11,
    CB_UC_POINTER  = 12
};

enum synchronized {
    CB_SY_UNDEFINED = 0,
    CB_SY_LEFT = 1,
    CB_SY_RIGHT = 2
};
enum nameorfiller {
    CB_EMPTY_NF = 0,
    CB_NAME = 1,
    CB_FILLER = 2
};
enum withclause_enum {
    CB_WC_AT_POS        = 1,
    CB_WC_AUTO          = 2,
    CB_WC_AUTO_SKIP     = 3,
    CB_WC_BEEP          = 4,
    CB_WC_NO_BEEP       = 5,
    CB_WC_BEFORE_TIME   = 6,
    CB_WC_BELL          = 7,
    CB_WC_NO_BELL       = 8,
    CB_WC_BLANK         = 9,
    CB_WC_BLINK         = 10,
    CB_WC_CONTROL       = 11,
    CB_WC_CONVERT       = 12,
    CB_WC_CURSER        = 13,
    CB_WC_ECHO          = 14,
    CB_WC_ERASE_EOL     = 15,
    CB_WC_ERASE_EOS     = 16,
    CB_WC_HIGH          = 17,
    CB_WC_HIGHLIGHT     = 18,
    CB_WC_LOW           = 19,
    CB_WC_LOWLIGHT      = 20,
    CB_WC_MODE_IS_BLOCK = 21,
    CB_WC_OFF           = 22,
    CB_WC_PROMPT_CHAR   = 23,
    CB_WC_REVERSE       = 24,
    CB_WC_SECURE        = 25,
    CB_WC_SIZE          = 26,
    CB_WC_TAB           = 27,
    CB_WC_UPDATE        = 28
};
enum with_clause_at_loc {
    CB_WC_AT_LINE   = 29,
    CB_WC_AT_COLUMN = 30,
    CB_WC_AT_POSITION = 31
};

enum implicit_def_clause_enum {
    CB_ID_CENTURY_DATE  = 1,
    CB_ID_CENTURY_DAY   = 2,
    CB_ID_DATE          = 3,
    CB_ID_DATE_YYYYMMDD = 4,
    CB_ID_DATE_TIME     = 5,
    CB_ID_DATE_COMPILED = 6,
    CB_ID_DAY           = 7,
    CB_ID_DAY_YYYYDDD   = 8,
    CB_ID_DAY_TIME      = 9,
    CB_ID_DAY_WEEK      = 10,
    CB_ID_TIME          = 11,
    CB_ID_ESCAPE        = 12,
    CB_ID_EXCEPTION     = 13
};

enum escape_exception_enum {
    CB_ESCAPE = 1,
    CB_EXCEPTION = 2,
    CB_ERROR = 3
};
enum relational_operator{
    CB_GT = 1,
    CB_GE = 2,
    CB_LT = 3,
    CB_LE = 4,
    CB_EQ = 5,
    CB_NE = 6,
    CB_FIRST = 7,
    CB_LAST  = 8
};
enum class_item {
    CB_CI_NUMERIC       = 1,
    CB_CI_ALPHABETIC    = 2,
    CB_CI_ALPHA_UPPER   = 3,
    CB_CI_ALPHA_LOWER   = 4
};
enum sign_indicator {
    CB_SI_POSITIVE = 1,
    CB_SI_NEGATIVE = 2,
    CB_SI_ZERO     = 3,
    CB_SI_NON_ZERO = 4          // this is synthesized.
};
enum logical_operator {
    CB_LO_AND = 1,
    CB_LO_OR  = 2
};

// CobFileDescription 
enum fieldlistlocation {
    CB_FILE_SECTION = 1,
    CB_WS_SECTION = 2
};

enum arithm_expr_type_enum {
    CB_AE_GNAME         = 1,
    CB_AE_CLASS         = 2,
    CB_AE_SIMPLE        = 3,
    CB_AE_QUOTE_EXP     = 4,
    CB_AE_UNRY          = 5,
};
enum arithmetic_operator_enum{
    CB_AO_PLUS     = 1,
    CB_AO_MINUS    = 2,
    CB_AO_MULTIPLY = 3,
    CB_AO_DIVIDE   = 4,
    CB_AO_POWER    = 5,
    CB_AO_COLON    = 6
};
enum rel_cond_type_enum {
    CB_RC_SINGLE    = 1,
    CB_RC_SIMPLE    = 2,
    CB_RC_SIGN      = 3,
    CB_RC_CLASS     = 4
};
enum simp_cond_type_enum {
    CB_SC_REL  = 1,
    CB_SC_ID   = 2,
    CB_SC_COND = 3
};
enum abbr_item_type_enum {
    CB_AI_ARITHM_EXPR   = 1,
    CB_AI_AE_AR         = 2
};
enum before_after_enum {
    CB_ABSENT = 0,
    CB_BEFORE = 1,
    CB_AFTER  = 2
};


/***********************************
 *           structures            *
 ***********************************/

typedef struct idvalStru {
    char    * idStr;
    void    * inofdata;   // c++ list object ptr
    void    * subscripts; // this is c++ list object pointer
    int     rounded;      // default to 0
    //struct refnumbers * refs; // this is modified. The subscripts will hold the references as well. 
} id_valwithopt;

// used with gname...
typedef struct valueType{
    int         type;
    int         intVal;
    float       floatVal;
    id_valwithopt * idval;
    char *      strVal;       /* identifier, dquote and squote strings, */
    int         splVal;
    int         allflag;        /* default 0 - false */
    int         rounded;        /* defaunt 8 - false */
} valtype, literalval;

// Use this with xval. check and decide if valueType is good enough. 
typedef struct xvaldata {
    int             usetype;   /* used only in specific cases */
    int             type;
    int             imp;       /* for implicit info */
    id_valwithopt * identifier;
    int             rounded;     // 0 or 1
    literalval *    litval;
} xvaltype;

enum subscript_type { 
    // check first if required...
    // looks like the sign should handle it. 
    CB_SUB_SUB = 1,
    CB_SUB_REF = 2
};
enum subscript_item_type {
    CB_SUBITEM_ID       = 1,
    CB_SUBITEM_LIT      = 2,
    CB_SUBITEM_SUBITEM  = 3,
    CB_SUBITEM_ADD      = 4,
    CB_SUBITEM_SUBTRACT = 5,
    CB_SUBITEM_REF      = 6
};

struct _subscript_item {
    enum subscript_item_type type;
    char * idstr;
    struct valueType * litval;
    struct _subscript_item * subitem;
    int oper;
    struct _subscript_item * subitem2;
};
/*
typedef struct _subscript{
    valtype * value;
    int sign; // 1 - plus, 2- minus, 3- colon 
    struct _subscript * next;
}subscript;

typedef struct refnumbers {
    struct _subscript * left;
    int right;
}ref_numbers;
*/

/***********************************
 *     Condition and Expression    *
 ***********************************/
struct _condition {
    struct _combinable_condition * comb_cond;
    struct _comb_abbr_cond_list * comb_abri_cond_lst;
};

struct _comb_abbr_cond_list {
    int count;
    void * item_list;
};
enum comb_cond_item_enum{
    CB_COMB_COND_COMB = 1,
    CB_COMB_COND_ABBR = 2
};
struct _combinable_abbrivated_condition {
    int op;     // AND-OR
    int type;   // combi or abbri
    struct _combinable_condition * comb_cond;
    struct _abbriviation_rest * abbri_rest; 
};
struct _combinable_condition {
    int is_not;
    struct _simple_condition * simp_cond;
};
struct _abbriviation_rest {
    int count;
    void * item_list;
};
struct _abbriviation_item {
    int type;
    int opt_not;
    int rel_op;
    struct _arithmetic_expression * arithm_stmt;
    struct _abbriviation_rest * abbr_rest;
};
struct _simple_condition {
    int type;
    struct _relational_condition * rel_condition;
    struct idvalStru * identifier;
    struct _condition * cond;
};
struct _relational_condition {
    int type;   // regular, sign cond, class item
    int is_not;
    int rel_op;
    struct _arithmetic_expression * left;
    struct _arithmetic_expression * right;
    int sign_cond; 
    int class_item;
};
struct _arithmetic_expression {
    int exp_type;
    struct valueType * val;
    int class_item;
    int oper;
    struct _arithmetic_expression * left;
    struct _arithmetic_expression * right;
    int unary_sign;     // 0 - none, 1- +, 2- -
};

// Picture specific details...
struct _picture_info {
	char			*orig;		/* original picture string */
	char			*str;		/* packed picture string */
	int			size;		/* byte size */
	int			lenstr;		/* length of picture string */
	enum categoryname	category;	/* field category */
	unsigned char		digits;		/* the number of digit places */
	signed char		scale;		/* 1/10^scale */
	unsigned char		have_sign;	/* have 'S' */
	unsigned char		spare;		/* spare */
};


#ifdef	__cplusplus
extern "C" {
#endif
/***********************************
 *       function declarations     *
 ***********************************/
// initialization and release operations for the c++ system
// handling of the current initialization and release
int initialize_cpp(void);
int release_cpp(void);

// Project related functions
// Project dump...
void dumpProject();
void generate();
void analyze();
void setTargetPath(const char * str);
const char * getTargetPath();
void setIncludePath(const char *str);
const char * getIncludePath();
void setGenConfigPath(const char *str);
const char * getGenConfigPath();
void setFirstFile(char * pfilename);
const char * getFirstFile();

// Parser and dump related functions
int gethash( const char * s);    
char * getJname(const char * pname);

char * start_buffer(char *str);
char * append_buffer(char *str);
char * strdupx(const char * s);

void dump_id(struct idvalStru * pid);
void dump_idlist(void * plst);
//void dump_refnumbers(struct refnumbers * pref);
void dump_subscript_list(void * plst);
void dump_subscript(struct _subscript_item * pitem);
void dump_value(struct valueType * pval);
const char * value_string(struct valueType * pval);
void dump_special_literal(int pval);
void dump_xval(struct xvaldata * pxval);

void delete_id(struct idvalStru * pid);
void delete_idlist(void * plst);
void delete_subscripts_list(void * plst);
void delete_subscript(struct _subscript_item * plst);
//void delete_refnumbers(struct refnumbers * pref);
void delete_value(struct valueType * pval);
void delete_xval(struct xvaldata * pxval);

struct _picture_info * construct_picture(char * str);   
int datatype_from_category(int pcat);


struct _condition * construct_condition(struct _combinable_condition * pcomb_cond,
                                      struct _comb_abbr_cond_list * pcomb_abri_list);

struct _comb_abbr_cond_list * start_comb_abri_list(struct _combinable_abbrivated_condition * pabbr_item);
struct _comb_abbr_cond_list * add_comb_abri_list(
                        struct _comb_abbr_cond_list * list, 
                        struct _combinable_abbrivated_condition * pitem);

struct _combinable_abbrivated_condition * construct_comb_abri_cond(
                struct _combinable_condition * pcomb_cond,
                struct _abbriviation_rest * pabbr_rest); 
struct _combinable_abbrivated_condition * update_comb_abri_cond(
                int and_or, 
                struct _combinable_abbrivated_condition * pcomb_abri);

struct _combinable_condition * construct_comb_cond(
                int pnot, 
                struct _simple_condition * psimp_cond);

struct _abbriviation_rest * start_abri_item_list(struct _abbriviation_item * pitem);
struct _abbriviation_rest * add_abri_item_list(struct _abbriviation_rest * plist, 
                                        struct _abbriviation_item * pabbr_item);


struct _abbriviation_item * construct_Abbr_item(
                        struct _arithmetic_expression * parithm_expr,
                        struct _abbriviation_rest * pabbr_rest);
struct _abbriviation_item * update_abbr_item(int pnot, 
                        int prel_op, struct _abbriviation_item * pitem);

struct _simple_condition * construct_simp_cond(int ptype, struct _relational_condition * prel_cond);
struct _simple_condition * construct_simp_cond_id( int ptype, struct idvalStru * pid);
struct _simple_condition * construct_simp_cond_cond( int ptype, struct _condition * pcond);

struct _relational_condition * construct_rel_cond(int ptype,
                                    int pis_not,
                                    int prel_op,
                                    struct _arithmetic_expression * pleft,
                                    struct _arithmetic_expression * pright);
struct _relational_condition * construct_rel_cond_sign( int ptype, int psign_cond);
struct _relational_condition * construct_rel_cond_class( int ptype,
                                        int pis_not,
                                        struct _arithmetic_expression * pleft,
                                        int pclass_item);

// Condition and expression
struct _arithmetic_expression * construct_arithm_expr_gname(int ptype, valtype * pVal);
struct _arithmetic_expression * construct_arithm_expr_class(int ptype, int pclass_item);
struct _arithmetic_expression * construct_arithm_expr_simple(int ptype, int poper,
                                                 struct _arithmetic_expression * pleft,
                                                 struct _arithmetic_expression * pright);
struct _arithmetic_expression * construct_arithm_expr_unary(int ptype, int poper,
                                                 struct _arithmetic_expression * pleft);
struct _arithmetic_expression * construct_arithm_expr_bracket(int ptype, 
                                                 struct _arithmetic_expression * pleft);
int reverse_sign(int porig);
int reverse_logical_op(int porig);

void delete_condition(struct _condition * pcond);
void delete_combinable_condition(struct _combinable_condition * pcombcond);
void delete_comb_abri_cond_list(struct _comb_abbr_cond_list * plst);
void delete_simple_condition(struct _simple_condition * psimpcond);
void delete_comb_abri_cond(struct _combinable_abbrivated_condition * pitem);
void delete_abbrivation_rest(struct _abbriviation_rest * pitem);
void delete_arithmetic_expression(struct _arithmetic_expression * paeitem);
void delete_relational_condition(struct _relational_condition * prelcond);

void dump_condition(struct _condition * pcond);
void dump_combinable_condition(struct _combinable_condition * pcombcond);
void dump_comb_abri_cond_list(struct _comb_abbr_cond_list * plst);
void dump_simple_condition(struct _simple_condition * psimpcond);
void dump_comb_abri_cond(struct _combinable_abbrivated_condition * pitem);
void dump_abbrivation_rest(struct _abbriviation_rest * pitem);
void dump_arithmetic_expression(struct _arithmetic_expression * paeitem);
void dump_relational_condition(struct _relational_condition * prelcond);
void dump_op(int pop);
void dump_rel_op(int op);
/***********************************
 *     parser related items        *
 ***********************************/
extern int  yylineno;
int         yylex(void);
extern int yyparse(void);
extern void yyerror(char *s, ...);
//extern dataclausetype * dataClauseCurrent;

/***********************************
 *   basic data, gname, xval       *
 ***********************************/
// list of identifiers or literal values
void * startList(char *);
void * addListItem(void *, char *);
void delete_strlist(void * plst);
void dump_strlist(void * plst);
// list of identifiers or literal values
void * startList(char *);
void * addListItem(void *, char *);

// common functions
struct xvaldata * construct_xval( int valtype, void * valptr );
struct valueType * negate_numeric(literalval * pval);
struct valueType * get_numliteral( double dval, int pival);
struct valueType * get_charliteral( char * pstr, int pival );
struct valueType * get_specialliteral( int pval, int pival );
    
valtype * construct_gname_id(id_valwithopt * pval);
valtype * construct_gname_function(id_valwithopt * pval, int type);

// functions used in parser to construct the data structures
struct idvalStru * construct_identifier_1(char * str, void * inof, 
                                          void * subscripts);

struct _subscript_item * cons_subscript_item(enum subscript_item_type ptype, 
            char * pidstr, struct valueType * plitval,
            struct _subscript_item * psubitem, int poper, 
            struct _subscript_item * subitem2);
void * start_subscript_list(struct _subscript_item * prev);
void * add_subscriptlist_item(void * lst, struct _subscript_item * prev);

/****************************************
 *         Identification Division         *
 ****************************************/
enum _ident_option_type {
    CB_IDD_AUTHOR  = 1,
    CB_IDD_INSTALL = 2,
    CB_IDD_DATEWRI = 3,
    CB_IDD_DATECOM = 4,
    CB_IDD_SECURITY = 5,
    CB_IDD_REMARKS  = 6
};
struct _id_option {
    enum _ident_option_type type;
    char * val;
};
struct _id_option * cons_id_option(enum _ident_option_type ptype, char * pstr);
void * cons_identification_division(char * pprogname, int pcomm_initial, 
                                    void * pother_optlist, char * pfileName);
/****************************************
 *         Environment Division         *
 ****************************************/
enum _special_names_enum {
    CB_SN_CURRENCY  = 1,
    CB_SN_DECIMALPT = 2
};
struct _special_names {
    int type;
    char * currencysign;
};
struct _special_names * cons_special_names(int ptype, char * pcurrencysign);
void delete_special_names_list(void * plst);
void dump_special_names_list(void * plst);

enum _memory_options_enum {
    CB_MEM_WORDS = 1,
    CB_MEM_CHARS = 2,
    CB_MEM_MODULE = 3
};
struct _intpair { 
    int first;
    int second;
};
struct _intpair * cons_intpair(int pfirst, int psecond);
enum _obj_comp_clause_type {
    CB_OBJCOMP_MEM = 1,
    CB_OBJCOMP_SEQ = 2,
    CB_OBJCOMP_SEG = 3
};
struct _obj_comp_clause {
    enum _obj_comp_clause_type type;
    struct _intpair * comp_memory;
    char * comp_sequence;
    int comp_segment;
};
struct _obj_comp_clause * cons_obj_comp_clause(enum _obj_comp_clause_type ptype, 
                struct _intpair * pintpair, char * pstr, int ival);

struct _object_computer_clauses {
    char * comp_name;
    void * obj_comp_clause_lst; // struct _obj_comp_clause * list
};
void delete_obj_comp_clause_lst(void * plst);
void delete_object_computer_clauses(struct _object_computer_clauses * item);

void dump_obj_comp_clause_lst(void * plst);
void dump_object_compute_clauses(struct _object_computer_clauses * item);

struct _object_computer_clauses * cons_object_computer_clauses(char * pname, void * plst);
struct _intcharpair {
    char * strval;
    int intval;
};
struct _intcharpair * cons_intchar_pair(char * pstr, int ival);
enum _config_section_type {
    CB_CONFIG_SEC_SOURCE = 1,
    CB_CONFIG_SEC_OBJECT = 2,
    CB_CONFIG_SEC_SPNAMES = 3,
    CB_CONFIG_SEC_REPOSITORY = 4
};
struct _config_section_option {
    enum _config_section_type type;
    struct _intcharpair * source_comp_opt;
    struct _object_computer_clauses * obj_comp_opt;
    void * special_names_list;
    void * repository_items_list;
};
struct _config_section_option * cons_config_sec_option(
                enum _config_section_type ptype,
                struct _intcharpair * psource_comp_opt,
                struct _object_computer_clauses * pobj_comp_opt,
                void * pspecial_names_list,
                void * prepository_item_list
                );
void * cons_environment_division(void * penv_div_lst);
void * cons_configuration_section(void * pconf_sec_sectionlst);
void * cons_input_output_section(void * pfile_control, void * pio_section);
/**************** I-O CONTROL ***************/
enum _same_option_type {
    CB_SAME_ABSENT = 0,
    CB_SAME_RECORD = 1,
    CB_SAME_SORT   = 2,
    CB_SAME_SORT_MERGE = 3
};
struct _same_clause {
    int same_opt;
    void * file_name_list;
};
struct _same_clause * cons_same_clause( int psame_opt, void * pfilenamelist);

void delete_file_name_list(void * plst);

struct _intidpair {
    int ival;
    struct idvalStru * idval;
};
struct _intidpair * cons_int_id_pair(int pval, struct idvalStru * pid);
enum _io_control_type {
    CB_IOCONTROL_SAME = 1,
    CB_IOCONTROL_MULTI = 2
};
struct _io_control_item {
    enum _io_control_type type;
    struct _same_clause * same_clause;
    void * multi_file_lst; // struct _intidpair * lst
};
struct _io_control_item * cons_io_control_item(enum _io_control_type ptype, 
                        struct _same_clause * psame_clause,
                        void * pmulti_file_lst);
void dump_io_control_item(struct _io_control_item * pitem);
void delete_io_control_item(struct _io_control_item * pitem);

void * cons_io_control(void * piocontrol_itemlst);
/*************** FILE CONTROL *****************/
enum optionalflag {
    CB_OPT_NOTDEFINED = 0,
    CB_OPT_OPTIONAL   = 1,
    CB_OPT_NOTOPTIONAL = 2
};

struct _gnamepair_int {
    struct valueType * first;
    struct valueType * second;
    int ival;
};
struct _gnamepair_int * cons_file_assignment_clause(struct valueType * pfilename, 
                                     struct valueType * poptfilename, int pdevicetype);
const char * dump_device_file_name(int pdevtype);

struct _int_xval {
    int pival;
    struct xvaldata * pxval;
};
struct _int_xval * cons_accessmode_clause(int pmode, struct xvaldata * prelativekey);
void dump_accessmode_clause(struct _int_xval * pval);
void dump_lock_mode_clause(int pival);
struct _record_key_clause {
    struct xvaldata * data_name;
    char * splip_key_name;
    void * split_key_value_list;
    int duplicate_flag;
};
struct _record_key_clause * cons_record_key_clause( struct xvaldata * pdata_name,
                                                char * psplip_key_name,
                                                void * psplit_key_value_list);
struct _record_key_clause * mod_record_key_clause(struct _record_key_clause * porig,
                                                int pdup);
void dump_record_key_clause(void * plst);
void delete_record_key_clause(void * plst);
enum filecontrolclausetype {
    CB_FCC_ASSIGN       = 1,
    CB_FCC_RESERVE      = 2,
    CB_FCC_ORG          = 3,
    CB_FCC_PADDING      = 4,
    CB_FCC_DELIM        = 5,
    CB_FCC_ACCESS       = 6,
    CB_FCC_LOCK         = 7,
    CB_FCC_CODESET      = 8,
    CB_FCC_COLLATING    = 9,
    CB_FCC_RECKEY       = 10,
    CB_FCC_KEYCLAUSE    = 11,
    CB_FCC_FILESTATUE   = 12 
};

struct _file_control_clause {
    enum filecontrolclausetype type;
    struct _gnamepair_int * file_assignment_clause;
    int reserve_clause;
    int organization_clause;
    struct valueType * padding_char;
    struct xvaldata * delimiter_clause;
    struct _int_xval * access_mode_clause;
    int lock_mode_clause;
    struct xvaldata * code_set;
    struct xvaldata * collating_seq;
    struct _record_key_clause * rec_key_clause;
    void * alt_key_clause; //list of struct _record_key_clause * 
    struct xvaldata * file_status;
};

struct _file_control_clause * cons_fcc_item_gnamepair(enum filecontrolclausetype, struct _gnamepair_int * pval);
struct _file_control_clause * cons_fcc_item_int(enum filecontrolclausetype, int pival);
struct _file_control_clause * cons_fcc_item_val(enum filecontrolclausetype, struct valueType * pval);
struct _file_control_clause * cons_fcc_item_xval(enum filecontrolclausetype, struct xvaldata * pval);
struct _file_control_clause * cons_fcc_item_int_xval(enum filecontrolclausetype, struct _int_xval * pval);
struct _file_control_clause * cons_fcc_item_reckey(enum filecontrolclausetype, struct _record_key_clause * pval);
struct _file_control_clause * cons_fcc_item_key(enum filecontrolclausetype, void * pval);

void dump_file_control_clause_list(void * plst);
void delete_file_control_clause_list(void * plst);
const char * dump_organization_clause(int porganization_clause);

struct _file_control_expression{
    int optionalflag;
    char * filename;
    void * fcclist; //struct _file_control_clause * fcc;
};

struct _file_control_expression * cons_file_control_expression(int poptflag, 
                char * pfilename, void * pfcc);

void * cons_file_control(void * pfile_ctrl_exprlst);
/****************************************
 *             Data Division            *
 ****************************************/
void * cons_data_division(void * pdata_div_items);
void * cons_working_storage_section(void * pfdsditemlst);

// CobFileSection
void * cons_file_section(void * plst);
void * cons_file_description(char * pname, void * poptionslst, void * pitemlst);
enum fdsd_enum {
    CB_FD_FD = 1,
    CB_FD_SD = 2
};
void * set_file_description_type(enum fdsd_enum ptype, void * pfield_descr_item);

struct _int_id {
    enum datanames type;
    int ival;
    struct idvalStru * idval;
};
struct _int_id * cons_int_id(enum datanames ptype, int pival, 
                             struct idvalStru * pid);
struct _val_clause_item {
    struct idvalStru * labelid;
    struct valueType * valitem;
};
struct _val_clause_item * cons_val_clause_item(struct idvalStru * pid,
                                               struct valueType * pval);
void dump_value_clause_list(void * plst);

struct _block_contains_clause{
    int ival;
    int toival;
    enum special_lit_enum type;
};
struct _block_contains_clause * cons_block_contains_clause(int pival, 
                                    int ptoival, enum special_lit_enum ptype);
enum _record_contains_type {
    CB_REC_CON = 1,
    CB_REC_VAR = 2
};
struct _record_contains_clause {
    enum _record_contains_type type;
    struct _intpair * contains;
    void * record_varyinglst;
};
struct _record_contains_clause * cons_record_contains_clause( 
                        enum _record_contains_type ptype,
                        struct _intpair * pcontains,
                        void * precord_varyinglst);
void dump_record_contains_clause(struct _record_contains_clause * prcc);
enum _variation_clause_type {
    CB_VAR_FROMTO = 1,
    CB_VAR_DEPEND = 2
};
struct _variation_clause {
    enum _variation_clause_type type;
    struct _intpair * fromto;
    struct idvalStru * depend;
};
struct _variation_clause * cons_variation_clause(enum _variation_clause_type ptype,
                                struct _intpair * pfromto, 
                                struct idvalStru * pdepend);

struct _linage_clause {
    struct _int_id * idival;
    struct _int_id * idifooting;
    struct _int_id * iditop;
    struct _int_id * idibottom;
};
struct _linage_clause * cons_linage_clause(struct _int_id * pidival,
                                struct _int_id * pidifooting,
                                struct _int_id * piditop,
                                struct _int_id * pidibottom);
void dump_linage_clause(struct _linage_clause * pitem);
void dump_intid(struct _int_id * pintid);
void delete_linage_clause(struct _linage_clause * pitem);

enum _fd_sd_option_type {
    CB_FDSD_EXTERNAL            = 1,
    CB_FDSD_GLOBAL              = 2,
    CB_FDSD_LAB_REC_CLAUSE      = 3,
    CB_FDSD_REC_CON_CLAUSE      = 4,
    CB_FDSD_BLO_CON_CLAUSE      = 5,
    CB_FDSD_DATA_REC_CLAUSE     = 6,
    CB_FDSD_VAL_OF_CLAUSE       = 7,
    CB_FDSD_LINAGE_CLAUSE       = 8,
    CB_FDSD_CODESET_CLAUSE      = 9,
    CB_FDSD_REPORT_CLAUSE       = 10
};
struct _fd_sd_option {
    enum _fd_sd_option_type type;
    int is_ext;
    int is_global;
    void * label_rec_clause; // this is identifier_list
    struct _record_contains_clause * recconcl;
    struct _block_contains_clause * blocconcl;
    void * data_records_clause;
    void * value_oflst;
    struct _linage_clause * linagecl;  
    char * codeset;
    char * reportname;
};
struct _fd_sd_option * cons_fdsd_opt_int(enum _fd_sd_option_type ptype, int pival);
struct _fd_sd_option * cons_fdsd_opt_void(enum _fd_sd_option_type ptype, void * pval);
struct _fd_sd_option * cons_fdsd_opt_reccon(enum _fd_sd_option_type ptype, 
                                    struct _record_contains_clause * precconcl);
struct _fd_sd_option * cons_fdsd_opt_blockcon(enum _fd_sd_option_type ptype, 
                                    struct _block_contains_clause * pblocconcl);
struct _fd_sd_option * cons_fdsd_opt_linage_clause(enum _fd_sd_option_type ptype, 
                                    struct _linage_clause * plinagecl);
struct _fd_sd_option * cons_fdsd_opt_codeset(enum _fd_sd_option_type ptype, char * pstr);
struct _fd_sd_option * cons_fdsd_opt_report(enum _fd_sd_option_type ptype, char * pstr);
void dump_fd_sd_opt_list(void * plst);

typedef struct _usageclause {
    enum usage_clause_enum usage_enum;
    int usage_val;
} usageClauseVal;
void dump_usage_clause_enum(enum usage_clause_enum pval);

typedef struct _occurance {
    int multi; // 0 - no, 1 - yes
    int from;
    int to;
    char * denepdingon;
} occurancetype;
struct _occurance * construct_occurance(int pfrom, int pto, char * pdependingon);

struct _usageclause * construct_usage_clause(enum usage_clause_enum pusage, int pval);

enum _data_clause_enum {
    CB_DC_REDEFINE      = 1,
    CB_DC_PICTURE       = 2,
    CB_DC_VALUE         = 3,
    CB_DC_USAGE         = 4,
    CB_DC_EXTERN        = 5,
    CB_DC_GLOBAL        = 6,
    CB_DC_SIGN          = 7,
    CB_DC_OCCUR         = 8,
    CB_DC_SYNCH         = 9,
    CB_DC_JUSTIFY       = 10,
    CB_DC_BLANK         = 11,
    CB_DC_RENAMES       = 12
};
typedef struct _dataclause {
    enum _data_clause_enum type;
    char *      redefines;
    char *      pictureclause;
    int         field_len;
    int         after_decimal;
    void *      dataclauseval;
    //struct _gnamepair_list * dataclauseval;
    //void *      valuelist;
    struct _usageclause * dc_usage;
    int         isexternal;
    int         isglobal;
    int         sign;   // don't forget to initialize this whole structure
    struct _occurance *  occurs;
    int         synch;
    int         justification;
    int         blank_clause;
    char *      renamefld;
    char *      renamethru;
} dataclausetype;

struct _gnamepair {
    struct valueType * first;
    struct valueType * second; // THRU val
};
struct _gnamepair * cons_value_pair(struct valueType * pfirst, 
                struct valueType * psecond);
void dump_gnamepairlst(void * plst);
void delete_gnamepairlst(void * plst);

struct _dataclause * cons_dataclause_str(enum _data_clause_enum ptype, char * pstr);
struct _dataclause * cons_dataclause_int(enum _data_clause_enum ptype, int pival);
struct _dataclause * cons_dataclause_gnamepairlst(enum _data_clause_enum ptype, void * pgenpairlst);
struct _dataclause * cons_dataclause_usage(enum _data_clause_enum ptype, struct _usageclause * puval);
struct _dataclause * cons_dataclause_occur(enum _data_clause_enum ptype, struct _occurance * poval);
struct _dataclause * cons_dataclause_rename(enum _data_clause_enum ptype, char * pfld, char * pthrufld);
// field description, instance of the class could be created and passed on
void * cons_field_description(int pival, char * pfillerorid, void * popt_data_clauses);
void delete_field_description_list(void * plst);
/****************************************
 *        Screen section options        *
 ****************************************/
enum _location_type_enum {
    CB_LOC_FROM = 1,
    CB_LOC_TO   = 2,
    CB_LOC_USING = 3
};
struct _location_details {
    enum _location_type_enum type;
    struct valueType * locval;
};
struct _location_details * cons_location_details(enum _location_type_enum ptype,
                                                struct valueType * plocval);
struct _intintstr{
    enum datanames type;
    int val;
    char * str;
};
struct _intintstr * cons_number_option(enum datanames ptype, int pival, char * pstr);
void dump_number_option(struct _intintstr * pitem);

enum _screen_description {
    CB_SCRDSC_BACKGROUND        = 50,
    CB_SCRDSC_BACKGROUNDCOLOR   = 51,
    CB_SCRDSC_FOREGROUND        = 52,
    CB_SCRDSC_FOREGROUNDCOLOR   = 53,
    CB_SCRDSC_USAGEDISPLAY      = 54,
    CB_SCRDSC_AUTO              = 55,
    CB_SCRDSC_AUTO_SKIP         = 56,
    CB_SCRDSC_SECURE            = 57,
    CB_SCRDSC_REQUIRED          = 58,
    CB_SCRDSC_FULL              = 59,
    CB_SCRDSC_BELL              = 60,
    CB_SCRDSC_BEEP              = 61,
    CB_SCRDSC_BLANK_SCREEN      = 62,
    CB_SCRDSC_BLANK_LINE        = 63,
    CB_SCRDSC_BLANK_REMAINDER   = 64,
    CB_SCRDSC_BLINK             = 65,
    CB_SCRDSC_ERASE_EOS         = 66,
    CB_SCRDSC_ERASE_EOL         = 67,
    CB_SCRDSC_ERASE_SCREEN      = 68,
    CB_SCRDSC_HIGHLIGHT         = 69,
    CB_SCRDSC_NO_HIGHLIGHT      = 70,
    CB_SCRDSC_LOWLIGHT          = 71,
    CB_SCRDSC_REVERSE           = 72,
    CB_SCRDSC_REVERSEVIDEO      = 73,
    CB_SCRDSC_UNDERLINE         = 74,
    CB_SCRDSC_LINE              = 75,
    CB_SCRDSC_COLUMN            = 76,
    CB_SCRDSC_BLANK_WHEN_ZERO   = 77,
    CB_SCRDSC_VALUE             = 78,
    CB_SCRDSC_PICTURE           = 79
};
struct _screen_descr_option {
    enum _screen_description type;
    struct idvalStru * id;
    struct _intintstr * number_clause;
    struct valueType * val;
    char * picstr;
    struct _location_details * loc_details;
};
struct _screen_descr_option * cons_scr_descr_options(
                            enum _screen_description ptype,
                            struct idvalStru * pid,
                            struct _intintstr * pnumber_clause,
                            struct valueType * pval,
                            char * ppicstr,
                            struct _location_details * ploc_details);
void dump_screen_descr_option(struct _screen_descr_option * pitem);

struct _screen_descr_entry {
    int level;
    char * nameorfiller;
    void * screen_descr_optionlst;
};
struct _screen_descr_entry * cons_screen_descr_entry(int plevel, char * pnameorfiller, void * poptlst);
void * cons_screen_section(void * pscreen_dscr_list);
/****************************************
 *    Communication section options     *
 ****************************************/
enum _comm_inp_type {
    CB_SYM_QUEUE    = 1,
    CB_SYM_SUBQ1    = 2,
    CB_SYM_SUBQ2    = 3,
    CB_SYM_SUBQ3    = 4,
    CB_SYM_MSG_DATE = 5,
    CB_SYM_MSG_TIME = 6,
    CB_SYM_SOURCE   = 7,
    CB_TXT_LENGTH   = 8,
    CB_END_KEY      = 9,
    CB_STATUS_KEY   = 10,
    CB_MSG_COUNT    = 11,
    CB_SYM_TERM     = 12
};

struct _gnameint {
    int ival;
    struct valueType * gnameval;
};
struct _gnameint * cons_gnameint(int pival, struct valueType * pgval);

struct _comm_inp {
    int initialflag;
    enum _comm_inp_type comminptype;
    struct valueType * val;
    void * idlist;
};
struct _comm_inp * construct_comm_inp(enum _comm_inp_type pcomminptype, struct valueType * pval);
void delete_comm_inp(void * plst);
void dump_comm_inp(void * plst);
void dump_comm_inp_type(enum _comm_inp_type ptype);

enum _comm_output_type {
    CB_COMOUT_DEST      = 1,
    CB_COMOUT_TXTLEN    = 2,
    CB_COMOUT_STAKEY    = 3,
    CB_COMOUT_DEST_TAB  = 4,
    CB_COMOUT_ERRKEY    = 5,
    CB_COMOUT_SYMDEST   = 6
};
struct _comm_output_item {
    enum _comm_output_type type;
    struct valueType * val;
    int ival;
    void * indexlst;
};
struct _comm_output_item * cons_comm_outitem_val(enum _comm_output_type ptype, 
                                                struct valueType * pval);
struct _comm_output_item * cons_comm_outitem_dest(enum _comm_output_type ptype, 
                                                int pival, void * plst);
void delete_comm_output(void *plst);
void dump_comm_output(void * plst);

enum _comm_io_type {
    CB_COMIO_MSGDATE    = 1,
    CB_COMIO_MSGTIME    = 2,
    CB_COMIO_SYMTERM    = 3,
    CB_COMIO_TXTLEN     = 4,
    CB_COMIO_ENDKEY     = 5,
    CB_COMIO_STAKEY     = 6
};

struct _comm_sec_detail_opt {
    enum filetypeenum type;
    void * comminput;
    void * commoutput;
    void * commio;    
};
struct _comm_sec_detail_opt * cons_comm_sec_details_opt(enum filetypeenum ptype, 
                                        void * pcommtyplst);

struct _comm_section_item {
    char * cdname;
    struct _comm_sec_detail_opt * comm_sec_detail_options; // change it later
    void * fdsditemlst;
};
struct _comm_section_item * cons_comm_section_item(char * pcdname, 
                                struct _comm_sec_detail_opt * pcomsecdetailsopts,
                                void * pfdsditemlst);

void * cons_communication_section(void * pcomm_section_details);

 /****************************************
  *    Local storage section options     *
  ****************************************/
void * cons_local_storage_section(void * pfd_sd_itemlst);

/****************************************
  *        Linkage section options       *
  ****************************************/
void * cons_linkage_section(void * pfd_sd_itemlst);

/*******************************************
 *            Top level nodes              *
 *******************************************/
void * cons_project(void * nested_prog_list);

// program, mandatory program and function definition 
// all will be stored as CobFile
void * cons_program_definition(
                        void * pidentification_div,
                        void * penvironment_div,
                        void * pdata_div,
                        void * pproc_div,
                        void * pnested_prog);

void * cons_function_division(char * pfunc_name, char * pfileName);
void * cons_function_definition(void * pfunc_div,
                                void * penvironment_div,
                                void * pdata_div,
                                void * pproc_division);
/******************************************************************************/
#ifdef	__cplusplus
}
#endif

/* 
condition
    combinable_condition
    [AND/OR comb_abri ...]
        combinable_condition
            simple_condition
                relational_condition
                    arithmetic_expr rel_op arithmetic_expr
                    sign_condition
                        is/isnot sign_indicator
                    arithmetic_expr is/ /isnot class_item
                identifier_1
                ( condition )
            NOT simple_condition
        abbreviation_rest
            abbr_rest_item ...
                [not] rel_op abbreviation_item
                    arithmetic_expr
                    ( arithmetic_expr )     
*/

#endif	/* GLOBAL_H */

