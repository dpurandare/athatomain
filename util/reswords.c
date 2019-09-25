/*
 * reswords.c
 * reserved words used in lexer and parser. 
 * This is a borrowed code, works well. Please add the credits if you know the source.
 * This code can altogenter be dropped as it was taken for quick debugging of parse errors. 
 */

#include "reswords.h"
#include "../y.tab.h"

struct reserved_symbol reserved_symbols[] = {
  {"ACCEPT",                ACCEPT },
  {"ACCESS",                ACCESS },
  {"ADD",                   ADD },
  {"ADDRESS",               ADDRESS },
  {"ADVANCING",             ADVANCING},
  {"AFTER",                 AFTER},
  {"ALL",                   ALL},
  {"ALPHABET",              ALPHABET},
  {"ALPHABETIC",            ALPHABETIC_TOK},
  {"ALPHABETIC-LOWER",      ALPHABETIC_LOWER},
  {"ALPHABETIC-UPPER",      ALPHABETIC_UPPER},
  {"ALPHANUMERIC",          ALPHANUMERIC},
  {"ALPHANUMERIC-EDITED",   ALPHANUMERIC_EDITED},
  {"ALSO",                  ALSO},
  {"ALTER",                 ALTER},  
  {"ALTERNATE",             ALTERNATE},
  {"AND",                   AND},
  {"ANY",                   ANY},
  {"ARE",                   ARE},
  {"AREA",                  AREA},
  {"AREAS",                 AREAS},
  {"ASCENDING",             ASCENDING},
  {"AS",                    AS},
  {"ASSIGN",                ASSIGN},
  {"AT",                    AT},
  {"AUTHOR",                AUTHOR},
  {"AUTO",                  AUTO},
  {"AUTOMATIC",             AUTOMATIC},
  {"AUTO-SKIP",             AUTO_SKIP},
  {"BACKGROUND",            BACKGROUND},
  {"BACKGROUND-COLOR",      BACKGROUNDCOLOR},
  {"BEEP",                  BEEP},
  {"BEFORE",                BEFORE},
  {"BEGINNING",             BEGINNING},  
  {"BELL",                  BELL},
  {"BINARY",                USAGENUM},
  {"BINARY-CHAR",           USAGENUM},                
  {"BINARY-DOUBLE",         USAGENUM},
  {"BINARY-LONG",           USAGENUM},                
  {"BINARY-SHORT",          USAGENUM},
  {"BLANK",                 BLANK},
  {"BLINK",                 BLINK},
  {"BLOCK",                 BLOCK},
  {"BOTTOM",                BOTTOM},
  {"BY",                    BY},
  {"CALL",                  CALL},
  {"CALL-LOADLIB",          CALL_LOADLIB},
  {"CANCEL",                CANCEL},
  {"CD",                    CD},
  {"CDECL",                 CALL_CONV_C},
  {"CENTER",                CENTER},
  {"CENTURY-DATE",          CENTURY_DATE},
  {"CENTURY-DAY",           CENTURY_DAY},
  {"CF",                    CF},
  {"CH",                    CH},
  {"CHAIN",                 CHAIN},
  {"CHAINING",              CHAINING},
  {"CHARACTER",             CHARACTER},
  {"CHARACTERS",            CHARACTERS},
  {"CLASS",                 CLASS},
  {"CLOSE",                 CLOSE},
  {"CODE",                  CODE},
  {"CODE-SET",              CODE_SET},
  {"COL",                   COLUMN},
  {"COLS",                  COLUMNS},
  {"COLLATING",             COLLATING},
  {"COLOR",                 COLOR},
  {"COLUMN",                COLUMN},
  {"COLUMNS",               COLUMNS},
  {"COMMA",                 COMMA},
  {"COMMAND-LINE",          CMD_LINE},
  {"COMMON",                COMMON},
  {"COMMUNICATION",         COMMUNICATION},  
  {"COMP",                  COMP},
  {"COMP-1",                COMP1},
  {"COMP-2",                COMP2},
  {"COMP-3",                COMP3},
  {"COMP-4",                COMP4},
  {"COMP-5",                COMP5},
  {"COMP-6",                COMP6},
  {"COMP-X",                COMPX},
  {"COMPUTATIONAL",         COMP},
  {"COMPUTATIONAL-1",       COMP1},
  {"COMPUTATIONAL-2",       COMP2},
  {"COMPUTATIONAL-3",       COMP3},
  {"COMPUTATIONAL-4",       COMP4},
  {"COMPUTATIONAL-5",       COMP5},
  {"COMPUTATIONAL-6",       COMP6},
  {"COMPUTATIONAL-X",       COMPX},
  {"COMPUTE",               COMPUTE},
  {"CONFIGURATION",         CONFIGURATION},
  {"CONSOLE",               CONSOLE},
  {"CONTAINS",              CONTAINS},
  {"CONTENT",               CONTENT},
  {"CONTINUE",              CONTINUE},
  {"CONTROL",               CONTROL},
  {"CONTROLS",              CONTROLS},
  {"CONVERTING",            CONVERTING},
  {"COPY",                  COPY}, 
  {"CORR",                  CORRESPONDING},
  {"CORRESPONDING",         CORRESPONDING},
  {"COUNT",                 COUNT},
  {"CRT",                   DISPLAY_SCREEN},
  {"CURRENCY",              CURRENCY},
  {"CURSOR",                CURSOR},
  {"CYCLE",                 CYCLE},
  {"DARK",                  DARK},
  {"DATA",                  DATA},
  {"DATA-POINTER",          DATA_POINTER},
  {"DATE",                  _DATE},
  {"DAY-AND-TIME",          DAY_AND_TIME},
  {"DATE-AND-TIME",         DATE_AND_TIME},
  {"DATE-COMPILED",         DATE_COMPILED},
  {"DATE-WRITTEN",          DATE_WRITTEN},
  {"DAY",                   _DAY},
  {"DAY-OF-WEEK",           DAY_OF_WEEK},
  {"DBCS",                  DBCS},
  {"DE",                    DE},
  {"DEBUGGING",             DEBUGGING},
  {"DECIMAL-POINT",         DECIMAL_POINT},
  {"DECLARATIVES",          DECLARATIVES},
  {"DEFAULT",               _DEFAULT},
  {"DELETE",                DELETE},
  {"DELIMITED",             DELIMITED},
  {"DELIMITER",             DELIMITER},
  {"DEPENDING",             DEPENDING},
  {"DESCENDING",            DESCENDING},
  {"DETAIL",                DETAIL},
  {"DISK",                  DISK},
  {"DISPLAY",               DISPLAY},
  {"DIVIDE",                DIVIDE},
  {"DIVISION",              DIVISION},
  {"DOWN",                  DOWN},
  {"DUPLICATES",            DUPLICATES},
  {"DYNAMIC",               DYNAMIC},
  {"ECHO",                  ECHOTOKEN},
  {"ELSE",                  ELSE},
  {"END",                   END},
  {"END-ACCEPT",            END_ACCEPT},
  {"END-ADD",               END_ADD},
  {"END-CALL-LOADLIB",      END_CALL_LOADLIB},
  {"END-CALL",              END_CALL},
  {"END-CHAIN",             END_CHAIN},
  {"END-COMPUTE",           END_COMPUTE},
  {"END-DELETE",            END_DELETE},
  {"END-DISPLAY",           END_DISPLAY},
  {"END-DIVIDE",            END_DIVIDE},
  {"END-EVALUATE",          END_EVALUATE},
  {"END-IF",                END_IF},
  {"END-MULTIPLY",          END_MULTIPLY},
  {"END-OF-PAGE",           END_OF_PAGE},
  {"END-PERFORM",           END_PERFORM},
  {"END-PROGRAM",           END_PROGRAM},
  {"END-READ",              END_READ},
  {"END-RETURN",            END_RETURN},
  {"END-REWRITE",           END_REWRITE},
  {"END-SEARCH",            END_SEARCH},
  {"END-START",             END_START},
  {"END-STRING",            END_STRINGCMD},
  {"END-SUBTRACT",          END_SUBTRACT},
  {"END-UNSTRING",          END_UNSTRING},
  {"END-WRITE",             END_WRITE},
  {"ENTER",                 ENTER},
  {"ENVIRONMENT",           ENVIRONMENT},
  {"ENVIRONMENT-VARIABLE",  ENVIRONMENT_VARIABLE},
  {"EOL",                   EOL},
  {"EOP",                   END_OF_PAGE},
  {"EOS",                   EOS},
  {"EQUAL",                 EQUAL},
  {"EQUALS",                EQUALS},
  {"ERASE",                 ERASE},
  {"ERROR",                 ERROR_TOK},
  {"ESCAPE",                _ESCAPE},
  {"EVALUATE",              EVALUATE},
  {"EXCEPTION",             EXCEPTION},
  {"EXCLUSIVE",             EXCLUSIVE},
  {"EXIT",                  EXIT},
  {"EXTEND",                EXTEND},
  {"EXTERNAL",              EXTERNAL},
  {"FALSE",                 FALSE_TOK},
  {"FD",                    FD},
  {"FILE",                  FILEX},
  {"FILE-CONTROL",          FILE_CONTROL},
  {"FILE-ID",               FILE_ID},
  {"FILLER",                FILLER},
  {"FINAL",                 FINAL},
  {"FIRST",                 FIRST},
  {"FLOAT-LONG",            USAGENUM},
  {"FLOAT-SHORT",           USAGENUM},
  {"FOOTING",               FOOTING},
  {"FOR",                   FOR},
  {"FOREVER",               FOREVER},
  {"FOREGROUND",            FOREGROUND},
  {"FOREGROUND-COLOR",      FOREGROUNDCOLOR},
  {"FROM",                  FROM},
  {"FULL",                  FULL},
  {"FUNCTION",              FUNCTION},
  {"FUNCTION-ID",           FUNCTION_ID},
  {"GENERATE",              GENERATE},
  {"GIVING",                GIVING},
  {"GLOBAL",                GLOBAL},
  {"GO",                    GO},
  {"GOBACK",                GOBACK},
  {"GREATER",               GREATER},
  {"GROUP",                 GROUP},
  {"HEADING",               HEADING},
  {"HIGH",                  HIGH},
  {"HIGH-VALUE",            HIGHVALUES},
  {"HIGH-VALUES",           HIGHVALUES},
  {"HIGHLIGHT",             HIGHLIGHT},
  {"I-O",                   I_O},
  {"I-O-CONTROL",           I_O_CONTROL},
  {"ID",                    IDENTIFICATION},
  {"IDENTIFICATION",        IDENTIFICATION},
  {"IF",                    IF},
  {"IGNORE",                IGNORE},
  {"IN",                    IN},
  {"INDEX",                 INDEXM},
  {"INDEXED",               INDEXED},
  {"INDICATE",              INDICATE},
  {"INITIAL",               INITIAL_TOK},
  {"INITIALIZE",            INITIALIZE},
  {"INITIATE",              INITIATE},
  {"INKEY",                 INKEY},
  {"INPUT",                 INPUT},
  {"INPUT-OUTPUT",          INPUT_OUTPUT},
  {"INSPECT",               INSPECT},
  {"INSTALLATION",          INSTALLATION},
  {"INTO",                  INTO},
  {"INVALID",               INVALID},
  {"IS",                    IS},
  {"IS",                    IS},
  {"INTRINSIC",             INTRINSIC}, 
  {"JUSTIFIED",             JUSTIFIED},
  {"KEY",                   KEY},
  {"KEYBOARD",              STD_INPUT},
  {"LABEL",                 LABEL},
  {"LAST",                  LAST},
  {"LEADING",               LEADING},
  {"LEFT",                  LEFT},
  {"LENGTH",                LENGTH},
  {"LESS",                  LESS},
  {"LIMIT",                 LIMIT},
  {"LIMITS",                LIMITS},
  {"LINAGE",                LINAGE},
  {"LINE",                  LINE},
  {"LINES",                 LINES},
  {"LINKAGE",               LINKAGE},
  {"LITERAL",               LITERAL},
  {"LOCK",                  LOCK},
  {"LOCAL-STORAGE",         LOCAL_STORAGE},
  {"LOW",                   LOW},
  {"LOW-VALUE",             LOWVALUES},
  {"LOW-VALUES",            LOWVALUES},
  {"LOWER",                 LOWER},
  {"LOWLIGHT",              LOWLIGHT},
  {"MANUAL",                MANUAL},
  {"MERGE",                 MERGE},
  {"MESSAGE",               _MESSAGE},
  {"MINUS",                 MINUS},
  {"MODE",                  MODE},
  {"MODULES",               MODULES},
  {"MOVE",                  MOVE},
  {"MULTIPLE",              MULTIPLE},
  {"MULTIPLY",              MULTIPLY},
  {"NATIVE",                NATIVE},
  {"NEGATIVE",              NEGATIVE},
  {"NEXT",                  NEXT},
  {"NO",                    NO},
  {"NO-ECHO",               NOECHO},
  {"NOT",                   NOT},
  {"NULL",                  NULL_TOK},
  {"NULLS",                 NULL_TOK},  
  {"NUMBER",                NUMBER},
  {"NUMBERS",               NUMBERS},
  {"NUMERIC",               NUMERIC},
  {"NUMERIC-EDITED",        NUMERIC_EDITED},
  {"OBJECT-COMPUTER",       OBJECT_COMPUTER},
  {"OCCURS",                OCCURS},
  {"OF",                    OF},
  {"OFF",                   OFF},
  {"OMITTED",               OMITTED},
  {"ON",                    ON},
  {"ONLY",                  ONLY},
  {"OPEN",                  OPEN},
  {"OPTIONAL",              OPTIONAL},
  {"OR",                    OR},
  {"ORDER",                 ORDER},
  {"ORGANIZATION",          ORGANIZATION},
  {"OTHER",                 OTHER},
  {"OUTPUT",                OUTPUT},
  {"OVERFLOW",              OVERFLOW_TOK},
  {"PACKED-DECIMAL",        PACKED_DECIMAL},
  {"PADDING",               PADDING},
  {"PAGE",                  PAGE_TOK},
  /*{"PAGE-COUNTER",          PAGE_COUNTER},*/
  {"PARAGRAPH",             PARAGRAPH},
  {"PERFORM",               PERFORM},
  {"PF",                    PF},
  {"PH",                    PH},
  {"PLUS",                  PLUS},
  {"POINTER",               POINTER},
  {"POSITION",              POSITION},
  {"POSITIVE",              POSITIVE},
  {"PREV",                  PREVIOUS},
  {"PREVIOUS",              PREVIOUS},
  {"PRINTER",               PRINTER},
  {"PROCEDURE",             PROCEDURE},
  {"PROCEDURES",            PROCEDURES},
  {"PROCEED",               PROCEED},
  {"PROGRAM",               PROGRAM},
  {"PROGRAM-ID",            PROGRAM_ID},
  {"PROMPT",                PROMPT},
  {"PURGE",                 PURGE},
  {"QUOTE",                 QUOTES},
  {"QUOTES",                QUOTES},
  {"RANDOM",                RANDOM},
  {"RD",                    RD},
  {"READ",                  READ},
  {"READY",                 READY},
  {"RECORD",                RECORD},
  {"RECURSIVE",             RECURSIVE},
  {"RECORDS",               RECORDS},
  {"REDEFINES",             REDEFINES},
  {"REFERENCE",             REFERENCE},
  {"REFERENCES",            REFERENCES},
  {"REEL",                  REEL},
  {"RELATIVE",              RELATIVE},
  {"RELEASE",               RELEASE},
  {"REMAINDER",             REMAINDER},
  {"REMARK",                REMARK},
  {"REMOVAL",               REMOVAL},
  {"RENAMES",               RENAMES},
  {"REPLACING",             REPLACING},
  {"REPORT",                REPORT},
  {"REPORTING",             REPORTING},
  {"REPORTS",               REPORTS}, 
  {"REPORTS",               REPORTS}, 
  {"REPOSITORY",            REPOSITORY},
  {"RESERVE",               RESERVE},
  {"RESERVED",              RESERVED},
  {"RESERVED-VIDEO",        RESERVED_VIDEO},
  {"RESET",                 RESET},
  {"RETURN",                RETURN_TOK},
  {"RETURNING",             RETURNING},
  {"REVERSE",               REVERSE},
  {"REVERSED",              REVERSE},
  {"REVERSE-VIDEO",         REVERSEVIDEO},
  {"REWIND",                REWIND},
  {"REWRITE",               REWRITE},
  {"RF",                    RF},
  {"RH",                    RH},
  {"RIGHT",                 RIGHT},
  {"ROUNDED",               ROUNDED},
  {"RUN",                   RUN},
  {"SAME",                  SAME},
  {"SCREEN",                SCREEN},
  {"SD",                    SD},
  {"SEARCH",                SEARCH},
  {"SECTION",               SECTION},
  {"SECURE",                SECURE},
  {"SECURITY",              SECURITY},
  {"SELECT",                SELECT},
  {"SENTENCE",              SENTENCE},
  {"SEPARATE",              SEPARATE},
  {"SEQUENCE",              SEQUENCE},
  {"SEQUENTIAL",            SEQUENTIAL},
  {"SET",                   SET},
  {"SIGN",                  SIGN},
  {"SIZE",                  SIZE},
  {"SORT",                  SORT},
  {"SORT-MERGE",            SORT_MERGE},
  {"SOURCE",                SOURCE},
  {"SOURCE-COMPUTER",       SOURCE_COMPUTER},
  {"SPACE",                 SPACES},
  {"SPACES",                SPACES},
  {"SPECIAL-NAMES",         SPECIAL_NAMES},
  {"STANDARD",              STANDARD},
  {"STANDARD-1",            STANDARD_1},
  {"STANDARD-2",            STANDARD_2},
  {"STANDARD-ERROR",        STD_ERROR},
  {"STANDARD-INPUT",        STD_INPUT},
  {"STANDARD-OUTPUT",       STD_OUTPUT},
  {"START",                 START},
  {"STATUS",                STATUS},
  {"STDCALL",               CALL_CONV_STDCALL},
  {"STD-ERROR",             STD_ERROR},
  {"STD-INPUT",             STD_INPUT},
  {"STD-OUTPUT",            STD_OUTPUT},
  {"STOP",                  STOP},
  {"STRING",                STRINGCMD},
  {"SUBTRACT",              SUBTRACT},
  {"SUM",                   SUM},
  {"SYNC",                  SYNCHRONIZED},
  {"SYNCHRONIZED",          SYNCHRONIZED},
  {"TALLYING",              TALLYING},
  {"TAB",                   TAB},
  {"TAPE",                  TAPE},
  {"TCOB-PROTOTYPE1",       TCOBPROTO1},
  {"TCOB-PROTOTYPE2",       TCOBPROTO2},
  {"TELLYING",              TELLYING},
  {"TERMINATE",             TERMINATE},
  {"TEST",                  TEST},
  {"THAN",                  THAN},
  {"THEN",                  THEN},
  {"THROUGH",               THRU},
  {"THRU",                  THRU},
  {"TIME",                  _TIME},
  {"TIMES",                 TIMES},
  {"TO",                    TO},
  {"TOP",                   TOP},
  {"TRACE",                 TRACE},
  {"TRAILING",              TRAILING},
  {"TRUE",                  TRUE_TOK},
  {"TYPE",                  TYPE},
  {"UNDERLINE",             UNDERLINE},
  {"UNIT",                  UNIT},
  {"UNLOCK",                UNLOCK},
  {"UNSIGNED",              _UNSIGNED},                
  {"UNSIGNED-CHAR",         USAGENUM},                
  {"UNSIGNED-DOUBLE",       USAGENUM},
  {"UNSIGNED-LONG",         USAGENUM},                
  {"UNSIGNED-SHORT",        USAGENUM},
  {"UNSTRING",              UNSTRING},
  {"UNTIL",                 UNTIL},
  {"UP",                    UP},
  {"UPDATE",                UPDATE},
  {"UPON",                  UPON},
  {"UPPER",                 UPPER},
  {"USAGE",                 USAGE},
  {"USE",                   USE},
  {"USING",                 USING},
  {"VALUE",                 VALUE},
  {"VALUES",                VALUE},
  {"VARYING",               VARYING},
  {"WHEN",                  WHEN},
  {"WINAPI",                CALL_CONV_STDCALL},
  {"WITH",                  WITH},
  {"WORDS",                 WORDS},
  {"WORKING-STORAGE",       WORKING_STORAGE},
  {"WRITE",                 WRITE},
  {"YYYYDDD",               YYYYDDD},  
  {"YYYYMMDD",              YYYYMMDD},  
  {"ZERO",                  ZERO},
  {"ZEROES",                ZERO},
  {"ZEROS",                 ZERO},
  {"<",                     LT},
  {"<=",                    LE},
  {"<>",                    NE},
  {"=",                     EQ},
  {">",                     GT},
  {">=",                    GE},
  {"",0}
};


struct intrinsic_function intrinsic_functions[] = {
{"ABS",             ITYPE_FLOAT,        1},
{"ACOS",            ITYPE_FLOAT,        1},
{"ANNUITY",         ITYPE_FLOAT,        2},
{"ASIN",            ITYPE_FLOAT,        1},
{"ATAN",            ITYPE_FLOAT,        1}, 
{"CHAR",            ITYPE_INLINE,       1}, /* inline */
{"COS",             ITYPE_FLOAT,        1}, 
{"CURRENT-DATE",    ITYPE_DATETIME,     0},
{"DATE-OF-INTEGER", ITYPE_DATE,         1},
{"DATE-TO-YYYYMMDD",ITYPE_DATE,         ANY_NUMBER}, /* params can be 1 or 2 */
{"DAY-OF-INTEGER",  ITYPE_JULIANDATE,   1},
{"DAY-TO-YYYYDDD",  ITYPE_JULIANDATE,   ANY_NUMBER}, /* params can be 1 or 2 */
{"FACTORIAL",       ITYPE_INT,          1}, 
{"INTEGER",         ITYPE_INT,          1}, 
{"INTEGER-OF-DATE", ITYPE_INT,          1}, 
{"INTEGER-OF-DAY",  ITYPE_INT,          1}, 
{"INTEGER-PART",    ITYPE_INT,          1}, 
{"LENGTH",          ITYPE_INLINE,       1}, /* inline */
{"LOG",             ITYPE_FLOAT,        1},
{"LOG10",           ITYPE_FLOAT,        1},
{"LOWER-CASE",      ITYPE_ALPHA,        1},
{"MAX",             ITYPE_FLOAT,        ANY_NUMBER}, 
{"MEAN",            ITYPE_FLOAT,        ANY_NUMBER},
{"MEDIAN",          ITYPE_FLOAT,        ANY_NUMBER},
{"MIDRANGE",        ITYPE_FLOAT,        ANY_NUMBER},
{"MIN",             ITYPE_FLOAT,        ANY_NUMBER},
{"MOD",             ITYPE_INT,          2}, 
{"NUMVAL",          ITYPE_FLOAT,        1},
{"NUMVAL-C",        ITYPE_FLOAT,        ANY_NUMBER},
{"ORD",             ITYPE_INLINE,       1},    /* inline */
{"ORD-MAX",         ITYPE_INT,          ANY_NUMBER},
{"ORD-MIN",         ITYPE_INT,          ANY_NUMBER},
{"PRESENT-VALUE",   ITYPE_FLOAT,        ANY_NUMBER},
{"RANDOM",          ITYPE_FLOAT,        ANY_NUMBER}, /* really 1 or 0 params */
{"RANGE",           ITYPE_FLOAT,        ANY_NUMBER},
{"REM",             ITYPE_INT,          2},
{"REVERSE",         ITYPE_ALPHA,        1},
{"SIN",             ITYPE_FLOAT,        1},
{"SQRT",            ITYPE_FLOAT,        1}, 
{"STANDARD-DEVIATION",ITYPE_FLOAT,      ANY_NUMBER},
{"SUM",             ITYPE_FLOAT,        ANY_NUMBER},
{"TAN",             ITYPE_FLOAT,        1}, 
{"TEST-DATE-YYYYMMDD",ITYPE_INT,        1},
{"TEST-DAY-YYYYDDD",ITYPE_INT,          1},
{"UPPER-CASE",      ITYPE_ALPHA,        1},
{"VARIANCE",        ITYPE_FLOAT,        ANY_NUMBER},
{"WHEN-COMPILED",   ITYPE_INLINE,       0}, /* inline (we should save the date at compile time) */
{"YEAR-TO-YYYY",    ITYPE_YEAR,         1},
{"",0,0}
};


static struct reserved_sym *reserved_tab[ HASHLEN ]={NULL};

static struct intrinsic_sym *intrinsic_tab[ HASHLEN ]={NULL};

struct reserved_sym *lookup_reserved( char *s ) {
    struct reserved_sym *as;
    for ( as = reserved_tab[ hash(s) ] ; as != NULL ; as = as->next )
        if ( strcasecmp( s, as->name ) == 0 ) {
                return( as );
        }
    return( NULL );
}

char * reverse_lookup(int tok){
    char * retval = NULL;
    for(int i = 0; reserved_symbols[i].token != 0; i++){
        if(tok == reserved_symbols[i].token) {
            retval = reserved_symbols[i].name;
            break;
        }
    }
    return retval;
}

void install_reserved( void ) {
    struct reserved_sym *as = NULL;
    struct intrinsic_sym *is = NULL;
    int val,i;
    for (i=0;strcmp(reserved_symbols[i].name,"");i++) {
        as = (struct reserved_sym *)
            malloc( sizeof(struct reserved_sym) );
        as->name = savename( reserved_symbols[i].name );
        val = hash( as->name );
        as->next = reserved_tab[ val ];
        reserved_tab[ val ] = as;
        as->i=i;
    }
    for (i=0;strcmp(intrinsic_functions[i].name,"");i++) {
        is = (struct intrinsic_sym *)
            malloc( sizeof(struct intrinsic_sym) );
        is->name = savename( intrinsic_functions[i].name );
        val = hash( is->name );
        is->next = intrinsic_tab[ val ];
        intrinsic_tab[ val ] = is;
        is->i=i;
    }
}

int reserved( char *s ) {
    struct reserved_sym *r;
    if ((r=lookup_reserved(s))!=NULL) {
        return reserved_symbols[r->i].token;
    }
    return 0;
}

struct intrinsic_sym *lookup_intrinsic_sym( char *s ) {
    struct intrinsic_sym *is;
    for ( is = intrinsic_tab[ hash(s) ] ; is != NULL ; is = is->next )
        if ( strcasecmp( s, is->name ) == 0 ) {
            return( is );
        }
    return( NULL );
}
struct intrinsic_function *lookup_intrinsic_function( char *s ) {
	struct intrinsic_sym *is;
    for ( is = intrinsic_tab[ hash(s) ] ; is != NULL ; is = is->next )
        if ( strcasecmp( s, is->name ) == 0 ) {
            return & ( intrinsic_functions[is->i] );
        }
    return( NULL );
}

int hash( char *s ) {
    int val;
    for ( val = 0 ; *s != '\0'; )
        val += toupper(*s++);
    return( val % HASHLEN );
}


char *savename( char *s ) {
    char *ap;
    if ((ap = (char *) malloc( strlen(s) + 1 )) != NULL)
        strcpy(ap,s);
    return( ap );
}

char *upcase( char *s, char *buf ) {
    char *t;
    int n=SYMBUF_SIZE-1;
    t = buf;
    while (*s && n--) {
            *t++ = toupper(*s++);
    }
    if (n<=0) {
            /* yyerror("Too large symbol");
             */
        printf("Too large symbol"); 
    }
    *t=0;
    return buf;
}

//TODO:
// items pending:
//1. Effectively deleting the lists...
