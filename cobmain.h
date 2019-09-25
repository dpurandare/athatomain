/*
 * File: cobmain.h
 * Created Date: Sunday August 31st 2014
 * Author: Deepak Purandare
 * -----
 * Last Modified: Sunday August 31st 2014 8:37:47 pm
 * Modified By: Deepak Purandare - <deepak_purandare@hotmail.com>
 * -----
 * Copyright (c) 2019 Purndare Consulting
 * This software is made available under GNU General Public License Version 3
 * Visit http://www.gnu.org/licenses/gpl-3.0.html for terms of usage.
 */

#ifndef COB7_H
#define COB7_H

#ifdef __cplusplus
extern "C"
{
#endif

    extern char **fileList;
    extern unsigned currentFile;
    extern unsigned nFiles;
    extern FILE *yyin;
    extern char *currentFileName;

    /* command line arguments */
    extern int file_format;
    extern int dump_flag;
    extern int analyze_only;
    extern int generate_only;
    extern int analyze_generate;
    extern int stopFound;

    /* from the lexer */
    extern char *currentline;

    typedef enum
    {
        FREE = 0,
        FIXED = 1
    } format;

// parser related items
#define DBG_TOK 2
#define DBG_PARSER 2
#define DBG_TRACE 2
#define DBG_ERROR 3

#define DEBUG 3

#define debug_print(...)                  \
    do                                    \
    {                                     \
        if (DEBUG)                        \
            fprintf(stdout, __VA_ARGS__); \
    } while (0)

#define dbg_print(x, ...)                 \
    do                                    \
    {                                     \
        if (x >= DEBUG)                   \
            fprintf(stdout, __VA_ARGS__); \
    } while (0)

#define COB_MINI_BUFF 256
#define COB_SMALL_BUFF 1024
#define COB_NORMAL_BUFF 2048
#define COB_MEDIUM_BUFF 8192

#define APP_VERSION 1
#define APP_BUILD 17
#define APP_VERSION_BUILD ((APP_VERSION) \
                           : (APP_BUILD))

    int myinput(char *buff, int max_size);
    static size_t plexsize;
    static char *plexbuff = NULL;
    static int read_literal_str(int quote);
    void disp_help();
#ifdef __cplusplus
}
#endif

#endif /* COB7_H */

/*
COBOL Project/Program structure (nodes with cardinality) (not complete)

Project -1
    ProjectInfo -1 
        Name -1
        FilesType: fixed/free -1
    DateTimeOfAnalysis -1
    Files 1
        FileInfo + 
            Name -1
    ProjectFileDetails -1
	ProjectItem +      
            Type -1	 --Program or Function
            FileName -1
            PrgramName -1
            IdentificationDivision -? --for function division the IdentificationDivision is not present 
                programName -1
                common_initial -?
                author -?
                installation -?
                dateWritten -?
                datecompiled -?
                securityOptions -?
                remarks -?
            EnvironmentDivision -?   --there could be programs without Env Div
                ConfigurationSection -? 
                    SourceComp  -?
                    ObjectComp  -?
                    SpecialName -?
                InputOutputSection -?
                    FileControl -?
                        FileControlItem +
                            Optional
                            Assignment
                            Reserve
                            Organization
                            Padding
                            Delimiter 
                            AccessMode
                            LockMode
                            CodeSet
                            CollartingSequence
                            RecordKey
                            AlternateKey
                            FileStatus
                    IOControl
                        --Not now
            DataDivision -?
                FileSection -?
                WorkingStorageSection -?
                LinkageSection -?
                CommunicationSection -?
                ScreenSection -?
                ReportSection -?
                LocalStorageSection -?
                    
            ProdedureDivision -1
                ProcDivPreamble
                    UsingClause -?
                    ChainingClause -?
                    ReturningClause -?
                    Declaratives -?
                ProcDivItem
                    Type : Section, Paragraph, Sentence or top level items (CobProcDivItem)
 */