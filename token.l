/*
 * File: token.l
 * Created Date: Friday April 25th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Friday April 25th 2014 6:09:08 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 */

%option 8bit
%option caseless
%option stack

%{
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "y.tab.h"
#include "cobmain.h"
#include "global.h"
#include "util/reswords.h"


#define BUFFERSIZE 1024
#define DBG_LINENO yylineno - 1

#undef YY_INPUT
#define YY_INPUT(b,r,ms) { r = myinput(b, ms); ++yylineno; }

/* temporary values */
//TODO: these should be moved to some other place. Check later

char tmpStr[BUFFERSIZE];

#define string_token() strncpy(tmpStr, yytext,sizeof(tmpStr))

char *removeQuote(int left, int right);

%}

_comma          [,]
whitespace      [\r\t ]([\r\t ])*
whitespace_nl   [\r\t \n]([\r\t \n])*
digit           [0-9]
hex_digit       [0-9AaBbCcDdEeFf]
nines           [9]+
xes             [Xx]+
xeswithlength   {xes}"("{integer}")"
aes             [Aa]+
ninewithlength  {nines}"("{integer}")"
dot             \.{whitespace_nl}
integer         {digit}({digit})*
not_space       [^\n\r\t .]
internal_dot    \.{not_space}
number          {digit}*{internal_dot}({digit})*
hexnumber       [Hh][\"\']{hex_digit}*[\"\']
hexliteral      [Xx][\"\']{hex_digit}*[\"\']
relop           [<>=]
alphanum        [A-Za-z0-9]([[A-Za-z0-9])*
identifier      {alphanum}(({alphanum}|-|_|$)*{alphanum}+)?
dquote_text     "\""[^\n\"]*"\""
squote_text     "\'"[^\n\']*"\'"
pow_op          "**"


%x PIC_STATE VALUE_STATE TXT_STATE ID_STATE

%%

PIC|PICTURE {
        BEGIN(PIC_STATE);
        dbg_print(DBG_TOK, "%d: Found PIC    : %s\n", DBG_LINENO, yytext);
        return PICTURE;
    }
 /***************** PIC_STATE **********************/
<PIC_STATE>{

IS      { return IS; }
ARE     { return ARE; }

{nines} {
    BEGIN(INITIAL);
    dbg_print(DBG_TOK, "%d: picstr nines   : %s\n", DBG_LINENO, yytext);
    yylval.sval = yytext;    
    return PICTURE_STR;
    }
{ninewithlength} {
    BEGIN(INITIAL);
    dbg_print(DBG_TOK, "%d: picstr nine-length   : %s\n", DBG_LINENO, yytext);   
    yylval.sval = yytext;
    return PICTURE_STR;
    }
({ninewithlength}|{nines})"V"({ninewithlength}|{nines}) {
    BEGIN(INITIAL);
    dbg_print(DBG_TOK, "%d: picstr nineswithV   : %s\n", DBG_LINENO, yytext);   
    yylval.sval = yytext;
    return PICTURE_STR;
    }
{xeswithlength}  {
    BEGIN(INITIAL);
    dbg_print(DBG_TOK, "%d: picstr xes-length   : %s\n", DBG_LINENO, yytext);   
    yylval.sval = yytext;
    return PICTURE_STR;
    }
{xes} {
    BEGIN(INITIAL);
    dbg_print(DBG_TOK, "%d: picstr xes   : %s\n", DBG_LINENO, yytext);   
    yylval.sval = yytext;
    return PICTURE_STR;
    }
{not_space}+(\.{not_space}+)* { 
    BEGIN(INITIAL);
    dbg_print(DBG_TOK, "%d: general pic  : %s\n", DBG_LINENO, yytext);   
    yylval.sval = yytext;
    return PICTURE_STR;
    }
[\n\t\r ]  { 
        dbg_print(0, "333%d: space    : %s\n", DBG_LINENO, yytext); 
    } 
} /* end PIC_STATE */

<PIC_STATE,INITIAL>{
{dot} { 
        BEGIN(INITIAL);
        dbg_print(DBG_TOK, "%d: period inside PIC-INITIAL   : %s\n", DBG_LINENO, yytext);
        return PERIOD;
    }
[\n\t\r ] { 
        dbg_print(0, "555 %d: space    : %s\n", DBG_LINENO, yytext);
        BEGIN(INITIAL);
    }
}
 /*************** Outside any state ******************/
[\'\"] {
	/* string literal */
	return read_literal_str(yytext[0]);
}

{pow_op} {
        dbg_print(0, "%d: POW_OP   : %s\n", DBG_LINENO, yytext); 
        return _POW_OP;    
    }
{dquote_text} { 
        dbg_print(DBG_TOK, "%d: dquote -outside  : %s\n", DBG_LINENO, yytext); 
        string_token(); 
        yylval.sval = removeQuote(1, 1);
        return DQUOTE_LITERAL;
    }
{squote_text} { 
        dbg_print(DBG_TOK, "%d: squote   : %s\n", DBG_LINENO, yytext); 
        string_token(); 
        yylval.sval = removeQuote(1, 1);
        return SQUOTE_LITERAL;
    }
{integer}  { 
        dbg_print(DBG_TOK, "%d: integer   : %s\n", DBG_LINENO, yytext);
        yylval.ival = atoi(yytext);
        return INTEGER_LITERAL;
    }
{number}   { 
        dbg_print(DBG_TOK, "%d: number   : %s\n", DBG_LINENO, yytext);
        yylval.fval = atof(yytext);
        return NUMBER_LITERAL;
    }
{hexnumber} {
        dbg_print(DBG_TOK, "%d: hex_num  : %s\n", DBG_LINENO, yytext); 
        string_token();
        yylval.longVal = strtol( removeQuote(2, 1), NULL, 16);  
                /* remove H|h and DQuote  */
        return HEX_NUMBER_LITERAL;
    }
{hexliteral} {
        dbg_print(DBG_TOK, "%d: hex_literal: %s\n", DBG_LINENO, yytext);        
        string_token();
        yylval.sval = removeQuote(2, 1); /* remove H|h and SQUOTE */
        return HEX_STRING;
}
{identifier} { 
        int retcode = 0;
        if ((retcode = reserved(yytext)) != 0 ){

            struct reserved_sym *sym = lookup_reserved(yytext);
            dbg_print(DBG_TOK, "%d: Keyword    : %s\n", DBG_LINENO, sym->name); 
            yylval.sval = yytext;
            if( retcode == EQ ) { 
                dbg_print(DBG_TOK, "%d: Found equal sign ... should you find it\n", DBG_LINENO); 
            }
            if( retcode == LT ) {
                dbg_print(DBG_TOK, "%d: Found LT sign ... should you find it\n", DBG_LINENO); 
            }
            if( retcode == GT ) {
                dbg_print(DBG_TOK, "%d: Found GT sign ... should you find it\n", DBG_LINENO); 
            }

            return retcode;
        } 
        else {
            /* this is not a keyword */
            dbg_print(DBG_TOK, "%d: Outside ID state identifier : %s\n", DBG_LINENO, yytext);
            yylval.sval = strdup(yytext);
            BEGIN(ID_STATE);
            return IDENTIFIER;
        }
    }
^"*".*$ {
            /* this is the comment */
        dbg_print(DBG_TOK, "%d: **** identified comment **** \n", DBG_LINENO);
    }
 /*
 
^"D".* { 
             this is the comment. This could be used for debug mode as well 
    }
  */
^"/".* {
        /* ignore for time being. */
    }

^[ ]*"$".* {

}

{relop}{relop}? {
        int retcode = 0;
        if ((retcode = reserved(yytext)) != 0 ){
            struct reserved_sym *sym = lookup_reserved(yytext);
            dbg_print(DBG_TOK, "%d: Keyword    : %s\n", DBG_LINENO, sym->name); 
            yylval.sval = yytext;
            dbg_print(DBG_TOK, "%d: Found relational operator ... %d\n", DBG_LINENO, retcode);
            return retcode;
        }
        else {
            dbg_print(DBG_TOK, "Unknown relational operator at %d\n", yylineno);
        }
    }

[+] { dbg_print(DBG_TOK, "%d: The plus sign.\n", DBG_LINENO); return _PLUS; }
[-] { dbg_print(DBG_TOK, "%d: The minus sign.\n", DBG_LINENO); return _MINUS; }
[*] { dbg_print(DBG_TOK, "%d: The multiply sign.\n", DBG_LINENO); return _MULTIPLY; }
[/] { dbg_print(DBG_TOK, "%d: The divide sign.\n", DBG_LINENO); return _DIVIDE; }

[(] { /* BEGIN(ID_STATE); */ dbg_print(DBG_TOK,"inside the lparan starting ID_STATE\n"); return LPARAN_SUB; }
[)] { dbg_print(DBG_TOK, "inside the RPARAN_SUB outside IDSTATE\n"); return RPARAN_SUB; }
{_comma} { 
        /* BEGIN(INITIAL); */
        return COMMA; 
    }

{whitespace} {     }
{whitespace_nl} {     }

 /********************** ID_STATE **************************/
<ID_STATE>{
PIC|PICTURE {
        BEGIN(PIC_STATE);
        dbg_print(DBG_TOK, "%d: Found PIC    : %s\n", DBG_LINENO, yytext);
        return PICTURE;
    }
{_comma} { 
        /* BEGIN(INITIAL); */
        return COMMA; 
    }

{whitespace} {   /* BEGIN(INITIAL); */ }

^"*".*$ {
            /* this is the comment */
        dbg_print(DBG_TOK, "%d: **** identified comment **** \n", DBG_LINENO);
    }
{dot} { 
        BEGIN(INITIAL);
        dbg_print(DBG_TOK, "%d: Period    : %s\n", DBG_LINENO, yytext);
        return PERIOD;
    }
{integer}  { 
        dbg_print(DBG_TOK, "%d: integer   : %s\n", DBG_LINENO, yytext);
        yylval.ival = atoi(yytext);
        return INTEGER_LITERAL;
    }
{identifier} { 
        int retcode = 0;
        if ((retcode = reserved(yytext)) != 0 ){
            struct reserved_sym *sym = lookup_reserved(yytext);
            dbg_print(DBG_TOK, "%d: Inside ID SCOPE Keyword    : %s\n", DBG_LINENO, sym->name); 
            yylval.sval = yytext;
            if( retcode == EQ ) { 
                dbg_print(DBG_TOK, "%d: Found equal sign ... should you find it\n", DBG_LINENO); 
            }
            if( retcode == LT ) {
                dbg_print(DBG_TOK, "%d: Found LT sign ... should you find it\n", DBG_LINENO); 
            }
            if( retcode == GT ) {
                dbg_print(DBG_TOK, "%d: Found GT sign ... should you find it\n", DBG_LINENO); 
            }

            BEGIN(INITIAL); 
            return retcode;
        } 
        else {
            /* this is not a keyword */
            dbg_print(DBG_TOK, "%d: Inside ID SCOPE Identifier : %s\n", DBG_LINENO, yytext);
            yylval.sval = yytext;
            /* BEGIN(INITIAL); */
            return IDENTIFIER;
        }
    }
{relop}{relop}? {
        int retcode = 0;
        if ((retcode = reserved(yytext)) != 0 ){
            struct reserved_sym *sym = lookup_reserved(yytext);
            dbg_print(DBG_TOK, "%d: Keyword    : %s\n", DBG_LINENO, sym->name); 
            yylval.sval = yytext;
            dbg_print(DBG_TOK, "%d: Found relational operator ... %d\n", DBG_LINENO, retcode);
            return retcode;
        }
        else {
            dbg_print(DBG_TOK, "Unknown relational operator at %d\n", yylineno);
        }
    }
 /*
[=] { return EQ; }
[>] { return GT; }
[<] { return LT; }
"<=" { return LE; }
">=" { return GE; }
 */

[(] {  dbg_print(DBG_TOK, "inside the lparan ID_state\n"); return LPARAN_SUB;}
[)] {  dbg_print(DBG_TOK, "inside the RPARAN_SUB insiade IDSTATE\n"); /* BEGIN(INITIAL); */ return RPARAN_SUB; }

{pow_op} {
        dbg_print(DBG_TOK, "%d: POW_OP              : %s\n", DBG_LINENO, yytext); 
        return _POW_OP;    
    }
{dquote_text} { 
        dbg_print(DBG_TOK, "%d: Dquote String- id_state       : %s\n", DBG_LINENO, yytext); 
        string_token();   yylval.sval = removeQuote(1, 1);
        return DQUOTE_LITERAL;
    }
{squote_text} { 
        dbg_print(DBG_TOK, "%d: Squote String       : %s\n", DBG_LINENO, yytext); 
        string_token();   yylval.sval = removeQuote(1, 1);
        return SQUOTE_LITERAL;
    } 
    /*
{integer}  { 
        dbg_print(DBG_TOK, "%d: Integer             : %s\n", DBG_LINENO, yytext);
        yylval.ival = atoi(yytext);
        return INTEGER_LITERAL;
    } 
    */
{number}   { 
        dbg_print(DBG_TOK, "%d: number   : %s\n", DBG_LINENO, yytext);
        yylval.fval = atof(yytext);
        return NUMBER_LITERAL;
    }
{hexnumber} {
        dbg_print(DBG_TOK, "%d: hex_num  : %s\n", DBG_LINENO, yytext); 
        string_token();  yylval.longVal = strtol( removeQuote(2, 1), NULL, 16);  
                /* remove H|h and DQuote  */
        return HEX_NUMBER_LITERAL;
    }
{hexliteral} {
        dbg_print(DBG_TOK, "%d: hex_literal: %s\n", DBG_LINENO, yytext);        
        string_token();  yylval.sval = removeQuote(2, 1); 
            /* remove H|h and SQUOTE */
        return HEX_STRING;
    }
[+] { dbg_print(DBG_TOK, "%d: The plus sign.\n", DBG_LINENO); return _PLUS; }
[-] { dbg_print(DBG_TOK, "%d: The minus sign.\n", DBG_LINENO); return _MINUS; }
[*] { dbg_print(DBG_TOK, "%d: The multiply sign.\n", DBG_LINENO); return _MULTIPLY; }
[/] { dbg_print(DBG_TOK, "%d: The divide sign.\n", DBG_LINENO); return _DIVIDE; }
[:] { dbg_print(DBG_TOK, "%d: The colon sign.\n", DBG_LINENO); return _COLON; }
    /* check for added new lines... */
[\n\t\r ]  { 
        dbg_print(0, "333%d: space    : %s\n", DBG_LINENO, yytext); 
    } 

}


%%

int myinput( char *buff, int max_size) {

    int	ipchar;
    size_t	gotcr;
    int	i;
    int	n;
    int forward;
    int	coln;

    /* initialize the buffer to all 0 */
    memset (buff, 0, 256);


    /* read a line assumed that no line longer than 256 */
    ipchar = 0;
    forward = 0;
    for (n = 0; n < 256 && ipchar != '\n';) {
        ipchar = getc (yyin);
        forward++;
        if (ipchar == EOF) {
            if (n == 0) {
                return 0;
            }
            memset (buff, '\n', n);
            buff[n] = 0;
            // newline_count = 0; 
            return strlen (buff);
        }

        // Try removing the numbers in case of FIXED format.
        if ( file_format == FIXED ){
            if( forward == 1){ 
                /* seen somewhere that the six digits are not necessarily numeric */
                for(; forward++ < 7 ; ) {
                    ipchar = getc(yyin);
                        if (ipchar == EOF ) break;
                }
            }
            // forward is going to be past n now after skipping the six leading chars. 
            if( forward == 74){
                ipchar = getc(yyin);
                while( (forward++ < 82) && (ipchar != '\n') && (ipchar != EOF)) 
                    ipchar = getc(yyin);
            }
        }
        // dbg_print(DBG_TOK, "%c", ipchar); 
        // comments to be handled in the lexer. 

        buff[n++] = ipchar;
    }
    dbg_print(DBG_TOK, "New input line: %s\n", buff);
    /* yylineno++; */
    currentline = buff;
    return strlen (buff);
}

static int
read_literal_str (int quote)
{
	size_t	i = 0;
	int		c;

        dbg_print(DBG_TOK,"**** Inside read_literal_str function ****\n");
	if (!plexbuff) {
		plexbuff = calloc (1, COB_MINI_BUFF);
		plexsize = COB_MINI_BUFF;
	}

	while ((c = input ()) != EOF) {
		plexbuff[i++] = c;
		if (c == quote && (c = input()) != quote) {
			i--;
			unput (c);
			break;
		}
		if (i >= plexsize) {
			plexsize *= 2;
			plexbuff = realloc (plexbuff, plexsize);
		}
	}
	if (!i) {
		dbg_print(DBG_TOK, "Alphanumeric literal has zero length, A SPACE will be assumed.\n");
		i = 1;
		plexbuff[0] = ' ';
	}
	plexbuff[i] = 0;
	yylval.sval = plexbuff;

    dbg_print(DBG_TOK, "**** str value : %s\n", plexbuff);
    
    if (quote == '\"') return DQUOTE_LITERAL;
	return SQUOTE_LITERAL;
}

char *removeQuote(int left, int right) {
  char *s2, *s1;
  int strLength;
  
  s1 = tmpStr;
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
  return (char *)tmpStr;
}
