/* 
 * File:   reswords.h
 * Borrowed code. Source not known. Please add the credits if you know the source. 
 */

#ifndef RESWORDS_H
#define	RESWORDS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/time.h>

#ifdef	__cplusplus
extern "C" {
#endif

#define HASHLEN         100
#define SYMBUF_SIZE     128
    

/* Enumerate the types of intrinsic functions */
enum {
        ITYPE_FLOAT,
        ITYPE_INT,
        ITYPE_DATE,
        ITYPE_DATETIME,
        ITYPE_JULIANDATE,
        ITYPE_YEAR,
        ITYPE_ALPHA,
        ITYPE_INLINE
}; 

struct intrinsic_function {
        char *name;
        char function_type;
        short args;
};
struct intrinsic_function *lookup_intrinsic_function( char *s );

#define ANY_NUMBER 32767        
    
    
struct reserved_symbol {
        char *name;
        int token;
};

struct reserved_sym {
        char *name;
        struct reserved_sym *next;
        int i; /* index on reserved symbol table */
};

struct intrinsic_sym {
        char *name;
        struct intrinsic_sym *next;
        int i; /* index on intrinsic symbol table */
};
    
void install_reserved (void);
int reserved( char *s );
struct reserved_sym *lookup_reserved( char *s );
char * reverse_lookup(int tok);
struct intrinsic_sym *lookup_intrinsic_sym( char *s );
int hash( char *s );
char *savename( char *s );
char *upcase( char *s, char *buf );


#ifdef	__cplusplus
}
#endif

#endif	/* RESWORDS_H */

