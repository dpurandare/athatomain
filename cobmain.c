/*
 * File: cobmain.c
 * Created Date: Monday August 25th 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Monday August 25th 2014 12:51:35 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 */
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <string.h>
#include <time.h>
#include "global.h"
#include "y.tab.h"
#include "cobmain.h"
#include "util/reswords.h"

extern char **fileList;
extern unsigned currentFile;
extern unsigned nFiles;
extern FILE *yyin;
FILE *file;
int debug_level = 2;
int file_format;      // -f
int dump_flag;        // -d
int analyze_only;     // -a
int generate_only;    // -g
int analyze_generate; // -x
char *config_file;
int stopFound;

/* from the lexer */
char *currentline;

extern int yywrap();
extern int yyparse();

int main(int argc, char *argv[])
{

    clock_t begin, end;
    double time_spent;

    // Start the parser
    fileList = (char **)malloc(sizeof(char *) * 100);
    currentFile = 0;

    // trivial loop counters
    int c;
    int i;
    int index;

    // start measuring time
    begin = clock();

    /* Initialization of the argument holders with the defaults */
    file_format = FREE;   // -f
    dump_flag = 0;        // -d
    analyze_only = 0;     // -a
    generate_only = 0;    // -g
    analyze_generate = 1; // -x
    config_file = NULL;
    stopFound = 0;

    /* Perform all initialization
     *  initialize the reserved word lookup 
     *  initialize the ast mechanism
     */
    install_reserved();
    initialize_cpp();

    if (argc < 4)
    {
        disp_help();
        return 0;
    }

    while ((c = getopt(argc, argv, "f:t:i:dagxhc:")) != -1)
    {
        switch (c)
        {
        case 'f': //format
            //printf("Arg : %s", (char *)optarg);
            if (strcmp(optarg, "fixed") == 0)
                file_format = FIXED;
            else
                file_format = FREE;
            break;
        case 'd': // dump project
            dump_flag = 1;
            break;
        case 'i': // include folder name that has the copybooks
            setIncludePath(optarg);
            break;
        case 'a': // analyze the code
            analyze_only = 1;
            break;
        case 'g': // generate the code
            generate_only = 1;
            break;
        case 'x': // analyze and generate the code
            analyze_only = 1;
            generate_only = 1;
            break;
        case 'h': // help - display the help menu
            disp_help();
            break;
        case 'c': // generation configuration
            setGenConfigPath(optarg);
            break;
        case 't': // target directory for code generation
            setTargetPath(optarg);
            break;
        default:
            // dump the unrecognizable command options and quit.
            break;
        }
    }

    for (i = 0, index = optind; index < argc; index++, i++)
    {
        fileList[i] = argv[index];
    }
    fileList[i] = 0;
    nFiles = i;

    /* dump file names */
    int j;
    for (j = 0; j < nFiles; j++)
    {
        dbg_print(DBG_TRACE, "Arg File Name :%s\n", fileList[j]);
    }

    /* temporary : save first file name for proc div processing */
    if (i > 0)
        setFirstFile(fileList[0]);

    /* parse */
    if (i == 1)
    {
        /*
         * we handle the single file case differently from
         * the multiple file case since we don't need to
         * print a summary line
         */
        currentFile++;
        file = fopen(fileList[0], "r");
        currentFileName = fileList[0];
        if (!file)
        {
            fprintf(stderr, "couldn't open %s\n", fileList[0]);
            exit(1);
        }
        // This will create a new cobFile.
        // The rest will have to be handled with the yywrap function...
        //addFile(fileList[0]);
        printf("File : %s\n", fileList[0]);
        yyin = file;
    }
    if (i > 1)
        yywrap(); /* open first file */
    yyparse();

    // After the parse is complete perform the requested operations.
    // Dump the project
    if (dump_flag == 1)
        dumpProject();
    // Generate the code
    if (generate_only == 1)
        generate();
    // Analyze the project
    if (analyze_only == 1)
        analyze();
    /*
     * Do all cleanup before quitting. 
     * release reserved words, function symbols, symbol tables and other 
     * structures that are dynamically allocated
     */
    release_cpp();
    end = clock();

    /*time_spent = (double)(end - begin) / CLK_TCK;*/
    time_spent = ((double)(end - begin) / CLOCKS_PER_SEC) * 1000.0;
    printf("Total execution time (ms) : %f\n", time_spent);

    // release
    free(fileList);

    return (EXIT_SUCCESS);
}
/* Print the help message*/
void disp_help()
{
    printf("Cob%d:%d : Athato\n", (APP_VERSION), (APP_BUILD));
    printf("Purandare Consulting Copyright 2014 - All rights reserved.\n");
    printf("Overview: COBOL source analyzer and converter.\n");
    printf("Usage: athatomain [Options] <source file names>\n");
    printf("Options:\n");
    printf("\t-f\tFormat: <free/fixed>\n");
    printf("\t-t\tTarget folder for generated files: <generated files folder path> \n");
    printf("\t-i\tInclude folder for copybooks: <copybook folder path> \n");
    printf("\t-a\tAnalyse the source \n");
    printf("\t-g\tGenerate target code\n");
    printf("\t-x\tAnalyze and generate target code\n");
    printf("\t-h\tHelp: display this information\n");
    printf("\t-c\tGeneration configuration path: <configuration file path>\n");
}

/*  
 *  Version     : 0.6 Mar 31, 2014 : 06:00 PM 
 *              : 0.7 July 22, 2014 : 06:00 PM
 *              : 0.71 September 18, 2014 : 03:07 PM
 * 
 *  Items pending from Build 14 : 
 *      - Multi-line string constant : not done. 
 *      - Implementation of intrinsic function evaluation in the parser and every 
 *              possible location. : basic mechanism done, need enhancement
 * 
 *  Items pending from Build 15 :
 *  - File handling of all kind, including the RDBMS related matters. : partially done
 *  - Preprocessing of the copybooks. : not done
 *  - Configurations and related items. Serialization of the configurations. : partially done
 *  - Java API for the required generated code. : done, however need to revisit for the COB17 
 * 
 *  Pending from Build 16 : started July 22
 *  - Priority 0-1-2 items listed in the plan : progress on many fronts achieved
 * 
 * Objectives for Build 17 (Nov 15, 2014)
 * Mandatory:
 * 1. Stability of main program and nested programs structures, call semantics with arguments
 * 2. Restructuring of the programs and methods for the scope of variables at various level
 *      -File Section 
 *      -Wprking Storage Section
 *      -Locale Storage Section
 *      -Linkage Section
 *      -Communication Section 
 *      -Screen Section 
 * 3. Generation of nested programs and programs calling other programs, parameter passing logic
 * 4. Completion of the file operations for Sequential and Direct Access Files 
 * 5. Implementation of the basic persistence through the Hibernate and support to basic file operations
 *      open, close, read, write, search 
 * 6. Implement the OCCURS
 * 7. Implement the VALUE
 * 8. Implement the 88, 78, 66 fields, 88 Field Value 
 * 9. USAGE clause related implementation
 * 10. FILLER - generation of filler fields. 
 * 
 * Good to have
 * 6. Implementation of Intrinsic functions
 * 7. Pending features in Lexer: multi line string constant 
 * 8. Implementation of Function Division
 * 
 * Objectives for Build 18 (tentatively planned for Nov 30)
 * 1. Preprocessor and copy books 
 * 2. Remaining enhancements for the Hibernate
 * 3. Lexer fixing 
 * 4. Completion of intrinsic functions
 */