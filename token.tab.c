/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ACCEPT = 258,
     ACCESS = 259,
     ADD = 260,
     ADDRESS = 261,
     ADVANCING = 262,
     AFTER = 263,
     ALL = 264,
     ALPHABET = 265,
     ALPHABETIC_TOK = 266,
     ALPHABETIC_LOWER = 267,
     ALPHABETIC_UPPER = 268,
     ALPHANUMERIC = 269,
     ALPHANUMERIC_EDITED = 270,
     ALSO = 271,
     ALTER = 272,
     ALTERNATE = 273,
     AND = 274,
     ANY = 275,
     ARE = 276,
     AREA = 277,
     AREAS = 278,
     ASCENDING = 279,
     AS = 280,
     ASSIGN = 281,
     AT = 282,
     AUTHOR = 283,
     AUTO = 284,
     AUTOMATIC = 285,
     BACKGROUND = 286,
     BACKGROUNDCOLOR = 287,
     BEEP = 288,
     BEFORE = 289,
     BEGINNING = 290,
     BELL = 291,
     BINARY = 292,
     BLANK = 293,
     BLINK = 294,
     BLOCK = 295,
     BOTTOM = 296,
     BY = 297,
     CALL = 298,
     CALL_CONV_C = 299,
     CALL_CONV_STDCALL = 300,
     CALL_LOADLIB = 301,
     CANCEL = 302,
     CD = 303,
     CENTER = 304,
     CF = 305,
     CH = 306,
     CHAIN = 307,
     CHAINING = 308,
     CHARACTER = 309,
     CHARACTERS = 310,
     CLASS = 311,
     CLOSE = 312,
     CMD_LINE = 313,
     COBWORD = 314,
     CODE = 315,
     CODE_SET = 316,
     COLLATING = 317,
     COLOR = 318,
     COLUMN = 319,
     COLUMNS = 320,
     COMMA = 321,
     COMMON = 322,
     COMMUNICATION = 323,
     COMP = 324,
     COMP1 = 325,
     COMP2 = 326,
     COMP3 = 327,
     COMP4 = 328,
     COMP5 = 329,
     COMP6 = 330,
     COMPX = 331,
     COMPUTE = 332,
     CONDITIONAL = 333,
     CONFIGURATION = 334,
     CONSOLE = 335,
     CONTAINS = 336,
     CONTENT = 337,
     CONTINUE = 338,
     CONTROL = 339,
     CONTROLS = 340,
     CONVERT = 341,
     CONVERTING = 342,
     COPY = 343,
     CORRESPONDING = 344,
     COUNT = 345,
     CURRENCY = 346,
     CURSOR = 347,
     CYCLE = 348,
     DARK = 349,
     DATA = 350,
     DATA_POINTER = 351,
     DATE_COMPILED = 352,
     DATE_WRITTEN = 353,
     DATE_TIME = 354,
     DE = 355,
     DEBUGGING = 356,
     DECIMAL_POINT = 357,
     DECLARATIVES = 358,
     _DEFAULT = 359,
     DELETE = 360,
     DELIMITED = 361,
     DELIMITER = 362,
     DEPENDING = 363,
     DESCENDING = 364,
     DETAIL = 365,
     DISK = 366,
     DISPLAY = 367,
     DISPLAY_SCREEN = 368,
     DIRECTION = 369,
     DIVIDE = 370,
     DIVISION = 371,
     DOWN = 372,
     DUPLICATES = 373,
     DYNAMIC = 374,
     DBCS = 375,
     ECHOTOKEN = 376,
     ELSE = 377,
     END = 378,
     END_ACCEPT = 379,
     END_ADD = 380,
     END_CALL = 381,
     END_CALL_LOADLIB = 382,
     END_CHAIN = 383,
     END_COMPUTE = 384,
     END_DELETE = 385,
     END_DISPLAY = 386,
     END_DIVIDE = 387,
     END_EVALUATE = 388,
     END_FUNCTION = 389,
     END_IF = 390,
     END_MULTIPLY = 391,
     END_OF_PAGE = 392,
     END_PERFORM = 393,
     END_PROGRAM = 394,
     END_READ = 395,
     END_RETURN = 396,
     END_REWRITE = 397,
     END_SEARCH = 398,
     END_START = 399,
     END_STRINGCMD = 400,
     END_SUBTRACT = 401,
     END_UNSTRING = 402,
     END_WRITE = 403,
     ENTER = 404,
     ENVIRONMENT = 405,
     ENVIRONMENT_VARIABLE = 406,
     EOL = 407,
     EOS = 408,
     EQUAL = 409,
     EQUALS = 410,
     ERASE = 411,
     ERROR_TOK = 412,
     EVALUATE = 413,
     EXCEPTION = 414,
     EXIT = 415,
     EXCLUSIVE = 416,
     EXTEND = 417,
     EXTERNAL = 418,
     FALSE_TOK = 419,
     FD = 420,
     FILEX = 421,
     FILE_CONTROL = 422,
     FILE_ID = 423,
     FILE_TOK = 424,
     FILLER = 425,
     FINAL = 426,
     FIRST = 427,
     FOOTING = 428,
     FOR = 429,
     FOREVER = 430,
     FOREGROUND = 431,
     FOREGROUNDCOLOR = 432,
     FROM = 433,
     FULL = 434,
     FUNCTION = 435,
     FUNCTION_ID = 436,
     GENERATE = 437,
     GIVING = 438,
     GLOBAL = 439,
     GO = 440,
     GOBACK = 441,
     GREATER = 442,
     GROUP = 443,
     HEADING = 444,
     HIGH = 445,
     HIGHLIGHT = 446,
     HIGHVALUES = 447,
     IDENTIFICATION = 448,
     IF = 449,
     IGNORE = 450,
     IN = 451,
     INDEX = 452,
     INDEXED = 453,
     INDICATE = 454,
     INITIALIZE = 455,
     INITIAL_TOK = 456,
     INKEY = 457,
     INITIATE = 458,
     INPUT = 459,
     INPUT_OUTPUT = 460,
     INSPECT = 461,
     INSTALLATION = 462,
     INTO = 463,
     INVALID = 464,
     I_O = 465,
     I_O_CONTROL = 466,
     IS = 467,
     JUSTIFIED = 468,
     KEY = 469,
     LABEL = 470,
     LAST = 471,
     LEADING = 472,
     LEFT = 473,
     LENGTH = 474,
     LESS = 475,
     LIMIT = 476,
     LIMITS = 477,
     LINAGE = 478,
     LINE = 479,
     LINES = 480,
     LINKAGE = 481,
     LISTSEP = 482,
     LITERAL = 483,
     LOCK = 484,
     LOCAL_STORAGE = 485,
     LOW = 486,
     LOWER = 487,
     LOWLIGHT = 488,
     LOWVALUES = 489,
     LPAR = 490,
     MANUAL = 491,
     MEMORY = 492,
     MERGE = 493,
     MINUS = 494,
     MODE = 495,
     MODULES = 496,
     MOVE = 497,
     MULTIPLE = 498,
     MULTIPLY = 499,
     NATIVE = 500,
     NEGATIVE = 501,
     NEXT = 502,
     NO = 503,
     NOECHO = 504,
     NOT = 505,
     NOTEXCEP = 506,
     NULL_TOK = 507,
     NUMBER = 508,
     NUMBERS = 509,
     NUMERIC = 510,
     NUMERIC_EDITED = 511,
     OBJECT_COMPUTER = 512,
     OCCURS = 513,
     OF = 514,
     OFF = 515,
     OMITTED = 516,
     ON = 517,
     ONLY = 518,
     OPEN = 519,
     OPTIONAL = 520,
     OR = 521,
     ORDER = 522,
     ORGANIZATION = 523,
     OTHER = 524,
     OUTPUT = 525,
     OVERFLOW_TOK = 526,
     PACKED_DECIMAL = 527,
     PADDING = 528,
     PAGE_TOK = 529,
     PARAGRAPH = 530,
     PERIOD = 531,
     PERFORM = 532,
     PF = 533,
     PH = 534,
     PICTURE = 535,
     PLUS = 536,
     POINTER = 537,
     POSITION = 538,
     POSITIVE = 539,
     PREVIOUS = 540,
     PRINTER = 541,
     PROCEDURE = 542,
     PROCEDURES = 543,
     PROCEED = 544,
     PROGRAM = 545,
     PROGRAM_ID = 546,
     PURGE = 547,
     QUOTES = 548,
     RANDOM = 549,
     RD = 550,
     READ = 551,
     READY = 552,
     RECORD = 553,
     RECORDS = 554,
     RECURSIVE = 555,
     REDEFINES = 556,
     REEL = 557,
     REFERENCE = 558,
     REFERENCES = 559,
     RELATIVE = 560,
     RELEASE = 561,
     REMAINDER = 562,
     REMARK = 563,
     REMOVAL = 564,
     RENAMES = 565,
     REPLACING = 566,
     REPORT = 567,
     REPORTING = 568,
     REPORTS = 569,
     REQUIRED = 570,
     RESERVE = 571,
     RESERVED = 572,
     RESERVED_VIDEO = 573,
     RESET = 574,
     RETURN_TOK = 575,
     RETURNING = 576,
     REVERSEVIDEO = 577,
     REWIND = 578,
     REWRITE = 579,
     RF = 580,
     RH = 581,
     RIGHT = 582,
     ROUNDED = 583,
     RUN = 584,
     SAME = 585,
     SCREEN = 586,
     SD = 587,
     SEARCH = 588,
     SECTION = 589,
     SECURE = 590,
     SECURITY = 591,
     SEGMENT_LIMIT = 592,
     SELECT = 593,
     SENTENCE = 594,
     SEPARATE = 595,
     SEQUENCE = 596,
     SEQUENTIAL = 597,
     SET = 598,
     SIGN = 599,
     SIZE = 600,
     SORT = 601,
     SORT_MERGE = 602,
     SOURCE = 603,
     SOURCE_COMPUTER = 604,
     SPACES = 605,
     SPECIAL_NAMES = 606,
     STANDARD = 607,
     STANDARD_1 = 608,
     STANDARD_2 = 609,
     START = 610,
     STATUS = 611,
     STD_ERROR = 612,
     STD_INPUT = 613,
     STD_OUTPUT = 614,
     STOP = 615,
     STRINGCMD = 616,
     SUBTRACT = 617,
     SUM = 618,
     SYNCHRONIZED = 619,
     TALLYING = 620,
     TAPE = 621,
     TCOBPROTO1 = 622,
     TCOBPROTO2 = 623,
     TELLYING = 624,
     TERMINATE = 625,
     TEST = 626,
     THAN = 627,
     THEN = 628,
     THRU = 629,
     TIMES = 630,
     TO = 631,
     TOKDUMMY = 632,
     TOP = 633,
     TRACE = 634,
     TRAILING = 635,
     TRUE_TOK = 636,
     TYPE = 637,
     UNDERLINE = 638,
     UNIT = 639,
     UNLOCK = 640,
     _UNSIGNED = 641,
     UNSTRING = 642,
     UNTIL = 643,
     UP = 644,
     UPDATE = 645,
     UPON = 646,
     UPPER = 647,
     USAGE = 648,
     USAGENUM = 649,
     USE = 650,
     USING = 651,
     VALUE = 652,
     VALUE_LITERAL = 653,
     VARYING = 654,
     WHEN = 655,
     WITH = 656,
     WORDS = 657,
     WORKING_STORAGE = 658,
     WRITE = 659,
     LT = 660,
     LE = 661,
     GT = 662,
     GE = 663,
     EQ = 664,
     NE = 665,
     ZERO = 666,
     REVERSED_VIDEO = 667,
     REVERSE = 668,
     _TIME = 669,
     DATE_AND_TIME = 670,
     YYYYDDD = 671,
     YYYYMMDD = 672,
     _DAY = 673,
     _DATE = 674,
     CENTURY_DAY = 675,
     CENTURY_DATE = 676,
     _ESCAPE = 677,
     TAB = 678,
     AUTO_SKIP = 679,
     PROMPT = 680,
     REVERSED = 681,
     DAY_AND_TIME = 682,
     _MESSAGE = 683,
     DAY_OF_WEEK = 684,
     LPARAN_SUB = 685,
     RPARAN_SUB = 686,
     _COLON = 687,
     _PLUS = 688,
     _MINUS = 689,
     _POW_OP = 690,
     UNARY_SIGN = 691,
     _DIVIDE = 692,
     _MULTIPLY = 693,
     INTEGER_LITERAL = 694,
     NUMBER_LITERAL = 695,
     FLOAT_LITERAL = 696,
     HEX_NUMBER_LITERAL = 697,
     IDENTIFIER = 698,
     DQUOTE_LITERAL = 699,
     SQUOTE_LITERAL = 700,
     TXTLINE = 701,
     PICTURE_STR = 702,
     HEX_STRING = 703
   };
#endif
/* Tokens.  */
#define ACCEPT 258
#define ACCESS 259
#define ADD 260
#define ADDRESS 261
#define ADVANCING 262
#define AFTER 263
#define ALL 264
#define ALPHABET 265
#define ALPHABETIC_TOK 266
#define ALPHABETIC_LOWER 267
#define ALPHABETIC_UPPER 268
#define ALPHANUMERIC 269
#define ALPHANUMERIC_EDITED 270
#define ALSO 271
#define ALTER 272
#define ALTERNATE 273
#define AND 274
#define ANY 275
#define ARE 276
#define AREA 277
#define AREAS 278
#define ASCENDING 279
#define AS 280
#define ASSIGN 281
#define AT 282
#define AUTHOR 283
#define AUTO 284
#define AUTOMATIC 285
#define BACKGROUND 286
#define BACKGROUNDCOLOR 287
#define BEEP 288
#define BEFORE 289
#define BEGINNING 290
#define BELL 291
#define BINARY 292
#define BLANK 293
#define BLINK 294
#define BLOCK 295
#define BOTTOM 296
#define BY 297
#define CALL 298
#define CALL_CONV_C 299
#define CALL_CONV_STDCALL 300
#define CALL_LOADLIB 301
#define CANCEL 302
#define CD 303
#define CENTER 304
#define CF 305
#define CH 306
#define CHAIN 307
#define CHAINING 308
#define CHARACTER 309
#define CHARACTERS 310
#define CLASS 311
#define CLOSE 312
#define CMD_LINE 313
#define COBWORD 314
#define CODE 315
#define CODE_SET 316
#define COLLATING 317
#define COLOR 318
#define COLUMN 319
#define COLUMNS 320
#define COMMA 321
#define COMMON 322
#define COMMUNICATION 323
#define COMP 324
#define COMP1 325
#define COMP2 326
#define COMP3 327
#define COMP4 328
#define COMP5 329
#define COMP6 330
#define COMPX 331
#define COMPUTE 332
#define CONDITIONAL 333
#define CONFIGURATION 334
#define CONSOLE 335
#define CONTAINS 336
#define CONTENT 337
#define CONTINUE 338
#define CONTROL 339
#define CONTROLS 340
#define CONVERT 341
#define CONVERTING 342
#define COPY 343
#define CORRESPONDING 344
#define COUNT 345
#define CURRENCY 346
#define CURSOR 347
#define CYCLE 348
#define DARK 349
#define DATA 350
#define DATA_POINTER 351
#define DATE_COMPILED 352
#define DATE_WRITTEN 353
#define DATE_TIME 354
#define DE 355
#define DEBUGGING 356
#define DECIMAL_POINT 357
#define DECLARATIVES 358
#define _DEFAULT 359
#define DELETE 360
#define DELIMITED 361
#define DELIMITER 362
#define DEPENDING 363
#define DESCENDING 364
#define DETAIL 365
#define DISK 366
#define DISPLAY 367
#define DISPLAY_SCREEN 368
#define DIRECTION 369
#define DIVIDE 370
#define DIVISION 371
#define DOWN 372
#define DUPLICATES 373
#define DYNAMIC 374
#define DBCS 375
#define ECHOTOKEN 376
#define ELSE 377
#define END 378
#define END_ACCEPT 379
#define END_ADD 380
#define END_CALL 381
#define END_CALL_LOADLIB 382
#define END_CHAIN 383
#define END_COMPUTE 384
#define END_DELETE 385
#define END_DISPLAY 386
#define END_DIVIDE 387
#define END_EVALUATE 388
#define END_FUNCTION 389
#define END_IF 390
#define END_MULTIPLY 391
#define END_OF_PAGE 392
#define END_PERFORM 393
#define END_PROGRAM 394
#define END_READ 395
#define END_RETURN 396
#define END_REWRITE 397
#define END_SEARCH 398
#define END_START 399
#define END_STRINGCMD 400
#define END_SUBTRACT 401
#define END_UNSTRING 402
#define END_WRITE 403
#define ENTER 404
#define ENVIRONMENT 405
#define ENVIRONMENT_VARIABLE 406
#define EOL 407
#define EOS 408
#define EQUAL 409
#define EQUALS 410
#define ERASE 411
#define ERROR_TOK 412
#define EVALUATE 413
#define EXCEPTION 414
#define EXIT 415
#define EXCLUSIVE 416
#define EXTEND 417
#define EXTERNAL 418
#define FALSE_TOK 419
#define FD 420
#define FILEX 421
#define FILE_CONTROL 422
#define FILE_ID 423
#define FILE_TOK 424
#define FILLER 425
#define FINAL 426
#define FIRST 427
#define FOOTING 428
#define FOR 429
#define FOREVER 430
#define FOREGROUND 431
#define FOREGROUNDCOLOR 432
#define FROM 433
#define FULL 434
#define FUNCTION 435
#define FUNCTION_ID 436
#define GENERATE 437
#define GIVING 438
#define GLOBAL 439
#define GO 440
#define GOBACK 441
#define GREATER 442
#define GROUP 443
#define HEADING 444
#define HIGH 445
#define HIGHLIGHT 446
#define HIGHVALUES 447
#define IDENTIFICATION 448
#define IF 449
#define IGNORE 450
#define IN 451
#define INDEX 452
#define INDEXED 453
#define INDICATE 454
#define INITIALIZE 455
#define INITIAL_TOK 456
#define INKEY 457
#define INITIATE 458
#define INPUT 459
#define INPUT_OUTPUT 460
#define INSPECT 461
#define INSTALLATION 462
#define INTO 463
#define INVALID 464
#define I_O 465
#define I_O_CONTROL 466
#define IS 467
#define JUSTIFIED 468
#define KEY 469
#define LABEL 470
#define LAST 471
#define LEADING 472
#define LEFT 473
#define LENGTH 474
#define LESS 475
#define LIMIT 476
#define LIMITS 477
#define LINAGE 478
#define LINE 479
#define LINES 480
#define LINKAGE 481
#define LISTSEP 482
#define LITERAL 483
#define LOCK 484
#define LOCAL_STORAGE 485
#define LOW 486
#define LOWER 487
#define LOWLIGHT 488
#define LOWVALUES 489
#define LPAR 490
#define MANUAL 491
#define MEMORY 492
#define MERGE 493
#define MINUS 494
#define MODE 495
#define MODULES 496
#define MOVE 497
#define MULTIPLE 498
#define MULTIPLY 499
#define NATIVE 500
#define NEGATIVE 501
#define NEXT 502
#define NO 503
#define NOECHO 504
#define NOT 505
#define NOTEXCEP 506
#define NULL_TOK 507
#define NUMBER 508
#define NUMBERS 509
#define NUMERIC 510
#define NUMERIC_EDITED 511
#define OBJECT_COMPUTER 512
#define OCCURS 513
#define OF 514
#define OFF 515
#define OMITTED 516
#define ON 517
#define ONLY 518
#define OPEN 519
#define OPTIONAL 520
#define OR 521
#define ORDER 522
#define ORGANIZATION 523
#define OTHER 524
#define OUTPUT 525
#define OVERFLOW_TOK 526
#define PACKED_DECIMAL 527
#define PADDING 528
#define PAGE_TOK 529
#define PARAGRAPH 530
#define PERIOD 531
#define PERFORM 532
#define PF 533
#define PH 534
#define PICTURE 535
#define PLUS 536
#define POINTER 537
#define POSITION 538
#define POSITIVE 539
#define PREVIOUS 540
#define PRINTER 541
#define PROCEDURE 542
#define PROCEDURES 543
#define PROCEED 544
#define PROGRAM 545
#define PROGRAM_ID 546
#define PURGE 547
#define QUOTES 548
#define RANDOM 549
#define RD 550
#define READ 551
#define READY 552
#define RECORD 553
#define RECORDS 554
#define RECURSIVE 555
#define REDEFINES 556
#define REEL 557
#define REFERENCE 558
#define REFERENCES 559
#define RELATIVE 560
#define RELEASE 561
#define REMAINDER 562
#define REMARK 563
#define REMOVAL 564
#define RENAMES 565
#define REPLACING 566
#define REPORT 567
#define REPORTING 568
#define REPORTS 569
#define REQUIRED 570
#define RESERVE 571
#define RESERVED 572
#define RESERVED_VIDEO 573
#define RESET 574
#define RETURN_TOK 575
#define RETURNING 576
#define REVERSEVIDEO 577
#define REWIND 578
#define REWRITE 579
#define RF 580
#define RH 581
#define RIGHT 582
#define ROUNDED 583
#define RUN 584
#define SAME 585
#define SCREEN 586
#define SD 587
#define SEARCH 588
#define SECTION 589
#define SECURE 590
#define SECURITY 591
#define SEGMENT_LIMIT 592
#define SELECT 593
#define SENTENCE 594
#define SEPARATE 595
#define SEQUENCE 596
#define SEQUENTIAL 597
#define SET 598
#define SIGN 599
#define SIZE 600
#define SORT 601
#define SORT_MERGE 602
#define SOURCE 603
#define SOURCE_COMPUTER 604
#define SPACES 605
#define SPECIAL_NAMES 606
#define STANDARD 607
#define STANDARD_1 608
#define STANDARD_2 609
#define START 610
#define STATUS 611
#define STD_ERROR 612
#define STD_INPUT 613
#define STD_OUTPUT 614
#define STOP 615
#define STRINGCMD 616
#define SUBTRACT 617
#define SUM 618
#define SYNCHRONIZED 619
#define TALLYING 620
#define TAPE 621
#define TCOBPROTO1 622
#define TCOBPROTO2 623
#define TELLYING 624
#define TERMINATE 625
#define TEST 626
#define THAN 627
#define THEN 628
#define THRU 629
#define TIMES 630
#define TO 631
#define TOKDUMMY 632
#define TOP 633
#define TRACE 634
#define TRAILING 635
#define TRUE_TOK 636
#define TYPE 637
#define UNDERLINE 638
#define UNIT 639
#define UNLOCK 640
#define _UNSIGNED 641
#define UNSTRING 642
#define UNTIL 643
#define UP 644
#define UPDATE 645
#define UPON 646
#define UPPER 647
#define USAGE 648
#define USAGENUM 649
#define USE 650
#define USING 651
#define VALUE 652
#define VALUE_LITERAL 653
#define VARYING 654
#define WHEN 655
#define WITH 656
#define WORDS 657
#define WORKING_STORAGE 658
#define WRITE 659
#define LT 660
#define LE 661
#define GT 662
#define GE 663
#define EQ 664
#define NE 665
#define ZERO 666
#define REVERSED_VIDEO 667
#define REVERSE 668
#define _TIME 669
#define DATE_AND_TIME 670
#define YYYYDDD 671
#define YYYYMMDD 672
#define _DAY 673
#define _DATE 674
#define CENTURY_DAY 675
#define CENTURY_DATE 676
#define _ESCAPE 677
#define TAB 678
#define AUTO_SKIP 679
#define PROMPT 680
#define REVERSED 681
#define DAY_AND_TIME 682
#define _MESSAGE 683
#define DAY_OF_WEEK 684
#define LPARAN_SUB 685
#define RPARAN_SUB 686
#define _COLON 687
#define _PLUS 688
#define _MINUS 689
#define _POW_OP 690
#define UNARY_SIGN 691
#define _DIVIDE 692
#define _MULTIPLY 693
#define INTEGER_LITERAL 694
#define NUMBER_LITERAL 695
#define FLOAT_LITERAL 696
#define HEX_NUMBER_LITERAL 697
#define IDENTIFIER 698
#define DQUOTE_LITERAL 699
#define SQUOTE_LITERAL 700
#define TXTLINE 701
#define PICTURE_STR 702
#define HEX_STRING 703




/* Copy the first part of user declarations.  */
#line 8 "token.y"

#include <stdio.h>
#include <stdlib.h>
#include "global.h"
#include "cobmain.h"
#include "util/reswords.h"
#include "procglobal.h"


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 94 "token.y"
{
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
/* Line 193 of yacc.c.  */
#line 1128 "token.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1141 "token.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6185

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  462
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  635
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1375
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2214

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   716

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    21,    28,
      32,    37,    43,    47,    48,    50,    53,    54,    58,    63,
      69,    70,    73,    84,    86,    87,    90,    91,    96,    98,
     100,   101,   103,   104,   106,   108,   111,   113,   115,   117,
     119,   121,   123,   128,   133,   138,   143,   148,   153,   156,
     160,   162,   164,   166,   167,   172,   173,   175,   177,   180,
     182,   184,   189,   191,   194,   196,   198,   200,   206,   207,
     212,   217,   220,   224,   227,   229,   231,   234,   236,   238,
     240,   245,   247,   249,   251,   257,   261,   265,   266,   268,
     270,   273,   279,   284,   287,   290,   291,   295,   299,   300,
     303,   305,   308,   310,   312,   318,   319,   321,   323,   325,
     327,   329,   332,   336,   342,   344,   347,   350,   351,   354,
     358,   360,   363,   369,   370,   373,   375,   378,   380,   382,
     384,   386,   388,   390,   392,   394,   396,   398,   400,   402,
     404,   406,   408,   410,   412,   414,   416,   418,   420,   422,
     424,   426,   431,   433,   435,   437,   439,   443,   446,   449,
     451,   453,   455,   457,   459,   461,   462,   464,   469,   473,
     478,   482,   486,   491,   496,   498,   500,   506,   508,   510,
     512,   513,   518,   523,   530,   537,   539,   540,   542,   544,
     546,   550,   555,   561,   563,   567,   569,   572,   576,   578,
     580,   583,   590,   591,   594,   599,   600,   602,   603,   608,
     610,   611,   613,   615,   618,   620,   622,   624,   626,   628,
     630,   632,   637,   639,   640,   642,   644,   647,   650,   653,
     659,   660,   662,   663,   665,   668,   672,   675,   678,   680,
     682,   684,   686,   688,   690,   692,   694,   698,   702,   704,
     708,   715,   717,   719,   720,   725,   726,   731,   732,   737,
     741,   743,   746,   750,   752,   754,   759,   764,   770,   774,
     780,   782,   784,   786,   788,   794,   795,   798,   799,   802,
     809,   810,   812,   814,   817,   819,   821,   825,   829,   831,
     834,   836,   841,   843,   844,   846,   848,   849,   851,   853,
     856,   858,   860,   862,   864,   866,   868,   870,   872,   874,
     876,   878,   880,   884,   885,   888,   891,   895,   896,   898,
     902,   904,   907,   911,   913,   917,   920,   921,   924,   927,
     929,   931,   933,   936,   939,   942,   944,   946,   948,   950,
     952,   955,   958,   963,   964,   966,   968,   970,   971,   974,
     977,   979,   986,   987,   989,   990,   994,   995,   997,   999,
    1002,  1007,  1008,  1010,  1012,  1014,  1015,  1017,  1019,  1022,
    1026,  1029,  1032,  1035,  1039,  1044,  1047,  1048,  1050,  1052,
    1057,  1062,  1064,  1069,  1071,  1074,  1081,  1083,  1085,  1087,
    1089,  1092,  1096,  1097,  1099,  1102,  1106,  1109,  1112,  1115,
    1118,  1121,  1124,  1127,  1130,  1133,  1136,  1139,  1142,  1143,
    1145,  1148,  1149,  1151,  1153,  1156,  1161,  1166,  1171,  1177,
    1182,  1187,  1188,  1190,  1194,  1196,  1199,  1203,  1205,  1210,
    1212,  1215,  1220,  1222,  1225,  1230,  1233,  1236,  1237,  1239,
    1241,  1243,  1245,  1247,  1250,  1252,  1254,  1256,  1258,  1260,
    1262,  1264,  1266,  1269,  1272,  1275,  1277,  1280,  1283,  1286,
    1288,  1291,  1293,  1295,  1297,  1299,  1301,  1303,  1307,  1311,
    1314,  1316,  1317,  1320,  1323,  1326,  1329,  1334,  1335,  1337,
    1339,  1342,  1348,  1349,  1351,  1353,  1356,  1358,  1360,  1362,
    1364,  1367,  1370,  1374,  1376,  1379,  1383,  1386,  1389,  1398,
    1399,  1402,  1405,  1408,  1412,  1416,  1419,  1421,  1424,  1429,
    1431,  1432,  1434,  1436,  1439,  1441,  1443,  1445,  1447,  1449,
    1451,  1453,  1455,  1457,  1459,  1461,  1463,  1465,  1472,  1473,
    1475,  1476,  1478,  1479,  1483,  1488,  1490,  1493,  1496,  1502,
    1503,  1506,  1508,  1511,  1513,  1516,  1518,  1520,  1522,  1525,
    1527,  1530,  1532,  1535,  1537,  1538,  1540,  1541,  1543,  1547,
    1549,  1553,  1559,  1562,  1567,  1571,  1575,  1579,  1581,  1584,
    1587,  1588,  1591,  1592,  1594,  1598,  1602,  1605,  1606,  1613,
    1617,  1618,  1621,  1622,  1625,  1626,  1629,  1631,  1634,  1638,
    1644,  1645,  1647,  1650,  1653,  1654,  1656,  1660,  1664,  1668,
    1671,  1672,  1674,  1675,  1677,  1678,  1680,  1687,  1689,  1692,
    1694,  1696,  1699,  1701,  1706,  1708,  1709,  1711,  1714,  1716,
    1718,  1721,  1723,  1725,  1727,  1729,  1731,  1733,  1735,  1737,
    1739,  1741,  1743,  1745,  1747,  1749,  1751,  1753,  1755,  1757,
    1759,  1761,  1763,  1765,  1767,  1769,  1771,  1773,  1775,  1777,
    1779,  1781,  1783,  1785,  1787,  1789,  1791,  1793,  1795,  1797,
    1799,  1801,  1803,  1805,  1807,  1814,  1815,  1818,  1819,  1823,
    1824,  1828,  1830,  1833,  1838,  1840,  1842,  1844,  1846,  1848,
    1850,  1852,  1853,  1857,  1863,  1864,  1866,  1868,  1871,  1878,
    1880,  1882,  1884,  1886,  1887,  1889,  1891,  1894,  1898,  1899,
    1901,  1903,  1906,  1913,  1914,  1916,  1918,  1921,  1927,  1931,
    1932,  1934,  1936,  1938,  1943,  1944,  1947,  1948,  1952,  1954,
    1957,  1961,  1966,  1971,  1973,  1976,  1977,  1979,  1981,  1984,
    1987,  1989,  1993,  1995,  1997,  2004,  2007,  2014,  2016,  2017,
    2019,  2022,  2026,  2028,  2031,  2036,  2038,  2040,  2042,  2045,
    2046,  2048,  2050,  2053,  2056,  2058,  2060,  2062,  2064,  2068,
    2070,  2071,  2075,  2081,  2083,  2085,  2088,  2092,  2093,  2096,
    2100,  2102,  2104,  2107,  2109,  2113,  2117,  2121,  2124,  2125,
    2127,  2135,  2136,  2141,  2142,  2145,  2146,  2149,  2151,  2155,
    2158,  2160,  2162,  2164,  2168,  2172,  2174,  2178,  2181,  2183,
    2185,  2186,  2188,  2190,  2193,  2194,  2198,  2199,  2204,  2212,
    2214,  2217,  2222,  2224,  2226,  2228,  2229,  2233,  2234,  2236,
    2245,  2251,  2252,  2254,  2256,  2259,  2263,  2264,  2266,  2269,
    2271,  2274,  2278,  2282,  2283,  2287,  2288,  2292,  2293,  2297,
    2298,  2300,  2309,  2315,  2326,  2332,  2333,  2335,  2336,  2338,
    2339,  2341,  2343,  2345,  2347,  2350,  2352,  2355,  2360,  2361,
    2363,  2364,  2366,  2367,  2369,  2371,  2373,  2375,  2377,  2379,
    2383,  2390,  2391,  2393,  2395,  2398,  2401,  2403,  2406,  2411,
    2412,  2415,  2417,  2420,  2424,  2427,  2430,  2431,  2433,  2436,
    2441,  2446,  2447,  2449,  2451,  2454,  2455,  2457,  2458,  2460,
    2462,  2464,  2468,  2470,  2472,  2475,  2478,  2482,  2486,  2487,
    2491,  2493,  2497,  2505,  2507,  2509,  2512,  2514,  2518,  2522,
    2524,  2528,  2529,  2531,  2533,  2536,  2539,  2541,  2543,  2545,
    2547,  2549,  2551,  2554,  2557,  2559,  2560,  2562,  2564,  2567,
    2570,  2574,  2576,  2579,  2581,  2584,  2588,  2591,  2592,  2597,
    2602,  2606,  2610,  2614,  2617,  2624,  2632,  2635,  2637,  2638,
    2640,  2643,  2646,  2647,  2649,  2652,  2656,  2657,  2660,  2661,
    2665,  2667,  2670,  2671,  2675,  2676,  2681,  2682,  2684,  2688,
    2692,  2696,  2697,  2700,  2701,  2703,  2704,  2706,  2709,  2710,
    2714,  2715,  2720,  2723,  2724,  2728,  2729,  2731,  2734,  2741,
    2743,  2745,  2746,  2748,  2750,  2752,  2755,  2756,  2760,  2761,
    2766,  2774,  2776,  2779,  2784,  2789,  2790,  2792,  2793,  2798,
    2799,  2804,  2810,  2813,  2814,  2817,  2823,  2826,  2833,  2834,
    2836,  2837,  2840,  2841,  2843,  2846,  2848,  2851,  2855,  2857,
    2860,  2863,  2865,  2868,  2870,  2872,  2874,  2876,  2878,  2880,
    2882,  2884,  2886,  2891,  2893,  2894,  2897,  2898,  2902,  2905,
    2907,  2910,  2913,  2915,  2916,  2918,  2920,  2923,  2927,  2928,
    2930,  2933,  2935,  2937,  2939,  2941,  2943,  2946,  2949,  2951,
    2953,  2955,  2957,  2961,  2963,  2965,  2967,  2969,  2971,  2974,
    2976,  2979,  2982,  2988,  2993,  2995,  3001,  3003,  3005,  3008,
    3010,  3012,  3015,  3017,  3020,  3021,  3023,  3028,  3033,  3039,
    3045,  3048,  3051,  3052,  3054,  3057,  3062,  3063,  3067,  3069,
    3071,  3073,  3076,  3078,  3080,  3082,  3085,  3087,  3089,  3091,
    3094,  3097,  3099,  3102,  3105,  3107,  3111,  3112,  3114,  3116,
    3119,  3123,  3126,  3128,  3130,  3133,  3136,  3139,  3141,  3143,
    3145,  3147,  3149,  3152,  3155,  3157,  3159,  3161,  3163,  3167,
    3169,  3173,  3175,  3177,  3179,  3181,  3183,  3185,  3187,  3189,
    3195,  3199,  3203,  3204,  3210,  3211,  3216,  3218,  3220,  3221,
    3223,  3225,  3228,  3234,  3241,  3249,  3250,  3253,  3255,  3258,
    3262,  3264,  3267,  3271,  3274,  3275,  3277,  3279,  3281,  3282,
    3285,  3286,  3291,  3292,  3298,  3299,  3301,  3308,  3317,  3326,
    3328,  3331,  3335,  3337,  3340,  3344,  3346,  3349,  3350,  3352,
    3359,  3368,  3369,  3371,  3378,  3387,  3396,  3407,  3418,  3419,
    3421,  3430,  3431,  3433,  3440,  3445,  3451,  3452,  3454,  3455,
    3459,  3460,  3464,  3466,  3469,  3472,  3475,  3478,  3481,  3483,
    3485,  3487,  3491,  3495,  3499,  3501,  3504,  3507,  3509,  3511,
    3513,  3515,  3517,  3519,  3521,  3525,  3527,  3528,  3530,  3531,
    3535,  3537,  3540,  3543,  3546,  3548,  3551,  3555,  3557,  3559,
    3561,  3565,  3569,  3573,  3577,  3579,  3581,  3584,  3586,  3588,
    3590,  3592,  3594,  3596,  3599,  3602,  3604,  3606,  3608,  3610,
    3612,  3614,  3616,  3618,  3621,  3622,  3624,  3626,  3629,  3632,
    3634,  3636,  3638,  3640,  3642,  3645,  3647,  3649,  3652,  3656,
    3658,  3663,  3665,  3669,  3672,  3674,  3679,  3685,  3687,  3691,
    3695,  3697,  3699,  3701,  3703,  3706,  3708,  3710,  3712,  3715,
    3717,  3719,  3721,  3723,  3725,  3727,  3730,  3732,  3738,  3740,
    3743,  3745,  3751,  3753,  3756,  3759,  3761,  3763,  3764,  3766,
    3767,  3769,  3771,  3773,  3775,  3777,  3779,  3783,  3785,  3789,
    3793,  3797,  3801,  3805,  3809,  3812
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     463,     0,    -1,   464,    -1,   465,    -1,   464,   465,    -1,
     466,    -1,   469,    -1,   475,   492,   575,   740,   471,   472,
      -1,   475,   492,   575,   740,   471,   468,    -1,   139,   476,
     276,    -1,   123,   290,   476,   276,    -1,   473,   492,   575,
     740,   470,    -1,   134,   476,   276,    -1,    -1,   467,    -1,
     471,   467,    -1,    -1,   139,   476,   276,    -1,   123,   290,
     476,   276,    -1,   181,   276,   476,   474,   276,    -1,    -1,
      25,   228,    -1,   193,   116,   276,   291,   276,   476,   574,
     477,   478,   481,    -1,  1053,    -1,    -1,   300,   276,    -1,
      -1,   212,   479,   480,   574,    -1,    67,    -1,   201,    -1,
      -1,   290,    -1,    -1,   482,    -1,   483,    -1,   482,   483,
      -1,   484,    -1,   485,    -1,   486,    -1,   487,    -1,   488,
      -1,   489,    -1,    28,   276,   490,   574,    -1,   207,   276,
     490,   574,    -1,    98,   276,   490,   574,    -1,    97,   276,
     490,   574,    -1,   336,   276,   490,   574,    -1,   308,   276,
     490,   574,    -1,   491,   574,    -1,   490,   491,   574,    -1,
     443,    -1,   444,    -1,   445,    -1,    -1,   150,   116,   276,
     493,    -1,    -1,   494,    -1,   495,    -1,   494,   495,    -1,
     496,    -1,   514,    -1,    79,   334,   276,   497,    -1,   498,
      -1,   497,   498,    -1,   499,    -1,   501,    -1,   510,    -1,
     349,   276,   443,   500,   574,    -1,    -1,   401,   101,   240,
     276,    -1,   257,   276,   502,   574,    -1,   503,   276,    -1,
     503,   504,   276,    -1,   504,   276,    -1,   443,    -1,   505,
      -1,   504,   505,    -1,   506,    -1,   508,    -1,   509,    -1,
     237,   345,   617,   507,    -1,   402,    -1,    55,    -1,   241,
      -1,   290,    62,   341,   212,   443,    -1,   337,   212,   617,
      -1,   351,   276,   511,    -1,    -1,   512,    -1,   513,    -1,
     512,   513,    -1,    91,   344,   212,   443,   276,    -1,   102,
     212,    66,   276,    -1,   515,   528,    -1,   515,   516,    -1,
      -1,   205,   334,   276,    -1,   211,   276,   517,    -1,    -1,
     518,   276,    -1,   519,    -1,   518,   519,    -1,   520,    -1,
     524,    -1,   330,   521,    22,   174,   523,    -1,    -1,   522,
      -1,   298,    -1,   346,    -1,   347,    -1,   908,    -1,   523,
     908,    -1,   523,  1051,   908,    -1,   243,   166,   366,    81,
     525,    -1,   526,    -1,   525,   526,    -1,   908,   527,    -1,
      -1,   283,   617,    -1,   167,   276,   529,    -1,   530,    -1,
     529,   530,    -1,   338,   531,  1053,   532,   574,    -1,    -1,
    1021,   265,    -1,   533,    -1,   532,   533,    -1,   534,    -1,
     535,    -1,   536,    -1,   537,    -1,   538,    -1,   539,    -1,
     540,    -1,   541,    -1,   542,    -1,   543,    -1,   544,    -1,
     545,    -1,   549,    -1,   546,    -1,   553,    -1,   554,    -1,
     555,    -1,   557,    -1,   560,    -1,   564,    -1,   565,    -1,
     566,    -1,   569,    -1,   573,    -1,   316,   547,    18,   548,
      -1,   248,    -1,   617,    -1,    22,    -1,    23,    -1,    26,
    1092,   550,    -1,  1061,   552,    -1,   551,   552,    -1,   112,
      -1,   204,    -1,   270,    -1,   205,    -1,   294,    -1,   366,
      -1,    -1,  1061,    -1,   268,   626,   224,   342,    -1,   268,
     626,   342,    -1,   268,   626,    37,   342,    -1,   268,   626,
     305,    -1,   268,   626,   198,    -1,   273,    54,   626,  1061,
      -1,   298,   107,   626,   556,    -1,   353,    -1,  1047,    -1,
       4,   240,   626,   558,   559,    -1,   342,    -1,   294,    -1,
     119,    -1,    -1,   305,   214,   626,  1047,    -1,   229,   240,
     626,   561,    -1,   236,   401,   229,   262,   562,   563,    -1,
      30,   401,   229,   262,   562,   563,    -1,   161,    -1,    -1,
     243,    -1,   298,    -1,   299,    -1,    61,   626,  1047,    -1,
      62,   341,   626,  1047,    -1,   298,   214,   626,   567,   572,
      -1,  1047,    -1,  1053,   409,   568,    -1,  1053,    -1,   568,
    1053,    -1,   568,  1051,  1053,    -1,   570,    -1,   571,    -1,
     570,   571,    -1,    18,   298,   214,   626,   567,   572,    -1,
      -1,   401,   118,    -1,   166,   356,   212,  1047,    -1,    -1,
     276,    -1,    -1,    95,   116,   276,   576,    -1,     1,    -1,
      -1,   577,    -1,   578,    -1,   577,   578,    -1,   579,    -1,
     655,    -1,   659,    -1,   661,    -1,   681,    -1,   692,    -1,
     658,    -1,   166,   334,   276,   580,    -1,     1,    -1,    -1,
     581,    -1,   582,    -1,   581,   582,    -1,   165,   583,    -1,
     332,   583,    -1,  1053,   574,   585,   574,   584,    -1,    -1,
     614,    -1,    -1,   586,    -1,   587,   574,    -1,   586,   587,
     574,    -1,   626,   163,    -1,   626,   184,    -1,   601,    -1,
     604,    -1,   602,    -1,   600,    -1,   596,    -1,   591,    -1,
     590,    -1,   588,    -1,   312,   626,   589,    -1,   314,   626,
     589,    -1,  1053,    -1,    61,   626,  1053,    -1,   223,   626,
     592,   593,   594,   595,    -1,  1052,    -1,   617,    -1,    -1,
     401,   173,    27,   592,    -1,    -1,   225,    27,   378,   592,
      -1,    -1,   225,    27,    41,   592,    -1,   397,   259,   597,
      -1,   598,    -1,   597,   598,    -1,   599,   626,  1061,    -1,
     215,    -1,  1052,    -1,    95,   298,   212,   568,    -1,    95,
     299,    21,   568,    -1,   215,   299,    21,   352,   276,    -1,
     215,   299,   568,    -1,    40,    81,   617,   606,   603,    -1,
     299,    -1,    55,    -1,   605,    -1,   608,    -1,   298,    81,
     617,   606,    55,    -1,    -1,   376,   617,    -1,    -1,   178,
     617,    -1,   298,   212,   399,   196,   345,   609,    -1,    -1,
     610,    -1,   611,    -1,   610,   611,    -1,   612,    -1,   613,
      -1,   607,   606,    55,    -1,   108,   262,  1052,    -1,   615,
      -1,   614,   615,    -1,   616,    -1,   617,   618,   619,   574,
      -1,   439,    -1,    -1,   170,    -1,   443,    -1,    -1,   620,
      -1,   621,    -1,   620,   621,    -1,   624,    -1,   625,    -1,
     627,    -1,   630,    -1,   633,    -1,   634,    -1,   635,    -1,
     639,    -1,   652,    -1,   653,    -1,   654,    -1,   622,    -1,
     310,  1053,   623,    -1,    -1,   374,  1053,    -1,   301,  1053,
      -1,   280,   626,   447,    -1,    -1,   212,    -1,   397,   626,
     628,    -1,   629,    -1,   628,   629,    -1,   628,  1051,   629,
      -1,  1061,    -1,  1061,   374,  1061,    -1,   631,   632,    -1,
      -1,   393,   626,    -1,    37,   439,    -1,    69,    -1,    70,
      -1,    71,    -1,    72,   439,    -1,    73,   439,    -1,    74,
     439,    -1,    75,    -1,   112,    -1,   197,    -1,   272,    -1,
     282,    -1,   212,   163,    -1,   212,   184,    -1,   636,   626,
     637,   638,    -1,    -1,   344,    -1,   217,    -1,   380,    -1,
      -1,   340,    54,    -1,   258,   640,    -1,   641,    -1,   439,
     606,   642,   643,   644,   649,    -1,    -1,   375,    -1,    -1,
     108,   262,  1053,    -1,    -1,   645,    -1,   646,    -1,   645,
     646,    -1,   647,   214,   626,  1017,    -1,    -1,   648,    -1,
      24,    -1,   109,    -1,    -1,   650,    -1,   651,    -1,   677,
     651,    -1,   198,    42,  1017,    -1,   364,   218,    -1,   364,
     327,    -1,   213,   327,    -1,    38,   400,   411,    -1,   403,
     334,   574,   656,    -1,     1,   276,    -1,    -1,   657,    -1,
     614,    -1,   230,   334,   574,   614,    -1,   226,   334,   276,
     660,    -1,   614,    -1,    68,   334,   276,   662,    -1,   663,
      -1,   662,   663,    -1,    48,  1053,   174,   664,   614,   574,
      -1,   665,    -1,   672,    -1,   678,    -1,   666,    -1,   665,
     666,    -1,   667,   204,   668,    -1,    -1,   449,    -1,   669,
     671,    -1,   670,   626,  1061,    -1,   450,   451,    -1,   450,
     452,    -1,   450,   453,    -1,   450,   454,    -1,   455,   419,
      -1,   455,   414,    -1,   450,   348,    -1,   456,   219,    -1,
     123,   214,    -1,   356,   214,    -1,   455,    90,    -1,   450,
     457,    -1,    -1,   568,    -1,   270,   673,    -1,    -1,   674,
      -1,   675,    -1,   674,   675,    -1,   458,    90,   626,  1061,
      -1,   456,   219,   626,  1061,    -1,   356,   214,   626,  1061,
      -1,   458,   459,   258,   617,   676,    -1,   157,   214,   626,
    1061,    -1,   450,   458,   626,  1061,    -1,    -1,   677,    -1,
     198,    42,  1028,    -1,   679,    -1,   678,   679,    -1,   667,
     210,   680,    -1,   669,    -1,   331,   334,   276,   682,    -1,
     683,    -1,   682,   683,    -1,   617,   618,   684,   574,    -1,
     685,    -1,   684,   685,    -1,   687,   626,  1012,   686,    -1,
     690,  1061,    -1,   625,   691,    -1,    -1,   688,    -1,    31,
      -1,    32,    -1,   176,    -1,   177,    -1,   631,   112,    -1,
     635,    -1,    29,    -1,   424,    -1,   335,    -1,   315,    -1,
     179,    -1,    36,    -1,    33,    -1,    38,   331,    -1,    38,
     224,    -1,    38,   307,    -1,    39,    -1,   156,   153,    -1,
     156,   152,    -1,   156,   331,    -1,   191,    -1,   248,   191,
      -1,   233,    -1,   413,    -1,   322,    -1,   383,    -1,   224,
      -1,    64,    -1,    38,   400,   411,    -1,   253,   626,   689,
      -1,   281,   617,    -1,  1053,    -1,    -1,   397,   626,    -1,
     178,  1061,    -1,   376,  1061,    -1,   396,  1061,    -1,   312,
     334,   276,   693,    -1,    -1,   694,    -1,   695,    -1,   694,
     695,    -1,   295,   589,   696,   276,   710,    -1,    -1,   697,
      -1,   698,    -1,   697,   698,    -1,   699,    -1,   700,    -1,
     701,    -1,   704,    -1,   626,   184,    -1,    60,  1061,    -1,
     703,   725,   702,    -1,  1061,    -1,   702,  1061,    -1,   702,
      66,  1061,    -1,    84,   626,    -1,    85,    21,    -1,   274,
     705,   617,   941,   706,   707,   708,   709,    -1,    -1,   221,
     212,    -1,   222,    21,    -1,   189,   617,    -1,   172,   110,
     617,    -1,   216,   110,   617,    -1,   173,   617,    -1,   711,
      -1,   710,   711,    -1,   712,   713,   714,   276,    -1,   617,
      -1,    -1,  1053,    -1,   715,    -1,   714,   715,    -1,   716,
      -1,   720,    -1,   722,    -1,   726,    -1,   727,    -1,   728,
      -1,   729,    -1,   654,    -1,   730,    -1,   731,    -1,   732,
      -1,   733,    -1,   739,    -1,   224,   717,   626,   718,   617,
     719,    -1,    -1,   253,    -1,    -1,   281,    -1,    -1,   262,
     247,   274,    -1,   247,   188,   626,   721,    -1,   617,    -1,
     281,   617,    -1,   247,   274,    -1,   382,   626,   723,   724,
     725,    -1,    -1,   312,   189,    -1,   326,    -1,   274,   189,
      -1,   279,    -1,    84,   189,    -1,    51,    -1,   110,    -1,
     100,    -1,    84,   173,    -1,    50,    -1,   274,   173,    -1,
     278,    -1,   312,   173,    -1,   325,    -1,    -1,  1061,    -1,
      -1,   171,    -1,   393,   626,   112,    -1,   112,    -1,   280,
     626,   447,    -1,   344,   626,   637,   340,    54,    -1,   213,
     327,    -1,    64,   717,   626,   617,    -1,   348,   626,  1052,
      -1,   397,   626,  1061,    -1,   363,   734,   737,    -1,   735,
      -1,   734,   735,    -1,   568,   736,    -1,    -1,   391,   568,
      -1,    -1,   738,    -1,   319,   262,  1061,    -1,   319,   262,
     171,    -1,   188,   199,    -1,    -1,   287,   116,   741,   276,
     753,   755,    -1,   742,   743,   744,    -1,    -1,   396,   745,
      -1,    -1,    53,   745,    -1,    -1,   321,   443,    -1,   746,
      -1,   745,   746,    -1,   745,  1051,   746,    -1,   747,   749,
     752,   751,  1053,    -1,    -1,   748,    -1,    42,   303,    -1,
      42,   397,    -1,    -1,   750,    -1,   345,   626,    29,    -1,
     345,   626,   104,    -1,   386,   345,   626,    -1,   345,   626,
      -1,    -1,   265,    -1,    -1,   617,    -1,    -1,   754,    -1,
     103,   574,   755,   123,   103,   574,    -1,   756,    -1,   755,
     756,    -1,   757,    -1,   760,    -1,   762,   574,    -1,   276,
      -1,   758,   334,   759,   276,    -1,   443,    -1,    -1,  1061,
      -1,   443,   276,    -1,   762,    -1,   763,    -1,   762,   763,
      -1,   886,    -1,   983,    -1,   901,    -1,   912,    -1,   929,
      -1,   916,    -1,   822,    -1,   955,    -1,   959,    -1,   946,
      -1,   965,    -1,   985,    -1,   992,    -1,  1014,    -1,  1027,
      -1,  1032,    -1,  1034,    -1,  1036,    -1,   899,    -1,   866,
      -1,   877,    -1,   880,    -1,   884,    -1,   832,    -1,   801,
      -1,   804,    -1,   806,    -1,   818,    -1,   820,    -1,   821,
      -1,   824,    -1,   826,    -1,   828,    -1,   847,    -1,   853,
      -1,   827,    -1,   786,    -1,   764,    -1,   772,    -1,  1038,
      -1,  1044,    -1,  1045,    -1,  1046,    -1,   200,  1028,   765,
     766,   767,   771,    -1,    -1,   401,   170,    -1,    -1,   770,
    1092,   397,    -1,    -1,   373,   311,   768,    -1,   769,    -1,
     768,   769,    -1,   770,    95,    42,  1047,    -1,     9,    -1,
      11,    -1,    14,    -1,    15,    -1,    96,    -1,   255,    -1,
     256,    -1,    -1,   373,   376,   104,    -1,   206,  1061,   773,
     780,   783,    -1,    -1,   774,    -1,   775,    -1,   774,   775,
      -1,   365,  1052,   174,   776,   724,   777,    -1,    55,    -1,
       9,    -1,   217,    -1,   172,    -1,    -1,   778,    -1,   779,
      -1,   777,   779,    -1,   898,   201,  1061,    -1,    -1,   781,
      -1,   782,    -1,   781,   782,    -1,   311,   776,  1061,    42,
    1061,   777,    -1,    -1,   784,    -1,   785,    -1,   784,   785,
      -1,    87,  1061,   376,  1061,   777,    -1,   333,   788,   787,
      -1,    -1,   143,    -1,   789,    -1,   794,    -1,  1052,   790,
     791,   792,    -1,    -1,   399,  1052,    -1,    -1,    27,   123,
     762,    -1,   793,    -1,   792,   793,    -1,   400,  1067,   796,
      -1,     9,  1052,   791,   795,    -1,   400,   800,   797,   796,
      -1,   762,    -1,   247,   339,    -1,    -1,   798,    -1,   799,
      -1,   798,   799,    -1,    19,   800,    -1,  1067,    -1,   149,
     802,   803,    -1,  1053,    -1,  1053,    -1,   238,   908,   947,
     951,   805,   954,    -1,   396,   523,    -1,   158,   816,   808,
     810,   817,   807,    -1,   133,    -1,    -1,   809,    -1,    16,
     816,    -1,   809,    16,   816,    -1,   811,    -1,   810,   811,
      -1,   400,   812,   813,   762,    -1,    20,    -1,   381,    -1,
     164,    -1,  1021,   816,    -1,    -1,   814,    -1,   815,    -1,
     814,   815,    -1,    16,   812,    -1,  1061,    -1,  1096,    -1,
     381,    -1,   164,    -1,   816,   374,   816,    -1,  1067,    -1,
      -1,   400,   269,   762,    -1,   324,  1052,   931,   933,   819,
      -1,   142,    -1,   186,    -1,   292,  1052,    -1,   306,  1052,
     823,    -1,    -1,   178,  1047,    -1,   385,   908,   825,    -1,
     298,    -1,   299,    -1,    47,  1028,    -1,    83,    -1,   105,
     829,   831,    -1,   105,   830,   831,    -1,   908,   956,   933,
      -1,   166,  1028,    -1,    -1,   130,    -1,    43,   480,  1047,
     833,   843,  1009,   842,    -1,    -1,   396,   836,   834,   835,
      -1,    -1,   183,  1052,    -1,    -1,   321,  1052,    -1,   837,
      -1,   836,  1051,   837,    -1,   836,   837,    -1,   838,    -1,
     839,    -1,   840,    -1,    42,   303,   840,    -1,    42,    82,
     840,    -1,   841,    -1,   840,  1051,   841,    -1,   840,   841,
      -1,  1061,    -1,   261,    -1,    -1,   126,    -1,   844,    -1,
     845,   846,    -1,    -1,   262,   271,   762,    -1,    -1,   250,
     262,   271,   762,    -1,   361,   848,   208,  1052,   851,   843,
     852,    -1,   849,    -1,   848,   849,    -1,  1017,   106,    42,
     850,    -1,  1052,    -1,  1062,    -1,   345,    -1,    -1,   401,
     282,  1052,    -1,    -1,   145,    -1,   387,  1052,   854,   859,
     851,   864,   843,   865,    -1,   106,    42,   858,  1061,   855,
      -1,    -1,   856,    -1,   857,    -1,   856,   857,    -1,   266,
     858,  1061,    -1,    -1,     9,    -1,   208,   860,    -1,   861,
      -1,   860,   861,    -1,   860,  1051,   861,    -1,  1052,   862,
     863,    -1,    -1,   107,   196,  1052,    -1,    -1,    90,   196,
    1052,    -1,    -1,   365,   196,  1052,    -1,    -1,   147,    -1,
     395,   872,     8,   873,   875,   287,   867,   876,    -1,   395,
     868,   101,   867,   870,    -1,   395,   872,     8,   873,   874,
     869,   215,   287,   867,   876,    -1,   395,   872,    34,   313,
    1052,    -1,    -1,   262,    -1,    -1,   174,    -1,    -1,   166,
      -1,   302,    -1,   384,    -1,   871,    -1,   870,   871,    -1,
    1052,    -1,     9,   288,    -1,     9,   304,   259,  1052,    -1,
      -1,   184,    -1,    -1,   352,    -1,    -1,    35,    -1,   123,
      -1,   157,    -1,   159,    -1,   908,    -1,   905,    -1,   185,
    1092,   878,    -1,   185,  1092,   879,   108,   262,  1052,    -1,
      -1,   893,    -1,  1053,    -1,   879,  1053,    -1,    17,   881,
      -1,   882,    -1,   881,   882,    -1,   893,   376,   883,   893,
      -1,    -1,   289,   376,    -1,   160,    -1,   160,   290,    -1,
     160,   277,   885,    -1,   160,   275,    -1,   160,   334,    -1,
      -1,    93,    -1,   277,   891,    -1,   277,   891,   887,   890,
      -1,   277,   887,   889,   138,    -1,    -1,   888,    -1,   894,
      -1,   888,   894,    -1,    -1,   762,    -1,    -1,   138,    -1,
     892,    -1,   893,    -1,   893,   374,   893,    -1,  1053,    -1,
     175,    -1,   617,   375,    -1,  1052,   375,    -1,   895,   388,
    1067,    -1,   895,   399,   896,    -1,    -1,   401,   371,   898,
      -1,   897,    -1,   896,     8,   897,    -1,  1061,   178,  1061,
      42,  1061,   388,  1067,    -1,    34,    -1,     8,    -1,   360,
     900,    -1,   329,    -1,   329,   321,  1047,    -1,   329,   183,
    1047,    -1,  1047,    -1,   264,   902,   903,    -1,    -1,   161,
      -1,   904,    -1,   903,   904,    -1,   905,   906,    -1,   204,
      -1,   270,    -1,   210,    -1,   205,    -1,   162,    -1,   907,
      -1,   906,   907,    -1,   908,   909,    -1,  1052,    -1,    -1,
     910,    -1,   911,    -1,   910,   911,    -1,   401,   229,    -1,
     401,   248,   323,    -1,   426,    -1,    57,   913,    -1,   914,
      -1,   913,   914,    -1,   913,  1051,   914,    -1,   908,   915,
      -1,    -1,   302,   401,   248,   323,    -1,   384,   401,   248,
     323,    -1,   302,   174,   309,    -1,   384,   174,   309,    -1,
     401,   248,   323,    -1,   401,   229,    -1,   917,   918,   920,
     922,   924,   928,    -1,   917,   918,   920,   922,   923,   933,
     928,    -1,   296,   908,    -1,   919,    -1,    -1,   298,    -1,
     247,   298,    -1,   285,   298,    -1,    -1,   921,    -1,   401,
     229,    -1,   401,   248,   229,    -1,    -1,   208,  1052,    -1,
      -1,   214,   212,  1052,    -1,   925,    -1,   926,   927,    -1,
      -1,    27,   123,   761,    -1,    -1,   250,    27,   123,   761,
      -1,    -1,   140,    -1,   930,   937,   932,    -1,   930,   933,
     932,    -1,   404,  1052,   931,    -1,    -1,   178,  1061,    -1,
      -1,   148,    -1,    -1,   934,    -1,   935,   936,    -1,    -1,
     209,   214,   762,    -1,    -1,   250,   209,   214,   762,    -1,
     938,   942,    -1,    -1,   898,   939,   940,    -1,    -1,     7,
      -1,  1047,   941,    -1,   376,   224,  1047,   262,   247,   274,
      -1,  1052,    -1,   274,    -1,    -1,   224,    -1,   225,    -1,
     943,    -1,   944,   945,    -1,    -1,    27,   137,   763,    -1,
      -1,   250,    27,   137,   763,    -1,   346,   908,   947,   950,
     951,   952,   954,    -1,   948,    -1,   947,   948,    -1,   262,
      24,   949,  1028,    -1,   262,   109,   949,  1028,    -1,    -1,
     214,    -1,    -1,   401,   118,   196,   267,    -1,    -1,    62,
     341,   626,  1052,    -1,   204,   287,   626,   443,   953,    -1,
     396,  1028,    -1,    -1,   374,   443,    -1,   270,   287,   626,
     443,   953,    -1,   183,  1028,    -1,   320,   908,   956,   957,
     924,   958,    -1,    -1,   298,    -1,    -1,   208,  1047,    -1,
      -1,   141,    -1,   343,   960,    -1,   961,    -1,   960,   961,
      -1,   963,   962,   964,    -1,   376,    -1,   389,    42,    -1,
     117,    42,    -1,   964,    -1,   963,   964,    -1,  1047,    -1,
     262,    -1,   260,    -1,   381,    -1,   164,    -1,   252,    -1,
     966,    -1,   970,    -1,   980,    -1,   112,   967,   968,   969,
      -1,  1017,    -1,    -1,   391,  1047,    -1,    -1,   401,   248,
       7,    -1,   112,   971,    -1,   972,    -1,   971,   972,    -1,
     973,   974,    -1,  1001,    -1,    -1,   975,    -1,   976,    -1,
     975,   976,    -1,   401,   978,   977,    -1,    -1,  1047,    -1,
      27,   979,    -1,    33,    -1,    36,    -1,    39,    -1,    84,
      -1,    86,    -1,   156,   152,    -1,   156,   153,    -1,   190,
      -1,   191,    -1,   231,    -1,   233,    -1,   240,   212,    40,
      -1,  1006,    -1,   345,    -1,   224,    -1,    64,    -1,   283,
      -1,   112,   981,    -1,   982,    -1,   981,   982,    -1,  1052,
     995,    -1,   242,    89,  1061,   376,   984,    -1,   242,  1061,
     376,   984,    -1,  1018,    -1,   194,  1067,   986,   988,   991,
      -1,   990,    -1,   987,    -1,   373,   990,    -1,  1022,    -1,
     989,    -1,   122,   990,    -1,   761,    -1,   247,   339,    -1,
      -1,   135,    -1,     3,  1052,   993,   994,    -1,     3,   999,
    1009,   994,    -1,     3,  1052,   428,    90,   994,    -1,     3,
    1052,   995,  1009,   994,    -1,   178,  1052,    -1,   178,   998,
      -1,    -1,   124,    -1,    27,   996,    -1,   224,   253,  1061,
     997,    -1,    -1,    64,   253,  1061,    -1,   421,    -1,   420,
      -1,   419,    -1,   419,   417,    -1,   415,    -1,    97,    -1,
     418,    -1,   418,   416,    -1,   427,    -1,   429,    -1,   414,
      -1,   422,   214,    -1,   159,   356,    -1,  1000,    -1,   999,
    1000,    -1,  1001,  1002,    -1,  1052,    -1,  1052,   384,  1061,
      -1,    -1,  1003,    -1,  1004,    -1,  1003,  1004,    -1,   401,
    1005,  1061,    -1,    27,  1007,    -1,    29,    -1,   424,    -1,
     248,    33,    -1,    34,   414,    -1,   248,    36,    -1,    38,
      -1,    84,    -1,    86,    -1,    92,    -1,   121,    -1,   156,
     152,    -1,   156,   153,    -1,   190,    -1,   191,    -1,   231,
      -1,   233,    -1,   240,   212,    40,    -1,   260,    -1,   425,
      54,   212,    -1,  1006,    -1,   335,    -1,   345,    -1,   423,
      -1,   390,    -1,   413,    -1,   426,    -1,   412,    -1,    27,
     224,   717,  1061,  1008,    -1,    64,   717,  1061,    -1,   283,
     717,  1061,    -1,    -1,   262,  1011,  1012,  1013,  1010,    -1,
      -1,   250,   262,  1011,   762,    -1,   422,    -1,   159,    -1,
      -1,  1052,    -1,   762,    -1,  1015,  1026,    -1,     5,  1029,
     376,  1029,  1023,    -1,     5,  1029,  1016,   183,  1029,  1023,
      -1,     5,    89,  1047,   376,  1047,  1020,  1023,    -1,    -1,
     376,  1029,    -1,  1061,    -1,  1017,  1061,    -1,  1017,  1051,
    1061,    -1,  1019,    -1,  1018,  1019,    -1,  1018,  1051,  1019,
      -1,  1061,  1020,    -1,    -1,   328,    -1,  1022,    -1,   250,
      -1,    -1,  1024,  1025,    -1,    -1,   262,   345,   157,   763,
      -1,    -1,   250,   262,   345,   157,   763,    -1,    -1,   125,
      -1,   362,  1028,   178,  1029,  1023,  1031,    -1,   362,  1028,
     178,  1047,   183,  1029,  1023,  1031,    -1,   362,    89,  1052,
     178,  1052,  1020,  1023,  1031,    -1,  1047,    -1,  1028,  1047,
      -1,  1028,  1051,  1047,    -1,  1030,    -1,  1029,  1030,    -1,
    1029,  1051,  1030,    -1,  1047,    -1,  1047,   328,    -1,    -1,
     146,    -1,   244,  1047,    42,  1029,  1023,  1033,    -1,   244,
    1047,    42,  1047,   183,  1029,  1023,  1033,    -1,    -1,   136,
      -1,   115,  1047,   208,  1029,  1023,  1035,    -1,   115,  1047,
     208,  1047,   183,  1029,  1023,  1035,    -1,   115,  1047,    42,
    1047,   183,  1029,  1023,  1035,    -1,   115,  1047,   208,  1047,
     183,  1029,   307,  1047,  1023,  1035,    -1,   115,  1047,    42,
    1047,   183,  1029,   307,  1047,  1023,  1035,    -1,    -1,   132,
      -1,    77,  1029,  1020,  1090,  1096,  1021,  1023,  1037,    -1,
      -1,   129,    -1,   355,   908,  1039,  1042,   933,  1040,    -1,
     214,  1043,  1061,  1041,    -1,   172,   298,   214,   626,  1017,
      -1,    -1,   144,    -1,    -1,   401,   345,  1061,    -1,    -1,
     401,   426,   267,    -1,  1084,    -1,   626,   172,    -1,   626,
     216,    -1,   203,   589,    -1,   370,   589,    -1,   182,   589,
      -1,  1052,    -1,  1048,    -1,  1050,    -1,   219,   259,  1052,
      -1,     6,   259,  1052,    -1,     6,   196,  1052,    -1,  1049,
      -1,   433,  1049,    -1,   434,  1049,    -1,   439,    -1,   440,
      -1,   442,    -1,   445,    -1,   444,    -1,   448,    -1,    66,
      -1,  1053,  1054,  1055,    -1,   443,    -1,    -1,  1056,    -1,
      -1,  1094,  1058,  1095,    -1,  1057,    -1,  1056,  1057,    -1,
     196,  1053,    -1,   259,  1053,    -1,  1059,    -1,  1058,  1059,
      -1,  1058,  1051,  1059,    -1,  1060,    -1,  1053,    -1,  1064,
      -1,  1094,  1060,  1095,    -1,  1060,   433,  1060,    -1,  1060,
     434,  1060,    -1,  1060,   432,  1060,    -1,  1052,    -1,  1062,
      -1,   180,  1052,    -1,  1063,    -1,  1065,    -1,  1064,    -1,
    1066,    -1,  1048,    -1,  1050,    -1,     9,  1064,    -1,     9,
    1066,    -1,   350,    -1,   411,    -1,   293,    -1,   192,    -1,
     234,    -1,   252,    -1,   381,    -1,   164,    -1,  1073,  1068,
      -1,    -1,  1069,    -1,  1070,    -1,  1069,  1070,    -1,  1071,
    1072,    -1,    19,    -1,   266,    -1,  1073,    -1,  1074,    -1,
    1078,    -1,   250,  1078,    -1,  1075,    -1,  1076,    -1,  1075,
    1076,    -1,  1021,  1084,  1077,    -1,  1096,    -1,  1094,  1096,
    1074,  1095,    -1,  1080,    -1,  1094,  1067,  1095,    -1,   626,
    1021,    -1,  1096,    -1,  1096,   626,  1084,  1096,    -1,  1096,
     626,   250,  1084,  1096,    -1,  1082,    -1,  1096,  1079,  1081,
      -1,  1096,   626,  1081,    -1,   255,    -1,    11,    -1,    12,
      -1,    13,    -1,  1079,  1083,    -1,   284,    -1,   246,    -1,
     411,    -1,  1079,  1085,    -1,  1086,    -1,  1087,    -1,  1088,
      -1,  1089,    -1,  1090,    -1,  1091,    -1,   187,  1093,    -1,
     407,    -1,   187,  1093,   266,   154,  1092,    -1,   408,    -1,
     220,  1093,    -1,   405,    -1,   220,  1093,   266,   154,  1092,
      -1,   406,    -1,   154,  1092,    -1,   155,  1092,    -1,   409,
      -1,   410,    -1,    -1,   376,    -1,    -1,   372,    -1,   460,
      -1,   430,    -1,   461,    -1,   431,    -1,  1061,    -1,  1094,
    1061,  1095,    -1,  1081,    -1,  1096,   438,  1096,    -1,  1096,
     437,  1096,    -1,  1096,   433,  1096,    -1,  1096,   434,  1096,
      -1,  1096,   435,  1096,    -1,  1094,  1096,  1095,    -1,   433,
    1096,    -1,   434,  1096,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   568,   568,   574,   578,   583,   584,   587,   598,   609,
     610,   613,   623,   626,   627,   628,   632,   633,   634,   637,
     641,   642,   649,   660,   665,   666,   669,   670,   673,   674,
     676,   677,   679,   682,   685,   686,   691,   692,   693,   694,
     695,   696,   699,   704,   709,   714,   719,   724,   729,   733,
     739,   743,   747,   756,   757,   764,   765,   770,   771,   776,
     777,   784,   790,   791,   796,   799,   802,   807,   813,   814,
     819,   823,   826,   829,   834,   837,   838,   843,   847,   851,
     857,   860,   861,   862,   865,   868,   871,   875,   876,   879,
     880,   885,   888,   903,   906,   914,   915,   921,   926,   927,
     930,   931,   937,   941,   946,   951,   952,   955,   956,   957,
     960,   961,   964,   969,   974,   975,   980,   985,   986,   992,
     999,  1000,  1005,  1016,  1023,  1036,  1037,  1043,  1046,  1049,
    1052,  1055,  1058,  1061,  1064,  1067,  1070,  1073,  1076,  1087,
    1090,  1093,  1096,  1099,  1102,  1105,  1108,  1111,  1114,  1117,
    1120,  1124,  1129,  1130,  1133,  1133,  1140,  1145,  1148,  1167,
    1168,  1169,  1170,  1171,  1172,  1175,  1176,  1181,  1182,  1183,
    1184,  1185,  1188,  1193,  1196,  1198,  1203,  1208,  1209,  1210,
    1213,  1214,  1219,  1222,  1223,  1224,  1226,  1227,  1230,  1231,
    1234,  1239,  1244,  1250,  1251,  1256,  1257,  1260,  1265,  1268,
    1269,  1274,  1280,  1281,  1284,  1288,  1290,  1296,  1298,  1302,
    1307,  1309,  1312,  1313,  1318,  1319,  1320,  1321,  1322,  1323,
    1324,  1330,  1334,  1337,  1338,  1341,  1342,  1347,  1351,  1357,
    1365,  1366,  1369,  1370,  1373,  1374,  1379,  1380,  1381,  1382,
    1383,  1384,  1385,  1386,  1387,  1388,  1392,  1395,  1400,  1403,
    1406,  1411,  1412,  1415,  1416,  1419,  1420,  1423,  1424,  1427,
    1430,  1431,  1436,  1441,  1442,  1445,  1446,  1449,  1450,  1453,
    1458,  1459,  1462,  1465,  1470,  1475,  1476,  1479,  1480,  1483,
    1487,  1488,  1491,  1492,  1497,  1500,  1505,  1510,  1515,  1516,
    1521,  1524,  1545,  1548,  1549,  1550,  1553,  1554,  1557,  1558,
    1563,  1564,  1565,  1566,  1567,  1568,  1569,  1570,  1571,  1572,
    1573,  1574,  1577,  1581,  1582,  1585,  1588,  1591,  1592,  1612,
    1617,  1618,  1621,  1627,  1630,  1637,  1644,  1645,  1648,  1649,
    1650,  1651,  1652,  1653,  1654,  1655,  1656,  1657,  1658,  1659,
    1662,  1665,  1668,  1672,  1673,  1676,  1677,  1679,  1680,  1683,
    1692,  1703,  1710,  1711,  1714,  1715,  1719,  1720,  1723,  1724,
    1727,  1729,  1730,  1733,  1734,  1736,  1737,  1740,  1741,  1744,
    1747,  1748,  1751,  1754,  1760,  1764,  1767,  1768,  1771,  1781,
    1790,  1794,  1800,  1806,  1807,  1812,  1820,  1821,  1822,  1825,
    1826,  1831,  1838,  1839,  1842,  1849,  1854,  1855,  1856,  1857,
    1858,  1859,  1860,  1861,  1862,  1863,  1864,  1865,  1868,  1869,
    1872,  1876,  1877,  1880,  1881,  1886,  1889,  1892,  1895,  1898,
    1901,  1905,  1906,  1909,  1913,  1914,  1919,  1927,  1943,  1949,
    1950,  1955,  1962,  1963,  1968,  1971,  1974,  1979,  1980,  1983,
    1984,  1985,  1986,  1987,  1988,  1989,  1990,  1991,  1992,  1993,
    1994,  1995,  1996,  1997,  1998,  1999,  2000,  2001,  2002,  2003,
    2004,  2005,  2006,  2007,  2008,  2009,  2010,  2011,  2014,  2019,
    2020,  2022,  2023,  2026,  2027,  2028,  2035,  2038,  2039,  2042,
    2043,  2046,  2050,  2051,  2054,  2055,  2058,  2059,  2060,  2061,
    2064,  2067,  2070,  2073,  2074,  2075,  2078,  2079,  2082,  2089,
    2090,  2091,  2094,  2097,  2100,  2103,  2106,  2107,  2110,  2115,
    2117,  2118,  2121,  2122,  2125,  2126,  2127,  2128,  2129,  2130,
    2131,  2132,  2133,  2134,  2135,  2136,  2137,  2140,  2142,  2143,
    2145,  2146,  2148,  2149,  2152,  2156,  2157,  2158,  2161,  2166,
    2167,  2168,  2169,  2170,  2171,  2172,  2173,  2174,  2175,  2176,
    2177,  2178,  2179,  2180,  2182,  2183,  2185,  2186,  2189,  2190,
    2193,  2196,  2199,  2202,  2205,  2208,  2211,  2215,  2216,  2219,
    2221,  2222,  2224,  2225,  2228,  2229,  2232,  2239,  2241,  2250,
    2257,  2258,  2261,  2262,  2265,  2266,  2269,  2270,  2273,  2278,
    2283,  2284,  2287,  2288,  2291,  2292,  2295,  2296,  2297,  2298,
    2301,  2302,  2305,  2306,  2309,  2310,  2313,  2320,  2321,  2332,
    2336,  2340,  2352,  2357,  2362,  2365,  2366,  2369,  2384,  2390,
    2391,  2402,  2403,  2404,  2405,  2406,  2407,  2408,  2409,  2410,
    2411,  2412,  2413,  2414,  2415,  2416,  2417,  2418,  2419,  2420,
    2421,  2422,  2423,  2424,  2425,  2426,  2427,  2428,  2429,  2430,
    2431,  2432,  2433,  2434,  2435,  2436,  2437,  2438,  2439,  2440,
    2441,  2442,  2443,  2444,  2452,  2462,  2463,  2466,  2467,  2470,
    2471,  2476,  2477,  2482,  2487,  2488,  2489,  2490,  2491,  2492,
    2493,  2496,  2497,  2504,  2512,  2513,  2516,  2517,  2522,  2527,
    2528,  2529,  2530,  2533,  2534,  2537,  2538,  2543,  2548,  2549,
    2552,  2553,  2558,  2563,  2564,  2567,  2568,  2573,  2582,  2588,
    2589,  2592,  2593,  2596,  2603,  2604,  2607,  2608,  2611,  2612,
    2617,  2622,  2629,  2636,  2637,  2640,  2641,  2646,  2647,  2652,
    2659,  2671,  2677,  2680,  2686,  2694,  2702,  2710,  2713,  2714,
    2717,  2718,  2723,  2724,  2729,  2736,  2737,  2738,  2739,  2746,
    2747,  2750,  2751,  2756,  2765,  2768,  2769,  2770,  2771,  2773,
    2776,  2777,  2783,  2790,  2796,  2802,  2808,  2813,  2814,  2821,
    2826,  2827,  2833,  2839,  2845,  2848,  2853,  2859,  2863,  2864,
    2870,  2881,  2882,  2889,  2890,  2893,  2894,  2897,  2900,  2903,
    2909,  2910,  2911,  2915,  2920,  2925,  2928,  2931,  2936,  2937,
    2939,  2940,  2945,  2950,  2956,  2957,  2962,  2963,  2972,  2981,
    2984,  2989,  2993,  2994,  2995,  2998,  2999,  3001,  3002,  3008,
    3019,  3024,  3025,  3030,  3031,  3037,  3042,  3043,  3046,  3049,
    3050,  3053,  3058,  3065,  3066,  3071,  3072,  3077,  3078,  3080,
    3081,  3090,  3094,  3097,  3101,  3105,  3106,  3108,  3109,  3112,
    3113,  3114,  3115,  3118,  3119,  3124,  3125,  3126,  3130,  3131,
    3133,  3134,  3137,  3138,  3139,  3142,  3143,  3146,  3147,  3153,
    3157,  3163,  3164,  3167,  3168,  3176,  3181,  3184,  3189,  3193,
    3194,  3200,  3201,  3202,  3203,  3204,  3207,  3208,  3214,  3219,
    3226,  3235,  3236,  3241,  3244,  3251,  3255,  3260,  3261,  3268,
    3271,  3274,  3279,  3282,  3285,  3288,  3291,  3298,  3303,  3304,
    3309,  3312,  3317,  3322,  3325,  3334,  3338,  3339,  3340,  3341,
    3359,  3366,  3367,  3370,  3373,  3378,  3384,  3385,  3386,  3387,
    3388,  3391,  3392,  3397,  3403,  3407,  3408,  3413,  3414,  3419,
    3420,  3421,  3427,  3433,  3436,  3439,  3444,  3450,  3451,  3452,
    3454,  3455,  3457,  3458,  3468,  3478,  3492,  3495,  3498,  3499,
    3500,  3501,  3504,  3505,  3508,  3509,  3512,  3513,  3516,  3517,
    3522,  3527,  3533,  3534,  3540,  3541,  3543,  3544,  3550,  3555,
    3563,  3568,  3569,  3571,  3572,  3575,  3576,  3579,  3585,  3586,
    3591,  3592,  3597,  3603,  3604,  3611,  3612,  3616,  3620,  3623,
    3628,  3632,  3633,  3634,  3638,  3641,  3647,  3648,  3653,  3654,
    3662,  3672,  3673,  3678,  3681,  3686,  3687,  3690,  3691,  3694,
    3695,  3700,  3703,  3708,  3709,  3714,  3717,  3725,  3731,  3732,
    3735,  3736,  3740,  3741,  3755,  3760,  3761,  3766,  3771,  3772,
    3773,  3776,  3777,  3782,  3783,  3784,  3785,  3786,  3787,  3796,
    3800,  3804,  3813,  3820,  3836,  3837,  3842,  3843,  3847,  3853,
    3856,  3861,  3867,  3872,  3873,  3878,  3881,  3886,  3891,  3892,
    3895,  3896,  3897,  3898,  3899,  3900,  3901,  3902,  3903,  3904,
    3905,  3906,  3907,  3908,  3909,  3912,  3913,  3914,  3918,  3924,
    3927,  3932,  3955,  3958,  3963,  3980,  3985,  3986,  3989,  3992,
    3993,  3996,  4002,  4003,  4005,  4006,  4018,  4022,  4026,  4030,
    4036,  4039,  4043,  4044,  4047,  4061,  4067,  4068,  4073,  4074,
    4075,  4076,  4077,  4078,  4079,  4080,  4081,  4082,  4083,  4084,
    4085,  4088,  4091,  4096,  4102,  4105,  4109,  4112,  4117,  4120,
    4125,  4128,  4133,  4134,  4135,  4136,  4137,  4138,  4139,  4140,
    4141,  4142,  4143,  4144,  4145,  4146,  4147,  4148,  4149,  4150,
    4151,  4152,  4153,  4154,  4155,  4156,  4159,  4159,  4159,  4162,
    4167,  4170,  4175,  4176,  4181,  4182,  4187,  4188,  4191,  4192,
    4195,  4208,  4214,  4218,  4222,  4228,  4229,  4253,  4257,  4261,
    4267,  4271,  4275,  4281,  4287,  4288,  4291,  4292,  4299,  4302,
    4307,  4310,  4314,  4317,  4321,  4322,  4332,  4336,  4340,  4346,
    4349,  4352,  4357,  4360,  4363,  4368,  4372,  4377,  4378,  4388,
    4391,  4396,  4397,  4404,  4407,  4410,  4413,  4417,  4422,  4423,
    4429,  4436,  4437,  4447,  4456,  4461,  4466,  4467,  4470,  4471,
    4476,  4477,  4482,  4483,  4484,  4492,  4502,  4511,  4521,  4524,
    4527,  4530,  4533,  4536,  4541,  4544,  4547,  4552,  4555,  4558,
    4563,  4567,  4571,  4578,  4583,  4592,  4597,  4598,  4601,  4602,
    4608,  4609,  4612,  4613,  4616,  4618,  4621,  4626,  4629,  4632,
    4635,  4638,  4641,  4644,  4664,  4668,  4673,  4679,  4680,  4683,
    4687,  4693,  4697,  4703,  4707,  4713,  4714,  4715,  4716,  4717,
    4718,  4719,  4720,  4726,  4734,  4735,  4741,  4744,  4749,  4757,
    4758,  4761,  4764,  4769,  4773,  4779,  4784,  4787,  4792,  4797,
    4800,  4805,  4819,  4828,  4832,  4836,  4840,  4843,  4846,  4849,
    4855,  4856,  4857,  4858,  4861,  4872,  4873,  4874,  4877,  4888,
    4889,  4890,  4891,  4892,  4893,  4896,  4897,  4899,  4900,  4903,
    4904,  4906,  4907,  4909,  4910,  4911,  4914,  4917,  4917,  4918,
    4918,  4921,  4924,  4929,  4932,  4937,  4940,  4944,  4947,  4951,
    4955,  4958,  4961,  4964,  4967,  4970
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ACCEPT", "ACCESS", "ADD", "ADDRESS",
  "ADVANCING", "AFTER", "ALL", "ALPHABET", "ALPHABETIC_TOK",
  "ALPHABETIC_LOWER", "ALPHABETIC_UPPER", "ALPHANUMERIC",
  "ALPHANUMERIC_EDITED", "ALSO", "ALTER", "ALTERNATE", "AND", "ANY", "ARE",
  "AREA", "AREAS", "ASCENDING", "AS", "ASSIGN", "AT", "AUTHOR", "AUTO",
  "AUTOMATIC", "BACKGROUND", "BACKGROUNDCOLOR", "BEEP", "BEFORE",
  "BEGINNING", "BELL", "BINARY", "BLANK", "BLINK", "BLOCK", "BOTTOM", "BY",
  "CALL", "CALL_CONV_C", "CALL_CONV_STDCALL", "CALL_LOADLIB", "CANCEL",
  "CD", "CENTER", "CF", "CH", "CHAIN", "CHAINING", "CHARACTER",
  "CHARACTERS", "CLASS", "CLOSE", "CMD_LINE", "COBWORD", "CODE",
  "CODE_SET", "COLLATING", "COLOR", "COLUMN", "COLUMNS", "COMMA", "COMMON",
  "COMMUNICATION", "COMP", "COMP1", "COMP2", "COMP3", "COMP4", "COMP5",
  "COMP6", "COMPX", "COMPUTE", "CONDITIONAL", "CONFIGURATION", "CONSOLE",
  "CONTAINS", "CONTENT", "CONTINUE", "CONTROL", "CONTROLS", "CONVERT",
  "CONVERTING", "COPY", "CORRESPONDING", "COUNT", "CURRENCY", "CURSOR",
  "CYCLE", "DARK", "DATA", "DATA_POINTER", "DATE_COMPILED", "DATE_WRITTEN",
  "DATE_TIME", "DE", "DEBUGGING", "DECIMAL_POINT", "DECLARATIVES",
  "_DEFAULT", "DELETE", "DELIMITED", "DELIMITER", "DEPENDING",
  "DESCENDING", "DETAIL", "DISK", "DISPLAY", "DISPLAY_SCREEN", "DIRECTION",
  "DIVIDE", "DIVISION", "DOWN", "DUPLICATES", "DYNAMIC", "DBCS",
  "ECHOTOKEN", "ELSE", "END", "END_ACCEPT", "END_ADD", "END_CALL",
  "END_CALL_LOADLIB", "END_CHAIN", "END_COMPUTE", "END_DELETE",
  "END_DISPLAY", "END_DIVIDE", "END_EVALUATE", "END_FUNCTION", "END_IF",
  "END_MULTIPLY", "END_OF_PAGE", "END_PERFORM", "END_PROGRAM", "END_READ",
  "END_RETURN", "END_REWRITE", "END_SEARCH", "END_START", "END_STRINGCMD",
  "END_SUBTRACT", "END_UNSTRING", "END_WRITE", "ENTER", "ENVIRONMENT",
  "ENVIRONMENT_VARIABLE", "EOL", "EOS", "EQUAL", "EQUALS", "ERASE",
  "ERROR_TOK", "EVALUATE", "EXCEPTION", "EXIT", "EXCLUSIVE", "EXTEND",
  "EXTERNAL", "FALSE_TOK", "FD", "FILEX", "FILE_CONTROL", "FILE_ID",
  "FILE_TOK", "FILLER", "FINAL", "FIRST", "FOOTING", "FOR", "FOREVER",
  "FOREGROUND", "FOREGROUNDCOLOR", "FROM", "FULL", "FUNCTION",
  "FUNCTION_ID", "GENERATE", "GIVING", "GLOBAL", "GO", "GOBACK", "GREATER",
  "GROUP", "HEADING", "HIGH", "HIGHLIGHT", "HIGHVALUES", "IDENTIFICATION",
  "IF", "IGNORE", "IN", "INDEX", "INDEXED", "INDICATE", "INITIALIZE",
  "INITIAL_TOK", "INKEY", "INITIATE", "INPUT", "INPUT_OUTPUT", "INSPECT",
  "INSTALLATION", "INTO", "INVALID", "I_O", "I_O_CONTROL", "IS",
  "JUSTIFIED", "KEY", "LABEL", "LAST", "LEADING", "LEFT", "LENGTH", "LESS",
  "LIMIT", "LIMITS", "LINAGE", "LINE", "LINES", "LINKAGE", "LISTSEP",
  "LITERAL", "LOCK", "LOCAL_STORAGE", "LOW", "LOWER", "LOWLIGHT",
  "LOWVALUES", "LPAR", "MANUAL", "MEMORY", "MERGE", "MINUS", "MODE",
  "MODULES", "MOVE", "MULTIPLE", "MULTIPLY", "NATIVE", "NEGATIVE", "NEXT",
  "NO", "NOECHO", "NOT", "NOTEXCEP", "NULL_TOK", "NUMBER", "NUMBERS",
  "NUMERIC", "NUMERIC_EDITED", "OBJECT_COMPUTER", "OCCURS", "OF", "OFF",
  "OMITTED", "ON", "ONLY", "OPEN", "OPTIONAL", "OR", "ORDER",
  "ORGANIZATION", "OTHER", "OUTPUT", "OVERFLOW_TOK", "PACKED_DECIMAL",
  "PADDING", "PAGE_TOK", "PARAGRAPH", "PERIOD", "PERFORM", "PF", "PH",
  "PICTURE", "PLUS", "POINTER", "POSITION", "POSITIVE", "PREVIOUS",
  "PRINTER", "PROCEDURE", "PROCEDURES", "PROCEED", "PROGRAM", "PROGRAM_ID",
  "PURGE", "QUOTES", "RANDOM", "RD", "READ", "READY", "RECORD", "RECORDS",
  "RECURSIVE", "REDEFINES", "REEL", "REFERENCE", "REFERENCES", "RELATIVE",
  "RELEASE", "REMAINDER", "REMARK", "REMOVAL", "RENAMES", "REPLACING",
  "REPORT", "REPORTING", "REPORTS", "REQUIRED", "RESERVE", "RESERVED",
  "RESERVED_VIDEO", "RESET", "RETURN_TOK", "RETURNING", "REVERSEVIDEO",
  "REWIND", "REWRITE", "RF", "RH", "RIGHT", "ROUNDED", "RUN", "SAME",
  "SCREEN", "SD", "SEARCH", "SECTION", "SECURE", "SECURITY",
  "SEGMENT_LIMIT", "SELECT", "SENTENCE", "SEPARATE", "SEQUENCE",
  "SEQUENTIAL", "SET", "SIGN", "SIZE", "SORT", "SORT_MERGE", "SOURCE",
  "SOURCE_COMPUTER", "SPACES", "SPECIAL_NAMES", "STANDARD", "STANDARD_1",
  "STANDARD_2", "START", "STATUS", "STD_ERROR", "STD_INPUT", "STD_OUTPUT",
  "STOP", "STRINGCMD", "SUBTRACT", "SUM", "SYNCHRONIZED", "TALLYING",
  "TAPE", "TCOBPROTO1", "TCOBPROTO2", "TELLYING", "TERMINATE", "TEST",
  "THAN", "THEN", "THRU", "TIMES", "TO", "TOKDUMMY", "TOP", "TRACE",
  "TRAILING", "TRUE_TOK", "TYPE", "UNDERLINE", "UNIT", "UNLOCK",
  "_UNSIGNED", "UNSTRING", "UNTIL", "UP", "UPDATE", "UPON", "UPPER",
  "USAGE", "USAGENUM", "USE", "USING", "VALUE", "VALUE_LITERAL", "VARYING",
  "WHEN", "WITH", "WORDS", "WORKING_STORAGE", "WRITE", "LT", "LE", "GT",
  "GE", "EQ", "NE", "ZERO", "REVERSED_VIDEO", "REVERSE", "_TIME",
  "DATE_AND_TIME", "YYYYDDD", "YYYYMMDD", "_DAY", "_DATE", "CENTURY_DAY",
  "CENTURY_DATE", "_ESCAPE", "TAB", "AUTO_SKIP", "PROMPT", "REVERSED",
  "DAY_AND_TIME", "_MESSAGE", "DAY_OF_WEEK", "LPARAN_SUB", "RPARAN_SUB",
  "_COLON", "_PLUS", "_MINUS", "_POW_OP", "UNARY_SIGN", "_DIVIDE",
  "_MULTIPLY", "INTEGER_LITERAL", "NUMBER_LITERAL", "FLOAT_LITERAL",
  "HEX_NUMBER_LITERAL", "IDENTIFIER", "DQUOTE_LITERAL", "SQUOTE_LITERAL",
  "TXTLINE", "PICTURE_STR", "HEX_STRING", "\"INITIAL\"", "\"SYMBOLIC\"",
  "\"QUEUE\"", "\"SUB-QUEUE-1\"", "\"SUB-QUEUE-2\"", "\"SUB-QUEUE-3\"",
  "\"MESSAGE\"", "\"TEXT\"", "\"TERMINAL\"", "\"DESTINATION\"",
  "\"TABLE\"", "\"(\"", "\")\"", "$accept", "project_start",
  "nested_prog_list", "source_item", "program_definition",
  "program_mandatory", "end_mandatory", "function_definition",
  "end_function", "nested_prog", "end_program", "function_division",
  "as_literal", "identification_division", "program_name", "opt_recursive",
  "opt_prog_desc", "common_or_initial", "opt_program", "opt_other_options",
  "other_options", "id_option", "author_option", "installation_option",
  "date_written_option", "date_compiled_option", "security_option",
  "remarks_option", "txt_lines", "txt_line", "environment_division",
  "opt_env_div_options", "env_div_options", "env_div_section",
  "configuration_section", "configuration_section_options",
  "config_section_option", "source_comp_options", "opt_debug_mode",
  "object_comp_options", "object_computer_clauses", "computer_name",
  "object_clauses_list", "obj_comp_clause", "obj_comp_memory",
  "mem_option", "obj_comp_sequence", "obj_comp_segment",
  "special_names_clauses", "opt_special_names_options",
  "special_names_options", "special_names_opt", "input_output_section",
  "opt_inpout_sec_header", "io_control_option", "opt_io_control",
  "io_control_list", "io_control_item", "same_clause", "opt_same_option",
  "same_option", "file_name_list", "multiple_file_tape_clause",
  "multiple_file_list", "multiple_file", "multiple_file_position",
  "file_control_option", "file_control_expression_list",
  "file_control_expression", "opt_fileinfo", "file_control_clauses_list",
  "file_control_clauses", "opt_file_assignment_clause",
  "opt_reserve_clause", "opt_organization_clause", "opt_padding_clause",
  "opt_delimiter_clause", "opt_access_mode_clause", "opt_lock_mode_clause",
  "opt_code_set_clause", "opt_collating_seq_clause",
  "opt_record_key_clause", "opt_alternate_key_clause",
  "opt_file_status_clause", "reserve_clause", "reserve_item", "area",
  "file_assignment_clause", "file_name_clause", "device_file_name",
  "opt_file_name", "organization_clause", "padding_clause",
  "delimiter_clause", "delim_type", "access_mode_clause", "mode_type",
  "opt_relative_key", "lock_mode_clause", "lock_mode", "opt_multiple",
  "records", "code_set_clause", "collating_seq_clause",
  "record_key_clause", "record_key_opt", "identifier_list",
  "alternate_key_clause", "alternate_key_item_list", "alt_key_item",
  "opt_with_duplicates", "file_status_clause", "opt_period",
  "data_division", "data_division_option", "data_division_items",
  "data_div_item", "file_section_options",
  "opt_file_section_fd_sd_options", "file_section_fd_sd_options",
  "fd_sd_option", "fd_sd_main", "opt_fd_sd_item_list", "opt_fd_sd_options",
  "fd_sd_options", "fd_sd_opt", "report_clause", "report_name",
  "codeset_clause", "linage_clause", "id_int", "opt_footing", "opt_top",
  "opt_bottom", "value_of_clause", "value_clause_list", "val_clause_item",
  "label_id", "data_records_clause", "label_records_clause",
  "block_contains_clause", "records_character", "record_contains_clause",
  "record_contains", "opt_to_int", "opt_from_int", "record_is_varying",
  "opt_variation_clauses", "variation_clauses", "var_clause",
  "from_to_clause", "depending_on_clause", "fd_sd_item_list",
  "fd_item_entry", "field_description", "integer", "name_or_filler",
  "opt_data_clauses", "data_clauses", "data_clause", "opt_renames_clause",
  "opt_through_id", "opt_redefine_clause", "opt_pic_clause", "is_opt",
  "opt_value_clause_1", "opt_value_list", "opt_value_1",
  "opt_usage_clause", "opt_usage", "usage_clause", "opt_ext_clause",
  "opt_global_clause", "opt_sign_clause", "opt_sign", "leading_trailing",
  "opt_separate_char", "opt_occurs_clause", "occurs_clause",
  "multi_occurance", "opt_times", "opt_dependingon",
  "opt_asc_dsc_key_list", "asc_dsc_key_list", "asc_dsc_key",
  "opt_asc_or_dsc", "asc_or_dsc", "opt_indexedby_list", "indexedby_list",
  "indexedby", "opt_sync_clause", "opt_justification_clause",
  "opt_blank_when_clause", "working_storage_section_options",
  "opt_working_storage_section_items", "working_storage_section_items",
  "local_storage_section", "linkage_section_options",
  "linkage_section_items", "communication_section_options",
  "communication_section_detail_list", "communication_section_item",
  "comm_section_detail_options", "comm_sec_input", "comm_sec_input_item",
  "opt_initial", "comm_input_items", "comm_inp", "comm_inp_type",
  "opt_identifier_list", "comm_sec_output", "opt_comm_output_items",
  "comm_output_items", "comm_output_item", "opt_indexed_by_list",
  "indexed_by_list", "comm_sec_IO", "comm_sec_IO_item", "comm_IO_items",
  "screen_section_options", "screen_description_entry_list",
  "screen_description_entry", "screen_description_options",
  "screen_descr_option", "opt_number_clause", "screen_descr_item",
  "number_clause", "number_option", "opt_value", "location_details",
  "report_section_options", "opt_report_descr_list", "report_descr_list",
  "report_descr_item", "opt_report_options", "report_options",
  "report_option_item", "is_global", "code_clause", "control_clause",
  "gnamelist", "opt_control", "page_clause", "opt_limit_clause",
  "opt_heading_clause", "opt_first_detail", "opt_last_detail",
  "opt_footing_clause", "report_group_descr_list",
  "report_group_descr_item", "level_no", "optdataname",
  "report_group_opt_list", "report_group_opt", "line_number_clause",
  "opt_number", "opt_plus", "opt_on_next_page", "next_group_clause",
  "int_next_page", "type_clause", "report_type_code", "opt_gname",
  "opt_final", "repo_usage_clause", "picture_clause", "sign_clause",
  "justified_clause", "column_number_clause", "source_clause",
  "value_is_clause", "sum_clause", "sum_details_list", "sum_detail",
  "opt_upon_idlist", "opt_reset_on", "reset_on", "group_indicate_clause",
  "procedure_division", "opt_using_chaining_returning",
  "proc_div_using_clause", "proc_div_chainging_clause",
  "proc_div_return_clause", "proc_param_list", "proc_param",
  "opt_param_type", "param_type", "opt_size_optional", "size_optional",
  "proc_optional", "opt_integer", "proc_div_declaratives_clause",
  "declarative_clause", "proc_item_list", "proc_item", "section_header",
  "section_name", "opt_literal", "paragraph_header", "statement_list",
  "proc_statements", "proc_statement", "initialize_statement",
  "opt_filler", "opt_value_clause", "opt_replacing_clause",
  "replacing_item_list", "replacing_item", "category_name",
  "opt_default_clause", "inspect_statement", "opt_insp_tallying_clause",
  "tallying_clause_list", "tallying_clause", "char_lead_trail",
  "opt_before_after_list", "before_after_list", "before_after_item",
  "opt_insp_replacing_clause", "inspect_replacing_clause_list",
  "inspect_replacing_clause", "opt_insp_converting_clause",
  "converting_clause_list", "converting_clause", "search_statement",
  "end_search", "search_clause", "single_search", "opt_varying_clause",
  "opt_at_end_clause", "simple_when_cond_list", "s_w_c_item", "all_search",
  "multi_when_clause", "imperative_statement",
  "opt_and_when_clause_item_list", "and_when_clause_item_list",
  "and_when_clause_item", "m_when_clause_item", "enter_statement",
  "language_name", "routine_name", "merge_statement", "using_file_clause",
  "evaluate_statement", "end_evaluate", "opt_also_eval_item_list",
  "also_eval_item_list", "when_clause_list", "when_clause_item",
  "when_item", "opt_when_also_item_list", "also_item_list", "also_item",
  "eval_item", "opt_when_other_clause", "rewrite_statement", "end_rewrite",
  "goback_statement", "purge_statement", "release_statement",
  "opt_release_from", "unlock_statement", "record_token",
  "cancel_statement", "continue_statement", "delete_statement",
  "delete_simple_statement", "multi_file_statement", "end_delete",
  "call_statement", "call_details", "opt_giving", "opt_returning",
  "using_item_list", "using_item", "by_reference_item", "by_content_item",
  "call_item_list", "call_item", "opt_end_call", "opt_on_overflow",
  "on_overflow", "on_overflow_action", "noton_overflow_action",
  "string_statement", "string_arguments", "str_argument", "mod_item",
  "with_pointer_opt", "end_string", "unstring_statement",
  "opt_delimit_clause", "opt_or_item_list", "or_item_list", "or_item",
  "opt_all", "unstring_into_clause", "into_clause_list", "into_clause",
  "opt_delimiter_in", "opt_count_in", "tallying_in_opt", "end_unstring",
  "use_statement", "opt_on", "opt_for", "opt_file_reel_unit", "on_items",
  "on_item", "opt_global", "opt_standard", "opt_beginning_end",
  "error_exception", "proc_option", "goto_statement", "opt_proc_name",
  "proc_name_list", "alter_statement", "alter_proc_list",
  "alter_proc_item", "opt_proceed_to", "exit_statement", "opt_cycle",
  "perform_statement", "opt_perform_options_list", "perform_options_list",
  "opt_proc_statements", "end_perform", "opt_perform_proc", "perform_proc",
  "proc_name", "perform_option", "perform_test", "perform_varying_list",
  "perform_varying", "before_after", "stop_statement", "stop_option",
  "open_statement", "opt_exclusive", "open_file_type_list",
  "open_file_type", "file_type", "open_file_list", "file_item",
  "file_name", "opt_open_option_list", "open_option_list", "open_option",
  "close_statement", "close_file_list", "close_file_item",
  "close_file_option", "read_statement", "read_base", "opt_next_previous",
  "next_previous_record", "opt_record_clause", "record_clause",
  "opt_identifier", "opt_key_clause", "opt_end_action", "end_action",
  "end_proc_stmt", "not_end_proc_stmt", "end_read", "write_statement",
  "record_name_clause", "opt_from_clause", "end_write",
  "opt_keyvalidation_action", "keyvalidation_action",
  "opt_invalid_key_action", "opt_not_invalid_key_action", "write_printer",
  "opt_record_advancing_clause", "opt_advanc", "advancing_clause",
  "opt_lines", "opt_endof_page", "endof_page", "opt_end_of_page_action",
  "opt_not_end_of_page_action", "sort_statement",
  "on_key_clause_item_list", "on_key_clause", "opt_key",
  "opt_duplicate_inorder", "opt_collating_sequence", "file_input_clause",
  "opt_through", "file_output_clause", "return_statement", "opt_record",
  "opt_into_identifier", "end_return", "set_statement", "set_clause_list",
  "set_clause", "set_direction", "set_item_list", "set_item",
  "display_statement", "display_upon_sysname", "sysname_list", "opt_upon",
  "opt_advancing", "display_term_io", "display_item_list", "display_item",
  "identifier_clause", "opt_with_clause", "opt_with_clause_list",
  "opt_with_clause_item", "opt_xval", "with_clause", "at_clause",
  "display_screen_name", "disp_screen_list", "disp_screen",
  "move_statement", "move_item_list", "ifelse_statement",
  "opt_then_clause", "then_proc_statements", "opt_else_clause",
  "else_proc_statements", "statements", "opt_end_if", "accept_statement",
  "from_clause", "end_accept", "opt_at_clause", "at_clause_accept",
  "opt_column_clause", "implicit_def_clause", "accept_item_list",
  "accept_item", "id_opt_unit", "opt_with_clause_2_list",
  "with_clause_2_list", "with_clause_2_item", "with_clause2", "reverse",
  "position_clause", "col_clause", "opt_escape_exception_action",
  "opt_not_on", "escape_exception", "opt_id", "opt_action",
  "add_statement", "add_clause", "to_clause_lst", "from_arg_list",
  "to_arg_list", "to_arg", "opt_rounded", "opt_not", "nullable",
  "opt_on_size_error", "on_size_error", "not_on_size_error", "end_add",
  "subtract_statement", "item_list", "item_list_rounded", "xval_rounded",
  "end_subtract", "multiply_statement", "end_multiply", "divide_statement",
  "end_divide", "compute_statement", "end_compute", "start_statement",
  "start_body_option", "end_start", "opt_with_size", "opt_reversed_order",
  "mod_relational_operator", "initiate_statement", "terminate_statement",
  "generate_statement", "xval", "signed_nliteral", "numeric_literal",
  "char_literal", "comma_opt", "identifier_1", "identifier", "opt1",
  "opt_subscripts", "opt_data_name_list", "opt_data_name", "subscripts",
  "subscript", "subscript_item", "gname", "gliteral",
  "without_all_literal", "literal", "all_literal", "special_literal",
  "condition", "opt_comb_abri_condition", "comb_abri_cond_list",
  "comb_abri_cond", "and_or", "comb_abri", "combinable_condition",
  "abbreviation_rest", "abbr_rest_list", "abbr_rest_item",
  "abbreviation_item", "simple_condition", "opt_isnot",
  "relational_condition", "class_item", "sign_condition", "sign_indicator",
  "relational_operator", "rel_op", "_gt", "_ge", "_lt", "_le", "_eq",
  "_ne", "opt_to", "opt_than", "lparan", "rparan", "arithmetic_expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   462,   463,   464,   464,   465,   465,   466,   467,   468,
     468,   469,   470,   471,   471,   471,   472,   472,   472,   473,
     474,   474,   475,   476,   477,   477,   478,   478,   479,   479,
     480,   480,   481,   481,   482,   482,   483,   483,   483,   483,
     483,   483,   484,   485,   486,   487,   488,   489,   490,   490,
     491,   491,   491,   492,   492,   493,   493,   494,   494,   495,
     495,   496,   497,   497,   498,   498,   498,   499,   500,   500,
     501,   502,   502,   502,   503,   504,   504,   505,   505,   505,
     506,   507,   507,   507,   508,   509,   510,   511,   511,   512,
     512,   513,   513,   514,   514,   515,   515,   516,   517,   517,
     518,   518,   519,   519,   520,   521,   521,   522,   522,   522,
     523,   523,   523,   524,   525,   525,   526,   527,   527,   528,
     529,   529,   530,   531,   531,   532,   532,   533,   533,   533,
     533,   533,   533,   533,   533,   533,   533,   533,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   547,   548,   548,   549,   550,   550,   551,
     551,   551,   551,   551,   551,   552,   552,   553,   553,   553,
     553,   553,   554,   555,   556,   556,   557,   558,   558,   558,
     559,   559,   560,   561,   561,   561,   562,   562,   563,   563,
     564,   565,   566,   567,   567,   568,   568,   568,   569,   570,
     570,   571,   572,   572,   573,   574,   574,   575,   575,   575,
     576,   576,   577,   577,   578,   578,   578,   578,   578,   578,
     578,   579,   579,   580,   580,   581,   581,   582,   582,   583,
     584,   584,   585,   585,   586,   586,   587,   587,   587,   587,
     587,   587,   587,   587,   587,   587,   588,   588,   589,   590,
     591,   592,   592,   593,   593,   594,   594,   595,   595,   596,
     597,   597,   598,   599,   599,   600,   600,   601,   601,   602,
     603,   603,   604,   604,   605,   606,   606,   607,   607,   608,
     609,   609,   610,   610,   611,   611,   612,   613,   614,   614,
     615,   616,   617,   618,   618,   618,   619,   619,   620,   620,
     621,   621,   621,   621,   621,   621,   621,   621,   621,   621,
     621,   621,   622,   623,   623,   624,   625,   626,   626,   627,
     628,   628,   628,   629,   629,   630,   631,   631,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     633,   634,   635,   636,   636,   637,   637,   638,   638,   639,
     640,   641,   642,   642,   643,   643,   644,   644,   645,   645,
     646,   647,   647,   648,   648,   649,   649,   650,   650,   651,
     652,   652,   653,   654,   655,   655,   656,   656,   657,   658,
     659,   660,   661,   662,   662,   663,   664,   664,   664,   665,
     665,   666,   667,   667,   668,   669,   670,   670,   670,   670,
     670,   670,   670,   670,   670,   670,   670,   670,   671,   671,
     672,   673,   673,   674,   674,   675,   675,   675,   675,   675,
     675,   676,   676,   677,   678,   678,   679,   680,   681,   682,
     682,   683,   684,   684,   685,   685,   685,   686,   686,   687,
     687,   687,   687,   687,   687,   687,   687,   687,   687,   687,
     687,   687,   687,   687,   687,   687,   687,   687,   687,   687,
     687,   687,   687,   687,   687,   687,   687,   687,   688,   689,
     689,   690,   690,   691,   691,   691,   692,   693,   693,   694,
     694,   695,   696,   696,   697,   697,   698,   698,   698,   698,
     699,   700,   701,   702,   702,   702,   703,   703,   704,   705,
     705,   705,   706,   707,   708,   709,   710,   710,   711,   712,
     713,   713,   714,   714,   715,   715,   715,   715,   715,   715,
     715,   715,   715,   715,   715,   715,   715,   716,   717,   717,
     718,   718,   719,   719,   720,   721,   721,   721,   722,   723,
     723,   723,   723,   723,   723,   723,   723,   723,   723,   723,
     723,   723,   723,   723,   724,   724,   725,   725,   726,   726,
     727,   728,   729,   730,   731,   732,   733,   734,   734,   735,
     736,   736,   737,   737,   738,   738,   739,   740,   740,   741,
     742,   742,   743,   743,   744,   744,   745,   745,   745,   746,
     747,   747,   748,   748,   749,   749,   750,   750,   750,   750,
     751,   751,   752,   752,   753,   753,   754,   755,   755,   756,
     756,   756,   756,   757,   758,   759,   759,   760,   761,   762,
     762,   763,   763,   763,   763,   763,   763,   763,   763,   763,
     763,   763,   763,   763,   763,   763,   763,   763,   763,   763,
     763,   763,   763,   763,   763,   763,   763,   763,   763,   763,
     763,   763,   763,   763,   763,   763,   763,   763,   763,   763,
     763,   763,   763,   763,   764,   765,   765,   766,   766,   767,
     767,   768,   768,   769,   770,   770,   770,   770,   770,   770,
     770,   771,   771,   772,   773,   773,   774,   774,   775,   776,
     776,   776,   776,   777,   777,   778,   778,   779,   780,   780,
     781,   781,   782,   783,   783,   784,   784,   785,   786,   787,
     787,   788,   788,   789,   790,   790,   791,   791,   792,   792,
     793,   794,   795,   796,   796,   797,   797,   798,   798,   799,
     800,   801,   802,   803,   804,   805,   806,   807,   808,   808,
     809,   809,   810,   810,   811,   812,   812,   812,   812,   813,
     813,   814,   814,   815,   816,   816,   816,   816,   816,   816,
     817,   817,   818,   819,   820,   821,   822,   823,   823,   824,
     825,   825,   826,   827,   828,   828,   829,   830,   831,   831,
     832,   833,   833,   834,   834,   835,   835,   836,   836,   836,
     837,   837,   837,   838,   839,   840,   840,   840,   841,   841,
     842,   842,   843,   844,   845,   845,   846,   846,   847,   848,
     848,   849,   850,   850,   850,   851,   851,   852,   852,   853,
     854,   855,   855,   856,   856,   857,   858,   858,   859,   860,
     860,   860,   861,   862,   862,   863,   863,   864,   864,   865,
     865,   866,   866,   866,   866,   867,   867,   868,   868,   869,
     869,   869,   869,   870,   870,   871,   871,   871,   872,   872,
     873,   873,   874,   874,   874,   875,   875,   876,   876,   877,
     877,   878,   878,   879,   879,   880,   881,   881,   882,   883,
     883,   884,   884,   884,   884,   884,   885,   885,   886,   886,
     886,   887,   887,   888,   888,   889,   889,   890,   890,   891,
     892,   892,   893,   894,   894,   894,   894,   894,   895,   895,
     896,   896,   897,   898,   898,   899,   900,   900,   900,   900,
     901,   902,   902,   903,   903,   904,   905,   905,   905,   905,
     905,   906,   906,   907,   908,   909,   909,   910,   910,   911,
     911,   911,   912,   913,   913,   913,   914,   915,   915,   915,
     915,   915,   915,   915,   916,   916,   917,   918,   919,   919,
     919,   919,   920,   920,   921,   921,   922,   922,   923,   923,
     924,   925,   926,   926,   927,   927,   928,   928,   929,   929,
     930,   931,   931,   932,   932,   933,   933,   934,   935,   935,
     936,   936,   937,   938,   938,   939,   939,   940,   940,   940,
     940,   941,   941,   941,   942,   943,   944,   944,   945,   945,
     946,   947,   947,   948,   948,   949,   949,   950,   950,   951,
     951,   952,   952,   953,   953,   954,   954,   955,   956,   956,
     957,   957,   958,   958,   959,   960,   960,   961,   962,   962,
     962,   963,   963,   964,   964,   964,   964,   964,   964,   965,
     965,   965,   966,   967,   968,   968,   969,   969,   970,   971,
     971,   972,   973,   974,   974,   975,   975,   976,   977,   977,
     978,   978,   978,   978,   978,   978,   978,   978,   978,   978,
     978,   978,   978,   978,   978,   979,   979,   979,   980,   981,
     981,   982,   983,   983,   984,   985,   986,   986,   987,   988,
     988,   989,   990,   990,   991,   991,   992,   992,   992,   992,
     993,   993,   994,   994,   995,   996,   997,   997,   998,   998,
     998,   998,   998,   998,   998,   998,   998,   998,   998,   998,
     998,   999,   999,  1000,  1001,  1001,  1002,  1002,  1003,  1003,
    1004,  1004,  1005,  1005,  1005,  1005,  1005,  1005,  1005,  1005,
    1005,  1005,  1005,  1005,  1005,  1005,  1005,  1005,  1005,  1005,
    1005,  1005,  1005,  1005,  1005,  1005,  1006,  1006,  1006,  1007,
    1008,  1008,  1009,  1009,  1010,  1010,  1011,  1011,  1012,  1012,
    1013,  1014,  1015,  1015,  1015,  1016,  1016,  1017,  1017,  1017,
    1018,  1018,  1018,  1019,  1020,  1020,  1021,  1021,  1022,  1023,
    1024,  1024,  1025,  1025,  1026,  1026,  1027,  1027,  1027,  1028,
    1028,  1028,  1029,  1029,  1029,  1030,  1030,  1031,  1031,  1032,
    1032,  1033,  1033,  1034,  1034,  1034,  1034,  1034,  1035,  1035,
    1036,  1037,  1037,  1038,  1039,  1039,  1040,  1040,  1041,  1041,
    1042,  1042,  1043,  1043,  1043,  1044,  1045,  1046,  1047,  1047,
    1047,  1047,  1047,  1047,  1048,  1048,  1048,  1049,  1049,  1049,
    1050,  1050,  1050,  1051,  1052,  1053,  1054,  1054,  1055,  1055,
    1056,  1056,  1057,  1057,  1058,  1058,  1058,  1059,  1060,  1060,
    1060,  1060,  1060,  1060,  1061,  1061,  1061,  1062,  1062,  1063,
    1063,  1064,  1064,  1065,  1065,  1066,  1066,  1066,  1066,  1066,
    1066,  1066,  1066,  1067,  1068,  1068,  1069,  1069,  1070,  1071,
    1071,  1072,  1072,  1073,  1073,  1074,  1075,  1075,  1076,  1077,
    1077,  1078,  1078,  1079,  1080,  1080,  1080,  1080,  1080,  1080,
    1081,  1081,  1081,  1081,  1082,  1083,  1083,  1083,  1084,  1085,
    1085,  1085,  1085,  1085,  1085,  1086,  1086,  1087,  1087,  1088,
    1088,  1089,  1089,  1090,  1090,  1090,  1091,  1092,  1092,  1093,
    1093,  1094,  1094,  1095,  1095,  1096,  1096,  1096,  1096,  1096,
    1096,  1096,  1096,  1096,  1096,  1096
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     6,     6,     3,
       4,     5,     3,     0,     1,     2,     0,     3,     4,     5,
       0,     2,    10,     1,     0,     2,     0,     4,     1,     1,
       0,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     2,     3,
       1,     1,     1,     0,     4,     0,     1,     1,     2,     1,
       1,     4,     1,     2,     1,     1,     1,     5,     0,     4,
       4,     2,     3,     2,     1,     1,     2,     1,     1,     1,
       4,     1,     1,     1,     5,     3,     3,     0,     1,     1,
       2,     5,     4,     2,     2,     0,     3,     3,     0,     2,
       1,     2,     1,     1,     5,     0,     1,     1,     1,     1,
       1,     2,     3,     5,     1,     2,     2,     0,     2,     3,
       1,     2,     5,     0,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     1,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     0,     1,     4,     3,     4,
       3,     3,     4,     4,     1,     1,     5,     1,     1,     1,
       0,     4,     4,     6,     6,     1,     0,     1,     1,     1,
       3,     4,     5,     1,     3,     1,     2,     3,     1,     1,
       2,     6,     0,     2,     4,     0,     1,     0,     4,     1,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     0,     1,     1,     2,     2,     2,     5,
       0,     1,     0,     1,     2,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       6,     1,     1,     0,     4,     0,     4,     0,     4,     3,
       1,     2,     3,     1,     1,     4,     4,     5,     3,     5,
       1,     1,     1,     1,     5,     0,     2,     0,     2,     6,
       0,     1,     1,     2,     1,     1,     3,     3,     1,     2,
       1,     4,     1,     0,     1,     1,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     2,     2,     3,     0,     1,     3,
       1,     2,     3,     1,     3,     2,     0,     2,     2,     1,
       1,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       2,     2,     4,     0,     1,     1,     1,     0,     2,     2,
       1,     6,     0,     1,     0,     3,     0,     1,     1,     2,
       4,     0,     1,     1,     1,     0,     1,     1,     2,     3,
       2,     2,     2,     3,     4,     2,     0,     1,     1,     4,
       4,     1,     4,     1,     2,     6,     1,     1,     1,     1,
       2,     3,     0,     1,     2,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     1,
       2,     0,     1,     1,     2,     4,     4,     4,     5,     4,
       4,     0,     1,     3,     1,     2,     3,     1,     4,     1,
       2,     4,     1,     2,     4,     2,     2,     0,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     2,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       1,     0,     2,     2,     2,     2,     4,     0,     1,     1,
       2,     5,     0,     1,     1,     2,     1,     1,     1,     1,
       2,     2,     3,     1,     2,     3,     2,     2,     8,     0,
       2,     2,     2,     3,     3,     2,     1,     2,     4,     1,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     0,     1,
       0,     1,     0,     3,     4,     1,     2,     2,     5,     0,
       2,     1,     2,     1,     2,     1,     1,     1,     2,     1,
       2,     1,     2,     1,     0,     1,     0,     1,     3,     1,
       3,     5,     2,     4,     3,     3,     3,     1,     2,     2,
       0,     2,     0,     1,     3,     3,     2,     0,     6,     3,
       0,     2,     0,     2,     0,     2,     1,     2,     3,     5,
       0,     1,     2,     2,     0,     1,     3,     3,     3,     2,
       0,     1,     0,     1,     0,     1,     6,     1,     2,     1,
       1,     2,     1,     4,     1,     0,     1,     2,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     0,     2,     0,     3,     0,
       3,     1,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     5,     0,     1,     1,     2,     6,     1,
       1,     1,     1,     0,     1,     1,     2,     3,     0,     1,
       1,     2,     6,     0,     1,     1,     2,     5,     3,     0,
       1,     1,     1,     4,     0,     2,     0,     3,     1,     2,
       3,     4,     4,     1,     2,     0,     1,     1,     2,     2,
       1,     3,     1,     1,     6,     2,     6,     1,     0,     1,
       2,     3,     1,     2,     4,     1,     1,     1,     2,     0,
       1,     1,     2,     2,     1,     1,     1,     1,     3,     1,
       0,     3,     5,     1,     1,     2,     3,     0,     2,     3,
       1,     1,     2,     1,     3,     3,     3,     2,     0,     1,
       7,     0,     4,     0,     2,     0,     2,     1,     3,     2,
       1,     1,     1,     3,     3,     1,     3,     2,     1,     1,
       0,     1,     1,     2,     0,     3,     0,     4,     7,     1,
       2,     4,     1,     1,     1,     0,     3,     0,     1,     8,
       5,     0,     1,     1,     2,     3,     0,     1,     2,     1,
       2,     3,     3,     0,     3,     0,     3,     0,     3,     0,
       1,     8,     5,    10,     5,     0,     1,     0,     1,     0,
       1,     1,     1,     1,     2,     1,     2,     4,     0,     1,
       0,     1,     0,     1,     1,     1,     1,     1,     1,     3,
       6,     0,     1,     1,     2,     2,     1,     2,     4,     0,
       2,     1,     2,     3,     2,     2,     0,     1,     2,     4,
       4,     0,     1,     1,     2,     0,     1,     0,     1,     1,
       1,     3,     1,     1,     2,     2,     3,     3,     0,     3,
       1,     3,     7,     1,     1,     2,     1,     3,     3,     1,
       3,     0,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     0,     1,     1,     2,     2,
       3,     1,     2,     1,     2,     3,     2,     0,     4,     4,
       3,     3,     3,     2,     6,     7,     2,     1,     0,     1,
       2,     2,     0,     1,     2,     3,     0,     2,     0,     3,
       1,     2,     0,     3,     0,     4,     0,     1,     3,     3,
       3,     0,     2,     0,     1,     0,     1,     2,     0,     3,
       0,     4,     2,     0,     3,     0,     1,     2,     6,     1,
       1,     0,     1,     1,     1,     2,     0,     3,     0,     4,
       7,     1,     2,     4,     4,     0,     1,     0,     4,     0,
       4,     5,     2,     0,     2,     5,     2,     6,     0,     1,
       0,     2,     0,     1,     2,     1,     2,     3,     1,     2,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     0,     2,     0,     3,     2,     1,
       2,     2,     1,     0,     1,     1,     2,     3,     0,     1,
       2,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     2,     1,
       2,     2,     5,     4,     1,     5,     1,     1,     2,     1,
       1,     2,     1,     2,     0,     1,     4,     4,     5,     5,
       2,     2,     0,     1,     2,     4,     0,     3,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     2,
       2,     1,     2,     2,     1,     3,     0,     1,     1,     2,
       3,     2,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       3,     3,     0,     5,     0,     4,     1,     1,     0,     1,
       1,     2,     5,     6,     7,     0,     2,     1,     2,     3,
       1,     2,     3,     2,     0,     1,     1,     1,     0,     2,
       0,     4,     0,     5,     0,     1,     6,     8,     8,     1,
       2,     3,     1,     2,     3,     1,     2,     0,     1,     6,
       8,     0,     1,     6,     8,     8,    10,    10,     0,     1,
       8,     0,     1,     6,     4,     5,     0,     1,     0,     3,
       0,     3,     1,     2,     2,     2,     2,     2,     1,     1,
       1,     3,     3,     3,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     0,     1,     0,     3,
       1,     2,     2,     2,     1,     2,     3,     1,     1,     1,
       3,     3,     3,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     3,     1,
       4,     1,     3,     2,     1,     4,     5,     1,     3,     3,
       1,     1,     1,     1,     2,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     2,     1,     5,     1,     2,
       1,     5,     1,     2,     2,     1,     1,     0,     1,     0,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     5,     6,    53,    53,
       0,     0,     1,     4,     0,     0,     0,  1265,    20,    23,
       0,     0,   209,     0,   577,   577,     0,     0,     0,    55,
       0,     0,     0,    13,    21,    19,     0,     0,     0,    54,
      56,    57,    59,    60,     0,     0,   580,     0,    11,    14,
      16,    53,   205,     0,     0,    58,     0,     0,    94,    93,
     222,     0,     0,     0,     0,     0,     0,     0,   208,     0,
     212,   214,   215,   220,   216,   217,   218,   219,   590,     0,
     582,     0,     0,     0,    15,     7,     0,   206,    24,     0,
      96,     0,    98,   375,     0,     0,     0,   205,     0,     0,
     205,   213,     0,   590,   586,   594,   591,   604,   590,   584,
      12,     0,     0,   577,     0,    26,     0,     0,     0,    61,
      62,    64,    65,    66,   123,   119,   120,     0,   105,    97,
       0,   100,   102,   103,     0,   223,     0,     0,   477,     0,
     376,   592,   593,  1263,   587,   590,   317,     0,   602,   595,
     205,     0,   605,   590,     0,   579,     0,    17,    13,    25,
       0,    32,     0,     0,    87,    63,  1197,     0,     0,  1196,
     121,     0,   107,   108,   109,     0,   106,    99,   101,     0,
     382,   383,     0,     0,   221,   224,   225,   292,   381,   288,
     290,   293,   380,   379,     0,   476,   478,   479,   293,   428,
     429,   378,   374,   377,   588,   318,   599,   317,   603,   600,
       0,     0,     0,     0,    30,     0,     0,     0,   773,     0,
       0,     0,     0,   317,   881,     0,  1357,   764,   317,     0,
       0,     0,     0,     0,     0,   921,   612,   891,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   858,     0,   614,   578,   607,   609,     0,
     610,   205,   619,   658,   659,   657,   645,   646,   647,   648,
     649,   650,   627,   651,   652,   656,   653,   644,   654,   655,
     640,   641,   642,   643,   621,   639,   623,   624,   626,   958,
     625,   985,   630,   628,   629,   631,  1049,  1050,  1051,   622,
     632,   633,   634,  1204,   635,   636,   637,   638,   660,   661,
     662,   663,   585,    18,     0,    28,    29,    30,     0,     0,
       0,     0,     0,     0,    22,    33,    34,    36,    37,    38,
      39,    40,    41,     0,     0,     0,    74,   205,     0,     0,
      75,    77,    78,    79,    68,     0,     0,    86,    88,    89,
       0,   124,     0,     0,     0,   384,   227,   205,   228,   226,
     289,   294,   295,   296,   317,   248,   480,   471,   430,   596,
     597,   598,   601,     0,     0,  1172,  1131,  1136,  1134,  1266,
       0,     0,     0,     0,     0,  1257,  1258,  1259,  1261,  1260,
    1262,  1185,  1212,  1215,  1249,  1254,  1250,  1248,   875,   876,
       0,   902,    31,     0,   772,  1209,   947,   942,   943,   934,
    1194,     0,   778,   778,  1028,     0,  1302,     0,  1298,  1299,
    1300,  1297,  1295,  1301,  1296,  1054,  1058,  1059,  1063,  1088,
    1089,  1062,  1053,  1291,  1292,  1134,  1187,  1285,  1287,  1289,
    1288,  1290,     0,     0,   732,  1331,  1332,  1333,   757,   317,
    1330,   756,  1362,     0,     0,  1361,  1198,   738,  1284,   754,
     759,  1304,  1313,     0,  1321,  1367,  1327,   317,   755,   884,
     886,   882,   885,  1247,  1358,   871,  1365,     0,  1324,   665,
    1245,   684,     0,     0,     0,     0,   922,     0,   903,     0,
       0,   895,   892,   888,   899,   900,   893,     0,     0,   902,
     765,   956,   767,  1028,   981,     0,   709,   711,   712,   714,
    1047,  1048,  1045,  1044,  1046,  1034,  1035,     0,  1041,  1043,
       0,     0,   916,   915,   919,     0,   809,     0,     0,     0,
    1246,     0,     0,   848,   859,     0,     0,   981,   617,   608,
     615,   611,   620,     0,     0,   959,   962,   957,   914,   913,
       0,   995,   983,   986,   990,   983,  1006,  1205,  1181,     0,
       0,     8,   205,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,    70,    71,     0,    73,    76,     0,   205,
       0,     0,    90,     0,     0,  1357,   317,     0,     0,     0,
     317,     0,     0,     0,   205,   125,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   140,   139,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   198,
     199,   150,     0,     0,   392,   232,     0,     0,     0,     0,
     317,     0,     0,   344,     0,   317,   317,   205,   297,   298,
     311,   300,   301,   302,   303,     0,   304,   305,   306,   317,
     307,   308,   309,   310,     0,   317,     0,   499,     0,     0,
     317,   484,   486,   487,   488,   556,   489,   445,   439,   440,
     451,   450,     0,   455,   466,     0,   441,   442,   449,   459,
     465,   461,     0,   448,   463,   447,   464,   317,   462,   446,
       0,     0,   444,   471,   432,   317,     0,   589,     0,     0,
    1132,  1112,  1134,     0,     0,  1133,  1137,  1138,     0,     0,
       0,     0,  1112,  1172,     0,     0,  1268,  1267,  1270,     0,
       0,     0,     0,  1255,  1256,     0,     0,  1213,     0,  1216,
     877,   879,   781,  1210,     0,     0,     0,     0,   946,   944,
       0,  1195,     0,   777,   779,   774,   775,  1029,   985,  1293,
    1294,  1286,     0,  1056,  1060,     0,  1061,  1064,  1065,  1090,
       0,     0,  1188,  1091,     0,     0,   731,   733,  1314,  1254,
       0,  1374,  1254,  1375,  1323,   317,   317,     0,   739,  1309,
    1310,  1303,  1305,  1306,  1198,  1336,  1335,  1337,  1334,  1365,
       0,   317,     0,     0,     0,     0,     0,   317,     0,   887,
     883,   869,     0,   872,   902,     0,     0,  1102,   618,  1198,
    1097,  1096,     0,   667,     0,   698,   685,   686,     0,  1019,
    1011,     0,     0,     0,   930,   926,   929,   928,   927,   920,
     923,     0,     0,   904,   896,     0,   894,   897,     0,   317,
       0,   905,     0,   766,  1030,     0,   985,   716,   710,   708,
       0,   716,  1036,     0,  1038,     0,     0,  1042,  1017,     0,
     317,  1240,     0,     0,     0,   810,     0,     0,     0,   770,
     771,   769,     0,     0,   845,   860,     0,   980,     0,   616,
     960,   961,     0,   966,   963,     0,   996,     0,   984,   979,
       0,   987,   978,     0,   992,  1004,  1008,     0,     0,    27,
      50,    51,    52,   205,   205,   205,   205,   205,   205,   205,
       0,     0,    85,    72,     0,    67,     0,     0,   317,     0,
       0,     0,   317,     0,   317,     0,   317,   317,   317,   152,
       0,   153,   126,   122,   200,   113,   114,   117,   104,   110,
     411,   393,     0,   386,   389,     0,   387,   388,   424,     0,
     317,     0,     0,   317,     0,   317,   317,     0,   205,   233,
     205,   245,   244,   243,   242,   241,   238,   240,   239,   272,
     273,     0,     0,   340,   341,   372,   275,   349,   350,     0,
     315,   313,   370,   371,   327,     0,   291,   299,     0,   329,
     330,   331,     0,     0,     0,   335,   336,   337,   338,   339,
     325,     0,   491,   496,   497,     0,     0,     0,   490,     0,
     485,   557,     0,   453,   454,   452,     0,   457,   456,   458,
     460,   472,     0,     0,     0,   436,   443,   431,   433,  1178,
     435,   205,  1177,  1176,  1178,  1113,  1107,     0,  1141,  1142,
       0,  1147,  1148,  1149,  1150,  1151,     0,  1154,  1155,  1156,
    1157,     0,     0,  1159,  1162,  1163,  1165,  1168,  1166,  1164,
    1143,     0,  1167,     0,  1161,  1139,     0,  1114,  1123,     0,
    1128,  1122,  1124,  1120,  1119,  1118,     0,  1126,  1127,  1111,
    1110,  1135,  1112,  1106,  1112,  1272,  1273,  1264,     0,  1271,
    1253,  1252,     0,  1251,  1200,     0,  1214,     0,     0,     0,
     804,  1211,     0,     0,     0,     0,   953,     0,   945,  1357,
    1357,  1355,     0,   776,  1055,     0,  1052,     0,  1071,  1072,
    1073,  1074,  1075,     0,  1078,  1079,  1080,  1081,     0,  1084,
    1068,  1083,  1066,  1189,     0,  1200,  1215,     0,   740,   758,
    1198,   760,   742,   317,  1307,  1197,   317,  1308,  1311,  1312,
    1315,  1316,  1364,  1363,  1366,  1322,  1373,  1370,  1371,  1372,
    1369,  1368,   317,     0,  1329,     0,  1328,     0,   874,  1103,
    1098,     0,  1104,  1100,  1099,   666,   674,   675,   676,   677,
     678,   679,   680,   669,  1357,     0,     0,   703,   699,   700,
     687,  1015,  1015,     0,  1012,     0,     0,  1093,  1094,  1190,
    1194,  1200,  1215,   924,   925,   931,   935,   909,   890,   898,
     889,   901,   906,   907,   910,     0,   768,     0,   972,   982,
       0,     0,     0,   715,     0,  1040,  1039,  1037,     0,  1019,
       0,  1198,     0,  1242,     0,   985,   918,   917,   815,     0,
       0,  1200,  1215,   826,     0,   815,   846,     0,   861,   862,
       0,   613,   964,     0,     0,   968,   989,  1000,     0,   994,
    1001,   999,     0,     0,     0,  1005,     0,     9,   205,    42,
      48,    45,    44,    43,    47,    46,    82,    83,    81,    80,
       0,     0,     0,    92,     0,   317,   159,   160,   162,   161,
     163,   164,   156,   165,   165,   190,     0,     0,     0,     0,
     171,     0,   170,   168,     0,     0,     0,     0,   115,     0,
     116,   111,     0,     0,     0,     0,     0,     0,   410,   412,
     413,   205,   390,     0,     0,     0,     0,   425,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   230,
     205,   234,   236,   237,   373,     0,   352,   316,     0,   312,
     319,   320,   323,   328,   332,   333,   334,   345,   346,   347,
     500,   501,  1001,   509,   481,   506,   510,   492,   493,   467,
     473,   474,   475,   437,  1179,   606,     0,   528,  1145,  1152,
    1153,     0,  1144,  1146,     0,  1140,     0,  1130,  1125,  1121,
    1129,  1108,  1109,  1278,     0,  1274,  1277,  1279,     0,  1194,
       0,  1182,  1202,  1200,   880,   878,     0,   799,   783,   787,
     790,   791,   792,   795,   798,     0,  1172,   802,   806,   950,
       0,   951,     0,   952,  1353,  1354,  1198,     0,  1086,  1085,
    1087,  1070,  1076,  1077,     0,  1067,  1069,     0,  1228,     0,
     745,   747,   746,   749,   317,  1198,   743,     0,   741,     0,
    1317,     0,  1359,  1359,  1350,  1352,  1346,  1348,  1356,  1338,
    1339,  1340,  1341,  1342,  1343,  1344,  1325,     0,  1101,  1105,
    1095,     0,   681,     0,     0,   690,   689,   692,   691,     0,
       0,   683,   704,   705,   701,  1016,     0,     0,   317,     0,
       0,  1092,  1191,     0,  1193,  1221,     0,   932,     0,   941,
     933,   936,   937,     0,     0,  1031,     0,  1032,   970,   974,
     763,   762,     0,   317,   721,   317,   713,   718,     0,     0,
     317,  1243,  1244,  1238,     0,  1236,     0,   804,   814,   811,
     812,   813,  1194,  1217,     0,   827,     0,   828,   829,   833,
     837,     0,   842,   853,   855,   863,   864,   865,   866,   849,
       0,   844,   965,   967,     0,   985,   976,     0,  1002,  1003,
     997,     0,  1007,     0,    10,    49,    84,    69,    91,   179,
     178,   177,   180,     0,   158,   166,   157,   191,   204,     0,
     185,     0,   182,   169,   167,   172,   174,   173,   175,   202,
     193,  1266,   154,   155,   151,   118,   112,   317,   317,   317,
     317,   317,     0,   414,   385,     0,     0,     0,     0,     0,
     391,   408,   317,   427,   426,   275,   249,     0,     0,     0,
     268,   195,   253,   252,   251,   275,     0,   246,   247,   263,
     259,   260,   317,   264,   229,   231,   235,   276,   353,   354,
     314,   321,     0,     0,     0,   342,     0,   507,     0,   511,
       0,   494,   317,   434,   438,  1180,  1174,   529,     0,  1158,
    1160,  1116,     0,  1275,  1269,     0,     0,     0,     0,  1200,
       0,     0,  1199,  1183,     0,     0,     0,   785,   789,     0,
     797,     0,     0,   800,     0,   803,   948,   949,  1200,  1057,
    1082,  1200,  1229,  1223,  1200,  1198,     0,   750,   751,   748,
       0,   737,   736,  1318,     0,  1319,  1326,  1360,  1345,  1349,
     870,     0,     0,   664,   668,   554,     0,     0,   706,  1013,
    1014,     0,   735,     0,     0,   734,  1192,  1222,  1219,  1200,
     939,     0,   938,   911,     0,     0,  1033,  1027,     0,   971,
     717,   725,   730,     0,   719,     0,     0,     0,     0,     0,
       0,  1234,  1241,  1237,  1233,     0,   817,  1200,  1218,  1206,
    1200,   821,   830,     0,     0,   835,     0,   804,   856,     0,
     854,   850,   851,   852,     0,   845,     0,   976,   977,   954,
       0,   991,     0,     0,   176,   202,     0,     0,     0,   192,
       0,     0,     0,     0,     0,     0,     0,   404,   405,   402,
     396,   397,   398,   399,   407,   406,   401,   400,   403,   409,
     394,     0,     0,   265,   266,     0,     0,   196,     0,   255,
       0,     0,   261,     0,     0,   356,   322,   324,   348,     0,
       0,   528,   559,     0,     0,   528,     0,   317,   317,   317,
       0,   317,   317,   317,   521,     0,   512,   514,   515,   516,
     517,   518,   519,   520,   522,   523,   524,   525,   526,   495,
       0,     0,  1173,     0,     0,  1115,  1276,  1283,  1281,  1282,
    1280,  1184,     0,     0,   794,   793,   784,     0,   782,   788,
     796,   805,   801,   780,     0,  1231,     0,  1228,     0,  1228,
     753,   744,   752,   761,  1198,     0,     0,   670,   671,     0,
       0,   693,   555,     0,     0,  1020,  1026,   317,  1221,   940,
       0,   973,     0,   317,     0,   726,   727,     0,   723,   720,
    1018,   317,  1022,  1010,  1235,     0,   816,   818,   808,  1217,
    1217,   826,   820,   822,   823,   831,     0,     0,   832,     0,
     839,     0,     0,     0,   969,   955,     0,  1009,   317,   201,
       0,     0,   203,   194,   419,   417,   420,   416,   415,   421,
     395,   271,   270,   269,   267,   197,     0,     0,   257,   274,
     280,   262,     0,   363,   364,   365,   357,   358,     0,   362,
     502,     0,     0,   317,   576,   562,   317,   317,     0,     0,
       0,   570,   572,   567,   539,     0,     0,   508,   513,     0,
     468,   470,     0,   528,   528,  1169,     0,  1201,     0,   786,
       0,  1232,  1230,  1200,  1225,  1200,  1224,     0,  1357,  1357,
     672,     0,   682,   688,   694,   695,     0,   693,   693,     0,
    1220,     0,     0,   729,   722,   728,   724,     0,  1239,  1208,
    1207,     0,   824,   834,     0,   838,   840,   819,   857,   845,
     841,   868,   867,     0,     0,   186,   186,     0,   418,   422,
       0,     0,     0,   250,     0,     0,   275,   279,   281,   282,
     284,   285,   355,     0,   351,   366,   367,     0,   359,   317,
       0,     0,     0,     0,   530,     0,   560,     0,   564,     0,
     569,     0,   568,   566,   573,   549,   545,     0,   547,   546,
       0,   551,   543,     0,   553,   541,   554,   558,   565,   469,
       0,     0,     0,  1117,     0,   807,  1228,  1228,  1320,  1347,
    1351,     0,   696,     0,   702,   707,  1023,   317,   975,  1023,
     825,   836,     0,   998,   181,   187,     0,     0,     0,   254,
       0,     0,     0,   278,     0,   283,     0,     0,   368,     0,
     503,     0,     0,   498,   563,   531,     0,     0,     0,   535,
     534,     0,   571,     0,   548,   544,   550,   542,   552,   540,
     556,  1175,  1170,  1171,  1203,  1227,  1226,   673,   697,     0,
    1025,   912,  1021,   843,   188,   189,   184,   183,   423,   256,
       0,   287,   286,   369,  1291,  1292,  1284,     0,   360,   504,
     505,   532,   537,   536,   561,   575,   574,   538,  1024,   258,
       0,   527,     0,   533
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    49,   561,     7,    48,    50,
      85,     8,    27,    51,    18,   115,   161,   317,   403,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   903,   904,
      15,    39,    40,    41,    42,   119,   120,   121,   579,   122,
     337,   338,   339,   340,   341,  1279,   342,   343,   123,   347,
     348,   349,    43,    44,    58,   129,   130,   131,   132,   175,
     176,   938,   133,   935,   936,  1310,    59,   125,   126,   167,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   930,  1594,   609,  1292,  1293,
    1574,   610,   611,   612,  1587,   613,  1572,  1784,   614,  1582,
    2136,  2186,   615,   616,   617,  1589,  1991,   618,   619,   620,
    1789,   621,    88,    24,    68,    69,    70,    71,   184,   185,
     186,   356,  1634,   958,   959,   960,   961,   364,   962,   963,
    1622,  1819,  1968,  2063,   964,  1630,  1631,  1632,   965,   966,
     967,  1963,   968,   969,  1346,  2066,   970,  2067,  2068,  2069,
    2070,  2071,   188,   189,   190,   191,   363,   637,   638,   639,
     640,  1349,   641,   642,   456,   643,  1350,  1351,   644,   645,
    1000,   646,   647,   648,   649,  1359,  1645,   650,   977,   978,
    1639,  1825,  1975,  1976,  1977,  1978,  1979,  2074,  2075,  2076,
     651,   652,   653,    72,   202,   203,    73,    74,   192,    75,
     180,   181,   942,   943,   944,   945,  1610,  1611,  1612,  1810,
     946,  1318,  1319,  1320,  2058,  2059,   947,   948,  1614,    76,
     199,   200,   693,   694,  1653,   695,  1654,  2000,   696,  1025,
      77,   195,   196,   197,   659,   660,   661,   662,   663,   664,
    1367,   665,   666,  1007,  1830,  1982,  2082,  2153,  1364,  1365,
    1366,  1648,  1845,  1846,  1847,  1658,  2156,  2211,  1848,  2160,
    1849,  2106,  1901,  1012,  1850,  1851,  1852,  1853,  1854,  1855,
    1856,  1857,  1992,  1993,  2090,  2093,  2094,  1858,    32,    79,
      80,   109,   155,   103,   104,   105,   106,   148,   149,   373,
     209,   151,   152,   256,   257,   258,   259,   878,   260,   807,
     808,   262,   263,   813,  1183,  1472,  1897,  1898,  1899,  1713,
     264,   815,   816,   817,  1479,  2023,  2024,  2025,  1187,  1188,
    1189,  1481,  1482,  1483,   265,   849,   506,   507,   851,  1222,
    1516,  1517,   508,  1514,  1919,  1914,  1915,  1916,  1741,   266,
     443,   766,   267,  1490,   268,  1702,   777,   778,  1141,  1142,
    1443,  1696,  1697,  1698,   457,  1447,   269,  1511,   270,   271,
     272,   843,   273,   871,   274,   275,   276,   412,   413,   745,
     277,  1100,  1677,  1878,  1408,  1409,  1410,  1411,  1412,  1413,
    1883,  1416,  1417,  1418,  1685,   278,   525,   526,  1529,  1527,
    1928,   279,   873,  1932,  1933,  1934,  1536,  1245,  1537,  1538,
    1765,  1938,  1767,  2047,   280,  1247,   535,  1774,  1542,  1543,
     536,  1249,  1549,  1550,  2050,   281,   801,   802,   282,   398,
     399,  1098,   283,   800,   284,   491,   492,   835,  1210,   493,
     494,   400,   496,   497,  1213,  1214,  2026,   285,   523,   286,
     487,   829,   830,   831,  1204,  1205,   406,  1500,  1501,  1502,
     287,   407,   408,   738,   288,   289,   546,   547,   883,   884,
    1255,  1555,  1507,  1508,  1509,  1739,  1779,   290,   291,   846,
     889,   552,   553,   554,   891,   555,   556,   887,  1259,  1560,
     894,   895,   896,  1265,   292,   819,   820,  1486,  1229,  1195,
    1748,  2180,  1725,   293,   748,  1218,  1737,   294,   515,   516,
     856,   517,   518,   295,   296,   425,   753,  1116,   297,   426,
     427,   428,   756,   757,   758,  1435,  1130,  1431,   298,   429,
     430,   299,  1197,   300,   809,   810,  1172,  1173,   811,  1470,
     301,   712,  1036,   763,  1067,  1865,  1079,   375,   376,   377,
     705,   706,   707,  1063,  1064,  1038,  2005,   701,  1862,  1034,
    1373,  1656,   302,   303,   726,   527,  1198,  1199,   742,   774,
     169,  1401,  1402,  1672,   558,   304,  2188,   391,   392,  1759,
     305,  1728,   306,  1693,   307,  2012,   308,   861,  1754,  1751,
    1235,  1232,   309,   310,   311,   393,   433,   395,   434,   728,
     458,   379,   716,  1087,   717,   718,  1394,  1395,  1396,   476,
     437,   438,   439,   440,   441,   460,   781,   782,   783,   784,
    1147,   461,  1149,  1150,  1151,  1703,   462,   463,   464,   465,
     466,   788,  1165,  1459,  1460,  1461,  1462,  1463,  1112,  1465,
     475,  1708,   467,  1156,   478
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1868
static const yytype_int16 yypact[] =
{
     379,   -98,   100,   239,   379, -1868, -1868, -1868,   413,   413,
     125,   339, -1868, -1868,   538,   142,   102, -1868,   611, -1868,
     386,   409, -1868,   591,   442,   442,   509,   493,   533,   560,
     546,   696,   715,   664, -1868, -1868,   125,   552,   554, -1868,
     560, -1868, -1868, -1868,   388,   151,   506,   125, -1868, -1868,
     717,   413,   630,   632,   638, -1868,   659,   669, -1868, -1868,
     672,   620,   639,   648,   651,   653,   655,   661, -1868,  1636,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,   922,   723,
     940,   725,   721,   125, -1868, -1868,   166, -1868,   705,  -107,
   -1868,   683,   -57, -1868,   760,   778,   784,   630,   791,   800,
     630, -1868,  -128,    53, -1868,   279, -1868,   949,   922,   768,
   -1868,   125,   807,   442,   817,   882,   820,   836,   839,  -107,
   -1868, -1868, -1868, -1868,   532,   683, -1868,   950,   414, -1868,
     -66, -1868, -1868, -1868,  1070,   -41,   681,   681,   829,   681,
     681, -1868, -1868, -1868, -1868,   922,   914,   793,   681, -1868,
     630,  3805, -1868,    49,   686, -1868,   863, -1868,   664, -1868,
      66,    56,   341,   698,   617, -1868, -1868,   125,   878, -1868,
   -1868,   780, -1868, -1868, -1868,  1122, -1868, -1868, -1868,   125,
    1070, -1868,   125,   125, -1868,   -41, -1868, -1868,   681, -1868,
   -1868,   -63, -1868,   681,   125, -1868,   829, -1868,   -63,   681,
   -1868,   681, -1868, -1868, -1868, -1868,   132,   914, -1868,   884,
    3805,   125,   499,   125,   867,   985,   125,   985, -1868,   -61,
    4399,   985,   125,   523,   469,   125,   782, -1868,  2129,   985,
     125,  4399,   125,  4018,   985,   992, -1868,   312,   125,   125,
     125,   125,   125,    32,   152,   125,   125,  1105,  4399,  1009,
     125,   125,   125,   652,   125,   889,  3805, -1868, -1868,   834,
   -1868,  5185, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,   519,
   -1868,   115, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868,  1044, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868,   762, -1868, -1868,   867,   894,   898,
     903,   907,   908,   909, -1868,    56, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868,   837,  1124,   975, -1868,   630,   510,   578,
   -1868, -1868, -1868, -1868,   787,   845,   981, -1868,   617, -1868,
    2059, -1868,  1113,  1025,  1031, -1868, -1868,   630, -1868, -1868,
   -1868, -1868, -1868,  3203,   482, -1868, -1868,  5761, -1868, -1868,
   -1868, -1868, -1868,   125,  3469,   231, -1868,    30,    39,   -52,
     -31,   985,   951,   606,   606, -1868, -1868, -1868, -1868, -1868,
   -1868,   227, -1868,   880, -1868, -1868, -1868, -1868,   125, -1868,
     833, -1868, -1868,   985,  1064, -1868,   349,   -13, -1868, -1868,
     733,   985,  1081,  1081,   915,  3967, -1868,   125, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868,   821,   125, -1868,   813,   125,
   -1868, -1868,  4197, -1868, -1868,  2879, -1868, -1868, -1868, -1868,
   -1868, -1868,    92,   125, -1868, -1868, -1868, -1868,  2953,  2327,
   -1868,  4543, -1868,  2612,  2612, -1868,   967,    47, -1868,  4599,
   -1868,    95, -1868,   363, -1868, -1868, -1868,  2129,  4616, -1868,
    1125, -1868, -1868, -1868, -1868,   125, -1868,  5035,  4636,   583,
   -1868,   854,   958,  4399,   846,  1179, -1868,   544, -1868,   852,
     849,  5727,   312,   312, -1868,   855, -1868,   342,   858,  -100,
   -1868, -1868,  1056,   915,  1057,   125,  1093, -1868, -1868,   838,
   -1868, -1868, -1868, -1868, -1868,   152, -1868,    83, -1868, -1868,
     958,     4,   313, -1868, -1868,  4100, -1868,  3337,   125,   564,
   -1868,   490,  1133, -1868, -1868,  1139,   537,  1057, -1868, -1868,
    4399, -1868, -1868,   946,   947, -1868,   851, -1868, -1868, -1868,
    1032,  1240,  1106, -1868,  1003,  1106,  1229, -1868, -1868,   969,
     125, -1868,   630,   475,   475,   475,   475,   475,   475, -1868,
     681,   919,   681, -1868, -1868,   584, -1868, -1868,  1164,   630,
    1054,  1204, -1868,  1033,   973,   782,   914,   931,   918,  1035,
     914,  1222,    41,  -119,  1965, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,  1260,
   -1868, -1868,   125,   125,   -49,  1737,   879,    17,   957,   847,
     914,   125,   125, -1868,   -71,   914,   914,   630,  3203, -1868,
   -1868, -1868, -1868, -1868, -1868,  1804, -1868, -1868, -1868,   914,
   -1868, -1868, -1868, -1868,  4399,   914,  1264,   -34,  1103,  1012,
     522, -1868, -1868, -1868, -1868,  1118, -1868, -1868, -1868, -1868,
   -1868, -1868,   394, -1868, -1868,   358, -1868, -1868, -1868, -1868,
   -1868, -1868,  1099, -1868, -1868, -1868, -1868,   914, -1868, -1868,
     119,  1180, -1868,  4193, -1868,   914,  4399, -1868,  1188,   -29,
   -1868,  1170,   911,  1271,  5090, -1868,    30, -1868,  1077,   713,
    4399,  1212,  1170,  1042,   125,   125,  -247,   -52, -1868,   125,
     125,   929,   125, -1868, -1868,   985,  1126, -1868,   985, -1868,
   -1868,  1019,   916, -1868,   985,    34,    57,   350, -1868, -1868,
     125, -1868,   -33,  1064, -1868, -1868, -1868, -1868,  1104, -1868,
   -1868, -1868,   985,   917, -1868,  1983, -1868,   813, -1868, -1868,
    1288,  4399, -1868, -1868,   985,   985, -1868, -1868, -1868, -1868,
    2612,   885, -1868,   885, -1868,   523,   523,   921,  1301, -1868,
   -1868, -1868,    95, -1868,    58, -1868, -1868, -1868, -1868,  -238,
    -238,   179,  2612,  2612,  2612,  2612,  2612,   615,   266, -1868,
   -1868, -1868,   -30, -1868,   -27,   984,  5381, -1868,  5727,  1208,
   -1868, -1868,  1155,   257,   125,  1030,   854, -1868,   175,    65,
   -1868,   966,  4399,   985, -1868, -1868, -1868, -1868, -1868,   544,
   -1868,   125,   642, -1868,  5727,  1205, -1868,  1206,   125,  2129,
    4399, -1868,   985, -1868,  1147,  4399,   -46,  1330, -1868, -1868,
     125,  1330, -1868,  1316, -1868,  1317,   152, -1868,   228,  1062,
     914,   960,   985,   985,   125, -1868,  1320,  1185,   985, -1868,
   -1868, -1868,  1322,  1157,  1107,  1018,  1058, -1868,  1098, -1868,
   -1868, -1868,   451,  1167, -1868,  5727, -1868,   906, -1868, -1868,
    1174, -1868, -1868,  1242, -1868, -1868,  1135,   125,  1110, -1868,
   -1868, -1868, -1868,   201,   630,   201,   201,   201,   201,   201,
      13,  1175, -1868, -1868,  1151, -1868,   953,  1116,   914,  1195,
    3177,   985,   914,  1177,   914,   259,   914,   914,   914, -1868,
    1376, -1868, -1868, -1868, -1868,   125, -1868,  1128,   -13, -1868,
      28, -1868,   681,   -92, -1868,    -8, -1868,  -102, -1868,  1333,
     914,   536,  1121,   914,   443,   914,   914,  1158,   630,  1737,
     630, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868,   377,  1011, -1868, -1868, -1868,  1047, -1868, -1868,   979,
   -1868,  1061, -1868, -1868, -1868,  4399, -1868, -1868,   998, -1868,
   -1868, -1868,  1001,  1002,  1005, -1868, -1868, -1868, -1868, -1868,
   -1868,   -86, -1868, -1868, -1868,  1233,  1425,   681, -1868,   681,
   -1868, -1868,  4399, -1868, -1868, -1868,  1036, -1868, -1868, -1868,
   -1868, -1868,  4399,  4399,  4399, -1868, -1868, -1868, -1868,   125,
   -1868,   630, -1868, -1868,   125, -1868, -1868,  1226, -1868, -1868,
    1041, -1868, -1868, -1868, -1868, -1868,   777, -1868, -1868, -1868,
   -1868,  1244,   904, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868,  1405, -1868,  4399, -1868, -1868,  1207, -1868, -1868,  1109,
   -1868, -1868,  1045,  1050, -1868, -1868,  1256, -1868, -1868, -1868,
   -1868, -1868,  1170, -1868,  1170, -1868, -1868, -1868,  1827, -1868,
   -1868, -1868,   985, -1868,   419,   985, -1868,  1100,   125,  3631,
    1213, -1868,  1169,  1231,  1173,  1235, -1868,  1163, -1868,   782,
     782, -1868,  2612, -1868, -1868,  1236, -1868,   237, -1868, -1868,
   -1868, -1868, -1868,   798, -1868, -1868, -1868, -1868,  1275, -1868,
     985, -1868, -1868, -1868,  1305,   758,   324,   541,  1115,  1115,
      62,  1090, -1868,   523, -1868,  1996,   914, -1868, -1868, -1868,
    2147, -1868, -1868, -1868, -1868, -1868, -1868,   460,   460, -1868,
     885,   885,   325,   927, -1868,  2612, -1868,  1230, -1868, -1868,
   -1868,  5381,  1356, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868,  1120,   782,  1321,   116,  1407,  1030, -1868,
   -1868,  1282,  1282,  1159, -1868,  1117,  4399, -1868,  4197, -1868,
    1171,   758,   331, -1868,   125, -1868,   351, -1868, -1868, -1868,
   -1868, -1868, -1868,  1493, -1868,  1327, -1868,   985,  1484, -1868,
    1372,  1392,  1123, -1868,  1127, -1868, -1868, -1868,  1398,  1458,
    1307,   520,  4399, -1868,  1096,  1104, -1868, -1868,  1129,  2197,
     125,   758,   336,  1515,   125,  1129, -1868,    36, -1868,   534,
     125, -1868, -1868,  1296,   125,   105,  5727, -1868,  1302, -1868,
     745,   789,  1314,  5727,  1504, -1868,  1257, -1868,   630, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
    1091,  1259,  1270, -1868,   162,   914, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868,  4399,  4399, -1868,   985,   985,    98,  1214,
   -1868,  1215, -1868, -1868,  4399,  1310,   985,   996, -1868,   681,
   -1868, -1868,   125,  1340,  1344,  1101,  1342,   -39, -1868,    28,
   -1868,  -141, -1868,  1358,    91,    91,  1357, -1868,   681,   125,
    1354,  1548,    25,  -275,   681,  1176,   125,   125,   -25,   681,
     630, -1868, -1868, -1868, -1868,   681,  1198, -1868,   125, -1868,
    4197, -1868,  1196, -1868, -1868, -1868, -1868, -1868, -1868,  1234,
   -1868, -1868,   745, -1868,   681, -1868,   125,  4233, -1868, -1868,
   -1868, -1868, -1868,  1323, -1868, -1868,  5727,  1324, -1868, -1868,
   -1868,  1540, -1868, -1868,  1369, -1868,  4399, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868,  1172, -1868,   624, -1868,  1827,  1171,
    1241, -1868,  1345,   758, -1868, -1868,   163, -1868,  3497, -1868,
   -1868, -1868,  3833, -1868, -1868,  1325,  1042, -1868,  1349, -1868,
    1277, -1868,  1281, -1868, -1868, -1868,   408,  1602, -1868, -1868,
   -1868, -1868, -1868, -1868,  1582, -1868, -1868,   985,  1491,   985,
   -1868, -1868, -1868,  1608,   523,    89, -1868,  1492,  1115,  2612,
   -1868,  2612,  1254,  1254, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868,   726,   125, -1868, -1868,
   -1868,  1318,  1255,  1238,   116, -1868, -1868, -1868, -1868,  4399,
    4399, -1868,  1407, -1868, -1868, -1868,   985,   985,   914,   125,
      12, -1868, -1868,  4399, -1868,  1494,   985, -1868,   514, -1868,
   -1868,   351, -1868,  4399,  4399, -1868,  1508,  1486, -1868,  1388,
   -1868, -1868,  5727,  2129, -1868,  2129,  1127, -1868,  1443,    45,
     914, -1868, -1868,  1243,  1374,  1498,  1361,  1213, -1868, -1868,
   -1868, -1868,  1171,  1499,   985, -1868,  4399,   -13, -1868,  1539,
    1283,   344,    36, -1868, -1868, -1868, -1868, -1868, -1868,   174,
    1360, -1868, -1868, -1868,  1437,  1104,  1510,   985, -1868, -1868,
   -1868,  5727, -1868,  1514, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868,  1355,   985, -1868, -1868, -1868, -1868, -1868,  1258,
   -1868,  1261, -1868, -1868, -1868, -1868, -1868, -1868, -1868,  1266,
   -1868,    64, -1868, -1868, -1868, -1868, -1868,   914,   914,   914,
     914,   914,  1403, -1868, -1868,  1455,  1456,   633,     3,  1452,
   -1868,   125,   914, -1868, -1868,  1047, -1868,   125,   125,  1328,
     -13, -1868,  1272, -1868, -1868,  1047,  1476, -1868, -1868, -1868,
     -25, -1868,   914, -1868, -1868,   681, -1868, -1868, -1868,  1566,
   -1868, -1868,  4399,  4399,  1623, -1868,  1490, -1868,  2595, -1868,
    4399, -1868,   914, -1868, -1868,  5727,  1431, -1868,  4399, -1868,
   -1868,  1618,  1827, -1868, -1868,  1827,  1827,  1827,   527,  1423,
    1529,  1426, -1868, -1868,  4333,  4333,   125,  1366, -1868,  3631,
   -1868,  4333,  5727,  1567,  1433, -1868, -1868, -1868,  1423, -1868,
   -1868,   483, -1868, -1868,   629,    62,  5727,  1608, -1868,  1115,
    5727, -1868, -1868, -1868,  2612,   726,   726, -1868,  1432,  1434,
   -1868,   257,  1326, -1868, -1868,  4399,  1657,  1329, -1868,  1064,
    1064,   125,   -13,   985,  1414, -1868, -1868, -1868, -1868,   758,
   -1868,  1380, -1868, -1868,  1664,  5727, -1868, -1868,  1680, -1868,
    5727,  1690, -1868,  5531, -1868,  1444,  1427,   985,    12,  4399,
    1365, -1868, -1868, -1868, -1868,   125,  1571,  1423, -1868, -1868,
     758,  1451, -1868,   125,  1522,  1629,  1524,  1213, -1868,  1463,
   -1868, -1868, -1868, -1868,  1509,  1107,   125,  1510, -1868, -1868,
    1465,  5727,  5727,  1511, -1868,  1266,  1500,  1501,  1610, -1868,
     125,  4399,  4399,  4399,  4399,  4399,   681, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,   -13,
   -1868,  4399,    63,   -13,   -13,  1457,   125, -1868,  1559,  1512,
    1683,  1390, -1868,  4399,  1477,   484, -1868, -1868, -1868,   681,
    1568,  1324, -1868,  1542,  1418,  1324,  1554,   914,   914,   914,
     125,   914,   914,   914, -1868,  2107, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
    -136,  1485, -1868,   188,  1495, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868,  5727,  1401,  3833,  3833, -1868,   125, -1868, -1868,
   -1868,  5727, -1868, -1868,  1489,  1627,   985,  1491,   985,  1491,
   -1868,  5727, -1868,  5727,   446,  1603,  1607,   257, -1868,  1667,
    1659,   642, -1868,  4399,  4399, -1868,  1064,   914,  1494, -1868,
    4399, -1868,  1641,  2129,  5531,  1690, -1868,  1428,  5727, -1868,
   -1868,   914,  1064, -1868,  4197,  4399, -1868, -1868, -1868,  1499,
    1499,  1515, -1868,  1451, -1868, -1868,   125,  1570, -1868,   125,
    1621,   125,  1502,   -64, -1868, -1868,  1525, -1868,   914, -1868,
    1517,  1519, -1868,   -13, -1868, -1868, -1868, -1868, -1868,  1573,
   -1868, -1868, -1868, -1868, -1868, -1868,  1749,  1758,  1561, -1868,
      31, -1868,   125, -1868, -1868,  1589,   484, -1868,  1574, -1868,
   -1868,  1681,  1584,   914, -1868, -1868,   914,   914,  1343,   -86,
     125,     8,  -181, -1868,  2044,  1689,  4399, -1868, -1868,   681,
   -1868, -1868,   -29,  1324,  1324, -1868,  4399, -1868,  1651, -1868,
    5727, -1868, -1868,  1423, -1868,  1423, -1868,  -238,   782,   782,
   -1868,  1767, -1868,   642, -1868, -1868,  1609,   642,   642,  1368,
   -1868,  1424,  5727, -1868, -1868, -1868, -1868,  1370, -1868, -1868,
   -1868,  4399, -1868, -1868,   125, -1868, -1868, -1868, -1868,  1107,
   -1868, -1868, -1868,  1541,   985,  1575,  1575,  1772, -1868, -1868,
    -275,  1438,  1792, -1868,  1558,   681,  1047, -1868,    31, -1868,
   -1868, -1868, -1868,  1780, -1868, -1868, -1868,  1626, -1868,   914,
     681,  1715,  1653,   681,  1547,  -111, -1868,  1496, -1868,   125,
   -1868,  1572, -1868, -1868, -1868, -1868, -1868,   622, -1868, -1868,
     650, -1868, -1868,   716, -1868, -1868,  4399, -1868, -1868, -1868,
    5727,  4399,  4399, -1868,  5727,  5727,  1491,  1491, -1868, -1868,
   -1868,   985, -1868,  4399,   642,   642,  1461,  2129, -1868,  1461,
   -1868, -1868,   -64, -1868, -1868, -1868,   731,   731,   985, -1868,
    -275,  1796,   125, -1868,  1783, -1868,   599,  1797, -1868,  4399,
   -1868,   681,   681, -1868, -1868, -1868,   681,  1569,   681, -1868,
   -1868,  1788,   -13,  4284, -1868, -1868, -1868, -1868, -1868, -1868,
    1118,  5727, -1868, -1868, -1868, -1868, -1868, -1868, -1868,  1402,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,  1064, -1868,
    -275, -1868, -1868,  4197,  1029,  1149,  1415,  4399,  4197, -1868,
   -1868,  1591, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
    1597, -1868,  1590, -1868
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1868, -1868, -1868,  1842, -1868,    76, -1868, -1868, -1868,  1698,
   -1868, -1868, -1868,   776,     2, -1868, -1868, -1868,  1551, -1868,
   -1868,  1544, -1868, -1868, -1868, -1868, -1868, -1868,   542,   196,
     173, -1868, -1868,  1831, -1868, -1868,  1753, -1868, -1868, -1868,
   -1868, -1868,  1546,  -223, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868,  1534, -1868, -1868, -1868, -1868, -1868,  1755, -1868, -1868,
   -1868,   398, -1868, -1868,   956, -1868, -1868, -1868,  1763, -1868,
   -1868,  1298, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
     600, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
    -163,  -240, -1868, -1868, -1868,   326, -1296, -1868, -1868,  1279,
     117, -1868,  1203,   146, -1868, -1868,  1834, -1868, -1868, -1868,
    1720,  1723, -1868, -1868, -1868,   948, -1868,  -200, -1868, -1868,
   -1507, -1868, -1868, -1868, -1868, -1868,   278, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1567, -1868, -1868, -1868, -1868,  -159,
   -1868, -1868,  -123,  -169, -1868,  -138,  1712, -1868, -1868,  1274,
   -1868, -1868, -1868,  -290,   195, -1868, -1868, -1256, -1868,  -288,
   -1868, -1868, -1868,  -287, -1868,   -75, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868,   -48, -1868, -1868, -1868, -1868,  -162,
   -1868, -1868, -1531, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868,  1739, -1868, -1868,   987,   -47, -1868,   608, -1868, -1868,
   -1868, -1868, -1868,   605, -1868,   -44, -1868,   989, -1868, -1868,
   -1868,  1735, -1868,  1245, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868,  1741, -1868, -1868,  1280, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,   575,
   -1868, -1868, -1868,    96, -1868, -1283, -1868, -1868, -1868, -1868,
   -1868, -1868,  -160,  -226, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868,   -42, -1868, -1868, -1868, -1868,   130, -1868,
   -1868, -1868, -1868,  1843,   579, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868,  1743,   288, -1868, -1868, -1868, -1868, -1645,
    -145,  -197, -1868, -1868, -1868, -1868, -1868,    59,  1141, -1868,
   -1868, -1868, -1868,  1142,   481,  -978, -1868, -1867, -1868, -1868,
     769, -1868, -1868,   477, -1868, -1868, -1868, -1868, -1868,  1112,
   -1868,   445, -1868, -1868,    50, -1868, -1868,    51,    55, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,   830,
     277, -1868, -1868,   276,  -716, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,  1563,
   -1868, -1868, -1868, -1868, -1868, -1304, -1868, -1868,  -610, -1394,
   -1868, -1417, -1868, -1868, -1868, -1868, -1868,  1453, -1868,   732,
   -1868, -1868, -1868, -1868, -1868,    46,    54, -1868, -1868, -1326,
   -1868, -1868, -1868, -1868, -1868, -1683, -1868, -1868, -1868,   447,
   -1868, -1868, -1868, -1868,  -144, -1868, -1868, -1868, -1868, -1868,
    1592, -1868, -1868, -1868, -1868,  1505, -1868, -1868, -1868, -1868,
   -1868,  -195,  1520, -1868, -1868,   491,  -251, -1868, -1868, -1868,
   -1868, -1868,  1166, -1678, -1868,   783,  -212, -1868, -1868,   492,
   -1868, -1868,  -331, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868,   741, -1868, -1868, -1868,   220, -1868, -1868,  1467,
    1445,  -726, -1868, -1868, -1868, -1868, -1868, -1868, -1868,   644,
   -1868, -1868, -1868, -1868, -1868,  1521,  -628,   823, -1868,   792,
   -1868,   -89,   283, -1868,  1543, -1868, -1868, -1868, -1868,  1527,
   -1868, -1868,  -455, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
    1619, -1868, -1868, -1868,  1287, -1868, -1868, -1868, -1868, -1868,
    1624, -1868,   859, -1868, -1868, -1868, -1868, -1868,  -731, -1868,
   -1868, -1868,  -640,  1669, -1868, -1868, -1868, -1868,  1675,    26,
   -1868, -1868,  1348, -1868,  1303, -1868, -1868,  -700, -1868,    60,
    1022, -1868, -1868, -1868, -1868,  -217, -1868, -1110, -1113,  -116,
    1248, -1104, -1868, -1868, -1868, -1868,  -206,  -182,  -363,  -850,
   -1868,   156, -1868, -1578, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868,   -55,  2301,   422,  2600,  -101,
    1161,   -10, -1868, -1868, -1868,  1351, -1868, -1294, -1217,  1503,
     826, -1868,  -404, -1868,  1644,  -216, -1868, -1868,  1278, -1868,
   -1868,  1286,   177, -1868,   923, -1868,  -428,  -424, -1868,   294,
   -1868, -1868,  -777, -1868, -1868, -1868, -1868, -1868,   912, -1868,
    -580,   619,  -398,  -774,  -219
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1366
static const yytype_int16 yytable[] =
{
      19,   198,   145,   432,   468,   920,   261,   414,   168,   404,
     208,   749,   477,  1084,   193,  1154,  1155,   201,  1680,   360,
     482,   768,  1113,   479,   360,   473,    19,   501,   727,   503,
     480,  1438,   360,   520,   521,   410,  1620,    19,    52,   531,
     551,   505,   495,   529,   798,  1541,  1619,   727,  1812,    81,
     530,  1601,   145,   143,   798,   770,   770,   703,  1820,  1138,
    1139,   198,   857,   775,   542,   261,   708,   415,  1276,   445,
     446,   447,  1083,    19,   143,  1170,   739,   690,  1167,   691,
     692,  -873,  1440,  1233,   318,   112,  -277,  1494,  1492,   380,
    1911,   102,  1943,  1805,  1641,   102,   714,  1495,   824,   490,
    1663,    19,  -207,    22,  1678,   411,  -581,   361,  -392,  1440,
    1756,   261,  -392,   156,   779,   143,   577,  1844,  1961,   143,
    1220,  1109,  1110,   548,   182,  1475,    84,  1193,  1579,   929,
    1032,  1357,  1506,   315,   764,    87,  2157,  1533,  2091,  2064,
     825,   826,  -993,    22,   714,  1999,   827,   982,   927,   549,
     116,  -210,    60,   319,   320,    33,  2122,   350,   380,   715,
     405,   369,    25,   550,   187,   719,   442,    22,    17,   354,
    2158,  1476,   357,   357,   405,   141,   859,   127,    10,   485,
     973,  1668,    16,   452,   365,  1313,   127,  1005,  1006,   519,
    1629,  1194,   524,  1152,   405,  1723,  1324,    23, -1324,  1191,
     853,   974,  1325,   401,  -988,   743,   828,   715,  1102,  2065,
     177,  1762,   444,   455,  1605,   365,    11,   709,   860,    61,
     365,   940,   416,  1153,    86,  -207,  1441,   499,   720,   261,
    1194,  1104,   113,   380,   771,   773,   370,    23,   417,    12,
     365,  -207,   117,   158,   118,  1674,   431,   510,   791,  1746,
     418,   790,  2003,  1441,  1277,   928,   983,  2122,  2122,  1580,
     714,    23,    17,   321,   128,  2051,  1176,   316,  1177,   142,
     205,  1178,  1179,   128,  -210, -1266,  -207,   445,   446,   447,
     803,  1569,  1724,  -207,  1192,  -210,  1669,  1880,  1477,  -207,
    -210,   183,   419,   143,  1358,  -207,  1299,  1022,   187,  1673,
     765,  1428,   382,   734,  -317,  -207,   740,    17,  1145,  2014,
     420,  2016,   166,   450,  1844,  1809,   510,    62,  1088,  1554,
     187,  1813,  1814,   715,   550,  -583,   721,   818,   187,  -581,
   -1266,   761,  -210,  1478,  1581,   511, -1197, -1197, -1197,   166,
    1771,   206,  -317,   512,  -210,   513,   834,   941,   732,   733,
    1940,   421,   577,  1180,   490,   490,   405,   941,  1700,  -207,
   -1266,   780,  1962,   697,   322,  1096,  2132,   798,  1866,  1449,
    -583,   382,   770,  1163,  -581,  1879,  1111,    63,   734,    17,
     362,    64,    17,  1726,  1314,  1451,  1826,  2128,   401,  -207,
      84,   205,   323,  1033,   770,   770,   770,   770,   770,  2089,
     941,  1227,   371,   690,   511,   691,   692,  -277,   422,  1108,
     937,   939,   512,    17,   513,  1278,  -873,  1806,    17,  1757,
    1602,   776,  1807,   710,   733,   380,   761,  1448,   734,  -207,
      17,   704,   910,   767,   912,  1103,  1163,  1935,  -210,   423,
    1468,  1747,  1391,  1442,  1392, -1324,   382,  1606,  1867,  1868,
    1869,    17,   431,  -207,  2051,   931,  1570,  1300,  1105,   854,
     519,  1429,   519,    65,   514,   804,  1675,   711,    17,   424,
    1442,  2004,   855,  1790,   733,    17,  1772,    87,  1315,    17,
    1680,  1680,    66,  1301,  1316,   143,  1317,   488,   452,   380,
     818,   453,   454,   699,  1953,  1023,   862,   385,   386,  2144,
     387,    17,   388,   389,  1571,   380,   390,  1439,  1973,  1525,
    1017,  1018,  1181,  1182,  1496,  1024,   383,   384,   455,  1534,
    1430,   450,   385,   386,  1334,   387,    17,   388,   389,  1424,
    1425,   390,   415,   514,   445,   446,   447,   205,  2175,  2176,
    1342,  1607,   654,  1094,   539,   875,  1608,  1609,  1983,   143,
      19,  1137,  1986,  2139,    67,    56,   468,   468,  1773,   658,
       1,  1343,   898,    14,  1302,  1871,   655,   656,    17,  1545,
     380,   876,     2,  1157,  1158,  1159,  1160,  1161,   333,  1106,
   -1197,  1207,   654,  1135,  1885,   383,   384,  1887,   381,   380,
    1889,   385,   386,  1974,   387,    17,   388,   389,  1107,    57,
     390,  1303, -1186,   725,  1473,   380,   655,   656,   415,   785,
    1152,   542,   792,   793,   794,    20,   795,   796,  1013,  1206,
    1664,   980,   981,  1212,   146,  1908,   445,   446,   447,  1228,
     143,   334,  1768,  2189,   863,   380,    26,   542,   382,    37,
    1153,  1201,   734,  1211,   900,   901,   902,   786,  1769,   143,
     548,   735,   729,  1929,    21,  1335,  1930,  1546,   166,   729,
     383,   384,   539,   797,   729,   147,   385,   386,  1146,   387,
      17,   388,   389,   797,    17,   390,   549,    28,   335,  1101,
    1252,  1400,   144,  2209,  1397,    29,  1241,   448,   733,  1019,
    1398,  1547,  1521,  1548,   205,   143,   166,  1114,  -361,  1253,
    -908,  1014,   382,   417,  1085,  1086,   824,    30,   345,  1134,
    1136,  -908,   172,   489,   770,   418,  1683,   768,   382,   346,
    2111,  2112,  1163,   937,   204,  1015,  1311,   -95,  1699,    31,
     839,   727,   144,   736,   205,   205,  1522,    34,  1163,   380,
    1256,   840,   868,  1730,   469,  1400,   470,   333,   825,   826,
     737,   187,  1498,  -847,   827,    17,   657,   419,  -482,   471,
     173,   174,  1731,   416,   380,    38,   543,   770,  1202,    35,
     166,   -95,   727,   449,   787,   420,     9,  1499,   450,   417,
       9,   921,   166,   382,   336,   925,   574,  1216,   869,   870,
    1886,   418,  1168,  2162,  1016,  2164,   657, -1198,  -483,   143,
     334,   519,   382,   472,   544,   723,   724,  1236,  1237,    36,
    1068,  2165,    46,  1242,   828,   333,   421,   545,   382,  1321,
     971,   333,    45,  2166,   143,   979,   533,   205,   401,  1777,
     984,   985,  1260,   419,  1330,  1331,   534,  1312,   727,  2167,
      82,   792,   793,   794,  1001,   795,   796,   335,   382,    47,
    1003,   420,   383,   384,   576,   658,    83,     2,   385,   386,
     913,   387,    17,   388,   389,  1162,  1295,   390,   334,  1362,
     450,  1363,  1069,   422,   334,   769,   772,  1152,   727,   792,
     793,   794,  1021,   795,   796,   559,    53,    19,    54,  2168,
    1029,  1400,   421,  1426,  1870,   794,  1323,   795,   796,  1266,
    1326,   560,    78,  1405,   451,  2169,    87,  1153,    89,  2116,
       2,  2117,   380,  1403,    90,   335,   383,   384,   900,   901,
     902,   335,   385,   386,   468,   387,    17,   388,   389,  1379,
    1380,   390,   383,   384,   424,    91,  1888,  1382,   385,   386,
    1383,   387,    17,   388,   389,    92,  1466,   390,    93,   422,
    1432,  1433,   382,   452,    94,     2,   453,   454,  1152,  1665,
    1666,  1667,   385,   386,   102,   387,    17,   388,   389,  1558,
    1559,   390,  1152,    95,   792,   793,   794,   382,   795,   796,
     423,  1799,    96,   455,   812,    97,   797,    98,  1153,    99,
    1397,   380,  1206,   108,  1397,   100,  1398,   383,   384,   107,
    1398,   110,  1153,   385,   386,   114,   387,    17,   388,   389,
     424,   111,   390, -1248, -1248,   380,   383,   384,  1592,  1593,
    1400,   124,   385,   386,  1444,   387,    17,   388,   389,  2184,
    2185,   390,   383,   384,  1146, -1249,   134,  1399,   385,   386,
     727,   387,    17,   388,   389,   385,   386,   390,   387,  2124,
    2125,  1704,   150,   770,   135,  1231,  1665,  1666,  1667,   542,
     136,   741,   383,   384,  1874,  1875,  1562,   138,   385,   386,
     380,   387,    17,   388,   389,  1436,   139,   390,  1393,  2039,
    2040,  1109,  1110,   157,  1800,  1801,  1802,  1803,   401,   154,
    1804,  1164,  1166,   159,   160, -1249,   162,  1493,   528,  1268,
    1596,  1268,  1268,  1268,  1268,  1268,   905,   906,   907,   908,
     909,   380,   163,  1284,  1452,   164,   171,  1296,   179,  1298,
     187,  1304,  1305,  1306,   194,   382,   205,  1070,  1071,   312,
     143,  1072,  1073,  1074,  1075,  1076,  1627,  1628,   207,   313,
    1077,   344,  1078,   351,   353,  1329,   352,  1453,  1333,   372,
    1336,  1337,   360,   486,   971, -1250,    17,   402,   474,   792,
     793,   794,  1505,   795,   796,   538,   383,   384,   540,   557,
     563,  1595,   385,   386,   564,   387,    17,   388,   389,   565,
    1257,   390,   570,   566,   567,   568,   571,   572,   578,   580,
    1615,   383,   384,   581,   622,  1623,  1625,   385,   386,   623,
     387,    17,   388,   389,   382,   624,   390,  1637,   729,   731,
     722,   744,   752,   747,   755, -1250,  1635,   166,   799,   814,
     818,   823,   822,   832,   833,   468,  1363, -1249,   382,   838,
    1705,  1655,  1706,   841,   842,   845,   848,   850,   143,   872,
     874,  1577,  1578,  2118,   880,   881,   885,   886, -1249,  1642,
    1588,  1590,   882,   890,   888,  1691,   893,  1694,  1397,   897,
     911,  1397,  1397,  1397,  1398,   914,   916,  1398,  1398,  1398,
     917,   919,   922,   918,   923,   924,   926,   939,   584,   972,
    1719,  1720,  1258,   382,   975,  1004,   976,  1008,  1009,  1011,
    1020,  1031,  1026,  1662,  1035,   710,  1591,  1742,  1037,  1743,
     137,  1066,  1082,   140,   699,  1092,   770,  1679,  1097,  1095,
    1688,  1681,  1099,   550,  1729,   708,   380,  1143,  1115,  1616,
     794,  1140,  1621,  1169,   382,  1175,   365,   365,   727,  1444,
    1171,   727,  1454,  1455,  1456,  1457,  1111,  1458,  1640,   383,
     384,  1186,  1196,  1208,  1209,   385,   386, -1250,   387,    17,
     388,   389,  1760,   210,   390,  1217,  1649,  1221,  1225,  1226,
    1230,  1234,  1239,  1240,  1243,  1244,   727,  1740, -1250,  1246,
    1248,  1250,   378,   397,  1251,  1254,   397,   409,   397,  1263,
     409,   435,   397,  1262,  1393,  1264,  1267,  1280,  1393,  1297,
     397,  1281,  1283,   409,  1307,   397,  1282,   727,   498,   500,
     409,   502,   409,   504,   509,   397,   409,   409,   397,  1285,
     397,  1309,   409,   532,  1328,   537,  1781,  1338,   383,   384,
    1332, -1248,  1344,  1345,   385,   386,  1347,   387,    17,   388,
     389,   405,   405,   390,   522,  1348,  1763,  1353,  2119,  2120,
    1354,  1355,   383,   384,  1356,  1360,  1361,  1369,   385,   386,
    1377,   387,    17,   388,   389,  1378,  1381,   390,   542,  1384,
    1386,  1388, -1249, -1249,   541,  1387,   360,  1389, -1249, -1249,
    1390, -1249, -1249, -1249, -1249,  1415,  1404, -1249,  1419,  1420,
    1573, -1248,  1421,  1422,  1427,  1894,  1423,  1434,  1437,   776,
    1445,  1469,  1467,  1471,  1480,  1474,  1485,   383,   384,   741,
    1488,  1503,  1780,   385,   386,  1504,   387,    17,   388,   389,
    1311,  1506,   390,  1489,  1510,  1512,  1518,  1906,  1590,  1816,
    1193,  1520,  1524,  1513,  1535,  1552,  1557,  1515,  1561,   382,
    1526,  1563,  1924,  1564,  1566,  1567,   702,  1881,   383,   384,
     573,  1922,   397,   542,   385,   386,  1568,   387,    17,   388,
     389,  1891,   397,   390,  1597,  1893,  1583,  1584,  1598,  1599,
     625,  1600,  1324,  1591,   397,   397,  1617,  1325,   409,  1618,
    1643,   397,   397,  1638,  1644,  1626,  1652,  1657,   751,  1444,
    1659,  1660, -1250, -1250,   542,  1947,  1670,   702, -1250, -1250,
     760, -1250, -1250, -1250, -1250,  1671,  1682, -1250,  1918,  1684,
    1686,  1621,   452,  1152,  1687,   383,   384,  1621,  1621,  1689,
    1817,   385,   386, -1248,   387,    17,   388,   389,   734,   734,
     390,  1312,  1690,  1692,  1695,  1701,  1707,  1736,  1712,  1711,
    1727,  1735,   455,  1153, -1248,  1714,  -211,    60,  1738,  1745,
     397,  1752,  1753,  1755,  1750,  1758,  1764,  1775,  1766,  1776,
    1778,  1782,  1393,   498,   498,  1393,  1393,  1393,  1959,  1786,
    1783,  1796,  1787,  1586,   733,   733,   847,  1788,   405,  1797,
    1798,  1808,  1821,  1818,  1824,  2007,   397,  1828,   397,  1829,
    1815,  1861,  1864,  1721,   542,  1400,  1872,  1877,  1873,   867,
     397,  1980,   405,  1882,   542,  1884,   542,  1742,  1895,  1903,
    1896,  1907,  1900,  1909,    61,  1904,  1910,  1912,  1816,  1913,
    1925,  1920,  1816,  1816,  1921,  1749,  1927,  1931,  1936,  1937,
    1939,   542,  1941,   436,  1942,  1948,   459,  1946,  1952,  1950,
    1951,  2052,  1966,  1964,   481,  1970,   484,  1967,  1969,  1972,
    1981,  1984,  1987,   383,   384,  1985,  2008,  2002,  2006,   385,
     386,   436,   387,    17,   388,   389,  2011,  2018,   390,  -211,
    2010,  2019,  2021,  2022,  2032,   899,  2044,  2036,  2046,  1918,
    -211,  2057,  2053,  1681,  1681,  -211,  2060,   949,  1146,  2055,
    1621,  2056,   915,   409,   409,  2061,  2062,  2073,  2079,  2049,
    2086,  2080,  1791,  1792,  1793,  1794,  1795,   933,   950,  1817,
    2081,  2107,    62,  1817,  1817,   734,  1965,  1811,  2114,  2121,
    2123,  2126,  2127,  2129,  2138,  2133,  2140,  -211,  2135,  2141,
    2142,   734,  2146,   761,  2147,  2151,  2152,  1823,  2155,  -211,
    1621,  2013,   951,  2015,  2163,  2179,  2161,  2190,  2192,  2197,
     986,   988,  2204,  2202,  2212,  2208,    13,  1860, -1248, -1248,
    2001,   733,  1816,  2210, -1248, -1248,   314, -1248, -1248, -1248,
   -1248,  2109,    63, -1248,  2213,  2115,    64,   733,   562,   569,
    1080,    55,   165,   989,   990,   991,   992,   993,   994,   995,
    1090,  1091,   582,  1093,   575,   178,   397,  1722,   170,   397,
    1816,  1308,   932,  2137,  1576,   397,  1027,  2187,   934,  1785,
    -317,   409,  1949,   101,   397,   359,   358,  1340,  1822,  2145,
     367,  2181,   987,   397,  2087,  2148,   996,  2174,   542,   355,
    2052,  -317,  1623,  -211,  1603,   397,   397,  2143,  2078,  2193,
    1322,  2077,  2198,  1613,   368,   762,  1327,   366,  1028,  1647,
    1010,  1998,  2150,  1817,  2207,  2154,  2170,  2159,    65,   205,
    2092,   153,   952,   374,  1184,  1715,  2020,  1484,  1190,  1718,
     953,  1744,  2072,  1224,  2034,  2171,  2035,    66,  2033,   583,
     789,  1446,  1890,  1892,   542,  1185,   746,  1540,   865,  2042,
    2193,  1817,  1621,   584,   397,  2041,   821,  1497,  2183,  1770,
     730,   585,   409,  1732,  1733,  1203,  1556,  1945,   837,  2134,
     892,   997,  1623,   397,   877,   415,  1646,   445,   446,   447,
    1117,  1223,   836,  2199,  2200,  1487,  1118,   397,  2201,  1119,
    2203,  1519,  1120,   397,   397,  1238,   586,   587,   436,   397,
     762,  1923,  1988,  1989,  1990,   954,  1994,  1995,  1996,    67,
    2182,   858,   852,   879,  1132,   754,   844,   713,  1261,   955,
     700,   956,  1623,   759,  1065,  1491,  1376,  1174,  1131,   750,
    1144,  1816,  2110,   583,  2030,  1531,  2177,  1121,  1089,  1122,
    1148,  2017,  1709,  1450,     0,  1464,   998,   584,     0,  1621,
       0,     0,   397,   405,     0,   585,   999,   734,     0,     0,
       0,   405,   761,     0,  2095,  2096,   409,   761,     0,   409,
       0,     0,  2029,     0,     0,     0,  1269,  1270,  1271,  1272,
    1273,  1274,  1275,     0,     0,     0,  2037,     0,     0,     0,
     586,   587,     0,     0,     0,     0,     0,     0,  2097,     0,
       0,   588,     0,   733,   957,     0,     0,     0,   415,  1123,
     445,   446,   447,  2054,  2098,   626,     0,     0,     0,     0,
       0,     0,  1817,     0,  2099,     0,     0,  1002,     0,     0,
     416,  1339,     0,  1341,     0,     0,     0,     0,     0,     0,
       0,  1831,     0,  1124,  1125,     0,   417,     0,  2083,     0,
       0,  2084,  2085,     0,     0,     0,     0,     0,   418,     0,
    1374,     0,     0,     0,   589,  1374,     0,     0,     0,  1030,
       0,     0,     0,     0,     0,     0,   415,     0,   205,     0,
       0,     0,     0,  1081,  1126,     0,  1127,     0,     0,  1832,
       0,     0,     0,  1128,     0,   588,     0,     0,     0,     0,
     419,     0,     0,   590,  1375,     0,     0,     0,   591,     0,
       0,    87,  -317,     0,     0,     0,  -317,     0,   420,     0,
       0,   450,     0,   397,     0,   397,   397,   452,     0,     0,
     383,   384,     0,   592,  1133,     0,   385,   386,     0,   387,
      17,   388,   389,   789,  2149,   390,     0,     0,   459,   459,
    -317,   593,     0,     0,     0,     0,     0,   455,   589,   421,
       0,   397,     0,   416,     0,  1833,   397,     0,     0,     0,
       0, -1198, -1198,     0,     0,     0,     0,     0,     0,   417,
       0,     0,     0,     0,     0,     0,     0,     0,  2100,     0,
    1834,   418,  2101,  2102,     0,  1200,     0,   590,  1129,     0,
       0,  1835,   591,     0, -1198,     0,   415,     0,   445,   446,
     447,   205,     0,  1215,     0,     0,   422,     0,  1219,     0,
       0,     0,     0,     0,  1836,     0,  2103,   592,     0, -1198,
       0,   416,   397,   419,     0,   409,     0, -1198,     0,  2104,
    2105,     0,     0,     0,     0,   593,     0,   423,   397,   449,
       0,   420,     0,  1997,   450,     0,     0,  1837,     0,   418,
       0,     0,     0,     0,     0,  1057,  1058,   166,     0,     0,
    1530,  1532,   397,     0,     0,  1539,     0,   424,  1544,  1062,
       0,  1551,     0,     0,     0,  1553,     0,     0,     0,     0,
       0,     0,   421,  1294,     0,     0,   452,     0,     0,   453,
     454,   419,     0,     0,     0,   385,   386,     0,   387,    17,
     388,   389,     0,     0,   390,     0,     0,     0,     0,   420,
       0,  1838,     0,     0,     0,  1839,   455,   397,   397,     0,
       0,     0,     0,     0,     0,     0,   397,   397,     0,     0,
    1840,  1565,     0,   409,     0,     0,     0,     0,     0,   422,
       0,     0,     0,     0,     0,     0,     0,     0,  1352,  1841,
     421,   416,     0,     0,  1624,     0,     0,     0,     0,  1633,
    1842,     0,     0,     0,  1843,     0,     0,   417,     0,     0,
     423,     0,     0,   394,     0,  1368,   394,     0,   394,   418,
       0,     0,   394,     0,  1604,  1370,  1371,  1372,     0,     0,
     394,     0,     0,     0,     0,   394,     0,     0,     0,   205,
     424,     0,  1528,  1636,     0,   394,     0,   422,   394,     0,
     394,     0, -1198, -1198, -1198, -1198, -1198, -1198,     0,   452,
       0,   419,   453,   454,   397,     0,  1385,     0,   385,   386,
       0,   387,    17,   388,   389,     0,     0,   390,   423,   420,
       0,     0,   450,     0,     0,     0,     0,     0,     0,   455,
       0,     0,     0,     0,     0,     0,     0,     0,   397,     0,
     397,     0,  1414,     0,     0,     0,     0,     0,   424,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     421,   415,     0,   445,   446,   447,     0,     0,  1710,     0,
     383,   384,     0,   626,     0,     0,   385,   386,     0,   387,
      17,   388,   389,     0,     0,   390,   459,   397,   397,     0,
     409,     0,     0,     0,     0,     0,     0,   397,     0,  1831,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   422,     0,     0,
       0,     0,   394,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   394,     0,     0,   397,     0,     0,  1539,  1200,
       0,  1200,     0,  1544,   394,   394,     0,  1832,   423,     0,
       0,   394,   394,     0,     0,     0,     0,     0,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   397,  1523,     0,     0,   424,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   452,     0,     0,
     453,   454,     0,     0,     0,     0,   385,   386,     0,   387,
      17,   388,   389,     0,     0,   390,   416,     0,     0,     0,
     394,     0,     0,  1833,     0,     0,     0,   455,     0,     0,
       0,  1633,   417,     0,     0,     0,  1575,  1575,     0,     0,
       0,     0,     0,     0,   418,     0,     0,  1585,  1834,     0,
       0,     0,   396,     0,     0,   396,   394,   396,   394,  1835,
       0,   396,     0,     0,     0,     0,     0,     0,     0,   396,
     394,     0,     0,     0,   396,     0,     0,  1876,     0,     0,
       0,     0,  1836,     0,   396,     0,   419,   396,     0,   396,
       0,     0,   397,  1352,     0,   397,     0,     0,     0,     0,
       0,     0,     0,     0,   420,     0,     0,   450,     0,     0,
    1651,     0,     0,     0,     0,  1837,     0,     0,     0,     0,
     397,   397,  1905,   409,   397,     0,     0,     0, -1284,  1661,
     397,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   421,   708,     0,   397,     0,
       0,  1414,     0,     0,     0,  1414,  1926,     0,     0,     0,
       0,   397,     0,     0,  1539,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1944,     0,  1838,
       0,     0,     0,  1839,     0, -1284,     0,   459,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1840,     0,
       0,     0,   422,     0, -1302, -1302, -1302,     0,     0,     0,
       0,     0, -1302,     0,     0,     0,     0,  1841,     0,     0,
       0,   396,  1716,  1717,     0,     0,     0,     0,  1842,     0,
       0,   396,  1843,   423,     0,     0,  1200,     0,     0,     0,
       0,     0,     0,   396,   396,     0,  1215,  1734,     0,     0,
     396,   396,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   424,     0,     0,   394,     0,     0,   394,
       0,     0,     0,     0,     0,   394,     0,     0,  2009,  1761,
       0,     0,   452, -1284,   394,   453,   454,   397,     0,   397,
       0,   385,   386,   394,   387,    17,   388,   389,     0, -1284,
     390,     0,     0,     0,     0,   394,   394,   397,     0,     0,
       0, -1284,   455,     0,     0,     0,     0,     0,     0,   396,
       0,     0,     0,   397,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2043,     0,     0,
    2045,     0,  2048,     0,   409,     0,     0, -1302, -1302,     0,
       0,     0,     0, -1284,     0,   396,     0,   396,     0,     0,
       0,     0,     0,     0,   394,     0,     0,     0,     0,   396,
       0, -1284,     0,     0,     0,     0,     0,     0,     0,     0,
   -1302,     0,     0,   394,     0,  1352,  1827,     0,     0,     0,
       0,  2088,     0,  1859,     0,     0,     0,   394,     0,     0,
       0,  1863,     0,   394,   394, -1302,     0,     0,     0,   394,
       0,     0, -1284, -1302,     0,     0,     0,  1414,  1414,     0,
       0,     0,  1414,     0,  1414,     0,   415,     0,   394,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1302,     0,  2131,     0,   789, -1302,     0,
       0,     0,     0,     0,     0,   397,     0,     0,  1902, -1302,
       0,  1624,   394,     0,     0,     0,     0,     0,     0, -1284,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -326,   626,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   436,     0,     0,     0,     0,     0,     0,     0,
   -1284,     0,     0,   710,     0,     0,     0,     0,     0,     0,
   -1284,     0,  -326,  -326,  -326,  -326,  -326,  -326,  -326,     0,
       0,     0,   397,     0,     0,     0,     0,     0,     0,  1286,
   -1284,     0,     0,   409,  1954,  1955,  1956,  1957,  1958,   397,
       0,  1624,     0,  2191,     0,     0,     0,  2196,     0,     0,
       0,     0, -1284, -1284,  1960,  -326,     0,     0, -1284, -1284,
       0, -1284,     0, -1284, -1284,   396,  1971, -1284,   396,     0,
       0,     0,     0,     0,   396,     0,     0,     0,     0,     0,
       0,   416,     0,   396,     0,     0,   415,     0,     0,   397,
       0,  1624,   396,     0,     0,     0,     0,   417, -1302, -1302,
   -1302, -1302, -1302, -1302,   396,   396,     0,     0,     0,   418,
       0,     0,     0,     0,     0,     0,     0,  1414,  1414,     0,
       0,  1287,  1288,     0,     0,     0, -1302, -1302, -1302,     0,
   -1302, -1302,     0,   394,     0,   394,   394,     0,     0,     0,
    -326,     0,     0,   143,     0,     0,  2027,  2028,     0,     0,
       0,   419,     0,  2031,     0,   627,   628,     0,     0,     0,
    -343,     0,     0,   396,     0,     0,     0,   762,  2038,   420,
       0,   394,     0,     0,     0,     0,   394,     0,     0,     0,
       0,     0,   396,   866,     0,     0,     0,  1289,     0,     0,
       0,     0,     0,     0,     0,     0,   396,     0,     0,     0,
       0,   629,   396,   396,     0,     0,     0,     0,   396,     0,
     421,  1290,   211,     0,   212,  -326,     0,     0,     0,     0,
       0,     0,     0,   630,     0,  -326,   213,   396,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2108,
       0,   416,   394,     0,   631,     0,   415,     0,     0,  2113,
       0,     0,   214,   632,     0,     0,   215,   417,   394,     0,
       0,   396,     0,     0,     0,     0,   216,   422,     0,   418,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1406,
       0,     0,   394,  1291,  2130,     0,   217,   633,     0,     0,
       0,     0,   218,     0,     0,     0,     0,     0,   423,     0,
       0,     0,     0,   143,     0,     0,     0,   634,     0,     0,
       0,   419,     0,     0,   219,     0,     0,     0,     0,     0,
       0,   220,     0,  -343,   221,     0,     0,     0,   424,   420,
       0,     0,   698,     0,     0,     0,   635,   394,   394,     0,
     636,     0,     0,     0,     0,     0,   394,   394,     0,  1902,
     383,   384,     0,     0,  2172,  2173,   385,   386,   222,   387,
      17,   388,   389,     0,     0,   390,  2178,   223,     0,   224,
     421,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     415,     0,     0,     0,     0,     0,     0,     0,     0,   436,
       0,   225,   436,     0,   226,   227,     0,     0,     0,     0,
       0,   416,     0,   228,     0,     0,  2206,     0,     0,   229,
       0,     0,   230,  1406,     0,   231,     0,   417,     0,     0,
    1676,     0,     0,     0,     0,     0,     0,   422,     0,   418,
       0,     0,   396,     0,   396,   396,   762,     0,     0,     0,
     436,   762,     0,     0,   394,     0,     0,   232,     0,     0,
       0,   233,     0,   234,     0,     0,     0,     0,   423,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     396,   419,     0,   235,     0,   396,     0,     0,   394,     0,
     394,     0,     0,     0,     0,   236,   237,     0,   424,   420,
       0,     0,     0,     0,     0,     0,     0,     0,  1407,     0,
       0,   238,     0,     0,     0,   239,     0,     0,     0,     0,
     383,   384,     0,     0,     0,   240,   385,   386,     0,   387,
      17,   388,   389,     0,     0,   390,     0,   394,   394,   241,
     421,     0,     0,   242,     0,   416,     0,   394,     0,     0,
       0,   396,   243,     0,     0,     0,     0,     0,   211,     0,
     212,   417,   244,     0,     0,   245,     0,   396,     0,     0,
       0,     0,   213,   418,   246,     0,     0,     0,     0,   247,
     248,   249,     0,     0,     0,   394,     0,     0,     0,   250,
       0,   396,   415,     0,     0,     0,     0,   422,   214,     0,
       0,     0,   215,     0,   251,     0,   252,     0,   394,     0,
       0,     0,   216,     0,   253,   419,     0,     0,     0,     0,
       0,     0,     0,   254,   394,     0,     0,     0,   423,     0,
       0,     0,   217,   420,     0,     0,     0,     0,   218,     0,
       0,     0,  1407,     0,     0,     0,   396,   396,     0,   143,
       0,     0,     0,     0,     0,   396,   396,     0,   424,     0,
     219,     0,   255,     0,     0,     0,     0,   220,     0,     0,
     221,     0,     0,     0,   421,     0,     0,     0,     0,     0,
     383,   384,     0,     0,     0,     0,   385,   386,     0,   387,
      17,   388,   389,     0,     0,   390,     0,     0,     0,     0,
       0,     0,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,   223,     0,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   422,     0,     0,     0,     0,     0,   225,     0,     0,
     226,   227,   394,     0,     0,   394,     0,   416,     0,   228,
       0,     0,     0,   396,     0,   229,     0,     0,   230,     0,
       0,   231,   423,   417,     0,     0,     0,     0,     0,     0,
     394,   394,     0,     0,   394,   418,     0,   415,     0,     0,
     394,     0,     0,     0,     0,     0,     0,   396,     0,   396,
       0,     0,   424,   232,     0,     0,     0,   233,   394,   234,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   394,     0,     0,   383,   384,     0,   419,     0,   235,
     385,   386,     0,   387,    17,   388,   389,     0,     0,   390,
       0,   236,   237,     0,     0,   420,   396,   396,     0,     0,
       0,     0,     0,     0,  1407,     0,   396,   238,     0,     0,
       0,   239,     0,     0,     0,     0,     0,   483,     0,   415,
       0,   240,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   241,   421,     0,     0,   242,
       0,   416,     0,     0,   396,     0,     0,     0,   243,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   244,     0,
       0,   245,     0,     0,     0,     0,     0,   396,     0,   418,
     246,     0,     0,     0,     0,   247,   248,   249,     0,     0,
       0,     0,     0,   396,     0,   250,     0,     0,     0,     0,
       0,     0,   416,   422,     0,     0,     0,   394,     0,   394,
     251,     0,   252,  -205,  -205,     0,     0,     0,   417,     0,
     253,   419,     0,     0,     0,     0,   415,   394,     0,   254,
     418,     0,     0,     0,   423,     0,     0,     0,     0,   420,
       0,     0,   667,   394,   668,   669,   670,     0,     0,   671,
       0,   672,   673,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   415,     0,   424,     0,     0,     0,   255,     0,
       0,     0,   419,     0,     0,     0,     0,   674,     0,     0,
     421,  -205,     0,   143,   416,     0,   383,   384,     0,     0,
     420,     0,   385,   386,     0,   387,    17,   388,   389,     0,
     417,   390,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   396,   418,   415,   396,     0,     0,     0,     0,  1650,
       0,     0,     0,     0,     0,  -326,     0,     0,   864,     0,
       0,   421,     0,     0,     0,     0,  -205,   422,     0,   396,
     396,     0,     0,   396,     0,     0,     0,  -205,     0,   396,
       0,     0,  -205,     0,   419,     0,     0,     0,     0,     0,
       0,     0,   415,     0,     0,     0,     0,   396,   423,   675,
       0,     0,   420,     0,     0,   394,     0,     0,     0,  -205,
     396,   416,     0,     0,     0,     0,     0,     0,   422,   676,
     677,     0,   678,     0,  -205,     0,     0,   417,   424,     0,
       0,     0,     0,     0,   679,     0,  -205,     0,     0,   418,
       0,     0,     0,   421,     0,     0,     0,   416,     0,   423,
     383,   384,     0,     0,     0,  -343,   385,   386,   415,   387,
    -343,   388,   389,   417,     0,   390,     0,   680,     0,  -205,
       0,     0,   394,  -205,     0,   418,   681,     0,     0,   424,
       0,   419,     0,     0,     0,     0,     0,     0,     0,   394,
       0,   682,     0,     0,     0,     0,     0,  2194,   416,   420,
     422,   383,   384,     0,     0,  2205,     0,   385,   386,     0,
     387,    17,   388,   389,   417,     0,   390,   419,     0,    87,
       0,     0,     0,   630,     0,     0,   418,     0,     0,     0,
    -205,   423,     0,     0,     0,   420,   396,     0,   396,   394,
     421,     0,     0,     0,     0,     0,     0,   416,     0,     0,
       0,     0,     0,     0,     0,  -205,   396,     0,   683,     0,
       0,   424,     0,   417,     0,   684,     0,     0,   419,     0,
       0,     0,   396,     0,  -205,   418,   421,     0,   685,     0,
       0,     0,     0,   383,   384,     0,   420,   633,     0,   385,
     386,     0,   387,    17,   388,   389,     0,   422,   390,     0,
       0,     0,     0,     0, -1301, -1301, -1301,     0,     0,     0,
       0,     0, -1301,   416,     0,     0,     0,   419,     0,     0,
       0,     0,     0,  -343,     0,     0,   686,   421,   423,   417,
       0,     0,     0,   422,     0,   420,   635,     0,     0,     0,
     687,   418,     0,     0,  1407,     0,  -205,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   688,     0,   424,     0,
   -1365, -1365, -1365,     0,   423,     0,     0,   689, -1365,     0,
       0,     0,     0,     0,     0,     0,   421,  -317,  -317,  -317,
     383,   384,  -205,   419,   422, -1324,   385,   386,     0,   387,
      17,   388,   389,     0,   424,   390,     0,  -317,  -317,  -317,
       0,   420,     0,     0,   396,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   423,   383,   384,     0,     0,
       0,     0,   385,   386,     0,   387,    17,   388,   389,     0,
       0,   390,     0,   422,     0,     0,     0,     0,     0,     0,
       0,     0,   421,     0,     0,   424,     0, -1301, -1301,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   423,     0,     0,   383,   384,     0,
       0,   396,     0,   385,   386,     0,   387,    17,   388,   389,
   -1301,     0,   390,     0,     0,     0,     0,     0,   396,     0,
       0,     0,     0,     0,   424,     0,  2195,     0,     0,   422,
       0,     0,     0, -1365, -1365, -1301,     0,     0,     0,     0,
       0,     0,     0, -1301,     0,     0,   383,   384,     0,     0,
    -317,  -317,   385,   386,     0,   387,    17,   388,   389,     0,
     423,   390,     0,     0,     0,     0, -1365,     0,   396,     0,
    -317,  -317,     0, -1301,     0,     0,     0,     0, -1301,     0,
       0,     0,     0,  -317,     0,     0,     0,     0,     0, -1301,
     424, -1365,     0,     0,     0,     0,     0,     0,     0, -1365,
       0,     0,     0,  -317,     0,     0,     0,     0,   205,     0,
       0,     0,   383,   384,     0,     0,  -317,     0,   385,   386,
       0,   387,    17,   388,   389,     0,     0,   390,   205, -1365,
       0,     0,     0,     0, -1365,     0,  -317,     0,     0,     0,
       0,     0,     0,     0,     0, -1365,  -317,     0,     0,     0,
       0,  -317,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -1324,     0,     0,     0,  -317,     0,     0,     0,
       0,  -317,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1301, -1301,
   -1301, -1301, -1301, -1301,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1301, -1301, -1301,     0,
   -1301, -1301,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1365, -1365, -1365, -1365, -1365, -1365,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -317,  -317,  -317,  -317,  -317,  -317,     0,     0,     0,
       0,     0, -1365, -1365, -1365,     0, -1365, -1365,   211,     0,
     212,  -317,  -317,  -317,  -317,  -317,  -317,     0,     0,   792,
     793,   794,   213,   795,   796,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   792,
     793,   794,     0,   795,   796,     0,     0,     0,   214,     0,
       0,     0,   215,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,     0,     0,     0,     0,     0,   218,  1039,
       0,     0,     0,     0,  1040,     0,     0,     0,  1041,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     219,     0,     0,     0,     0,     0,     0,   220,     0,     0,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1042,     0,  1043,     0,     0,     0,
       0,     0,  1044,     0,   222,     0,     0,     0,   211,     0,
     212,     0,     0,   223,     0,   224,     0,     0,     0,     0,
       0,     0,   213,     0,     0,     0,     0,     0,     0,     0,
       0,  1045,     0,     0,     0,     0,     0,   225,     0,     0,
     226,   227,     0,     0,     0,     0,     0,     0,   214,   228,
       0,     0,   215,     0,     0,   229,     0,     0,   230,     0,
       0,   231,   216,     0,     0,     0,  1046,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,     0,     0,     0,     0,     0,   218,     0,
       0,     0,     0,   232,     0,     0,     0,   233,     0,   234,
    1047,  1048,   805,     0,     0,     0,     0,     0,     0,     0,
     219,     0,     0,     0,     0,     0,     0,   220,     0,   235,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,     0,     0,     0,     0,     0,     0,     0,
       0,  1049,     0,  1050,     0,     0,     0,   238,     0,     0,
    1051,   239,     0,     0,   222,     0,     0,     0,  1052,     0,
       0,   240,     0,   223,     0,   224,     0,     0,     0,     0,
    1053,     0,     0,     0,     0,   241,     0,     0,     0,   242,
       0,     0,     0,     0,     0,     0,     0,   225,   243,     0,
     226,   227,     0,     0,     0,     0,     0,     0,   244,   228,
       0,   245,     0,     0,   211,   229,   212,     0,   230,     0,
     246,   231,     0,     0,     0,   247,   248,   249,   213,     0,
       0,     0,     0,     0,     0,   250,     0,     0,   806,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     251,     0,   252,   232,   214,  1054,     0,   233,   215,   234,
     253,     0,     0,     0,     0,  1055,     0,     0,   216,   254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   235,
       0,     0,     0,     0,     0,     0,     0,     0,   217,     0,
       0,    87,   237,     0,   218,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   238,     0,     0,
    1056,   239,     0,     0,     0,     0,   219,     0,     0,     0,
       0,   240,     0,   220,     0,     0,   221,     0,     0,     0,
       0,     0,  1057,  1058,     0,   241,     0,     0,     0,   242,
       0,     0,     0,  1059,  1060,  1061,  1062,     0,   243,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   244,     0,
     222,   245,     0,     0,   211,     0,   212,     0,     0,   223,
     246,   224,     0,     0,     0,   247,   248,   249,   213,     0,
       0,     0,     0,     0,     0,   250,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,   226,   227,     0,     0,
     251,     0,   252,     0,   214,   228,     0,     0,   215,     0,
     253,   229,     0,     0,   230,     0,     0,   231,   216,   254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   217,     0,
       0,     0,     0,     0,   218,     0,     0,     0,     0,   232,
       0,     0,     0,   233,     0,   234,     0,     0,   805,     0,
       0,     0,     0,     0,     0,     0,   219,     0,     0,     0,
       0,     0,     0,   220,     0,   235,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   238,     0,     0,     0,   239,     0,     0,
     222,     0,     0,     0,     0,     0,     0,   240,     0,   223,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   241,     0,     0,     0,   242,     0,     0,     0,     0,
       0,     0,     0,   225,   243,     0,   226,   227,     0,     0,
       0,     0,     0,     0,   244,   228,     0,   245,     0,     0,
     211,   229,   212,     0,   230,     0,   246,   231,     0,     0,
       0,   247,   248,   249,   213,     0,     0,     0,     0,     0,
       0,   250,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   251,     0,   252,   232,
     214,     0,     0,   233,   215,   234,   253,     0,  1917,     0,
       0,     0,     0,     0,   216,   254,     0,     0,     0,     0,
     667,     0,   668,   669,   670,   235,     0,   671,     0,   672,
     673,     0,     0,     0,   217,     0,     0,     0,   237,     0,
     218,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   238,     0,   674,     0,   239,     0,     0,
       0,     0,   219,     0,     0,     0,     0,   240,     0,   220,
       0,     0,   221,     0,     0,     0,     0,     0,     0,     0,
       0,   241,     0,     0,     0,   242,     0,     0,     0,     0,
       0,     0,     0,     0,   243,     0,     0,     0,     0,     0,
       0,     0,     0,  -326,   244,     0,   222,   245,     0,     0,
       0,     0,     0,     0,     0,   223,   246,   224,     0,     0,
       0,   247,   248,   249,     0,     0,     0,     0,     0,     0,
       0,   250,     0,     0,     0,     0,     0,     0,     0,   225,
       0,     0,   226,   227,     0,     0,   251,   675,   252,     0,
       0,   228,     0,     0,     0,     0,   253,   229,     0,     0,
     230,     0,     0,   231,     0,   254,     0,   676,   677,     0,
     678,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   679,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   232,     0,     0,     0,   233,
       0,   234,     0,  -343,     0,     0,     0,     0,  -343,     0,
       0,     0,     0,     0,     0,   680,     0,     0,     0,     0,
       0,   235,     0,     0,   681,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,     0,     0,     0,     0,   682,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   238,
       0,     0,     0,   239,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   240,     0,     0,     0,     0,     0,     0,
       0,   630,     0,     0,     0,     0,     0,   241,     0,     0,
       0,   242,     0,     0,     0,     0,     0,     0,     0,     0,
     243,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     244,     0,     0,   245,     0,     0,   683,     0,     0,     0,
       0,     0,   246,   684,     0,     0,     0,   247,   248,   249,
       0,     0,     0,     0,     0,     0,   685,   250,     0,     0,
       0,     0,     0,     0,     0,   633,     0,     0,     0,     0,
       0,     0,   251,     0,   252,     0,     0,     0,     0,     0,
       0,     0,   253,     0,     0,     0,     0,     0,     0,     0,
       0,   254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -343,     0,     0,   686,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   635,     0,     0,     0,   687,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   688,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   689
};

static const yytype_int16 yycheck[] =
{
      10,   139,   103,   220,   223,   585,   151,   219,   124,   215,
     148,   415,   228,   713,   137,   789,   790,   140,  1412,   188,
     232,   449,   748,   229,   193,   225,    36,   239,   391,   241,
     230,  1135,   201,   245,   246,   217,  1332,    47,    36,   251,
     291,     9,   237,   249,   468,     9,    21,   410,  1615,    47,
     250,    90,   153,    66,   478,   453,   454,    27,  1625,   775,
     776,   199,   517,    16,   261,   210,    27,     9,    55,    11,
      12,    13,   712,    83,    66,   806,   407,   367,   108,   367,
     367,   108,    20,   860,    28,    83,    55,  1200,  1198,     6,
    1735,    42,  1775,    90,  1350,    42,   196,  1201,   162,   237,
    1394,   111,     0,     1,  1408,   166,    53,   170,   210,    20,
    1527,   256,   204,   111,    19,    66,   339,  1648,    55,    66,
     846,   154,   155,     8,   165,     9,    50,    62,    30,   248,
     159,   217,    27,    67,    42,   276,   247,  1241,   319,   108,
     204,   205,    27,     1,   196,   281,   210,   218,   107,    34,
     257,     0,     1,    97,    98,    25,  2023,   167,     6,   259,
     215,    29,    16,   209,   439,   196,   221,     1,   443,   179,
     281,    55,   182,   183,   229,   303,   172,   243,   276,   234,
     163,  1398,     9,   430,   194,   157,   243,   221,   222,   244,
     215,   819,   247,   431,   249,   183,   204,    95,    19,    24,
     117,   184,   210,   213,   250,   411,   270,   259,   174,   178,
     276,  1537,   222,   460,   123,   225,   116,   178,   214,    68,
     230,   270,   164,   461,    51,   123,   164,   237,   259,   374,
     858,   174,    86,     6,   453,   454,   104,    95,   180,     0,
     250,   139,   349,   113,   351,    82,   220,   164,   467,   204,
     192,   467,    64,   164,   241,   214,   327,  2124,  2125,   161,
     196,    95,   443,   207,   330,  1943,     9,   201,    11,   397,
     212,    14,    15,   330,   123,   375,   134,    11,    12,    13,
     475,   119,   270,   181,   109,   134,  1399,  1681,   172,   123,
     139,   332,   234,    66,   380,   193,    37,   178,   439,  1403,
     208,    64,   219,   404,   246,   139,   407,   443,   250,  1887,
     252,  1889,   250,   255,  1845,  1611,   164,   166,   716,   214,
     439,  1617,  1618,   259,   209,   276,   381,   262,   439,   276,
     430,   432,   181,   217,   236,   252,    11,    12,    13,   250,
     166,   146,   284,   260,   193,   262,   491,   449,   403,   404,
    1767,   293,   575,    96,   492,   493,   411,   449,   269,   193,
     460,   266,   299,   373,   308,   728,  2049,   791,  1662,  1146,
     321,   219,   770,   797,   321,  1679,   409,   226,   479,   443,
     443,   230,   443,  1493,   356,  1162,  1642,  2032,   398,   287,
     314,   212,   336,   422,   792,   793,   794,   795,   796,   391,
     449,   856,   207,   693,   252,   693,   693,   376,   350,   740,
     622,   623,   260,   443,   262,   402,   443,   414,   443,  1532,
     459,   374,   419,   384,   479,     6,   527,  1143,   529,   287,
     443,   401,   570,   443,   572,   401,   860,  1763,   287,   381,
    1171,   396,  1082,   381,  1084,   266,   219,   356,  1665,  1666,
    1667,   443,   426,   287,  2132,   593,   294,   198,   401,   376,
     515,   224,   517,   312,   381,   475,   303,   428,   443,   411,
     381,   283,   389,   409,   529,   443,   302,   276,   450,   443,
    1874,  1875,   331,   224,   456,    66,   458,   175,   430,     6,
     262,   433,   434,   262,  1790,   376,   183,   439,   440,  2066,
     442,   443,   444,   445,   342,     6,   448,   183,    24,  1235,
     152,   153,   255,   256,   183,   396,   433,   434,   460,   183,
     283,   255,   439,   440,    81,   442,   443,   444,   445,  1109,
    1110,   448,     9,   381,    11,    12,    13,   212,  2116,  2117,
     163,   450,    60,   725,   256,     8,   455,   456,  1831,    66,
     560,   770,  1835,  2060,   403,   167,   775,   776,   384,   364,
     181,   184,   560,   150,   305,  1669,    84,    85,   443,    35,
       6,    34,   193,   792,   793,   794,   795,   796,   237,   229,
     255,   832,    60,   765,  1688,   433,   434,  1691,    89,     6,
    1694,   439,   440,   109,   442,   443,   444,   445,   248,   211,
     448,   342,   183,   376,  1184,     6,    84,    85,     9,   246,
     431,   808,   433,   434,   435,   276,   437,   438,   224,   831,
    1394,   631,   632,   839,   345,  1729,    11,    12,    13,   401,
      66,   290,   288,  2140,   321,     6,    25,   834,   219,    79,
     461,   823,   743,   838,   443,   444,   445,   284,   304,    66,
       8,   302,   328,  1757,   116,   212,  1760,   123,   250,   328,
     433,   434,   374,   468,   328,   386,   439,   440,   784,   442,
     443,   444,   445,   478,   443,   448,    34,   291,   337,   734,
     229,   262,   103,  2190,  1088,   276,   868,   164,   743,   331,
    1088,   157,   172,   159,   212,    66,   250,   752,   214,   248,
     388,   307,   219,   180,   714,   715,   162,   116,    91,   764,
     765,   399,   298,   401,  1112,   192,  1416,  1145,   219,   102,
    2003,  2004,  1146,   935,   145,   331,   938,   167,  1444,   287,
     388,  1094,   153,   384,   212,   212,   216,   228,  1162,     6,
     885,   399,   178,   229,   275,   262,   277,   237,   204,   205,
     401,   439,   401,   101,   210,   443,   274,   234,   276,   290,
     346,   347,   248,   164,     6,   205,   247,  1165,   823,   276,
     250,   211,  1135,   250,   411,   252,     0,   426,   255,   180,
       4,   586,   250,   219,   443,   590,   276,   842,   298,   299,
     307,   192,   802,  2089,   400,   173,   274,   265,   276,    66,
     290,   856,   219,   334,   285,   383,   384,   862,   863,   276,
      97,   189,   116,   868,   270,   237,   293,   298,   219,   942,
     625,   237,   276,   173,    66,   630,   174,   212,   838,  1555,
     635,   636,   887,   234,   298,   299,   184,   938,  1201,   189,
     123,   433,   434,   435,   649,   437,   438,   337,   219,   134,
     655,   252,   433,   434,   276,   660,   139,   193,   439,   440,
     276,   442,   443,   444,   445,   250,   921,   448,   290,  1007,
     255,  1009,   159,   350,   290,   453,   454,   431,  1241,   433,
     434,   435,   687,   437,   438,   123,   334,   897,   334,   173,
     695,   262,   293,  1112,  1668,   435,   943,   437,   438,   897,
     947,   139,   396,  1098,   381,   189,   276,   461,   276,  2013,
     193,  2015,     6,  1095,   276,   337,   433,   434,   443,   444,
     445,   337,   439,   440,  1143,   442,   443,   444,   445,   152,
     153,   448,   433,   434,   411,   276,   307,    33,   439,   440,
      36,   442,   443,   444,   445,   276,  1165,   448,   276,   350,
     152,   153,   219,   430,   334,   193,   433,   434,   431,   432,
     433,   434,   439,   440,    42,   442,   443,   444,   445,   224,
     225,   448,   431,   334,   433,   434,   435,   219,   437,   438,
     381,   348,   334,   460,   401,   334,   791,   334,   461,   334,
    1394,     6,  1204,    53,  1398,   334,  1394,   433,   434,   276,
    1398,   276,   461,   439,   440,   300,   442,   443,   444,   445,
     411,   290,   448,   224,   225,     6,   433,   434,    22,    23,
     262,   338,   439,   440,  1140,   442,   443,   444,   445,   298,
     299,   448,   433,   434,  1150,     6,   276,  1092,   439,   440,
    1403,   442,   443,   444,   445,   439,   440,   448,   442,  2027,
    2028,  1449,   103,  1451,   276,   860,   432,   433,   434,  1256,
     276,   328,   433,   434,  1674,  1675,  1263,   276,   439,   440,
       6,   442,   443,   444,   445,  1130,   276,   448,  1088,  1929,
    1930,   154,   155,   276,   451,   452,   453,   454,  1098,   321,
     457,   797,   798,   276,   212,    66,   276,  1198,    89,   903,
    1312,   905,   906,   907,   908,   909,   564,   565,   566,   567,
     568,     6,   276,   918,   187,   276,   166,   922,    48,   924,
     439,   926,   927,   928,   295,   219,   212,   414,   415,   443,
      66,   418,   419,   420,   421,   422,  1336,  1337,   345,   276,
     427,   443,   429,   265,    22,   950,   366,   220,   953,   265,
     955,   956,  1321,   161,   959,     6,   443,   290,   376,   433,
     434,   435,  1217,   437,   438,   276,   433,   434,   334,   125,
     276,  1309,   439,   440,   276,   442,   443,   444,   445,   276,
     274,   448,   345,   276,   276,   276,    62,   212,   401,   344,
    1328,   433,   434,   212,    81,  1333,  1334,   439,   440,   174,
     442,   443,   444,   445,   219,   174,   448,  1345,   328,   376,
     259,   130,   391,   298,   401,    66,  1339,   250,    93,   365,
     262,    42,   376,   371,   375,  1444,  1364,   198,   219,   374,
    1449,  1376,  1451,   375,   178,   178,   143,   399,    66,   106,
     101,  1296,  1297,  2017,   298,   298,   214,     7,   219,  1350,
    1305,  1306,   401,   250,   148,  1437,    27,  1439,  1662,   290,
     341,  1665,  1666,  1667,  1662,   101,   212,  1665,  1666,  1667,
      66,   298,   341,   240,   356,   240,    54,  1489,    18,   400,
    1486,  1487,   376,   219,   327,    21,   439,   184,   276,   171,
     191,   103,   112,  1394,   124,   384,  1306,  1513,    27,  1515,
      97,   224,    90,   100,   262,   376,  1704,  1408,   289,   183,
    1426,  1412,   396,   209,  1496,    27,     6,    16,   401,  1329,
     435,   400,  1332,   339,   219,   170,  1336,  1337,  1691,  1445,
     122,  1694,   405,   406,   407,   408,   409,   410,  1348,   433,
     434,   311,   376,   138,   138,   439,   440,   198,   442,   443,
     444,   445,  1534,   150,   448,   208,  1366,    27,    42,    42,
     298,   401,    42,   178,    42,   208,  1729,  1512,   219,   262,
     352,   313,   211,   212,   276,   208,   215,   216,   217,   137,
     219,   220,   221,   209,  1394,   250,   276,   212,  1398,   212,
     229,   240,   276,   232,    18,   234,   443,  1760,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   214,
     249,   283,   251,   252,    81,   254,  1561,   259,   433,   434,
     299,     6,   411,   376,   439,   440,   447,   442,   443,   444,
     445,  1486,  1487,   448,   329,   374,  1537,   439,  2018,  2019,
     439,   439,   433,   434,   439,   212,    21,   411,   439,   440,
     224,   442,   443,   444,   445,   414,   212,   448,  1655,    54,
     253,   416,   433,   434,   261,   356,  1635,   417,   439,   440,
     214,   442,   443,   444,   445,   262,   376,   448,   309,   248,
    1285,    66,   309,   248,   248,  1704,   323,   212,   183,   374,
     400,   135,   262,   373,    87,   174,   214,   433,   434,   328,
     341,     8,  1557,   439,   440,   178,   442,   443,   444,   445,
    1722,    27,   448,   396,   142,   123,   118,  1723,  1573,  1620,
      62,   214,   426,   400,     9,   229,   224,   400,   214,   219,
     401,    27,  1749,   276,   443,   276,   375,  1682,   433,   434,
     337,  1747,   381,  1740,   439,   440,   276,   442,   443,   444,
     445,  1696,   391,   448,   214,  1700,   342,   342,   214,   458,
     357,   219,   204,  1573,   403,   404,   212,   210,   407,    21,
     374,   410,   411,   375,   340,   399,   253,   253,   417,  1695,
      40,   212,   433,   434,  1781,  1782,   345,   426,   439,   440,
     429,   442,   443,   444,   445,   250,   271,   448,  1743,   250,
     323,  1611,   430,   431,   323,   433,   434,  1617,  1618,     7,
    1620,   439,   440,   198,   442,   443,   444,   445,  1719,  1720,
     448,  1722,    40,   132,    16,   133,   372,   141,   373,   311,
     136,   123,   460,   461,   219,   397,     0,     1,   250,   196,
     479,   267,   144,   282,   401,   146,   107,   287,   365,   212,
     140,   137,  1662,   492,   493,  1665,  1666,  1667,  1796,   401,
     305,   258,   401,   353,  1719,  1720,   505,   401,  1723,   214,
     214,   219,   196,   401,   108,  1872,   515,    54,   517,   189,
     352,   250,    64,  1488,  1881,   262,   157,   321,   262,   528,
     529,  1829,  1747,   126,  1891,   262,  1893,  1913,   266,    42,
     266,   287,   376,   323,    68,   376,    42,    27,  1809,    19,
     345,   267,  1813,  1814,   287,  1520,   145,   266,   196,    90,
     196,  1918,   259,   220,   215,   214,   223,   262,   118,   229,
     229,  1943,   173,   276,   231,   345,   233,   225,    55,   262,
     172,   199,   188,   433,   434,   327,   345,   262,   253,   439,
     440,   248,   442,   443,   444,   445,   129,   154,   448,   123,
     271,   154,    95,   104,   123,   562,   196,   339,   147,  1914,
     134,   198,   247,  1874,  1875,   139,    27,    40,  1894,   262,
    1790,   262,   579,   622,   623,    27,   225,   198,   214,   287,
     447,   110,  1597,  1598,  1599,  1600,  1601,   594,    61,  1809,
     216,   112,   166,  1813,  1814,  1906,  1816,  1612,   157,    42,
     201,   443,   388,   443,    42,   274,   378,   181,   243,    27,
     262,  1922,    42,  1924,   198,   110,   173,  1632,   281,   193,
    1840,  1886,    95,  1888,   262,   374,   340,    41,    55,    42,
     637,    37,    54,   274,   247,   443,     4,  1652,   433,   434,
    1860,  1906,  1953,   262,   439,   440,   158,   442,   443,   444,
     445,  1999,   226,   448,   274,  2010,   230,  1922,   317,   325,
     709,    40,   119,    69,    70,    71,    72,    73,    74,    75,
     719,   720,   348,   722,   338,   130,   725,  1489,   125,   728,
    1991,   935,   594,  2056,  1294,   734,   693,  2137,   619,  1573,
     163,   740,  1785,    69,   743,   185,   183,   959,  1630,  2068,
     198,  2127,   638,   752,  1989,  2077,   112,  2114,  2115,   180,
    2132,   184,  2060,   287,  1319,   764,   765,  2065,  1976,  2146,
     943,  1975,  2149,  1325,   199,   432,   947,   196,   693,  1364,
     660,  1845,  2080,  1953,  2170,  2083,  2106,  2085,   312,   212,
    1992,   108,   215,   210,   813,  1474,  1897,  1188,   816,  1482,
     223,  1516,  1972,   851,  1914,  2110,  1915,   331,  1913,     4,
     467,  1141,  1695,  1697,  2171,   814,   413,  1245,   525,  1933,
    2197,  1991,  1992,    18,   823,  1931,   483,  1204,  2132,  1542,
     398,    26,   831,  1501,  1503,   829,  1255,  1777,   493,  2054,
     555,   197,  2140,   842,   537,     9,  1362,    11,    12,    13,
      27,   850,   492,  2151,  2152,  1192,    33,   856,  2156,    36,
    2158,  1229,    39,   862,   863,   864,    61,    62,   525,   868,
     527,  1748,  1837,  1838,  1839,   298,  1841,  1842,  1843,   403,
    2129,   520,   515,   540,   757,   426,   503,   378,   887,   312,
     375,   314,  2190,   429,   706,  1196,  1034,   809,   755,   415,
     782,  2162,  2002,     4,  1908,  1239,  2121,    84,   717,    86,
     784,  1894,  1453,  1150,    -1,  1163,   272,    18,    -1,  2089,
      -1,    -1,   921,  2138,    -1,    26,   282,  2188,    -1,    -1,
      -1,  2146,  2193,    -1,    50,    51,   935,  2198,    -1,   938,
      -1,    -1,  1907,    -1,    -1,    -1,   903,   904,   905,   906,
     907,   908,   909,    -1,    -1,    -1,  1921,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,   166,    -1,  2188,   397,    -1,    -1,    -1,     9,   156,
      11,    12,    13,  1948,   100,    38,    -1,    -1,    -1,    -1,
      -1,    -1,  2162,    -1,   110,    -1,    -1,   654,    -1,    -1,
     164,   958,    -1,   960,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,   190,   191,    -1,   180,    -1,  1983,    -1,
      -1,  1986,  1987,    -1,    -1,    -1,    -1,    -1,   192,    -1,
    1029,    -1,    -1,    -1,   229,  1034,    -1,    -1,    -1,   696,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,   212,    -1,
      -1,    -1,    -1,   710,   231,    -1,   233,    -1,    -1,   112,
      -1,    -1,    -1,   240,    -1,   166,    -1,    -1,    -1,    -1,
     234,    -1,    -1,   268,  1031,    -1,    -1,    -1,   273,    -1,
      -1,   276,   246,    -1,    -1,    -1,   250,    -1,   252,    -1,
      -1,   255,    -1,  1092,    -1,  1094,  1095,   430,    -1,    -1,
     433,   434,    -1,   298,   761,    -1,   439,   440,    -1,   442,
     443,   444,   445,   770,  2079,   448,    -1,    -1,   775,   776,
     284,   316,    -1,    -1,    -1,    -1,    -1,   460,   229,   293,
      -1,  1130,    -1,   164,    -1,   188,  1135,    -1,    -1,    -1,
      -1,   154,   155,    -1,    -1,    -1,    -1,    -1,    -1,   180,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   274,    -1,
     213,   192,   278,   279,    -1,   822,    -1,   268,   345,    -1,
      -1,   224,   273,    -1,   187,    -1,     9,    -1,    11,    12,
      13,   212,    -1,   840,    -1,    -1,   350,    -1,   845,    -1,
      -1,    -1,    -1,    -1,   247,    -1,   312,   298,    -1,   212,
      -1,   164,  1201,   234,    -1,  1204,    -1,   220,    -1,   325,
     326,    -1,    -1,    -1,    -1,   316,    -1,   381,  1217,   250,
      -1,   252,    -1,   276,   255,    -1,    -1,   280,    -1,   192,
      -1,    -1,    -1,    -1,    -1,   412,   413,   250,    -1,    -1,
    1239,  1240,  1241,    -1,    -1,  1244,    -1,   411,  1247,   426,
      -1,  1250,    -1,    -1,    -1,  1254,    -1,    -1,    -1,    -1,
      -1,    -1,   293,   920,    -1,    -1,   430,    -1,    -1,   433,
     434,   234,    -1,    -1,    -1,   439,   440,    -1,   442,   443,
     444,   445,    -1,    -1,   448,    -1,    -1,    -1,    -1,   252,
      -1,   344,    -1,    -1,    -1,   348,   460,  1296,  1297,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1305,  1306,    -1,    -1,
     363,  1268,    -1,  1312,    -1,    -1,    -1,    -1,    -1,   350,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   985,   382,
     293,   164,    -1,    -1,  1333,    -1,    -1,    -1,    -1,  1338,
     393,    -1,    -1,    -1,   397,    -1,    -1,   180,    -1,    -1,
     381,    -1,    -1,   212,    -1,  1012,   215,    -1,   217,   192,
      -1,    -1,   221,    -1,  1321,  1022,  1023,  1024,    -1,    -1,
     229,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,   212,
     411,    -1,   345,  1340,    -1,   244,    -1,   350,   247,    -1,
     249,    -1,   405,   406,   407,   408,   409,   410,    -1,   430,
      -1,   234,   433,   434,  1403,    -1,  1063,    -1,   439,   440,
      -1,   442,   443,   444,   445,    -1,    -1,   448,   381,   252,
      -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,   460,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1437,    -1,
    1439,    -1,  1099,    -1,    -1,    -1,    -1,    -1,   411,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     293,     9,    -1,    11,    12,    13,    -1,    -1,  1467,    -1,
     433,   434,    -1,    38,    -1,    -1,   439,   440,    -1,   442,
     443,   444,   445,    -1,    -1,   448,  1143,  1486,  1487,    -1,
    1489,    -1,    -1,    -1,    -1,    -1,    -1,  1496,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   350,    -1,    -1,
      -1,    -1,   381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   391,    -1,    -1,  1534,    -1,    -1,  1537,  1196,
      -1,  1198,    -1,  1542,   403,   404,    -1,   112,   381,    -1,
      -1,   410,   411,    -1,    -1,    -1,    -1,    -1,  1557,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1573,  1232,    -1,    -1,   411,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   430,    -1,    -1,
     433,   434,    -1,    -1,    -1,    -1,   439,   440,    -1,   442,
     443,   444,   445,    -1,    -1,   448,   164,    -1,    -1,    -1,
     479,    -1,    -1,   188,    -1,    -1,    -1,   460,    -1,    -1,
      -1,  1630,   180,    -1,    -1,    -1,  1293,  1294,    -1,    -1,
      -1,    -1,    -1,    -1,   192,    -1,    -1,  1304,   213,    -1,
      -1,    -1,   212,    -1,    -1,   215,   515,   217,   517,   224,
      -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   229,
     529,    -1,    -1,    -1,   234,    -1,    -1,  1676,    -1,    -1,
      -1,    -1,   247,    -1,   244,    -1,   234,   247,    -1,   249,
      -1,    -1,  1691,  1350,    -1,  1694,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   252,    -1,    -1,   255,    -1,    -1,
    1367,    -1,    -1,    -1,    -1,   280,    -1,    -1,    -1,    -1,
    1719,  1720,  1721,  1722,  1723,    -1,    -1,    -1,     9,  1386,
    1729,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   293,    27,    -1,  1747,    -1,
      -1,  1408,    -1,    -1,    -1,  1412,  1755,    -1,    -1,    -1,
      -1,  1760,    -1,    -1,  1763,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1776,    -1,   344,
      -1,    -1,    -1,   348,    -1,    66,    -1,  1444,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   363,    -1,
      -1,    -1,   350,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,   382,    -1,    -1,
      -1,   381,  1479,  1480,    -1,    -1,    -1,    -1,   393,    -1,
      -1,   391,   397,   381,    -1,    -1,  1493,    -1,    -1,    -1,
      -1,    -1,    -1,   403,   404,    -1,  1503,  1504,    -1,    -1,
     410,   411,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   411,    -1,    -1,   725,    -1,    -1,   728,
      -1,    -1,    -1,    -1,    -1,   734,    -1,    -1,  1877,  1536,
      -1,    -1,   430,   164,   743,   433,   434,  1886,    -1,  1888,
      -1,   439,   440,   752,   442,   443,   444,   445,    -1,   180,
     448,    -1,    -1,    -1,    -1,   764,   765,  1906,    -1,    -1,
      -1,   192,   460,    -1,    -1,    -1,    -1,    -1,    -1,   479,
      -1,    -1,    -1,  1922,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1936,    -1,    -1,
    1939,    -1,  1941,    -1,  1943,    -1,    -1,   154,   155,    -1,
      -1,    -1,    -1,   234,    -1,   515,    -1,   517,    -1,    -1,
      -1,    -1,    -1,    -1,   823,    -1,    -1,    -1,    -1,   529,
      -1,   252,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     187,    -1,    -1,   842,    -1,  1642,  1643,    -1,    -1,    -1,
      -1,  1990,    -1,  1650,    -1,    -1,    -1,   856,    -1,    -1,
      -1,  1658,    -1,   862,   863,   212,    -1,    -1,    -1,   868,
      -1,    -1,   293,   220,    -1,    -1,    -1,  1674,  1675,    -1,
      -1,    -1,  1679,    -1,  1681,    -1,     9,    -1,   887,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   250,    -1,  2044,    -1,  1704,   255,    -1,
      -1,    -1,    -1,    -1,    -1,  2054,    -1,    -1,  1715,   266,
      -1,  2060,   921,    -1,    -1,    -1,    -1,    -1,    -1,   350,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1749,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     381,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,
     391,    -1,    69,    70,    71,    72,    73,    74,    75,    -1,
      -1,    -1,  2121,    -1,    -1,    -1,    -1,    -1,    -1,   112,
     411,    -1,    -1,  2132,  1791,  1792,  1793,  1794,  1795,  2138,
      -1,  2140,    -1,  2142,    -1,    -1,    -1,  2146,    -1,    -1,
      -1,    -1,   433,   434,  1811,   112,    -1,    -1,   439,   440,
      -1,   442,    -1,   444,   445,   725,  1823,   448,   728,    -1,
      -1,    -1,    -1,    -1,   734,    -1,    -1,    -1,    -1,    -1,
      -1,   164,    -1,   743,    -1,    -1,     9,    -1,    -1,  2188,
      -1,  2190,   752,    -1,    -1,    -1,    -1,   180,   405,   406,
     407,   408,   409,   410,   764,   765,    -1,    -1,    -1,   192,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1874,  1875,    -1,
      -1,   204,   205,    -1,    -1,    -1,   433,   434,   435,    -1,
     437,   438,    -1,  1092,    -1,  1094,  1095,    -1,    -1,    -1,
     197,    -1,    -1,    66,    -1,    -1,  1903,  1904,    -1,    -1,
      -1,   234,    -1,  1910,    -1,   212,   213,    -1,    -1,    -1,
     217,    -1,    -1,   823,    -1,    -1,    -1,  1924,  1925,   252,
      -1,  1130,    -1,    -1,    -1,    -1,  1135,    -1,    -1,    -1,
      -1,    -1,   842,   106,    -1,    -1,    -1,   270,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   856,    -1,    -1,    -1,
      -1,   258,   862,   863,    -1,    -1,    -1,    -1,   868,    -1,
     293,   294,     3,    -1,     5,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   280,    -1,   282,    17,   887,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1996,
      -1,   164,  1201,    -1,   301,    -1,     9,    -1,    -1,  2006,
      -1,    -1,    43,   310,    -1,    -1,    47,   180,  1217,    -1,
      -1,   921,    -1,    -1,    -1,    -1,    57,   350,    -1,   192,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,  1241,   366,  2041,    -1,    77,   344,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,   381,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,   364,    -1,    -1,
      -1,   234,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,   380,   115,    -1,    -1,    -1,   411,   252,
      -1,    -1,   123,    -1,    -1,    -1,   393,  1296,  1297,    -1,
     397,    -1,    -1,    -1,    -1,    -1,  1305,  1306,    -1,  2106,
     433,   434,    -1,    -1,  2111,  2112,   439,   440,   149,   442,
     443,   444,   445,    -1,    -1,   448,  2123,   158,    -1,   160,
     293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2146,
      -1,   182,  2149,    -1,   185,   186,    -1,    -1,    -1,    -1,
      -1,   164,    -1,   194,    -1,    -1,  2163,    -1,    -1,   200,
      -1,    -1,   203,    42,    -1,   206,    -1,   180,    -1,    -1,
     183,    -1,    -1,    -1,    -1,    -1,    -1,   350,    -1,   192,
      -1,    -1,  1092,    -1,  1094,  1095,  2193,    -1,    -1,    -1,
    2197,  2198,    -1,    -1,  1403,    -1,    -1,   238,    -1,    -1,
      -1,   242,    -1,   244,    -1,    -1,    -1,    -1,   381,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1130,   234,    -1,   264,    -1,  1135,    -1,    -1,  1437,    -1,
    1439,    -1,    -1,    -1,    -1,   276,   277,    -1,   411,   252,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,
      -1,   292,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
     433,   434,    -1,    -1,    -1,   306,   439,   440,    -1,   442,
     443,   444,   445,    -1,    -1,   448,    -1,  1486,  1487,   320,
     293,    -1,    -1,   324,    -1,   164,    -1,  1496,    -1,    -1,
      -1,  1201,   333,    -1,    -1,    -1,    -1,    -1,     3,    -1,
       5,   180,   343,    -1,    -1,   346,    -1,  1217,    -1,    -1,
      -1,    -1,    17,   192,   355,    -1,    -1,    -1,    -1,   360,
     361,   362,    -1,    -1,    -1,  1534,    -1,    -1,    -1,   370,
      -1,  1241,     9,    -1,    -1,    -1,    -1,   350,    43,    -1,
      -1,    -1,    47,    -1,   385,    -1,   387,    -1,  1557,    -1,
      -1,    -1,    57,    -1,   395,   234,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   404,  1573,    -1,    -1,    -1,   381,    -1,
      -1,    -1,    77,   252,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,   261,    -1,    -1,    -1,  1296,  1297,    -1,    66,
      -1,    -1,    -1,    -1,    -1,  1305,  1306,    -1,   411,    -1,
     105,    -1,   443,    -1,    -1,    -1,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,    -1,
     433,   434,    -1,    -1,    -1,    -1,   439,   440,    -1,   442,
     443,   444,   445,    -1,    -1,   448,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   158,    -1,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   350,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,
     185,   186,  1691,    -1,    -1,  1694,    -1,   164,    -1,   194,
      -1,    -1,    -1,  1403,    -1,   200,    -1,    -1,   203,    -1,
      -1,   206,   381,   180,    -1,    -1,    -1,    -1,    -1,    -1,
    1719,  1720,    -1,    -1,  1723,   192,    -1,     9,    -1,    -1,
    1729,    -1,    -1,    -1,    -1,    -1,    -1,  1437,    -1,  1439,
      -1,    -1,   411,   238,    -1,    -1,    -1,   242,  1747,   244,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1760,    -1,    -1,   433,   434,    -1,   234,    -1,   264,
     439,   440,    -1,   442,   443,   444,   445,    -1,    -1,   448,
      -1,   276,   277,    -1,    -1,   252,  1486,  1487,    -1,    -1,
      -1,    -1,    -1,    -1,   261,    -1,  1496,   292,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,    -1,    89,    -1,     9,
      -1,   306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   320,   293,    -1,    -1,   324,
      -1,   164,    -1,    -1,  1534,    -1,    -1,    -1,   333,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,
      -1,   346,    -1,    -1,    -1,    -1,    -1,  1557,    -1,   192,
     355,    -1,    -1,    -1,    -1,   360,   361,   362,    -1,    -1,
      -1,    -1,    -1,  1573,    -1,   370,    -1,    -1,    -1,    -1,
      -1,    -1,   164,   350,    -1,    -1,    -1,  1886,    -1,  1888,
     385,    -1,   387,     0,     1,    -1,    -1,    -1,   180,    -1,
     395,   234,    -1,    -1,    -1,    -1,     9,  1906,    -1,   404,
     192,    -1,    -1,    -1,   381,    -1,    -1,    -1,    -1,   252,
      -1,    -1,    29,  1922,    31,    32,    33,    -1,    -1,    36,
      -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,   411,    -1,    -1,    -1,   443,    -1,
      -1,    -1,   234,    -1,    -1,    -1,    -1,    64,    -1,    -1,
     293,    68,    -1,    66,   164,    -1,   433,   434,    -1,    -1,
     252,    -1,   439,   440,    -1,   442,   443,   444,   445,    -1,
     180,   448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1691,   192,     9,  1694,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   208,    -1,
      -1,   293,    -1,    -1,    -1,    -1,   123,   350,    -1,  1719,
    1720,    -1,    -1,  1723,    -1,    -1,    -1,   134,    -1,  1729,
      -1,    -1,   139,    -1,   234,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,  1747,   381,   156,
      -1,    -1,   252,    -1,    -1,  2054,    -1,    -1,    -1,   166,
    1760,   164,    -1,    -1,    -1,    -1,    -1,    -1,   350,   176,
     177,    -1,   179,    -1,   181,    -1,    -1,   180,   411,    -1,
      -1,    -1,    -1,    -1,   191,    -1,   193,    -1,    -1,   192,
      -1,    -1,    -1,   293,    -1,    -1,    -1,   164,    -1,   381,
     433,   434,    -1,    -1,    -1,   212,   439,   440,     9,   442,
     217,   444,   445,   180,    -1,   448,    -1,   224,    -1,   226,
      -1,    -1,  2121,   230,    -1,   192,   233,    -1,    -1,   411,
      -1,   234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2138,
      -1,   248,    -1,    -1,    -1,    -1,    -1,  2146,   164,   252,
     350,   433,   434,    -1,    -1,   171,    -1,   439,   440,    -1,
     442,   443,   444,   445,   180,    -1,   448,   234,    -1,   276,
      -1,    -1,    -1,   280,    -1,    -1,   192,    -1,    -1,    -1,
     287,   381,    -1,    -1,    -1,   252,  1886,    -1,  1888,  2188,
     293,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   312,  1906,    -1,   315,    -1,
      -1,   411,    -1,   180,    -1,   322,    -1,    -1,   234,    -1,
      -1,    -1,  1922,    -1,   331,   192,   293,    -1,   335,    -1,
      -1,    -1,    -1,   433,   434,    -1,   252,   344,    -1,   439,
     440,    -1,   442,   443,   444,   445,    -1,   350,   448,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    19,   164,    -1,    -1,    -1,   234,    -1,    -1,
      -1,    -1,    -1,   380,    -1,    -1,   383,   293,   381,   180,
      -1,    -1,    -1,   350,    -1,   252,   393,    -1,    -1,    -1,
     397,   192,    -1,    -1,   261,    -1,   403,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   413,    -1,   411,    -1,
      11,    12,    13,    -1,   381,    -1,    -1,   424,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    11,    12,    13,
     433,   434,   439,   234,   350,    19,   439,   440,    -1,   442,
     443,   444,   445,    -1,   411,   448,    -1,    11,    12,    13,
      -1,   252,    -1,    -1,  2054,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   381,   433,   434,    -1,    -1,
      -1,    -1,   439,   440,    -1,   442,   443,   444,   445,    -1,
      -1,   448,    -1,   350,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   293,    -1,    -1,   411,    -1,   154,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   381,    -1,    -1,   433,   434,    -1,
      -1,  2121,    -1,   439,   440,    -1,   442,   443,   444,   445,
     187,    -1,   448,    -1,    -1,    -1,    -1,    -1,  2138,    -1,
      -1,    -1,    -1,    -1,   411,    -1,  2146,    -1,    -1,   350,
      -1,    -1,    -1,   154,   155,   212,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,    -1,    -1,   433,   434,    -1,    -1,
     154,   155,   439,   440,    -1,   442,   443,   444,   445,    -1,
     381,   448,    -1,    -1,    -1,    -1,   187,    -1,  2188,    -1,
     154,   155,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,   266,
     411,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,   212,    -1,
      -1,    -1,   433,   434,    -1,    -1,   220,    -1,   439,   440,
      -1,   442,   443,   444,   445,    -1,    -1,   448,   212,   250,
      -1,    -1,    -1,    -1,   255,    -1,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   266,   250,    -1,    -1,    -1,
      -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   266,    -1,    -1,    -1,   250,    -1,    -1,    -1,
      -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   405,   406,
     407,   408,   409,   410,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   433,   434,   435,    -1,
     437,   438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   405,   406,   407,   408,   409,   410,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   405,   406,   407,   408,   409,   410,    -1,    -1,    -1,
      -1,    -1,   433,   434,   435,    -1,   437,   438,     3,    -1,
       5,   405,   406,   407,   408,   409,   410,    -1,    -1,   433,
     434,   435,    17,   437,   438,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,
     434,   435,    -1,   437,   438,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    92,    -1,   149,    -1,    -1,    -1,     3,    -1,
       5,    -1,    -1,   158,    -1,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,
     185,   186,    -1,    -1,    -1,    -1,    -1,    -1,    43,   194,
      -1,    -1,    47,    -1,    -1,   200,    -1,    -1,   203,    -1,
      -1,   206,    57,    -1,    -1,    -1,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,   238,    -1,    -1,    -1,   242,    -1,   244,
     190,   191,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,   264,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,    -1,   233,    -1,    -1,    -1,   292,    -1,    -1,
     240,   296,    -1,    -1,   149,    -1,    -1,    -1,   248,    -1,
      -1,   306,    -1,   158,    -1,   160,    -1,    -1,    -1,    -1,
     260,    -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,   333,    -1,
     185,   186,    -1,    -1,    -1,    -1,    -1,    -1,   343,   194,
      -1,   346,    -1,    -1,     3,   200,     5,    -1,   203,    -1,
     355,   206,    -1,    -1,    -1,   360,   361,   362,    17,    -1,
      -1,    -1,    -1,    -1,    -1,   370,    -1,    -1,   373,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385,    -1,   387,   238,    43,   335,    -1,   242,    47,   244,
     395,    -1,    -1,    -1,    -1,   345,    -1,    -1,    57,   404,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      -1,   276,   277,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
     390,   296,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,   306,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,   412,   413,    -1,   320,    -1,    -1,    -1,   324,
      -1,    -1,    -1,   423,   424,   425,   426,    -1,   333,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,
     149,   346,    -1,    -1,     3,    -1,     5,    -1,    -1,   158,
     355,   160,    -1,    -1,    -1,   360,   361,   362,    17,    -1,
      -1,    -1,    -1,    -1,    -1,   370,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   182,    -1,    -1,   185,   186,    -1,    -1,
     385,    -1,   387,    -1,    43,   194,    -1,    -1,    47,    -1,
     395,   200,    -1,    -1,   203,    -1,    -1,   206,    57,   404,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,   242,    -1,   244,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,   264,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   277,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,   296,    -1,    -1,
     149,    -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,   158,
      -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   320,    -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   182,   333,    -1,   185,   186,    -1,    -1,
      -1,    -1,    -1,    -1,   343,   194,    -1,   346,    -1,    -1,
       3,   200,     5,    -1,   203,    -1,   355,   206,    -1,    -1,
      -1,   360,   361,   362,    17,    -1,    -1,    -1,    -1,    -1,
      -1,   370,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   385,    -1,   387,   238,
      43,    -1,    -1,   242,    47,   244,   395,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    57,   404,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,   264,    -1,    36,    -1,    38,
      39,    -1,    -1,    -1,    77,    -1,    -1,    -1,   277,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    64,    -1,   296,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,    -1,   306,    -1,   112,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   320,    -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   343,    -1,   149,   346,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,   355,   160,    -1,    -1,
      -1,   360,   361,   362,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   370,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,
      -1,    -1,   185,   186,    -1,    -1,   385,   156,   387,    -1,
      -1,   194,    -1,    -1,    -1,    -1,   395,   200,    -1,    -1,
     203,    -1,    -1,   206,    -1,   404,    -1,   176,   177,    -1,
     179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,   242,
      -1,   244,    -1,   212,    -1,    -1,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,
      -1,   264,    -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,   248,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   306,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   280,    -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,
      -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     333,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     343,    -1,    -1,   346,    -1,    -1,   315,    -1,    -1,    -1,
      -1,    -1,   355,   322,    -1,    -1,    -1,   360,   361,   362,
      -1,    -1,    -1,    -1,    -1,    -1,   335,   370,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,
      -1,    -1,   385,    -1,   387,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   380,    -1,    -1,   383,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   393,    -1,    -1,    -1,   397,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   413,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   424
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   181,   193,   463,   464,   465,   466,   469,   473,   475,
     276,   116,     0,   465,   150,   492,   492,   443,   476,  1053,
     276,   116,     1,    95,   575,   575,    25,   474,   291,   276,
     116,   287,   740,   740,   228,   276,   276,    79,   205,   493,
     494,   495,   496,   514,   515,   276,   116,   134,   470,   467,
     471,   475,   476,   334,   334,   495,   167,   211,   516,   528,
       1,    68,   166,   226,   230,   312,   331,   403,   576,   577,
     578,   579,   655,   658,   659,   661,   681,   692,   396,   741,
     742,   476,   123,   139,   467,   472,   492,   276,   574,   276,
     276,   276,   276,   276,   334,   334,   334,   334,   334,   334,
     334,   578,    42,   745,   746,   747,   748,   276,    53,   743,
     276,   290,   476,   575,   300,   477,   257,   349,   351,   497,
     498,   499,   501,   510,   338,   529,   530,   243,   330,   517,
     518,   519,   520,   524,   276,   276,   276,   574,   276,   276,
     574,   303,   397,    66,   746,  1051,   345,   386,   749,   750,
     103,   753,   754,   745,   321,   744,   476,   276,   740,   276,
     212,   478,   276,   276,   276,   498,   250,   531,  1021,  1022,
     530,   166,   298,   346,   347,   521,   522,   276,   519,    48,
     662,   663,   165,   332,   580,   581,   582,   439,   614,   615,
     616,   617,   660,   614,   295,   693,   694,   695,   617,   682,
     683,   614,   656,   657,   746,   212,   626,   345,   617,   752,
     574,     3,     5,    17,    43,    47,    57,    77,    83,   105,
     112,   115,   149,   158,   160,   182,   185,   186,   194,   200,
     203,   206,   238,   242,   244,   264,   276,   277,   292,   296,
     306,   320,   324,   333,   343,   346,   355,   360,   361,   362,
     370,   385,   387,   395,   404,   443,   755,   756,   757,   758,
     760,   762,   763,   764,   772,   786,   801,   804,   806,   818,
     820,   821,   822,   824,   826,   827,   828,   832,   847,   853,
     866,   877,   880,   884,   886,   899,   901,   912,   916,   917,
     929,   930,   946,   955,   959,   965,   966,   970,   980,   983,
     985,   992,  1014,  1015,  1027,  1032,  1034,  1036,  1038,  1044,
    1045,  1046,   443,   276,   471,    67,   201,   479,    28,    97,
      98,   207,   308,   336,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   237,   290,   337,   443,   502,   503,   504,
     505,   506,   508,   509,   443,    91,   102,   511,   512,   513,
    1053,   265,   366,    22,  1053,   663,   583,  1053,   583,   582,
     615,   170,   443,   618,   589,  1053,   695,   618,   683,    29,
     104,   626,   265,   751,   755,   999,  1000,  1001,  1052,  1053,
       6,    89,   219,   433,   434,   439,   440,   442,   444,   445,
     448,  1029,  1030,  1047,  1048,  1049,  1050,  1052,   881,   882,
     893,  1053,   290,   480,  1028,  1047,   908,   913,   914,  1052,
    1029,   166,   829,   830,   908,     9,   164,   180,   192,   234,
     252,   293,   350,   381,   411,   967,   971,   972,   973,   981,
     982,  1001,  1017,  1048,  1050,  1052,  1061,  1062,  1063,  1064,
    1065,  1066,  1047,   802,  1053,    11,    12,    13,   164,   250,
     255,   381,   430,   433,   434,   460,   626,   816,  1052,  1061,
    1067,  1073,  1078,  1079,  1080,  1081,  1082,  1094,  1096,   275,
     277,   290,   334,   589,   376,  1092,  1061,  1067,  1096,  1028,
     589,  1061,   908,    89,  1061,  1047,   161,   902,   175,   401,
     617,   887,   888,   891,   892,   893,   894,   895,  1052,  1053,
    1052,   908,  1052,   908,  1052,     9,   788,   789,   794,  1052,
     164,   252,   260,   262,   381,   960,   961,   963,   964,  1047,
     908,   908,   329,   900,  1047,   848,   849,  1017,    89,  1028,
     589,   908,  1052,   174,   184,   868,   872,  1052,   276,   756,
     334,   574,   763,   247,   285,   298,   918,   919,     8,    34,
     209,   898,   933,   934,   935,   937,   938,   125,  1026,   123,
     139,   468,   480,   276,   276,   276,   276,   276,   276,   483,
     345,    62,   212,   574,   276,   504,   276,   505,   401,   500,
     344,   212,   513,     4,    18,    26,    61,    62,   166,   229,
     268,   273,   298,   316,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   549,
     553,   554,   555,   557,   560,   564,   565,   566,   569,   570,
     571,   573,    81,   174,   174,   574,    38,   212,   213,   258,
     280,   301,   310,   344,   364,   393,   397,   619,   620,   621,
     622,   624,   625,   627,   630,   631,   633,   634,   635,   636,
     639,   652,   653,   654,    60,    84,    85,   274,   626,   696,
     697,   698,   699,   700,   701,   703,   704,    29,    31,    32,
      33,    36,    38,    39,    64,   156,   176,   177,   179,   191,
     224,   233,   248,   315,   322,   335,   383,   397,   413,   424,
     625,   631,   635,   684,   685,   687,   690,  1053,   123,   262,
    1000,  1009,  1052,    27,   401,  1002,  1003,  1004,    27,   178,
     384,   428,   993,   995,   196,   259,  1054,  1056,  1057,   196,
     259,  1047,   259,  1049,  1049,   376,  1016,  1030,  1051,   328,
     882,   376,  1047,  1047,  1051,   302,   384,   401,   915,   914,
    1051,   328,  1020,  1028,   130,   831,   831,   298,   956,  1064,
    1066,  1052,   391,   968,   972,   401,   974,   975,   976,   982,
    1052,  1051,  1061,   995,    42,   208,   803,  1053,  1078,  1049,
    1094,  1096,  1049,  1096,  1021,    16,   374,   808,   809,    19,
     266,  1068,  1069,  1070,  1071,   246,   284,   411,  1083,  1061,
    1067,  1096,   433,   434,   435,   437,   438,   626,  1079,    93,
     885,   878,   879,   893,  1053,   247,   373,   761,   762,   986,
     987,   990,   401,   765,   365,   773,   774,   775,   262,   947,
     948,  1061,   376,    42,   162,   204,   205,   210,   270,   903,
     904,   905,   371,   375,   762,   889,   894,   887,   374,   388,
     399,   375,   178,   823,   956,   178,   931,  1052,   143,   787,
     399,   790,   961,   117,   376,   389,   962,   964,   947,   172,
     214,  1039,   183,   321,   208,   849,   106,  1052,   178,   298,
     299,   825,   106,   854,   101,     8,    34,   931,   759,  1061,
     298,   298,   401,   920,   921,   214,     7,   939,   148,   932,
     250,   936,   932,    27,   942,   943,   944,   290,   476,   574,
     443,   444,   445,   490,   491,   490,   490,   490,   490,   490,
     617,   341,   617,   276,   101,   574,   212,    66,   240,   298,
    1092,   626,   341,   356,   240,   626,    54,   107,   214,   248,
     547,   617,   533,   574,   571,   525,   526,   908,   523,   908,
     270,   449,   664,   665,   666,   667,   672,   678,   679,    40,
      61,    95,   215,   223,   298,   312,   314,   397,   585,   586,
     587,   588,   590,   591,   596,   600,   601,   602,   604,   605,
     608,   626,   400,   163,   184,   327,   439,   640,   641,   626,
    1053,  1053,   218,   327,   626,   626,   574,   621,    37,    69,
      70,    71,    72,    73,    74,    75,   112,   197,   272,   282,
     632,   626,  1061,   626,    21,   221,   222,   705,   184,   276,
     698,   171,   725,   224,   307,   331,   400,   152,   153,   331,
     191,   626,   178,   376,   396,   691,   112,   574,   685,   626,
    1061,   103,   159,   422,  1011,   124,   994,    27,  1007,    29,
      34,    38,    84,    86,    92,   121,   156,   190,   191,   231,
     233,   240,   248,   260,   335,   345,   390,   412,   413,   423,
     424,   425,   426,  1005,  1006,  1004,   224,   996,    97,   159,
     414,   415,   418,   419,   420,   421,   422,   427,   429,   998,
    1052,  1061,    90,   994,  1009,  1053,  1053,  1055,  1094,  1057,
    1052,  1052,   376,  1052,  1029,   183,  1030,   289,   883,   396,
     833,  1047,   174,   401,   174,   401,   229,   248,   914,   154,
     155,   409,  1090,   933,  1047,   401,   969,    27,    33,    36,
      39,    84,    86,   156,   190,   191,   231,   233,   240,   345,
     978,  1006,   976,  1061,  1047,  1029,  1047,  1096,   816,   816,
     400,   810,   811,    16,  1070,   250,  1021,  1072,  1073,  1074,
    1075,  1076,   431,   461,  1095,  1095,  1095,  1096,  1096,  1096,
    1096,  1096,   250,  1079,  1081,  1084,  1081,   108,  1053,   339,
     990,   122,   988,   989,  1022,   170,     9,    11,    14,    15,
      96,   255,   256,   766,   770,  1052,   311,   780,   781,   782,
     775,    24,   109,    62,   948,   951,   376,   984,  1018,  1019,
    1061,  1029,  1047,   904,   906,   907,   908,   898,   138,   138,
     890,   893,  1067,   896,   897,  1061,  1047,   208,   957,  1061,
     933,    27,   791,  1052,   791,    42,    42,   964,   401,   950,
     298,   626,  1043,  1084,   401,  1042,  1047,  1047,  1052,    42,
     178,  1029,  1047,    42,   208,   859,   262,   867,   352,   873,
     313,   276,   229,   248,   208,   922,   762,   274,   376,   940,
    1047,  1052,   209,   137,   250,   945,   476,   276,   491,   574,
     574,   574,   574,   574,   574,   574,    55,   241,   402,   507,
     212,   240,   443,   276,   626,   214,   112,   204,   205,   270,
     294,   366,   550,   551,  1061,  1047,   626,   212,   626,    37,
     198,   224,   305,   342,   626,   626,   626,    18,   526,   283,
     527,   908,  1051,   157,   356,   450,   456,   458,   673,   674,
     675,   614,   666,   667,   204,   210,   667,   679,    81,   626,
     298,   299,   299,   626,    81,   212,   626,   626,   259,   574,
     587,   574,   163,   184,   411,   376,   606,   447,   374,   623,
     628,   629,  1061,   439,   439,   439,   439,   217,   380,   637,
     212,    21,   617,   617,   710,   711,   712,   702,  1061,   411,
    1061,  1061,  1061,  1012,  1052,   574,  1012,   224,   414,   152,
     153,   212,    33,    36,    54,  1061,   253,   356,   416,   417,
     214,   994,   994,  1053,  1058,  1059,  1060,  1064,  1094,  1047,
     262,  1023,  1024,  1029,   376,   893,    42,   261,   836,   837,
     838,   839,   840,   841,  1061,   262,   843,   844,   845,   309,
     248,   309,   248,   323,  1092,  1092,  1096,   248,    64,   224,
     283,   979,   152,   153,   212,   977,  1047,   183,  1023,   183,
      20,   164,   381,   812,  1021,   400,   811,   817,   816,  1084,
    1076,  1084,   187,   220,   405,   406,   407,   408,   410,  1085,
    1086,  1087,  1088,  1089,  1090,  1091,  1096,   262,   990,   135,
     991,   373,   767,  1092,   174,     9,    55,   172,   217,   776,
      87,   783,   784,   785,   782,   214,   949,   949,   341,   396,
     805,   984,  1019,  1051,  1020,  1023,   183,   907,   401,   426,
     909,   910,   911,     8,   178,  1047,    27,   924,   925,   926,
     142,   819,   123,   400,   795,   400,   792,   793,   118,   951,
     214,   172,   216,  1061,   426,   933,   401,   851,   345,   850,
    1052,  1062,  1052,  1023,   183,     9,   858,   860,   861,  1052,
     851,     9,   870,   871,  1052,    35,   123,   157,   159,   874,
     875,  1052,   229,  1052,   214,   923,   924,   224,   224,   225,
     941,   214,   763,    27,   276,   574,   443,   276,   276,   119,
     294,   342,   558,   626,   552,  1061,   552,  1047,  1047,    30,
     161,   236,   561,   342,   342,  1061,   353,   556,  1047,   567,
    1047,  1053,    22,    23,   548,   617,   908,   214,   214,   458,
     219,    90,   459,   675,   574,   123,   356,   450,   455,   456,
     668,   669,   670,   669,   680,   617,  1053,   212,    21,    21,
     568,  1053,   592,   617,  1052,   617,   399,   589,   589,   215,
     597,   598,   599,  1052,   584,   614,   574,   617,   375,   642,
    1053,   629,  1051,   374,   340,   638,   941,   711,   713,  1053,
      66,  1061,   253,   686,   688,   762,  1013,   253,   717,    40,
     212,  1061,  1051,  1059,  1095,   432,   433,   434,  1060,  1020,
     345,   250,  1025,  1023,    82,   303,   183,   834,   837,  1051,
     841,  1051,   271,  1009,   250,   846,   323,   323,  1021,     7,
      40,  1029,   132,  1035,  1029,    16,   813,   814,   815,   816,
     269,   133,   807,  1077,  1094,  1096,  1096,   372,  1093,  1093,
    1052,   311,   373,   771,   397,   776,  1061,  1061,   785,  1028,
    1028,   626,   523,   183,   270,   954,  1019,   136,  1033,  1029,
     229,   248,   911,   897,  1061,   123,   141,   958,   250,   927,
     762,   800,  1067,  1067,   793,   196,   204,   396,   952,   626,
     401,  1041,   267,   144,  1040,   282,   843,  1020,   146,  1031,
    1029,  1061,   861,  1051,   107,   862,   365,   864,   288,   304,
     871,   166,   302,   384,   869,   287,   212,   933,   140,   928,
    1047,   762,   137,   305,   559,   567,   401,   401,   401,   572,
     409,   626,   626,   626,   626,   626,   258,   214,   214,   348,
     451,   452,   453,   454,   457,    90,   414,   419,   219,   568,
     671,   626,   606,   568,   568,   352,  1051,  1053,   401,   593,
     606,   196,   598,   626,   108,   643,   629,  1061,    54,   189,
     706,    64,   112,   188,   213,   224,   247,   280,   344,   348,
     363,   382,   393,   397,   654,   714,   715,   716,   720,   722,
     726,   727,   728,   729,   730,   731,   732,   733,   739,  1061,
     626,   250,  1010,  1061,    64,   997,  1059,  1060,  1060,  1060,
    1095,  1023,   157,   262,   840,   840,  1052,   321,   835,   837,
     841,   762,   126,   842,   262,  1023,   307,  1023,   307,  1023,
     812,   762,   815,   762,  1096,   266,   266,   768,   769,   770,
     376,   724,  1061,    42,   376,  1052,  1028,   287,  1023,   323,
      42,   761,    27,    19,   797,   798,   799,   247,   762,   796,
     267,   287,  1028,   954,  1017,   345,  1052,   145,   852,  1023,
    1023,   266,   855,   856,   857,   861,   196,    90,   863,   196,
     843,   259,   215,   867,  1052,   928,   262,   763,   214,   572,
     229,   229,   118,   568,  1061,  1061,  1061,  1061,  1061,   617,
    1061,    55,   299,   603,   276,  1053,   173,   225,   594,    55,
     345,  1061,   262,    24,   109,   644,   645,   646,   647,   648,
     617,   172,   707,   717,   199,   327,   717,   188,   626,   626,
     626,   568,   734,   735,   626,   626,   626,   276,   715,   281,
     689,  1053,   262,    64,   283,  1008,   253,   763,   345,  1052,
     271,   129,  1037,  1047,  1035,  1047,  1035,  1074,   154,   154,
     769,    95,   104,   777,   778,   779,   898,  1061,  1061,   626,
    1033,  1061,   123,   800,   796,   799,   339,   626,  1061,  1031,
    1031,   858,   857,  1052,   196,  1052,   147,   865,  1052,   287,
     876,   905,   908,   247,   626,   262,   262,   198,   676,   677,
      27,    27,   225,   595,   108,   178,   607,   609,   610,   611,
     612,   613,  1053,   198,   649,   650,   651,   677,   646,   214,
     110,   216,   708,   626,   626,   626,   447,   637,  1052,   391,
     736,   319,   735,   737,   738,    50,    51,    84,   100,   110,
     274,   278,   279,   312,   325,   326,   723,   112,  1061,   617,
    1011,   717,   717,  1061,   157,   762,  1023,  1023,  1095,  1092,
    1092,    42,   779,   201,   777,   777,   443,   388,   761,   443,
    1061,  1052,   867,   274,  1047,   243,   562,   562,    42,   592,
     378,    27,   262,   617,   606,   611,    42,   198,   651,   626,
     617,   110,   173,   709,   617,   281,   718,   247,   281,   617,
     721,   340,   568,   262,   173,   189,   173,   189,   173,   189,
     724,   762,  1061,  1061,   763,  1035,  1035,  1047,  1061,   374,
     953,  1067,   953,   876,   298,   299,   563,   563,  1028,   592,
      41,  1052,    55,  1017,  1048,  1050,  1052,    42,  1017,   617,
     617,   617,   274,   617,    54,   171,  1061,   725,   443,   592,
     262,   719,   247,   274
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 568 "token.y"
    { 
        dbg_print(DBG_PARSER, ".... Reached the start node .....\n"); 
        (yyval.object) = cons_project((yyvsp[(1) - (1)].object));
    ;}
    break;

  case 3:
#line 574 "token.y"
    { 
        dbg_print(DBG_PARSER, ".... Reached nested prog list .....\n"); 
        (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].object));
    ;}
    break;

  case 4:
#line 578 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].object));
    ;}
    break;

  case 5:
#line 583 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 6:
#line 584 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 7:
#line 592 "token.y"
    { 
        dbg_print(DBG_PARSER, ".... Reached program definition .....\n"); 
        (yyval.object) = cons_program_definition((yyvsp[(1) - (6)].object), (yyvsp[(2) - (6)].cobobject), (yyvsp[(3) - (6)].object), (yyvsp[(4) - (6)].object), (yyvsp[(5) - (6)].object));
    ;}
    break;

  case 8:
#line 603 "token.y"
    { 
        dbg_print(DBG_PARSER, ".... Reached program mandatory .....\n"); 
        (yyval.object) = cons_program_definition((yyvsp[(1) - (6)].object), (yyvsp[(2) - (6)].cobobject), (yyvsp[(3) - (6)].object), (yyvsp[(4) - (6)].object), (yyvsp[(5) - (6)].object));
    ;}
    break;

  case 11:
#line 617 "token.y"
    { 
        dbg_print(DBG_PARSER, ".... Reached function definition .....\n"); 
        (yyval.object) = cons_function_definition((yyvsp[(1) - (5)].object), (yyvsp[(2) - (5)].cobobject), (yyvsp[(3) - (5)].object), (yyvsp[(4) - (5)].object));
    ;}
    break;

  case 13:
#line 626 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 14:
#line 627 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].object)); ;}
    break;

  case 15:
#line 628 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object));
    ;}
    break;

  case 19:
#line 637 "token.y"
    {
        (yyval.object) = cons_function_division((yyvsp[(3) - (5)].sval));
    ;}
    break;

  case 22:
#line 653 "token.y"
    {
/*    | error { dbg_print(DBG_PARSER, "Error in identification division"); } */
        (yyval.object) = cons_identification_division((yyvsp[(6) - (10)].sval), (yyvsp[(9) - (10)].ival), (yyvsp[(10) - (10)].object));
    ;}
    break;

  case 23:
#line 660 "token.y"
    {  
        (yyval.sval) = (yyvsp[(1) - (1)].sval);
    ;}
    break;

  case 26:
#line 669 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 27:
#line 670 "token.y"
    { (yyval.ival) = (yyvsp[(2) - (4)].ival); ;}
    break;

  case 28:
#line 673 "token.y"
    { (yyval.ival) = CB_COMMON; ;}
    break;

  case 29:
#line 674 "token.y"
    { (yyval.ival) = CB_INITIAL; ;}
    break;

  case 32:
#line 679 "token.y"
    {
        (yyval.object) = NULL;
    ;}
    break;

  case 33:
#line 682 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 34:
#line 685 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].idoption)); ;}
    break;

  case 35:
#line 686 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].idoption));
    ;}
    break;

  case 36:
#line 691 "token.y"
    { (yyval.idoption) = (yyvsp[(1) - (1)].idoption); ;}
    break;

  case 37:
#line 692 "token.y"
    { (yyval.idoption) = (yyvsp[(1) - (1)].idoption); ;}
    break;

  case 38:
#line 693 "token.y"
    { (yyval.idoption) = (yyvsp[(1) - (1)].idoption); ;}
    break;

  case 39:
#line 694 "token.y"
    { (yyval.idoption) = (yyvsp[(1) - (1)].idoption); ;}
    break;

  case 40:
#line 695 "token.y"
    { (yyval.idoption) = (yyvsp[(1) - (1)].idoption); ;}
    break;

  case 41:
#line 696 "token.y"
    { (yyval.idoption) = (yyvsp[(1) - (1)].idoption); ;}
    break;

  case 42:
#line 699 "token.y"
    { 
        (yyval.idoption) = cons_id_option(CB_IDD_AUTHOR, (yyvsp[(3) - (4)].sval));
    ;}
    break;

  case 43:
#line 704 "token.y"
    { 
        (yyval.idoption) = cons_id_option(CB_IDD_INSTALL, (yyvsp[(3) - (4)].sval));
    ;}
    break;

  case 44:
#line 709 "token.y"
    { 
        (yyval.idoption) = cons_id_option(CB_IDD_DATEWRI, (yyvsp[(3) - (4)].sval));
    ;}
    break;

  case 45:
#line 714 "token.y"
    { 
        (yyval.idoption) = cons_id_option(CB_IDD_DATECOM, (yyvsp[(3) - (4)].sval));
    ;}
    break;

  case 46:
#line 719 "token.y"
    { 
        (yyval.idoption) = cons_id_option(CB_IDD_SECURITY, (yyvsp[(3) - (4)].sval));
    ;}
    break;

  case 47:
#line 724 "token.y"
    { 
        (yyval.idoption) = cons_id_option(CB_IDD_REMARKS, (yyvsp[(3) - (4)].sval));
    ;}
    break;

  case 48:
#line 729 "token.y"
    {
        /* printf("the text line is %s\n", $1); */
        (yyval.sval) = start_buffer((yyvsp[(1) - (2)].sval));
        ;}
    break;

  case 49:
#line 733 "token.y"
    {
        /* printf("the text line in two %s\n", $2); */
        (yyval.sval) = append_buffer((yyvsp[(2) - (3)].sval));
        ;}
    break;

  case 50:
#line 739 "token.y"
    {    
        (yyval.sval) = (yyvsp[(1) - (1)].sval);
        dbg_print(DBG_PARSER, "literal : %s\n", (yyvsp[(1) - (1)].sval));
        ;}
    break;

  case 51:
#line 743 "token.y"
    {
        (yyval.sval) = (yyvsp[(1) - (1)].sval);
        dbg_print(DBG_PARSER, "literal : %s\n", (yyvsp[(1) - (1)].sval)); 
        ;}
    break;

  case 52:
#line 747 "token.y"
    {
        (yyval.sval) = (yyvsp[(1) - (1)].sval);    
        ;}
    break;

  case 53:
#line 756 "token.y"
    { (yyval.cobobject) = NULL; ;}
    break;

  case 54:
#line 758 "token.y"
    {
 /*   | error { dbg_print(DBG_PARSER, "Error in ENVIRONMENT DIVISION"); } */
        (yyval.cobobject) = cons_environment_division((yyvsp[(4) - (4)].cobobject));
    ;}
    break;

  case 55:
#line 764 "token.y"
    { (yyval.cobobject) = NULL; ;}
    break;

  case 56:
#line 765 "token.y"
    {
        (yyval.cobobject) = (yyvsp[(1) - (1)].cobobject);
    ;}
    break;

  case 57:
#line 770 "token.y"
    { (yyval.cobobject) = start_generic_list((void *) (yyvsp[(1) - (1)].cobobject)); ;}
    break;

  case 58:
#line 771 "token.y"
    {
        (yyval.cobobject) = addto_generic_list((yyvsp[(1) - (2)].cobobject), (yyvsp[(2) - (2)].cobobject));
    ;}
    break;

  case 59:
#line 776 "token.y"
    { (yyval.cobobject) = (yyvsp[(1) - (1)].cobobject); ;}
    break;

  case 60:
#line 777 "token.y"
    { (yyval.cobobject) = (yyvsp[(1) - (1)].cobobject); ;}
    break;

  case 61:
#line 785 "token.y"
    { 
        (yyval.cobobject) = cons_configuration_section((yyvsp[(4) - (4)].object)); 
    ;}
    break;

  case 62:
#line 790 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].cfgsecopt)); ;}
    break;

  case 63:
#line 791 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].cfgsecopt));
    ;}
    break;

  case 64:
#line 796 "token.y"
    {
        (yyval.cfgsecopt) = cons_config_sec_option(CB_CONFIG_SEC_SOURCE, (yyvsp[(1) - (1)].intchrpair), NULL, NULL);
    ;}
    break;

  case 65:
#line 799 "token.y"
    {
        (yyval.cfgsecopt) = cons_config_sec_option(CB_CONFIG_SEC_OBJECT, NULL, (yyvsp[(1) - (1)].objectcompclauses), NULL);
    ;}
    break;

  case 66:
#line 802 "token.y"
    {
        (yyval.cfgsecopt) = cons_config_sec_option(CB_CONFIG_SEC_SPNAMES, NULL, NULL, (yyvsp[(1) - (1)].object));
    ;}
    break;

  case 67:
#line 808 "token.y"
    {
        (yyval.intchrpair) = cons_intchar_pair((yyvsp[(3) - (5)].sval), (yyvsp[(4) - (5)].ival));
    ;}
    break;

  case 68:
#line 813 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 69:
#line 814 "token.y"
    {
        (yyval.ival) = 1;
    ;}
    break;

  case 70:
#line 820 "token.y"
    { (yyval.objectcompclauses) = (yyvsp[(3) - (4)].objectcompclauses); ;}
    break;

  case 71:
#line 823 "token.y"
    {
        (yyval.objectcompclauses) = cons_object_computer_clauses((yyvsp[(1) - (2)].sval), NULL); 
    ;}
    break;

  case 72:
#line 826 "token.y"
    {
        (yyval.objectcompclauses) = cons_object_computer_clauses((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].object));
    ;}
    break;

  case 73:
#line 829 "token.y"
    {
        (yyval.objectcompclauses) = cons_object_computer_clauses(NULL, (yyvsp[(1) - (2)].object));
    ;}
    break;

  case 74:
#line 834 "token.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 75:
#line 837 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].objcompcl)); ;}
    break;

  case 76:
#line 838 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].objcompcl));
    ;}
    break;

  case 77:
#line 843 "token.y"
    {
        /* int pair */
        (yyval.objcompcl) = cons_obj_comp_clause(CB_OBJCOMP_MEM, (yyvsp[(1) - (1)].intpair), NULL, 0); 
    ;}
    break;

  case 78:
#line 847 "token.y"
    {
        /* char */
        (yyval.objcompcl) = cons_obj_comp_clause(CB_OBJCOMP_SEQ, NULL, (yyvsp[(1) - (1)].sval), 0);
    ;}
    break;

  case 79:
#line 851 "token.y"
    {
        /* int */
        (yyval.objcompcl) = cons_obj_comp_clause(CB_OBJCOMP_SEG, NULL, NULL, (yyvsp[(1) - (1)].ival));
    ;}
    break;

  case 80:
#line 857 "token.y"
    { (yyval.intpair) = cons_intpair((yyvsp[(3) - (4)].ival), (yyvsp[(4) - (4)].ival)); ;}
    break;

  case 81:
#line 860 "token.y"
    { (yyval.ival) = CB_MEM_WORDS; ;}
    break;

  case 82:
#line 861 "token.y"
    { (yyval.ival) = CB_MEM_CHARS; ;}
    break;

  case 83:
#line 862 "token.y"
    { (yyval.ival) = CB_MEM_MODULE; ;}
    break;

  case 84:
#line 865 "token.y"
    { (yyval.sval) = (yyvsp[(5) - (5)].sval); ;}
    break;

  case 85:
#line 868 "token.y"
    { (yyval.ival) = (yyvsp[(3) - (3)].ival); ;}
    break;

  case 86:
#line 872 "token.y"
    { (yyval.object) = (yyvsp[(3) - (3)].object); ;}
    break;

  case 87:
#line 875 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 88:
#line 876 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 89:
#line 879 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].spnames)); ;}
    break;

  case 90:
#line 880 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].spnames));
    ;}
    break;

  case 91:
#line 885 "token.y"
    {
        (yyval.spnames) = cons_special_names(CB_SN_CURRENCY, (yyvsp[(4) - (5)].sval));
    ;}
    break;

  case 92:
#line 888 "token.y"
    {
        (yyval.spnames) = cons_special_names(CB_SN_DECIMALPT, NULL);
    ;}
    break;

  case 93:
#line 903 "token.y"
    {
        (yyval.cobobject) = cons_input_output_section((yyvsp[(2) - (2)].object), NULL);
    ;}
    break;

  case 94:
#line 906 "token.y"
    {
        (yyval.cobobject) = cons_input_output_section(NULL, (yyvsp[(2) - (2)].object));
    ;}
    break;

  case 97:
#line 921 "token.y"
    { 
        (yyval.object) = cons_io_control((yyvsp[(3) - (3)].object)); 
    ;}
    break;

  case 98:
#line 926 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 99:
#line 927 "token.y"
    { (yyval.object) = (yyvsp[(1) - (2)].object); ;}
    break;

  case 100:
#line 930 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].iocontrolitem)); ;}
    break;

  case 101:
#line 931 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].iocontrolitem));
    ;}
    break;

  case 102:
#line 937 "token.y"
    {
        /* this is struct _same_clause ptr */
        (yyval.iocontrolitem) = cons_io_control_item(CB_IOCONTROL_SAME, (yyvsp[(1) - (1)].sameclause), NULL);
    ;}
    break;

  case 103:
#line 941 "token.y"
    {
        (yyval.iocontrolitem) = cons_io_control_item(CB_IOCONTROL_MULTI, NULL, (yyvsp[(1) - (1)].object)); 
    ;}
    break;

  case 104:
#line 946 "token.y"
    { 
        (yyval.sameclause) = cons_same_clause( (yyvsp[(2) - (5)].ival), (yyvsp[(5) - (5)].object) );
    ;}
    break;

  case 105:
#line 951 "token.y"
    { (yyval.ival) = CB_SAME_ABSENT; ;}
    break;

  case 106:
#line 952 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 107:
#line 955 "token.y"
    { (yyval.ival) = CB_SAME_RECORD; ;}
    break;

  case 108:
#line 956 "token.y"
    { (yyval.ival) = CB_SAME_SORT; ;}
    break;

  case 109:
#line 957 "token.y"
    { (yyval.ival) = CB_SAME_SORT_MERGE; ;}
    break;

  case 110:
#line 960 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].idValWithOpt)); ;}
    break;

  case 111:
#line 961 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].idValWithOpt));
    ;}
    break;

  case 112:
#line 964 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (yyvsp[(3) - (3)].idValWithOpt));
    ;}
    break;

  case 113:
#line 969 "token.y"
    {
        (yyval.object) = (yyvsp[(5) - (5)].object);
    ;}
    break;

  case 114:
#line 974 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].intidpair)); ;}
    break;

  case 115:
#line 975 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].intidpair));
    ;}
    break;

  case 116:
#line 980 "token.y"
    {
        (yyval.intidpair) = cons_int_id_pair((yyvsp[(2) - (2)].ival), (yyvsp[(1) - (2)].idValWithOpt));
    ;}
    break;

  case 117:
#line 985 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 118:
#line 986 "token.y"
    { (yyval.ival) = (yyvsp[(2) - (2)].ival); ;}
    break;

  case 119:
#line 993 "token.y"
    { 
        (yyval.object) = cons_file_control((yyvsp[(3) - (3)].object)); 
    ;}
    break;

  case 120:
#line 999 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].filecontrolexpr)); ;}
    break;

  case 121:
#line 1000 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].filecontrolexpr));
    ;}
    break;

  case 122:
#line 1011 "token.y"
    {
        (yyval.filecontrolexpr) = cons_file_control_expression((yyvsp[(2) - (5)].ival), (yyvsp[(3) - (5)].sval), (yyvsp[(4) - (5)].object));
    ;}
    break;

  case 123:
#line 1016 "token.y"
    {   /* 
        dbg_print(DBG_TRACE, "setting flag 0 \n");
        setFCIOptFlag(0); 
        dbg_print(DBG_TRACE, "setting flag 0 done\n");
        */
        (yyval.ival) = CB_OPT_NOTDEFINED;
    ;}
    break;

  case 124:
#line 1023 "token.y"
    { 
        if((yyvsp[(1) - (2)].ival) == 0) {
            (yyval.ival) = CB_OPT_OPTIONAL;
            /* setFCIOptFlag(1); */
        }
        else { 
            (yyval.ival) = CB_OPT_NOTOPTIONAL;
            /* setFCIOptFlag(2); */
        }
    ;}
    break;

  case 125:
#line 1036 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].filecontrolclause)); ;}
    break;

  case 126:
#line 1037 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].filecontrolclause));
    ;}
    break;

  case 127:
#line 1043 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_gnamepair(CB_FCC_ASSIGN, (yyvsp[(1) - (1)].gnamepairint));
    ;}
    break;

  case 128:
#line 1046 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_int(CB_FCC_RESERVE, (yyvsp[(1) - (1)].ival));
    ;}
    break;

  case 129:
#line 1049 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_int(CB_FCC_ORG, (yyvsp[(1) - (1)].ival));
    ;}
    break;

  case 130:
#line 1052 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_val(CB_FCC_PADDING, (yyvsp[(1) - (1)].varVal));
    ;}
    break;

  case 131:
#line 1055 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_xval(CB_FCC_DELIM, (yyvsp[(1) - (1)].xvaldatatype));
    ;}
    break;

  case 132:
#line 1058 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_int_xval(CB_FCC_ACCESS, (yyvsp[(1) - (1)].intxval));
    ;}
    break;

  case 133:
#line 1061 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_int(CB_FCC_LOCK, (yyvsp[(1) - (1)].ival));
    ;}
    break;

  case 134:
#line 1064 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_xval(CB_FCC_CODESET, (yyvsp[(1) - (1)].xvaldatatype));
    ;}
    break;

  case 135:
#line 1067 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_xval(CB_FCC_COLLATING, (yyvsp[(1) - (1)].xvaldatatype));
    ;}
    break;

  case 136:
#line 1070 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_reckey(CB_FCC_RECKEY, (yyvsp[(1) - (1)].reckeyclause));
    ;}
    break;

  case 137:
#line 1073 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_key(CB_FCC_KEYCLAUSE, (yyvsp[(1) - (1)].object));
    ;}
    break;

  case 138:
#line 1076 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_xval(CB_FCC_FILESTATUE, (yyvsp[(1) - (1)].xvaldatatype));
    ;}
    break;

  case 139:
#line 1087 "token.y"
    { (yyval.gnamepairint) = (yyvsp[(1) - (1)].gnamepairint); ;}
    break;

  case 140:
#line 1090 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 141:
#line 1093 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 142:
#line 1096 "token.y"
    { (yyval.varVal) = (yyvsp[(1) - (1)].varVal); ;}
    break;

  case 143:
#line 1099 "token.y"
    { (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype); ;}
    break;

  case 144:
#line 1102 "token.y"
    { (yyval.intxval) = (yyvsp[(1) - (1)].intxval); ;}
    break;

  case 145:
#line 1105 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 146:
#line 1108 "token.y"
    { (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype); ;}
    break;

  case 147:
#line 1111 "token.y"
    { (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype); ;}
    break;

  case 148:
#line 1114 "token.y"
    { (yyval.reckeyclause) = (yyvsp[(1) - (1)].reckeyclause); ;}
    break;

  case 149:
#line 1117 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 150:
#line 1120 "token.y"
    { (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype); ;}
    break;

  case 151:
#line 1124 "token.y"
    {
        (yyval.ival) = (yyvsp[(2) - (4)].ival);
    ;}
    break;

  case 152:
#line 1129 "token.y"
    { (yyval.ival) = -1;;}
    break;

  case 153:
#line 1130 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 156:
#line 1140 "token.y"
    { /* many more options to handle */
        (yyval.gnamepairint) = (yyvsp[(3) - (3)].gnamepairint);
    ;}
    break;

  case 157:
#line 1145 "token.y"
    {
        (yyval.gnamepairint) = cons_file_assignment_clause((yyvsp[(1) - (2)].varVal), (yyvsp[(2) - (2)].varVal), 0);
    ;}
    break;

  case 158:
#line 1148 "token.y"
    {
        (yyval.gnamepairint) = cons_file_assignment_clause(NULL, (yyvsp[(2) - (2)].varVal), (yyvsp[(1) - (2)].ival));
    ;}
    break;

  case 159:
#line 1167 "token.y"
    { (yyval.ival) = CB_DISPLAY; ;}
    break;

  case 160:
#line 1168 "token.y"
    { (yyval.ival) = CB_INPUT; ;}
    break;

  case 161:
#line 1169 "token.y"
    { (yyval.ival) = CB_OUTPUT; ;}
    break;

  case 162:
#line 1170 "token.y"
    { (yyval.ival) = CB_INPUT_OUTPUT; ;}
    break;

  case 163:
#line 1171 "token.y"
    { (yyval.ival) = CB_RANDOM; ;}
    break;

  case 164:
#line 1172 "token.y"
    { (yyval.ival) = CB_TAPE; ;}
    break;

  case 165:
#line 1175 "token.y"
    { (yyval.varVal) = NULL; ;}
    break;

  case 166:
#line 1176 "token.y"
    {
        (yyval.varVal) = (yyvsp[(1) - (1)].varVal);
    ;}
    break;

  case 167:
#line 1181 "token.y"
    { (yyval.ival) = CB_FL_LINE_SEQUENTIAL; ;}
    break;

  case 168:
#line 1182 "token.y"
    { (yyval.ival) = CB_FL_SEQUENTIAL; ;}
    break;

  case 169:
#line 1183 "token.y"
    { (yyval.ival) = CB_FL_BIN_SEQUENTIAL; ;}
    break;

  case 170:
#line 1184 "token.y"
    { (yyval.ival) = CB_FL_RELATIVE; ;}
    break;

  case 171:
#line 1185 "token.y"
    { (yyval.ival) = CB_FL_INDEXED; ;}
    break;

  case 172:
#line 1188 "token.y"
    { /* literal or identifter */
        (yyval.varVal) = (yyvsp[(4) - (4)].varVal);
    ;}
    break;

  case 173:
#line 1193 "token.y"
    { (yyval.xvaldatatype) = (yyvsp[(4) - (4)].xvaldatatype); ;}
    break;

  case 174:
#line 1196 "token.y"
    { (yyval.xvaldatatype) = NULL; ;}
    break;

  case 175:
#line 1198 "token.y"
    { /* this is delimiter_name could be string literal or identifier */
        (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype);
    ;}
    break;

  case 176:
#line 1203 "token.y"
    {
        (yyval.intxval) = cons_accessmode_clause((yyvsp[(4) - (5)].ival), (yyvsp[(5) - (5)].xvaldatatype));
    ;}
    break;

  case 177:
#line 1208 "token.y"
    { (yyval.ival) = CB_FM_SEQUENTIAL; ;}
    break;

  case 178:
#line 1209 "token.y"
    { (yyval.ival) = CB_FM_RANDOM; ;}
    break;

  case 179:
#line 1210 "token.y"
    { (yyval.ival) = CB_FM_DYNAMIC; ;}
    break;

  case 180:
#line 1213 "token.y"
    { (yyval.xvaldatatype) = NULL; ;}
    break;

  case 181:
#line 1214 "token.y"
    { /* data name: identifier or literal */
        (yyval.xvaldatatype) = (yyvsp[(4) - (4)].xvaldatatype); 
    ;}
    break;

  case 182:
#line 1219 "token.y"
    { (yyval.ival) = (yyvsp[(4) - (4)].ival); ;}
    break;

  case 183:
#line 1222 "token.y"
    { (yyval.ival) = CB_LM_MAN_ON_MUL_REC; ;}
    break;

  case 184:
#line 1223 "token.y"
    { (yyval.ival) = CB_LM_AUT_ON_MUL_REC; ;}
    break;

  case 185:
#line 1224 "token.y"
    { (yyval.ival) = CB_LM_EXCLUSIVE; ;}
    break;

  case 190:
#line 1234 "token.y"
    { /* alphabet name as per rmss */
        (yyval.xvaldatatype) = (yyvsp[(3) - (3)].xvaldatatype);
    ;}
    break;

  case 191:
#line 1239 "token.y"
    { /* alphabet name as per rmss */
        (yyval.xvaldatatype) = (yyvsp[(4) - (4)].xvaldatatype);
    ;}
    break;

  case 192:
#line 1245 "token.y"
    {
        (yyval.reckeyclause) = mod_record_key_clause((yyvsp[(4) - (5)].reckeyclause), (yyvsp[(5) - (5)].ival));
    ;}
    break;

  case 193:
#line 1250 "token.y"
    { (yyval.reckeyclause) = cons_record_key_clause( (yyvsp[(1) - (1)].xvaldatatype), NULL, NULL); ;}
    break;

  case 194:
#line 1251 "token.y"
    {
        (yyval.reckeyclause) = cons_record_key_clause( NULL, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].itemList));
    ;}
    break;

  case 195:
#line 1256 "token.y"
    { (yyval.itemList) = start_generic_list((void *) (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 196:
#line 1257 "token.y"
    {
        (yyval.itemList) = addto_generic_list((yyvsp[(1) - (2)].itemList), (yyvsp[(2) - (2)].sval));
    ;}
    break;

  case 197:
#line 1260 "token.y"
    {
        (yyval.itemList) = addto_generic_list((yyvsp[(1) - (3)].itemList), (yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 198:
#line 1265 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 199:
#line 1268 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].reckeyclause)); ;}
    break;

  case 200:
#line 1269 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].reckeyclause));
    ;}
    break;

  case 201:
#line 1275 "token.y"
    {
        (yyval.reckeyclause) = mod_record_key_clause((yyvsp[(5) - (6)].reckeyclause), (yyvsp[(6) - (6)].ival));
    ;}
    break;

  case 202:
#line 1280 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 203:
#line 1281 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 204:
#line 1284 "token.y"
    {
        (yyval.xvaldatatype) = (yyvsp[(4) - (4)].xvaldatatype);
    ;}
    break;

  case 207:
#line 1296 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 208:
#line 1299 "token.y"
    {
        (yyval.object) = cons_data_division((yyvsp[(4) - (4)].object));
    ;}
    break;

  case 209:
#line 1302 "token.y"
    { printf("Error in Data Division...\n"); 
        (yyval.object) = NULL;
    ;}
    break;

  case 210:
#line 1307 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 211:
#line 1309 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 212:
#line 1312 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].object)); ;}
    break;

  case 213:
#line 1313 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].object));
    ;}
    break;

  case 214:
#line 1318 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 215:
#line 1319 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 216:
#line 1320 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 217:
#line 1321 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 218:
#line 1322 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 219:
#line 1323 "token.y"
    { (yyval.object) = NULL;;}
    break;

  case 220:
#line 1324 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 221:
#line 1331 "token.y"
    {
        (yyval.object) = cons_file_section((yyvsp[(4) - (4)].object));
    ;}
    break;

  case 222:
#line 1334 "token.y"
    { dbg_print(DBG_TRACE, "Error in file section ...\n"); ;}
    break;

  case 223:
#line 1337 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 224:
#line 1338 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 225:
#line 1341 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].object)); ;}
    break;

  case 226:
#line 1342 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].object));
    ;}
    break;

  case 227:
#line 1347 "token.y"
    {
        /* addFileDiscriptor(CB_FD_FD); */
        (yyval.object) = set_file_description_type( CB_FD_FD, (yyvsp[(2) - (2)].object));
    ;}
    break;

  case 228:
#line 1351 "token.y"
    {
        /* addFileDiscriptor(CB_FD_SD); */
        (yyval.object) = set_file_description_type( CB_FD_SD, (yyvsp[(2) - (2)].object)); // this needs to be modified with the FD/SD flag. 
    ;}
    break;

  case 229:
#line 1359 "token.y"
    {
        dbg_print(DBG_TRACE, "FD_SD_MAIN: Identifier ....: %s\n", (yyvsp[(1) - (5)].sval)); 
        (yyval.object) = cons_file_description((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].object), (yyvsp[(5) - (5)].object));
    ;}
    break;

  case 230:
#line 1365 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 231:
#line 1366 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 232:
#line 1369 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 233:
#line 1370 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 234:
#line 1373 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (2)].fdsdoption)); ;}
    break;

  case 235:
#line 1374 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *)(yyvsp[(2) - (3)].fdsdoption));
    ;}
    break;

  case 236:
#line 1379 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_int(CB_FDSD_EXTERNAL, 1); ;}
    break;

  case 237:
#line 1380 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_int(CB_FDSD_GLOBAL, 1); ;}
    break;

  case 238:
#line 1381 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_void(CB_FDSD_LAB_REC_CLAUSE, (yyvsp[(1) - (1)].object)); ;}
    break;

  case 239:
#line 1382 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_reccon(CB_FDSD_REC_CON_CLAUSE, (yyvsp[(1) - (1)].reccontainsclause)); ;}
    break;

  case 240:
#line 1383 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_blockcon(CB_FDSD_BLO_CON_CLAUSE, (yyvsp[(1) - (1)].blockcontains)); ;}
    break;

  case 241:
#line 1384 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_void(CB_FDSD_DATA_REC_CLAUSE, (yyvsp[(1) - (1)].object)); ;}
    break;

  case 242:
#line 1385 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_void(CB_FDSD_VAL_OF_CLAUSE, (yyvsp[(1) - (1)].object)); ;}
    break;

  case 243:
#line 1386 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_linage_clause(CB_FDSD_LINAGE_CLAUSE, (yyvsp[(1) - (1)].linageclause)); ;}
    break;

  case 244:
#line 1387 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_codeset(CB_FDSD_CODESET_CLAUSE, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 245:
#line 1388 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_report(CB_FDSD_REPORT_CLAUSE, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 246:
#line 1392 "token.y"
    {
        (yyval.sval) = (yyvsp[(3) - (3)].sval);
    ;}
    break;

  case 247:
#line 1395 "token.y"
    {
        (yyval.sval) = (yyvsp[(3) - (3)].sval);
    ;}
    break;

  case 248:
#line 1400 "token.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 249:
#line 1403 "token.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); ;}
    break;

  case 250:
#line 1406 "token.y"
    { 
        (yyval.linageclause) = cons_linage_clause((yyvsp[(3) - (6)].idint), (yyvsp[(4) - (6)].idint), (yyvsp[(5) - (6)].idint), (yyvsp[(6) - (6)].idint));
    ;}
    break;

  case 251:
#line 1411 "token.y"
    {  (yyval.idint) = cons_int_id( CB_IDENTIFIER, 0, (yyvsp[(1) - (1)].idValWithOpt)); ;}
    break;

  case 252:
#line 1412 "token.y"
    {  (yyval.idint) = cons_int_id( CB_INT, (yyvsp[(1) - (1)].ival), NULL); ;}
    break;

  case 253:
#line 1415 "token.y"
    { (yyval.idint) = NULL; ;}
    break;

  case 254:
#line 1416 "token.y"
    { (yyval.idint) = (yyvsp[(4) - (4)].idint); ;}
    break;

  case 255:
#line 1419 "token.y"
    { (yyval.idint) = NULL; ;}
    break;

  case 256:
#line 1420 "token.y"
    { (yyval.idint) = (yyvsp[(4) - (4)].idint); ;}
    break;

  case 257:
#line 1423 "token.y"
    { (yyval.idint) = NULL; ;}
    break;

  case 258:
#line 1424 "token.y"
    { (yyval.idint) = (yyvsp[(4) - (4)].idint); ;}
    break;

  case 259:
#line 1427 "token.y"
    { (yyval.object) = (yyvsp[(3) - (3)].object); ;}
    break;

  case 260:
#line 1430 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].valclauseitem)); ;}
    break;

  case 261:
#line 1431 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].valclauseitem));
    ;}
    break;

  case 262:
#line 1436 "token.y"
    {
        (yyval.valclauseitem) = cons_val_clause_item((yyvsp[(1) - (3)].idValWithOpt), (yyvsp[(3) - (3)].varVal));
    ;}
    break;

  case 263:
#line 1441 "token.y"
    { (yyval.idValWithOpt) = NULL; ;}
    break;

  case 264:
#line 1442 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(1) - (1)].idValWithOpt); ;}
    break;

  case 265:
#line 1445 "token.y"
    { (yyval.object) = (yyvsp[(4) - (4)].itemList); ;}
    break;

  case 266:
#line 1446 "token.y"
    { (yyval.object) = (yyvsp[(4) - (4)].itemList); ;}
    break;

  case 267:
#line 1449 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 268:
#line 1450 "token.y"
    { (yyval.object) = (yyvsp[(3) - (3)].itemList); ;}
    break;

  case 269:
#line 1453 "token.y"
    {
        (yyval.blockcontains) = cons_block_contains_clause((yyvsp[(3) - (5)].ival), (yyvsp[(4) - (5)].ival), (yyvsp[(5) - (5)].ival));
    ;}
    break;

  case 270:
#line 1458 "token.y"
    { (yyval.ival) = CB_SL_RECORDS; ;}
    break;

  case 271:
#line 1459 "token.y"
    { (yyval.ival) = CB_SL_CHARACTERS; ;}
    break;

  case 272:
#line 1462 "token.y"
    { /* struct _intpair ptr */
        (yyval.reccontainsclause) = cons_record_contains_clause(CB_REC_CON, (yyvsp[(1) - (1)].intpair), NULL);
    ;}
    break;

  case 273:
#line 1465 "token.y"
    { /* void ptr */
        (yyval.reccontainsclause) = cons_record_contains_clause(CB_REC_VAR, NULL, (yyvsp[(1) - (1)].object));
    ;}
    break;

  case 274:
#line 1470 "token.y"
    {
        (yyval.intpair) = cons_intpair((yyvsp[(3) - (5)].ival), (yyvsp[(4) - (5)].ival));
    ;}
    break;

  case 275:
#line 1475 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 276:
#line 1476 "token.y"
    { (yyval.ival) = (yyvsp[(2) - (2)].ival); ;}
    break;

  case 277:
#line 1479 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 278:
#line 1480 "token.y"
    { (yyval.ival) = (yyvsp[(2) - (2)].ival); ;}
    break;

  case 279:
#line 1484 "token.y"
    { (yyval.object) = (yyvsp[(6) - (6)].object); ;}
    break;

  case 280:
#line 1487 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 281:
#line 1488 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 282:
#line 1491 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].variationclause)); ;}
    break;

  case 283:
#line 1492 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].variationclause));
    ;}
    break;

  case 284:
#line 1497 "token.y"
    { 
        (yyval.variationclause) = cons_variation_clause(CB_VAR_FROMTO, (yyvsp[(1) - (1)].intpair), NULL); 
    ;}
    break;

  case 285:
#line 1500 "token.y"
    {
        (yyval.variationclause) = cons_variation_clause(CB_VAR_DEPEND, NULL, (yyvsp[(1) - (1)].idValWithOpt)); 
    ;}
    break;

  case 286:
#line 1505 "token.y"
    {
        (yyval.intpair) = cons_intpair((yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival));
    ;}
    break;

  case 287:
#line 1510 "token.y"
    {
        (yyval.idValWithOpt) = (yyvsp[(3) - (3)].idValWithOpt);
    ;}
    break;

  case 288:
#line 1515 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].object)); ;}
    break;

  case 289:
#line 1516 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].object));
    ;}
    break;

  case 290:
#line 1521 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 291:
#line 1527 "token.y"
    { 
        (yyval.object) = cons_field_description((yyvsp[(1) - (4)].ival), (yyvsp[(2) - (4)].sval), (yyvsp[(3) - (4)].object));
    ;}
    break;

  case 292:
#line 1545 "token.y"
    {  (yyval.ival) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 293:
#line 1548 "token.y"
    { (yyval.sval) = NULL; ;}
    break;

  case 294:
#line 1549 "token.y"
    { (yyval.sval) = strdup("FILLER"); ;}
    break;

  case 295:
#line 1550 "token.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 296:
#line 1553 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 297:
#line 1554 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 298:
#line 1557 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].dataclause)); ;}
    break;

  case 299:
#line 1558 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].dataclause));
    ;}
    break;

  case 300:
#line 1563 "token.y"
    { (yyval.dataclause) = cons_dataclause_str(CB_DC_REDEFINE, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 301:
#line 1564 "token.y"
    { (yyval.dataclause) = cons_dataclause_str(CB_DC_PICTURE, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 302:
#line 1565 "token.y"
    { (yyval.dataclause) = cons_dataclause_gnamepairlst(CB_DC_VALUE, (yyvsp[(1) - (1)].object)); ;}
    break;

  case 303:
#line 1566 "token.y"
    { (yyval.dataclause) = cons_dataclause_usage(CB_DC_USAGE, (yyvsp[(1) - (1)].usageclause)); ;}
    break;

  case 304:
#line 1567 "token.y"
    { (yyval.dataclause) = cons_dataclause_int(CB_DC_EXTERN, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 305:
#line 1568 "token.y"
    { (yyval.dataclause) = cons_dataclause_int(CB_DC_GLOBAL, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 306:
#line 1569 "token.y"
    { (yyval.dataclause) = cons_dataclause_int(CB_DC_SIGN, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 307:
#line 1570 "token.y"
    { (yyval.dataclause) = cons_dataclause_occur(CB_DC_OCCUR, (yyvsp[(1) - (1)].occuranceclause)); ;}
    break;

  case 308:
#line 1571 "token.y"
    { (yyval.dataclause) = cons_dataclause_int(CB_DC_SYNCH, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 309:
#line 1572 "token.y"
    { (yyval.dataclause) = cons_dataclause_int(CB_DC_JUSTIFY, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 310:
#line 1573 "token.y"
    { (yyval.dataclause) = cons_dataclause_int(CB_DC_BLANK, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 311:
#line 1574 "token.y"
    { (yyval.dataclause) = (yyvsp[(1) - (1)].dataclause); ;}
    break;

  case 312:
#line 1577 "token.y"
    { 
        cons_dataclause_rename(CB_DC_RENAMES, (yyvsp[(2) - (3)].sval), (yyvsp[(3) - (3)].sval)); ;}
    break;

  case 313:
#line 1581 "token.y"
    { (yyval.sval) = NULL; ;}
    break;

  case 314:
#line 1582 "token.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); ;}
    break;

  case 315:
#line 1585 "token.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); ;}
    break;

  case 316:
#line 1589 "token.y"
    { (yyval.sval) = strdup((yyvsp[(3) - (3)].sval)); ;}
    break;

  case 319:
#line 1612 "token.y"
    {
        (yyval.object) = (yyvsp[(3) - (3)].object);
    ;}
    break;

  case 320:
#line 1617 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].gnamepair)); ;}
    break;

  case 321:
#line 1618 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].gnamepair));
    ;}
    break;

  case 322:
#line 1621 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *)(yyvsp[(3) - (3)].gnamepair));
    ;}
    break;

  case 323:
#line 1627 "token.y"
    { 
        (yyval.gnamepair) = cons_value_pair((yyvsp[(1) - (1)].varVal), NULL); 
    ;}
    break;

  case 324:
#line 1630 "token.y"
    { 
        (yyval.gnamepair) = cons_value_pair((yyvsp[(1) - (3)].varVal), (yyvsp[(3) - (3)].varVal)); 
    ;}
    break;

  case 325:
#line 1637 "token.y"
    { 
        (yyval.usageclause) = (yyvsp[(2) - (2)].dsuageitem);
    ;}
    break;

  case 328:
#line 1648 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_BINARY, (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 329:
#line 1649 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_COMP, 0); ;}
    break;

  case 330:
#line 1650 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_COMP_1, 0); ;}
    break;

  case 331:
#line 1651 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_COMP_2, 0); ;}
    break;

  case 332:
#line 1652 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_COMP_3, (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 333:
#line 1653 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_COMP_4, (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 334:
#line 1654 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_COMP_5, (yyvsp[(2) - (2)].ival)); ;}
    break;

  case 335:
#line 1655 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_COMP_6, 0); ;}
    break;

  case 336:
#line 1656 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_DISPLAY, 0); ;}
    break;

  case 337:
#line 1657 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_INDEX, 0); ;}
    break;

  case 338:
#line 1658 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_PACKED_DECIMAL, 0); ;}
    break;

  case 339:
#line 1659 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_POINTER, 0); ;}
    break;

  case 340:
#line 1662 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 341:
#line 1665 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 342:
#line 1670 "token.y"
    { (yyval.ival) = (yyvsp[(3) - (4)].ival); ;}
    break;

  case 345:
#line 1676 "token.y"
    { (yyval.ival) = CB_LEADING; ;}
    break;

  case 346:
#line 1677 "token.y"
    { (yyval.ival) = CB_TRAILING; ;}
    break;

  case 349:
#line 1684 "token.y"
    { (yyval.occuranceclause) = (yyvsp[(2) - (2)].occuranceclause); ;}
    break;

  case 350:
#line 1692 "token.y"
    { 
        (yyvsp[(1) - (1)].occuranceclause)->multi = 1; 
        (yyval.occuranceclause) = (yyvsp[(1) - (1)].occuranceclause);
    ;}
    break;

  case 351:
#line 1705 "token.y"
    {
        dbg_print(DBG_PARSER, "Inside : occurance clause - multi \n"); 
        (yyval.occuranceclause) = construct_occurance((yyvsp[(1) - (6)].ival), (yyvsp[(2) - (6)].ival), (yyvsp[(4) - (6)].sval));
    ;}
    break;

  case 354:
#line 1714 "token.y"
    { (yyval.sval) = NULL; ;}
    break;

  case 355:
#line 1715 "token.y"
    {
        (yyval.sval) = (yyvsp[(3) - (3)].sval);
    ;}
    break;

  case 370:
#line 1747 "token.y"
    { (yyval.ival) = CB_SY_LEFT; ;}
    break;

  case 371:
#line 1748 "token.y"
    { (yyval.ival) = CB_SY_RIGHT; ;}
    break;

  case 372:
#line 1751 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 373:
#line 1754 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 374:
#line 1761 "token.y"
    {
        (yyval.object) = cons_working_storage_section((yyvsp[(4) - (4)].object));
    ;}
    break;

  case 375:
#line 1764 "token.y"
    { dbg_print(DBG_TRACE, "Error in Working storage section ...\n"); ;}
    break;

  case 376:
#line 1767 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 377:
#line 1768 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 378:
#line 1771 "token.y"
    {
        /* addFieldDiscriptionList(NULL, CB_WS_SECTION); */
        (yyval.object) = (yyvsp[(1) - (1)].object);
    ;}
    break;

  case 379:
#line 1782 "token.y"
    {
        (yyval.object) = cons_local_storage_section((yyvsp[(4) - (4)].object));
    ;}
    break;

  case 380:
#line 1791 "token.y"
    { (yyval.object) = cons_linkage_section((yyvsp[(4) - (4)].object)); ;}
    break;

  case 381:
#line 1794 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 382:
#line 1801 "token.y"
    {
        (yyval.object) = cons_communication_section((yyvsp[(4) - (4)].object));
    ;}
    break;

  case 383:
#line 1806 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].commsecitem)); ;}
    break;

  case 384:
#line 1807 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].commsecitem));
    ;}
    break;

  case 385:
#line 1815 "token.y"
    {
        (yyval.commsecitem) = cons_comm_section_item((yyvsp[(2) - (6)].sval), (yyvsp[(4) - (6)].comsecdetail), (yyvsp[(5) - (6)].object));
    ;}
    break;

  case 386:
#line 1820 "token.y"
    { (yyval.comsecdetail) = cons_comm_sec_details_opt( CB_FT_INPUT, (yyvsp[(1) - (1)].object)); ;}
    break;

  case 387:
#line 1821 "token.y"
    { (yyval.comsecdetail) = cons_comm_sec_details_opt( CB_FT_OUTPUT, (yyvsp[(1) - (1)].object)); ;}
    break;

  case 388:
#line 1822 "token.y"
    { (yyval.comsecdetail) = cons_comm_sec_details_opt( CB_FT_I_O, (yyvsp[(1) - (1)].object)); ;}
    break;

  case 389:
#line 1825 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].comminp)); ;}
    break;

  case 390:
#line 1826 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].comminp));
    ;}
    break;

  case 391:
#line 1832 "token.y"
    {
        (yyvsp[(3) - (3)].comminp)->initialflag = (yyvsp[(1) - (3)].ival);
        (yyval.comminp) = (yyvsp[(3) - (3)].comminp);
    ;}
    break;

  case 392:
#line 1838 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 393:
#line 1839 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 394:
#line 1843 "token.y"
    {
        (yyvsp[(1) - (2)].comminp)->idlist = (yyvsp[(2) - (2)].object);
        (yyval.comminp) = (yyvsp[(1) - (2)].comminp);
    ;}
    break;

  case 395:
#line 1849 "token.y"
    {
        (yyval.comminp) = construct_comm_inp((yyvsp[(1) - (3)].ival), (yyvsp[(3) - (3)].varVal));
    ;}
    break;

  case 396:
#line 1854 "token.y"
    { (yyval.ival) = CB_SYM_QUEUE; ;}
    break;

  case 397:
#line 1855 "token.y"
    { (yyval.ival) = CB_SYM_SUBQ1; ;}
    break;

  case 398:
#line 1856 "token.y"
    { (yyval.ival) = CB_SYM_SUBQ2; ;}
    break;

  case 399:
#line 1857 "token.y"
    { (yyval.ival) = CB_SYM_SUBQ3; ;}
    break;

  case 400:
#line 1858 "token.y"
    { (yyval.ival) = CB_SYM_MSG_DATE; ;}
    break;

  case 401:
#line 1859 "token.y"
    { (yyval.ival) = CB_SYM_MSG_TIME; ;}
    break;

  case 402:
#line 1860 "token.y"
    { (yyval.ival) = CB_SYM_SOURCE; ;}
    break;

  case 403:
#line 1861 "token.y"
    { (yyval.ival) = CB_TXT_LENGTH; ;}
    break;

  case 404:
#line 1862 "token.y"
    { (yyval.ival) = CB_END_KEY; ;}
    break;

  case 405:
#line 1863 "token.y"
    { (yyval.ival) = CB_STATUS_KEY; ;}
    break;

  case 406:
#line 1864 "token.y"
    { (yyval.ival) = CB_MSG_COUNT; ;}
    break;

  case 407:
#line 1865 "token.y"
    { (yyval.ival) = CB_SYM_TERM; ;}
    break;

  case 408:
#line 1868 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 409:
#line 1869 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].itemList); ;}
    break;

  case 410:
#line 1873 "token.y"
    { (yyval.object) = (yyvsp[(2) - (2)].object); ;}
    break;

  case 411:
#line 1876 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 412:
#line 1877 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 413:
#line 1880 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].commout)); ;}
    break;

  case 414:
#line 1881 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].commout));
    ;}
    break;

  case 415:
#line 1886 "token.y"
    { 
        (yyval.commout) = cons_comm_outitem_val(CB_COMOUT_DEST, (yyvsp[(4) - (4)].varVal));
    ;}
    break;

  case 416:
#line 1889 "token.y"
    {
        (yyval.commout) = cons_comm_outitem_val(CB_COMOUT_TXTLEN, (yyvsp[(4) - (4)].varVal));
    ;}
    break;

  case 417:
#line 1892 "token.y"
    {
        (yyval.commout) = cons_comm_outitem_val(CB_COMOUT_STAKEY, (yyvsp[(4) - (4)].varVal));
    ;}
    break;

  case 418:
#line 1895 "token.y"
    {
        (yyval.commout) = cons_comm_outitem_dest(CB_COMOUT_DEST_TAB, (yyvsp[(4) - (5)].ival), (yyvsp[(5) - (5)].object));
    ;}
    break;

  case 419:
#line 1898 "token.y"
    {
        (yyval.commout) = cons_comm_outitem_val(CB_COMOUT_ERRKEY, (yyvsp[(4) - (4)].varVal));
    ;}
    break;

  case 420:
#line 1901 "token.y"
    {
        (yyval.commout) = cons_comm_outitem_val(CB_COMOUT_SYMDEST, (yyvsp[(4) - (4)].varVal));
    ;}
    break;

  case 421:
#line 1905 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 422:
#line 1906 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 423:
#line 1909 "token.y"
    { (yyval.object) = (yyvsp[(3) - (3)].itemList); ;}
    break;

  case 424:
#line 1913 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].comminp)); ;}
    break;

  case 425:
#line 1914 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].comminp));
    ;}
    break;

  case 426:
#line 1920 "token.y"
    {
        (yyvsp[(3) - (3)].comminp)->initialflag = (yyvsp[(1) - (3)].ival);
        (yyval.comminp) = (yyvsp[(3) - (3)].comminp);
    ;}
    break;

  case 427:
#line 1927 "token.y"
    { (yyval.comminp) = (yyvsp[(1) - (1)].comminp); ;}
    break;

  case 428:
#line 1944 "token.y"
    {
        (yyval.object) = cons_screen_section((yyvsp[(4) - (4)].object));
    ;}
    break;

  case 429:
#line 1949 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].scrdescrentry)); ;}
    break;

  case 430:
#line 1950 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].scrdescrentry));
    ;}
    break;

  case 431:
#line 1957 "token.y"
    {
        (yyval.scrdescrentry) = cons_screen_descr_entry((yyvsp[(1) - (4)].ival), (yyvsp[(2) - (4)].sval), (yyvsp[(3) - (4)].object));
    ;}
    break;

  case 432:
#line 1962 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].scrdescropt)); ;}
    break;

  case 433:
#line 1963 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].scrdescropt));
    ;}
    break;

  case 434:
#line 1968 "token.y"
    {
        (yyval.scrdescropt) = cons_scr_descr_options( (yyvsp[(1) - (4)].ival), (yyvsp[(3) - (4)].idValWithOpt), (yyvsp[(4) - (4)].numberoption), NULL, NULL, NULL);
    ;}
    break;

  case 435:
#line 1971 "token.y"
    {
        (yyval.scrdescropt) = cons_scr_descr_options(CB_SCRDSC_VALUE, NULL, NULL, (yyvsp[(2) - (2)].varVal), NULL, NULL);
    ;}
    break;

  case 436:
#line 1974 "token.y"
    {
        (yyval.scrdescropt) = cons_scr_descr_options(CB_SCRDSC_PICTURE, NULL, NULL, NULL, (yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].locdetails));
    ;}
    break;

  case 437:
#line 1979 "token.y"
    { (yyval.numberoption) = NULL; ;}
    break;

  case 438:
#line 1980 "token.y"
    { (yyval.numberoption) = (yyvsp[(1) - (1)].numberoption); ;}
    break;

  case 439:
#line 1983 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BACKGROUND; ;}
    break;

  case 440:
#line 1984 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BACKGROUNDCOLOR; ;}
    break;

  case 441:
#line 1985 "token.y"
    { (yyval.ival) =  CB_SCRDSC_FOREGROUND; ;}
    break;

  case 442:
#line 1986 "token.y"
    { (yyval.ival) =  CB_SCRDSC_FOREGROUNDCOLOR; ;}
    break;

  case 443:
#line 1987 "token.y"
    { (yyval.ival) =  CB_SCRDSC_USAGEDISPLAY; ;}
    break;

  case 444:
#line 1988 "token.y"
    { (yyval.ival) =  (yyvsp[(1) - (1)].ival); ;}
    break;

  case 445:
#line 1989 "token.y"
    { (yyval.ival) =  CB_SCRDSC_AUTO; ;}
    break;

  case 446:
#line 1990 "token.y"
    { (yyval.ival) =  CB_SCRDSC_AUTO_SKIP; ;}
    break;

  case 447:
#line 1991 "token.y"
    { (yyval.ival) =  CB_SCRDSC_SECURE; ;}
    break;

  case 448:
#line 1992 "token.y"
    { (yyval.ival) =  CB_SCRDSC_REQUIRED; ;}
    break;

  case 449:
#line 1993 "token.y"
    { (yyval.ival) =  CB_SCRDSC_FULL; ;}
    break;

  case 450:
#line 1994 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BELL; ;}
    break;

  case 451:
#line 1995 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BEEP; ;}
    break;

  case 452:
#line 1996 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BLANK_SCREEN; ;}
    break;

  case 453:
#line 1997 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BLANK_LINE; ;}
    break;

  case 454:
#line 1998 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BLANK_REMAINDER; ;}
    break;

  case 455:
#line 1999 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BLINK; ;}
    break;

  case 456:
#line 2000 "token.y"
    { (yyval.ival) =  CB_SCRDSC_ERASE_EOS; ;}
    break;

  case 457:
#line 2001 "token.y"
    { (yyval.ival) =  CB_SCRDSC_ERASE_EOL; ;}
    break;

  case 458:
#line 2002 "token.y"
    { (yyval.ival) =  CB_SCRDSC_ERASE_SCREEN; ;}
    break;

  case 459:
#line 2003 "token.y"
    { (yyval.ival) =  CB_SCRDSC_HIGHLIGHT; ;}
    break;

  case 460:
#line 2004 "token.y"
    { (yyval.ival) =  CB_SCRDSC_NO_HIGHLIGHT; ;}
    break;

  case 461:
#line 2005 "token.y"
    { (yyval.ival) =  CB_SCRDSC_LOWLIGHT; ;}
    break;

  case 462:
#line 2006 "token.y"
    { (yyval.ival) =  CB_SCRDSC_REVERSE; ;}
    break;

  case 463:
#line 2007 "token.y"
    { (yyval.ival) =  CB_SCRDSC_REVERSEVIDEO; ;}
    break;

  case 464:
#line 2008 "token.y"
    { (yyval.ival) =  CB_SCRDSC_UNDERLINE; ;}
    break;

  case 465:
#line 2009 "token.y"
    { (yyval.ival) =  CB_SCRDSC_LINE; ;}
    break;

  case 466:
#line 2010 "token.y"
    { (yyval.ival) =  CB_SCRDSC_COLUMN; ;}
    break;

  case 467:
#line 2011 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BLANK_WHEN_ZERO; ;}
    break;

  case 468:
#line 2014 "token.y"
    {
        (yyval.numberoption) = (yyvsp[(3) - (3)].numberoption);
    ;}
    break;

  case 469:
#line 2019 "token.y"
    { (yyval.numberoption) = cons_number_option(CB_INT, (yyvsp[(2) - (2)].ival), NULL); ;}
    break;

  case 470:
#line 2020 "token.y"
    { (yyval.numberoption) = cons_number_option(CB_CHARPTR, 0, (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 473:
#line 2026 "token.y"
    { (yyval.locdetails) = cons_location_details(CB_LOC_FROM, (yyvsp[(2) - (2)].varVal)); ;}
    break;

  case 474:
#line 2027 "token.y"
    { (yyval.locdetails) = cons_location_details(CB_LOC_TO, (yyvsp[(2) - (2)].varVal)); ;}
    break;

  case 475:
#line 2028 "token.y"
    { (yyval.locdetails) = cons_location_details(CB_LOC_USING, (yyvsp[(2) - (2)].varVal)); ;}
    break;

  case 554:
#line 2182 "token.y"
    { (yyval.varVal) = NULL; ;}
    break;

  case 555:
#line 2183 "token.y"
    { (yyval.varVal) = (yyvsp[(1) - (1)].varVal); ;}
    break;

  case 577:
#line 2239 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 578:
#line 2245 "token.y"
    {
        (yyval.object) = construct_procedure_division((yyvsp[(3) - (6)].usechainret), (yyvsp[(5) - (6)].object), (yyvsp[(6) - (6)].object) );
    ;}
    break;

  case 579:
#line 2252 "token.y"
    {
        (yyval.usechainret) = construct_use_chain_retur_clause((yyvsp[(1) - (3)].object), (yyvsp[(2) - (3)].object), (yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 580:
#line 2257 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 581:
#line 2258 "token.y"
    { (yyval.object) = (yyvsp[(2) - (2)].object); ;}
    break;

  case 582:
#line 2261 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 583:
#line 2262 "token.y"
    { (yyval.object) = (yyvsp[(2) - (2)].object); ;}
    break;

  case 584:
#line 2265 "token.y"
    { (yyval.sval) = NULL; ;}
    break;

  case 585:
#line 2266 "token.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); ;}
    break;

  case 586:
#line 2269 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].procitem)); ;}
    break;

  case 587:
#line 2270 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].procitem)); 
    ;}
    break;

  case 588:
#line 2273 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *)(yyvsp[(3) - (3)].procitem)); 
    ;}
    break;

  case 589:
#line 2278 "token.y"
    {
        (yyval.procitem) = construct_proc_param((yyvsp[(1) - (5)].ival), (yyvsp[(2) - (5)].ival), (yyvsp[(3) - (5)].ival), (yyvsp[(4) - (5)].ival), (yyvsp[(5) - (5)].sval));
    ;}
    break;

  case 590:
#line 2283 "token.y"
    { (yyval.ival) = CB_CALL_BY_DEFAULT; ;}
    break;

  case 591:
#line 2284 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 592:
#line 2287 "token.y"
    { (yyval.ival) = CB_CALL_BY_REF; ;}
    break;

  case 593:
#line 2288 "token.y"
    { (yyval.ival) = CB_CALL_BY_CONTENT; ;}
    break;

  case 594:
#line 2291 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 596:
#line 2295 "token.y"
    { (yyval.ival) = CB_SIZE_AUTO; ;}
    break;

  case 597:
#line 2296 "token.y"
    { (yyval.ival) = CB_SIZE_DEFAULT; ;}
    break;

  case 598:
#line 2297 "token.y"
    { (yyval.ival) = CB_SIZE_UNSIGNED; ;}
    break;

  case 599:
#line 2298 "token.y"
    { (yyval.ival) = CB_SIZE_NONE; ;}
    break;

  case 600:
#line 2301 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 601:
#line 2302 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 602:
#line 2305 "token.y"
    { (yyval.ival) = -1; ;}
    break;

  case 603:
#line 2306 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 604:
#line 2309 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 605:
#line 2310 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 606:
#line 2315 "token.y"
    {
        (yyval.object) = construct_declaratives((yyvsp[(3) - (6)].object));
    ;}
    break;

  case 607:
#line 2320 "token.y"
    { (yyval.object) = start_top_level_item((void *)(yyvsp[(1) - (1)].object)); ;}
    break;

  case 608:
#line 2321 "token.y"
    {
        (yyval.object) = addto_top_level_item((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].object)); 
    ;}
    break;

  case 609:
#line 2332 "token.y"
    { 
        dbg_print(DBG_PARSER, "proc_item: Section header\n"); 
        (yyval.object) = (yyvsp[(1) - (1)].object);
    ;}
    break;

  case 610:
#line 2336 "token.y"
    { 
        dbg_print(DBG_PARSER, "  proc_item: Paragraph header\n"); 
        (yyval.object) = (yyvsp[(1) - (1)].object);
    ;}
    break;

  case 611:
#line 2340 "token.y"
    { /* returns sentence */
        dbg_print(DBG_PARSER, "    proc_item: Proc statements\n"); 
        (yyval.object) = construct_proc_statements((yyvsp[(1) - (2)].object));
    ;}
    break;

  case 612:
#line 2352 "token.y"
    { 
        (yyval.object) = NULL; 
    ;}
    break;

  case 613:
#line 2357 "token.y"
    {
        (yyval.object) = construct_section_header((yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].varVal));
    ;}
    break;

  case 614:
#line 2362 "token.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 615:
#line 2365 "token.y"
    { (yyval.varVal) = NULL; ;}
    break;

  case 616:
#line 2366 "token.y"
    { (yyval.varVal) = (yyvsp[(1) - (1)].varVal); ;}
    break;

  case 617:
#line 2369 "token.y"
    { 
        (yyval.object) = construct_paragraph_header((yyvsp[(1) - (2)].sval)); 
    ;}
    break;

  case 618:
#line 2384 "token.y"
    { 
        dbg_print(DBG_TRACE, "statement_list: proc statements\n"); 
        (yyval.object) = (yyvsp[(1) - (1)].object);
    ;}
    break;

  case 619:
#line 2390 "token.y"
    { (yyval.object) = start_sentence((yyvsp[(1) - (1)].object)); ;}
    break;

  case 620:
#line 2391 "token.y"
    {
        (yyval.object) = addto_sentence((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object));
    ;}
    break;

  case 621:
#line 2402 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: perform\n"); ;}
    break;

  case 622:
#line 2403 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: move\n"); ;}
    break;

  case 623:
#line 2404 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: open\n"); ;}
    break;

  case 624:
#line 2405 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: close\n"); ;}
    break;

  case 625:
#line 2406 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: write\n"); ;}
    break;

  case 626:
#line 2407 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: read\n"); ;}
    break;

  case 627:
#line 2408 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: release\n"); ;}
    break;

  case 628:
#line 2409 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: return\n"); ;}
    break;

  case 629:
#line 2410 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: set\n"); ;}
    break;

  case 630:
#line 2411 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: sort\n"); ;}
    break;

  case 631:
#line 2412 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: display\n"); ;}
    break;

  case 632:
#line 2413 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: ifelse\n"); ;}
    break;

  case 633:
#line 2414 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: accept\n"); ;}
    break;

  case 634:
#line 2415 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: add\n"); ;}
    break;

  case 635:
#line 2416 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: subtract\n"); ;}
    break;

  case 636:
#line 2417 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: multiply\n"); ;}
    break;

  case 637:
#line 2418 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: divide\n"); ;}
    break;

  case 638:
#line 2419 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: compute\n"); ;}
    break;

  case 639:
#line 2420 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: stop\n"); ;}
    break;

  case 640:
#line 2421 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: use\n"); ;}
    break;

  case 641:
#line 2422 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: go to\n"); ;}
    break;

  case 642:
#line 2423 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: alter\n"); ;}
    break;

  case 643:
#line 2424 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: exit\n"); ;}
    break;

  case 644:
#line 2425 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: call\n"); ;}
    break;

  case 645:
#line 2426 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: enter\n"); ;}
    break;

  case 646:
#line 2427 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: merge\n"); ;}
    break;

  case 647:
#line 2428 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: evaluate\n"); ;}
    break;

  case 648:
#line 2429 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: rewrite\n"); ;}
    break;

  case 649:
#line 2430 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: goback\n"); ;}
    break;

  case 650:
#line 2431 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: purge\n"); ;}
    break;

  case 651:
#line 2432 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: unlock\n"); ;}
    break;

  case 652:
#line 2433 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: cancel\n"); ;}
    break;

  case 653:
#line 2434 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: delete\n"); ;}
    break;

  case 654:
#line 2435 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: string\n"); ;}
    break;

  case 655:
#line 2436 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: unstring\n"); ;}
    break;

  case 656:
#line 2437 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: continue\n"); ;}
    break;

  case 657:
#line 2438 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: search\n"); ;}
    break;

  case 658:
#line 2439 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: initialize\n"); ;}
    break;

  case 659:
#line 2440 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: inspect\n"); ;}
    break;

  case 660:
#line 2441 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: start\n"); ;}
    break;

  case 661:
#line 2442 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: initiate\n"); ;}
    break;

  case 662:
#line 2443 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: terminate\n"); ;}
    break;

  case 663:
#line 2444 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: generate\n"); ;}
    break;

  case 664:
#line 2457 "token.y"
    {
        (yyval.object) = construct_initialize_stmt((yyvsp[(2) - (6)].itemList), (yyvsp[(3) - (6)].ival), (yyvsp[(4) - (6)].ival), (yyvsp[(5) - (6)].object), (yyvsp[(6) - (6)].ival));
    ;}
    break;

  case 665:
#line 2462 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 666:
#line 2463 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 667:
#line 2466 "token.y"
    { (yyval.ival) = CB_CAT_NONE; ;}
    break;

  case 668:
#line 2467 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (3)].ival); ;}
    break;

  case 669:
#line 2470 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 670:
#line 2471 "token.y"
    {
        (yyval.object) = (yyvsp[(3) - (3)].object);
    ;}
    break;

  case 671:
#line 2476 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].init_rep_item)); ;}
    break;

  case 672:
#line 2477 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].init_rep_item));
    ;}
    break;

  case 673:
#line 2482 "token.y"
    {
        (yyval.init_rep_item) = construct_init_replacing_item((yyvsp[(1) - (4)].ival), (yyvsp[(4) - (4)].xvaldatatype));
    ;}
    break;

  case 674:
#line 2487 "token.y"
    { (yyval.ival) = CB_CAT_ALL; ;}
    break;

  case 675:
#line 2488 "token.y"
    { (yyval.ival) = CB_CAT_ALPHABETIC; ;}
    break;

  case 676:
#line 2489 "token.y"
    { (yyval.ival) = CB_CAT_ALPHANUMERIC; ;}
    break;

  case 677:
#line 2490 "token.y"
    { (yyval.ival) = CB_CAT_ALPHANUMERIC_EDITED; ;}
    break;

  case 678:
#line 2491 "token.y"
    { (yyval.ival) = CB_CAT_DATA_POINTER; ;}
    break;

  case 679:
#line 2492 "token.y"
    { (yyval.ival) = CB_CAT_NUMERIC; ;}
    break;

  case 680:
#line 2493 "token.y"
    { (yyval.ival) = CB_CAT_NUMERIC_EDITED; ;}
    break;

  case 681:
#line 2496 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 682:
#line 2497 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 683:
#line 2507 "token.y"
    {
        (yyval.object) = construct_inspect_stmt((yyvsp[(2) - (5)].varVal), (yyvsp[(3) - (5)].object), (yyvsp[(4) - (5)].object), (yyvsp[(5) - (5)].convclause));
    ;}
    break;

  case 684:
#line 2512 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 685:
#line 2513 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 686:
#line 2516 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].tallyingitem)); ;}
    break;

  case 687:
#line 2517 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].tallyingitem)); 
    ;}
    break;

  case 688:
#line 2522 "token.y"
    {
        (yyval.tallyingitem) = construct_tallying_item((yyvsp[(2) - (6)].idValWithOpt), (yyvsp[(4) - (6)].ival), (yyvsp[(5) - (6)].varVal), (yyvsp[(6) - (6)].object));
    ;}
    break;

  case 689:
#line 2527 "token.y"
    { (yyval.ival) = CB_ITEM_CHAR; ;}
    break;

  case 690:
#line 2528 "token.y"
    { (yyval.ival) = CB_ITEM_ALL; ;}
    break;

  case 691:
#line 2529 "token.y"
    { (yyval.ival) = CB_ITEM_LEADING; ;}
    break;

  case 692:
#line 2530 "token.y"
    { (yyval.ival) = CB_ITEM_FIRST; ;}
    break;

  case 693:
#line 2533 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 694:
#line 2534 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 695:
#line 2537 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].befaftitem)); ;}
    break;

  case 696:
#line 2538 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].befaftitem)); 
    ;}
    break;

  case 697:
#line 2543 "token.y"
    {
        (yyval.befaftitem) = construct_bef_aft_item((yyvsp[(1) - (3)].ival), (yyvsp[(3) - (3)].varVal));
    ;}
    break;

  case 698:
#line 2548 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 699:
#line 2549 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 700:
#line 2552 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].object)); ;}
    break;

  case 701:
#line 2553 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].object)); 
    ;}
    break;

  case 702:
#line 2558 "token.y"
    { 
        (yyval.object) = construct_replacing_item((yyvsp[(2) - (6)].ival), (yyvsp[(3) - (6)].varVal), (yyvsp[(5) - (6)].varVal), (yyvsp[(6) - (6)].object));
    ;}
    break;

  case 703:
#line 2563 "token.y"
    { (yyval.convclause) = NULL; ;}
    break;

  case 704:
#line 2564 "token.y"
    { (yyval.convclause) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 705:
#line 2567 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].convclause)); ;}
    break;

  case 706:
#line 2568 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].convclause)); 
    ;}
    break;

  case 707:
#line 2574 "token.y"
    {
        (yyval.convclause) = construct_converting_clause( (yyvsp[(2) - (5)].varVal), (yyvsp[(4) - (5)].varVal), (yyvsp[(5) - (5)].object) );
    ;}
    break;

  case 708:
#line 2584 "token.y"
    {
        (yyval.object) = (yyvsp[(2) - (3)].object);
    ;}
    break;

  case 711:
#line 2592 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 712:
#line 2593 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 713:
#line 2598 "token.y"
    {
        (yyval.object) = construct_search_stmt((yyvsp[(1) - (4)].idValWithOpt), (yyvsp[(2) - (4)].idValWithOpt), (yyvsp[(3) - (4)].object), (yyvsp[(4) - (4)].object));
    ;}
    break;

  case 714:
#line 2603 "token.y"
    { (yyval.idValWithOpt) = NULL; ;}
    break;

  case 715:
#line 2604 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(2) - (2)].idValWithOpt); ;}
    break;

  case 716:
#line 2607 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 717:
#line 2608 "token.y"
    { (yyval.object) = (yyvsp[(3) - (3)].object); ;}
    break;

  case 718:
#line 2611 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].simpwhen)); ;}
    break;

  case 719:
#line 2612 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].simpwhen)); 
    ;}
    break;

  case 720:
#line 2617 "token.y"
    {
        (yyval.simpwhen) = construct_simple_when_clause((yyvsp[(2) - (3)].cond), (yyvsp[(3) - (3)].object));
    ;}
    break;

  case 721:
#line 2624 "token.y"
    {
        (yyval.object) = construct_search_all_stmt( (yyvsp[(2) - (4)].idValWithOpt), (yyvsp[(3) - (4)].object), (yyvsp[(4) - (4)].multiwhen) );
    ;}
    break;

  case 722:
#line 2631 "token.y"
    {
        (yyval.multiwhen) = construct_multi_when_clause((yyvsp[(2) - (4)].evalitem), (yyvsp[(3) - (4)].object), (yyvsp[(4) - (4)].object));
    ;}
    break;

  case 723:
#line 2636 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 724:
#line 2637 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 725:
#line 2640 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 726:
#line 2641 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (1)].object);
    ;}
    break;

  case 727:
#line 2646 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].evalitem)); ;}
    break;

  case 728:
#line 2647 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].evalitem)); 
    ;}
    break;

  case 729:
#line 2652 "token.y"
    { (yyval.evalitem) = (yyvsp[(2) - (2)].evalitem); ;}
    break;

  case 730:
#line 2659 "token.y"
    {
        (yyval.evalitem) = construct_eval_item(CB_EI_COND, (void *)(yyvsp[(1) - (1)].cond), NULL);
    ;}
    break;

  case 731:
#line 2671 "token.y"
    {
        printf("ENTER is obsolate and is not implemented...");
        (yyval.object) = construct_enter_stmt((yyvsp[(2) - (3)].sval), (yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 732:
#line 2677 "token.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 733:
#line 2680 "token.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 734:
#line 2689 "token.y"
    {
        (yyval.object) = construct_merge_stmt((yyvsp[(2) - (6)].idValWithOpt), (yyvsp[(3) - (6)].object), (yyvsp[(4) - (6)].idValWithOpt), (yyvsp[(5) - (6)].object), (yyvsp[(6) - (6)].fileIOclause));
    ;}
    break;

  case 735:
#line 2694 "token.y"
    {
        (yyval.object) = (yyvsp[(2) - (2)].object);
    ;}
    break;

  case 736:
#line 2705 "token.y"
    {
        (yyval.object) = construct_evaluate_stmt((yyvsp[(2) - (6)].evalitem), (yyvsp[(3) - (6)].object), (yyvsp[(4) - (6)].object), (yyvsp[(5) - (6)].object));
    ;}
    break;

  case 738:
#line 2713 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 739:
#line 2714 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 740:
#line 2717 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(2) - (2)].evalitem)); ;}
    break;

  case 741:
#line 2718 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *) (yyvsp[(3) - (3)].evalitem));
    ;}
    break;

  case 742:
#line 2723 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].whenclauseitem)); ;}
    break;

  case 743:
#line 2724 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].whenclauseitem));
    ;}
    break;

  case 744:
#line 2731 "token.y"
    {
        (yyval.whenclauseitem) = construct_when_clause_item((yyvsp[(2) - (4)].evalitem), (yyvsp[(3) - (4)].object), (yyvsp[(4) - (4)].object));
    ;}
    break;

  case 745:
#line 2736 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_ANY, NULL, NULL); ;}
    break;

  case 746:
#line 2737 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_TRUE, NULL, NULL); ;}
    break;

  case 747:
#line 2738 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_FALSE, NULL, NULL); ;}
    break;

  case 748:
#line 2739 "token.y"
    {                 
        ((yyvsp[(2) - (2)].evalitem))->notflag = (yyvsp[(1) - (2)].ival);
        (yyval.evalitem) = construct_eval_item(CB_EI_EVAL, (yyvsp[(2) - (2)].evalitem), NULL); 
    ;}
    break;

  case 749:
#line 2746 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 750:
#line 2747 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 751:
#line 2750 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].evalitem)); ;}
    break;

  case 752:
#line 2751 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].evalitem));
    ;}
    break;

  case 753:
#line 2756 "token.y"
    { (yyval.evalitem) = (yyvsp[(2) - (2)].evalitem); ;}
    break;

  case 754:
#line 2765 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_GNAME, (void *) (yyvsp[(1) - (1)].varVal), NULL); ;}
    break;

  case 755:
#line 2768 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_ARITHM_EXP, (void *) (yyvsp[(1) - (1)].arithm_expr), NULL); ;}
    break;

  case 756:
#line 2769 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_TRUE, NULL, NULL); ;}
    break;

  case 757:
#line 2770 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_FALSE, NULL, NULL); ;}
    break;

  case 758:
#line 2772 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_EVAL_ITEMS, (yyvsp[(1) - (3)].evalitem), (yyvsp[(3) - (3)].evalitem)); ;}
    break;

  case 759:
#line 2773 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_COND, (yyvsp[(1) - (1)].cond), NULL); ;}
    break;

  case 760:
#line 2776 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 761:
#line 2777 "token.y"
    { (yyval.object) = (yyvsp[(3) - (3)].object); ;}
    break;

  case 762:
#line 2785 "token.y"
    {
        (yyval.object) = construct_rewrite_stmt( (yyvsp[(2) - (5)].idValWithOpt), (yyvsp[(3) - (5)].varVal), (yyvsp[(4) - (5)].invalid_action) );
    ;}
    break;

  case 764:
#line 2796 "token.y"
    { (yyval.object) = construct_goback_stmt(); ;}
    break;

  case 765:
#line 2802 "token.y"
    { (yyval.object) = construct_purge_stmt((yyvsp[(2) - (2)].idValWithOpt)); ;}
    break;

  case 766:
#line 2808 "token.y"
    {
        (yyval.object) = construct_release_stmt((yyvsp[(2) - (3)].idValWithOpt), (yyvsp[(3) - (3)].xvaldatatype));
    ;}
    break;

  case 767:
#line 2813 "token.y"
    { (yyval.xvaldatatype) = NULL; ;}
    break;

  case 768:
#line 2814 "token.y"
    {
        (yyval.xvaldatatype) = (yyvsp[(2) - (2)].xvaldatatype);
    ;}
    break;

  case 769:
#line 2821 "token.y"
    {
        (yyval.object) = construct_unlock_stmt((yyvsp[(2) - (3)].idValWithOpt));
    ;}
    break;

  case 772:
#line 2833 "token.y"
    { (yyval.object) = construct_cancel_stmt((yyvsp[(2) - (2)].itemList)); ;}
    break;

  case 773:
#line 2839 "token.y"
    { (yyval.object) = construct_continue_stmt(); ;}
    break;

  case 774:
#line 2845 "token.y"
    {
        (yyval.object) = construct_delete_stmt((yyvsp[(2) - (3)].del_simple));
    ;}
    break;

  case 775:
#line 2848 "token.y"
    {
        (yyval.object) = construct_delete_multi_stmt((yyvsp[(2) - (3)].object));
    ;}
    break;

  case 776:
#line 2854 "token.y"
    {
        (yyval.del_simple) = construct_del_simple((yyvsp[(1) - (3)].idValWithOpt), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].invalid_action));
    ;}
    break;

  case 777:
#line 2859 "token.y"
    {
        (yyval.object) = (yyvsp[(2) - (2)].itemList);
    ;}
    break;

  case 780:
#line 2875 "token.y"
    {
        (yyval.object) = construct_call_stmt((yyvsp[(3) - (7)].xvaldatatype), (yyvsp[(4) - (7)].calldetails), (yyvsp[(5) - (7)].object), (yyvsp[(6) - (7)].esc_excp));
    ;}
    break;

  case 781:
#line 2881 "token.y"
    { (yyval.calldetails) = NULL; ;}
    break;

  case 782:
#line 2884 "token.y"
    {
        (yyval.calldetails) = construct_call_details((yyvsp[(2) - (4)].object), (yyvsp[(3) - (4)].idValWithOpt), (yyvsp[(4) - (4)].idValWithOpt));
    ;}
    break;

  case 783:
#line 2889 "token.y"
    { (yyval.idValWithOpt) = NULL; ;}
    break;

  case 784:
#line 2890 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(2) - (2)].idValWithOpt); ;}
    break;

  case 785:
#line 2893 "token.y"
    { (yyval.idValWithOpt) = NULL; ;}
    break;

  case 786:
#line 2894 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(2) - (2)].idValWithOpt); ;}
    break;

  case 787:
#line 2897 "token.y"
    {
        (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].callusingitem));
    ;}
    break;

  case 788:
#line 2900 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *)(yyvsp[(3) - (3)].callusingitem));
    ;}
    break;

  case 789:
#line 2903 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].callusingitem));
    ;}
    break;

  case 790:
#line 2909 "token.y"
    { (yyval.callusingitem) = (yyvsp[(1) - (1)].callusingitem); ;}
    break;

  case 791:
#line 2910 "token.y"
    { (yyval.callusingitem) = (yyvsp[(1) - (1)].callusingitem); ;}
    break;

  case 792:
#line 2911 "token.y"
    { (yyval.callusingitem) = cons_call_using_item(CB_CALL_BY_DEFAULT, (yyvsp[(1) - (1)].object)); ;}
    break;

  case 793:
#line 2915 "token.y"
    {
        (yyval.callusingitem) = cons_call_using_item(CB_CALL_BY_REF, (yyvsp[(3) - (3)].object));
    ;}
    break;

  case 794:
#line 2920 "token.y"
    {
        (yyval.callusingitem) = cons_call_using_item(CB_CALL_BY_CONTENT, (yyvsp[(3) - (3)].object));
    ;}
    break;

  case 795:
#line 2925 "token.y"
    {
        (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].callitem));
    ;}
    break;

  case 796:
#line 2928 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *)(yyvsp[(3) - (3)].callitem));
    ;}
    break;

  case 797:
#line 2931 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].callitem));
    ;}
    break;

  case 798:
#line 2936 "token.y"
    { (yyval.callitem) = construct_call_item(1, (yyvsp[(1) - (1)].varVal)); ;}
    break;

  case 799:
#line 2937 "token.y"
    { (yyval.callitem) = construct_call_item(2, NULL); ;}
    break;

  case 802:
#line 2945 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (1)].object);
    ;}
    break;

  case 803:
#line 2951 "token.y"
    {
        (yyval.object) = construct_action_pair((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object));
    ;}
    break;

  case 804:
#line 2956 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 805:
#line 2957 "token.y"
    {
        (yyval.object) = (yyvsp[(3) - (3)].object);
    ;}
    break;

  case 806:
#line 2962 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 807:
#line 2963 "token.y"
    {
        (yyval.object) = (yyvsp[(4) - (4)].object);
    ;}
    break;

  case 808:
#line 2976 "token.y"
    {
        (yyval.object) = construct_string_stmt((yyvsp[(2) - (7)].object), (yyvsp[(4) - (7)].idValWithOpt), (yyvsp[(5) - (7)].idValWithOpt), (yyvsp[(6) - (7)].object));
    ;}
    break;

  case 809:
#line 2981 "token.y"
    {
        (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].str_arg));
    ;}
    break;

  case 810:
#line 2984 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].str_arg));
    ;}
    break;

  case 811:
#line 2989 "token.y"
    {
        (yyval.str_arg) = construct_str_argument((yyvsp[(1) - (4)].itemList), (yyvsp[(4) - (4)].xvaldatatype));
    ;}
    break;

  case 812:
#line 2993 "token.y"
    { (yyval.xvaldatatype) = getXval(CB_IDENTIFIER, (yyvsp[(1) - (1)].idValWithOpt), NULL); ;}
    break;

  case 813:
#line 2994 "token.y"
    { (yyval.xvaldatatype) = getXval(CB_LITERAL, NULL, (yyvsp[(1) - (1)].literalval)); ;}
    break;

  case 814:
#line 2995 "token.y"
    { (yyval.xvaldatatype) = getXval(CB_SIZE, NULL, NULL); ;}
    break;

  case 815:
#line 2998 "token.y"
    { (yyval.idValWithOpt) = NULL; ;}
    break;

  case 816:
#line 2999 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(3) - (3)].idValWithOpt); ;}
    break;

  case 819:
#line 3014 "token.y"
    {
        (yyval.object) = construct_unstring_stmt((yyvsp[(2) - (8)].idValWithOpt), (yyvsp[(3) - (8)].delimclause), (yyvsp[(4) - (8)].object), (yyvsp[(5) - (8)].idValWithOpt), (yyvsp[(6) - (8)].idValWithOpt), (yyvsp[(7) - (8)].object));
    ;}
    break;

  case 820:
#line 3019 "token.y"
    {
        (yyval.delimclause) = construct_delim_clause((yyvsp[(3) - (5)].ival), (yyvsp[(4) - (5)].varVal), (yyvsp[(5) - (5)].object));
    ;}
    break;

  case 821:
#line 3024 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 822:
#line 3025 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (1)].object);
    ;}
    break;

  case 823:
#line 3030 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].oritem)); ;}
    break;

  case 824:
#line 3031 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].oritem));
    ;}
    break;

  case 825:
#line 3037 "token.y"
    {
        (yyval.oritem) = construct_or_item((yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].varVal));
    ;}
    break;

  case 826:
#line 3042 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 827:
#line 3043 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 828:
#line 3046 "token.y"
    { (yyval.object) = (yyvsp[(2) - (2)].object); ;}
    break;

  case 829:
#line 3049 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].intoclause)); ;}
    break;

  case 830:
#line 3050 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].intoclause));
    ;}
    break;

  case 831:
#line 3053 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *) (yyvsp[(3) - (3)].intoclause));
    ;}
    break;

  case 832:
#line 3060 "token.y"
    {
        (yyval.intoclause) = construct_into_clause((yyvsp[(1) - (3)].idValWithOpt), (yyvsp[(2) - (3)].idValWithOpt), (yyvsp[(3) - (3)].idValWithOpt)); 
    ;}
    break;

  case 833:
#line 3065 "token.y"
    { (yyval.idValWithOpt) = NULL; ;}
    break;

  case 834:
#line 3066 "token.y"
    {
        (yyval.idValWithOpt) = (yyvsp[(3) - (3)].idValWithOpt);
    ;}
    break;

  case 835:
#line 3071 "token.y"
    { (yyval.idValWithOpt) = NULL; ;}
    break;

  case 836:
#line 3072 "token.y"
    {
        (yyval.idValWithOpt) = (yyvsp[(3) - (3)].idValWithOpt); 
    ;}
    break;

  case 837:
#line 3077 "token.y"
    { (yyval.idValWithOpt) = NULL; ;}
    break;

  case 838:
#line 3078 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(3) - (3)].idValWithOpt); ;}
    break;

  case 841:
#line 3091 "token.y"
    {
        (yyval.object) = cons_use_stmt((yyvsp[(2) - (8)].ival), (yyvsp[(5) - (8)].ival), (yyvsp[(8) - (8)].useprocopt));
    ;}
    break;

  case 842:
#line 3094 "token.y"
    {
        (yyval.object) = cons_use_DBG_stmt((yyvsp[(5) - (5)].object));
    ;}
    break;

  case 843:
#line 3098 "token.y"
    {
        (yyval.object) = cons_use_after((yyvsp[(2) - (10)].ival), (yyvsp[(5) - (10)].ival), (yyvsp[(6) - (10)].ival), (yyvsp[(10) - (10)].useprocopt));
    ;}
    break;

  case 844:
#line 3101 "token.y"
    {
        (yyval.object) = cons_use_bef_reporting((yyvsp[(5) - (5)].idValWithOpt));
    ;}
    break;

  case 845:
#line 3105 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 846:
#line 3106 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 847:
#line 3108 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 848:
#line 3109 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 849:
#line 3112 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 850:
#line 3113 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 851:
#line 3114 "token.y"
    { (yyval.ival) = 2; ;}
    break;

  case 852:
#line 3115 "token.y"
    { (yyval.ival) = 3; ;}
    break;

  case 853:
#line 3118 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].useonitem)); ;}
    break;

  case 854:
#line 3119 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].useonitem));
    ;}
    break;

  case 855:
#line 3124 "token.y"
    { (yyval.useonitem) = cons_on_item(CB_USEITEM_IDLIST, (yyvsp[(1) - (1)].idValWithOpt)); ;}
    break;

  case 856:
#line 3125 "token.y"
    { (yyval.useonitem) = cons_on_item(CB_USEITEM_ALLPROC, NULL); ;}
    break;

  case 857:
#line 3126 "token.y"
    { 
            (yyval.useonitem) = cons_on_item(CB_USEITEM_ALLREF_OFID, (yyvsp[(4) - (4)].idValWithOpt)); 
    ;}
    break;

  case 858:
#line 3130 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 859:
#line 3131 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 860:
#line 3133 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 861:
#line 3134 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 862:
#line 3137 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 863:
#line 3138 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 864:
#line 3139 "token.y"
    { (yyval.ival) = 2; ;}
    break;

  case 865:
#line 3142 "token.y"
    { (yyval.ival) = CB_ERROR; ;}
    break;

  case 866:
#line 3143 "token.y"
    { (yyval.ival) = CB_EXCEPTION; ;}
    break;

  case 867:
#line 3146 "token.y"
    { (yyval.useprocopt) = construct_use_proc_option(1, (yyvsp[(1) - (1)].idValWithOpt), 0); ;}
    break;

  case 868:
#line 3147 "token.y"
    { (yyval.useprocopt) = construct_use_proc_option(2, NULL, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 869:
#line 3153 "token.y"
    {
        /* simple and alterable */
        (yyval.object) = construct_goto_stmt1((yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 870:
#line 3157 "token.y"
    {
        /* depending on */
        (yyval.object) = construct_goto_stmt2((yyvsp[(3) - (6)].object), (yyvsp[(6) - (6)].idValWithOpt));
    ;}
    break;

  case 871:
#line 3163 "token.y"
    { (yyval.sval) = NULL;  /* this is funny */ ;}
    break;

  case 872:
#line 3164 "token.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 873:
#line 3167 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].sval)); ;}
    break;

  case 874:
#line 3168 "token.y"
    {
        (yyval.object) = addto_generic_list( (yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].sval));
    ;}
    break;

  case 875:
#line 3176 "token.y"
    {
        (yyval.object) = construct_alter_stmt((yyvsp[(2) - (2)].object));
    ;}
    break;

  case 876:
#line 3181 "token.y"
    {
        (yyval.object) = start_generic_list((yyvsp[(1) - (1)].strpair));
    ;}
    break;

  case 877:
#line 3184 "token.y"
    {
        (yyval.object) = addto_generic_list( (yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].strpair));
    ;}
    break;

  case 878:
#line 3189 "token.y"
    {
        (yyval.strpair) = construct_strpair((yyvsp[(1) - (4)].sval), (yyvsp[(4) - (4)].sval));
    ;}
    break;

  case 881:
#line 3200 "token.y"
    { (yyval.object) = construct_exit_stmt(CB_EX_SIMPLE, 0); ;}
    break;

  case 882:
#line 3201 "token.y"
    { (yyval.object) = construct_exit_stmt(CB_EX_PROGRAM, 0); ;}
    break;

  case 883:
#line 3202 "token.y"
    { (yyval.object) = construct_exit_stmt(CB_EX_PERFORM, (yyvsp[(3) - (3)].ival)); ;}
    break;

  case 884:
#line 3203 "token.y"
    { (yyval.object) = construct_exit_stmt(CB_EX_PARAGRAPH, 0); ;}
    break;

  case 885:
#line 3204 "token.y"
    { (yyval.object) = construct_exit_stmt(CB_EX_SECTION, 0); ;}
    break;

  case 886:
#line 3207 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 887:
#line 3208 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 888:
#line 3215 "token.y"
    {
        (yyval.object) = construct_perform_stmt((yyvsp[(2) - (2)].object), NULL, NULL);
    ;}
    break;

  case 889:
#line 3222 "token.y"
    { 
        (yyval.object) = construct_perform_stmt((yyvsp[(2) - (4)].object), (yyvsp[(3) - (4)].itemList), NULL);
    ;}
    break;

  case 890:
#line 3230 "token.y"
    { 
        (yyval.object) = construct_perform_stmt(NULL, (yyvsp[(2) - (4)].itemList), (yyvsp[(3) - (4)].object));
    ;}
    break;

  case 891:
#line 3235 "token.y"
    { (yyval.itemList) = NULL; ;}
    break;

  case 892:
#line 3236 "token.y"
    {
        (yyval.itemList) = (yyvsp[(1) - (1)].itemList);
    ;}
    break;

  case 893:
#line 3241 "token.y"
    {
        (yyval.itemList) = start_perform_options_list((yyvsp[(1) - (1)].perf_opt));
    ;}
    break;

  case 894:
#line 3244 "token.y"
    {
        dbg_print(DBG_TRACE, "In the perform option with the statements...\n");
        (yyval.itemList) = addto_perform_options_list((yyvsp[(1) - (2)].itemList), (yyvsp[(2) - (2)].perf_opt));
    ;}
    break;

  case 895:
#line 3251 "token.y"
    {
        (yyval.object) = NULL;
    ;}
    break;

  case 896:
#line 3255 "token.y"
    { 
        (yyval.object) = (yyvsp[(1) - (1)].object);
    ;}
    break;

  case 899:
#line 3268 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].pnames); ;}
    break;

  case 900:
#line 3271 "token.y"
    {
        (yyval.pnames) = construct_pnames(0, (yyvsp[(1) - (1)].sval), NULL);
    ;}
    break;

  case 901:
#line 3274 "token.y"
    {
        (yyval.pnames) = construct_pnames(1, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
    ;}
    break;

  case 902:
#line 3279 "token.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); ;}
    break;

  case 903:
#line 3282 "token.y"
    {
        (yyval.perf_opt) = construct_perf_opt(CB_PO_FOREVER, 0, NULL, CB_ABSENT, NULL, NULL);
    ;}
    break;

  case 904:
#line 3285 "token.y"
    { /* This is the issue, you may get variable as well*/
        (yyval.perf_opt) = construct_perf_opt(CB_PO_NUMBER_TIMES, (yyvsp[(1) - (2)].ival), NULL, CB_ABSENT, NULL, NULL);
    ;}
    break;

  case 905:
#line 3288 "token.y"
    {
        (yyval.perf_opt) = construct_perf_opt(CB_PO_ID_TIMES, 0, (yyvsp[(1) - (2)].idValWithOpt), CB_ABSENT, NULL, NULL);
    ;}
    break;

  case 906:
#line 3291 "token.y"
    { 
        dbg_print(DBG_TRACE, "perform_options: until **********\n");
        dbg_print(DBG_TRACE, "DUMPING CONDITION *************uncomment the dump.\n");
        /* dump_condition($3); */
        dbg_print(DBG_TRACE, "\nDUMPING CONDITION *************\n");
        (yyval.perf_opt) = construct_perf_opt(CB_PO_UNTIL, 0, NULL, (yyvsp[(1) - (3)].ival), (yyvsp[(3) - (3)].cond), NULL);
    ;}
    break;

  case 907:
#line 3298 "token.y"
    {
        (yyval.perf_opt) = construct_perf_opt(CB_PO_VARYING_UNTIL, 0, NULL, (yyvsp[(1) - (3)].ival), NULL, (yyvsp[(3) - (3)].itemList));
    ;}
    break;

  case 908:
#line 3303 "token.y"
    { (yyval.ival) = CB_ABSENT; ;}
    break;

  case 909:
#line 3304 "token.y"
    {
        (yyval.ival) = (yyvsp[(3) - (3)].ival);
    ;}
    break;

  case 910:
#line 3309 "token.y"
    {
        (yyval.itemList) = start_perf_opt_varying_list( (yyvsp[(1) - (1)].perf_varying) );
    ;}
    break;

  case 911:
#line 3312 "token.y"
    {
        (yyval.itemList) = addto_perf_opt_varying_list( (yyvsp[(1) - (3)].itemList), (yyvsp[(3) - (3)].perf_varying));
    ;}
    break;

  case 912:
#line 3317 "token.y"
    {
        (yyval.perf_varying) = construct_perf_varying_item( (yyvsp[(1) - (7)].varVal), (yyvsp[(3) - (7)].varVal), (yyvsp[(5) - (7)].varVal), (yyvsp[(7) - (7)].cond));
    ;}
    break;

  case 913:
#line 3322 "token.y"
    {
        (yyval.ival) = CB_BEFORE;
    ;}
    break;

  case 914:
#line 3325 "token.y"
    { 
        dbg_print(DBG_TRACE, "before_after: AFTER\n");
        (yyval.ival) = CB_AFTER;
    ;}
    break;

  case 915:
#line 3335 "token.y"
    { (yyval.object) = (yyvsp[(2) - (2)].object); ;}
    break;

  case 916:
#line 3338 "token.y"
    { (yyval.object) = construct_stop_stmt(CB_SO_STOP_RUN, NULL); ;}
    break;

  case 917:
#line 3339 "token.y"
    { (yyval.object) = construct_stop_stmt(CB_SO_STOP_RETURNING, (yyvsp[(3) - (3)].xvaldatatype)); ;}
    break;

  case 918:
#line 3340 "token.y"
    { (yyval.object) = construct_stop_stmt(CB_SO_STOP_GIVING, (yyvsp[(3) - (3)].xvaldatatype)); ;}
    break;

  case 919:
#line 3341 "token.y"
    { (yyval.object) = construct_stop_stmt(CB_SO_STOP_VAL, (yyvsp[(1) - (1)].xvaldatatype)); ;}
    break;

  case 920:
#line 3361 "token.y"
    {
        (yyval.object) = construct_open_stmt((yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].object));
    ;}
    break;

  case 921:
#line 3366 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 922:
#line 3367 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 923:
#line 3370 "token.y"
    {
        (yyval.object) = create_open_file_list((yyvsp[(1) - (1)].open_file_type));
    ;}
    break;

  case 924:
#line 3373 "token.y"
    {
        (yyval.object) = addto_open_file_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].open_file_type));
    ;}
    break;

  case 925:
#line 3379 "token.y"
    {
        (yyval.open_file_type) = construct_open_file_type((yyvsp[(1) - (2)].ival), (yyvsp[(2) - (2)].object));
    ;}
    break;

  case 926:
#line 3384 "token.y"
    { (yyval.ival) = CB_FT_INPUT; ;}
    break;

  case 927:
#line 3385 "token.y"
    { (yyval.ival) = CB_FT_OUTPUT; ;}
    break;

  case 928:
#line 3386 "token.y"
    { (yyval.ival) = CB_FT_I_O; ;}
    break;

  case 929:
#line 3387 "token.y"
    { (yyval.ival) = CB_FT_I_O; ;}
    break;

  case 930:
#line 3388 "token.y"
    { (yyval.ival) = CB_FT_EXTEND; ;}
    break;

  case 931:
#line 3391 "token.y"
    { (yyval.object) = create_file_name_list((yyvsp[(1) - (1)].file_name_item)) ; ;}
    break;

  case 932:
#line 3392 "token.y"
    {
        (yyval.object) = addto_file_name_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].file_name_item)); 
    ;}
    break;

  case 933:
#line 3398 "token.y"
    {
        (yyval.file_name_item) = construct_file_name((yyvsp[(1) - (2)].idValWithOpt), (yyvsp[(2) - (2)].object));
    ;}
    break;

  case 934:
#line 3403 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(1) - (1)].idValWithOpt); ;}
    break;

  case 935:
#line 3407 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 936:
#line 3408 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (1)].object);
    ;}
    break;

  case 937:
#line 3413 "token.y"
    { (yyval.object) = create_int_list((yyvsp[(1) - (1)].ival)); ;}
    break;

  case 938:
#line 3414 "token.y"
    {
        (yyval.object) = addto_int_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].ival));
    ;}
    break;

  case 939:
#line 3419 "token.y"
    { (yyval.ival) = CB_FO_WITH_LOCK; ;}
    break;

  case 940:
#line 3420 "token.y"
    { (yyval.ival) = CB_FO_WITH_NO_REWIND; ;}
    break;

  case 941:
#line 3421 "token.y"
    { (yyval.ival) = CV_FO_REVERSED; ;}
    break;

  case 942:
#line 3428 "token.y"
    {
        (yyval.object) = construct_close_stmt((yyvsp[(2) - (2)].object));
    ;}
    break;

  case 943:
#line 3433 "token.y"
    {
        (yyval.object) = start_close_file_list((yyvsp[(1) - (1)].close_file_item));
    ;}
    break;

  case 944:
#line 3436 "token.y"
    {
        (yyval.object) = addto_close_file_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].close_file_item));
    ;}
    break;

  case 945:
#line 3439 "token.y"
    {
        (yyval.object) = addto_close_file_list((yyvsp[(1) - (3)].object), (yyvsp[(3) - (3)].close_file_item));
    ;}
    break;

  case 946:
#line 3445 "token.y"
    {
        (yyval.close_file_item) = construct_close_file_item((yyvsp[(1) - (2)].idValWithOpt), (yyvsp[(2) - (2)].ival));
    ;}
    break;

  case 947:
#line 3450 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 948:
#line 3451 "token.y"
    { (yyval.ival) = CB_CFO_REEL_NOREWIND; ;}
    break;

  case 949:
#line 3452 "token.y"
    { (yyval.ival) = CB_CFO_UNIT_NOREWIND; ;}
    break;

  case 950:
#line 3454 "token.y"
    { (yyval.ival) = CB_CFO_REEL_REMOVAL; ;}
    break;

  case 951:
#line 3455 "token.y"
    { (yyval.ival) = CB_CFO_UNIT_REMOVAL; ;}
    break;

  case 952:
#line 3457 "token.y"
    { (yyval.ival) = CB_CFO_NOREWIND; ;}
    break;

  case 953:
#line 3458 "token.y"
    { (yyval.ival) = CB_CFO_LOCK; ;}
    break;

  case 954:
#line 3474 "token.y"
    {
         /* this is for sequential access files */
         (yyval.object) = construct_read_seq_stmt((yyvsp[(1) - (6)].idValWithOpt), (yyvsp[(2) - (6)].ival), (yyvsp[(3) - (6)].ival), (yyvsp[(4) - (6)].idValWithOpt), (yyvsp[(5) - (6)].atend_action));
    ;}
    break;

  case 955:
#line 3485 "token.y"
    {
        /* random access file */
        dbg_print(DBG_TRACE, "reached the random access read stmt...\n");
        (yyval.object) = construct_read_random_stmt((yyvsp[(1) - (7)].idValWithOpt), (yyvsp[(2) - (7)].ival), (yyvsp[(3) - (7)].ival), (yyvsp[(4) - (7)].idValWithOpt), (yyvsp[(5) - (7)].idValWithOpt), (yyvsp[(6) - (7)].invalid_action));
    ;}
    break;

  case 956:
#line 3492 "token.y"
    {  (yyval.idValWithOpt) = (yyvsp[(2) - (2)].idValWithOpt); ;}
    break;

  case 957:
#line 3495 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 958:
#line 3498 "token.y"
    { (yyval.ival) = CB_UNSPECIFIED;;}
    break;

  case 959:
#line 3499 "token.y"
    { (yyval.ival) = CB_UNSPECIFIED; ;}
    break;

  case 960:
#line 3500 "token.y"
    { (yyval.ival) = CB_NEXT; ;}
    break;

  case 961:
#line 3501 "token.y"
    { (yyval.ival) = CB_PREVIOUS; ;}
    break;

  case 962:
#line 3504 "token.y"
    { (yyval.ival) = CB_UNSPECIFIED; ;}
    break;

  case 963:
#line 3505 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 964:
#line 3508 "token.y"
    { (yyval.ival) = CB_RR_LOCK; ;}
    break;

  case 965:
#line 3509 "token.y"
    { (yyval.ival) = CB_RR_NO_LOCK; ;}
    break;

  case 966:
#line 3512 "token.y"
    { (yyval.idValWithOpt) = NULL; ;}
    break;

  case 967:
#line 3513 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(2) - (2)].idValWithOpt); ;}
    break;

  case 968:
#line 3516 "token.y"
    { (yyval.idValWithOpt) = NULL; ;}
    break;

  case 969:
#line 3517 "token.y"
    {
        (yyval.idValWithOpt) = (yyvsp[(3) - (3)].idValWithOpt); 
    ;}
    break;

  case 970:
#line 3522 "token.y"
    {
        (yyval.atend_action) = (yyvsp[(1) - (1)].atend_action);
    ;}
    break;

  case 971:
#line 3528 "token.y"
    {
        (yyval.atend_action) = construct_at_end_clause((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object));
    ;}
    break;

  case 972:
#line 3533 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 973:
#line 3534 "token.y"
    { 
        dbg_print(DBG_TRACE, "reached here ...\n"); 
        (yyval.object) = (yyvsp[(3) - (3)].object); 
    ;}
    break;

  case 974:
#line 3540 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 975:
#line 3541 "token.y"
    { (yyval.object) = (yyvsp[(4) - (4)].object); ;}
    break;

  case 978:
#line 3550 "token.y"
    {   
        /* sequential */
        dbg_print(DBG_TRACE, "write-sequential ...\n"); 
        (yyval.object) = construct_write_stmt((yyvsp[(1) - (3)].idgname), (yyvsp[(2) - (3)].advn_clause));
    ;}
    break;

  case 979:
#line 3555 "token.y"
    { 
        /* relative and indexed */
        dbg_print(DBG_TRACE, "write-relative and indexed ...\n"); 
        (yyval.object) = construct_write_stmt2((yyvsp[(1) - (3)].idgname), (yyvsp[(2) - (3)].invalid_action));
    ;}
    break;

  case 980:
#line 3563 "token.y"
    {
        (yyval.idgname) = gen_id_gname((yyvsp[(2) - (3)].idValWithOpt), (yyvsp[(3) - (3)].varVal));
    ;}
    break;

  case 981:
#line 3568 "token.y"
    { (yyval.varVal) = NULL; ;}
    break;

  case 982:
#line 3569 "token.y"
    { (yyval.varVal) = (yyvsp[(2) - (2)].varVal); ;}
    break;

  case 985:
#line 3575 "token.y"
    { (yyval.invalid_action) = NULL; ;}
    break;

  case 986:
#line 3576 "token.y"
    { (yyval.invalid_action) = (yyvsp[(1) - (1)].invalid_action); ;}
    break;

  case 987:
#line 3580 "token.y"
    {
        (yyval.invalid_action) = construct_invalid_key_clause((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object));
    ;}
    break;

  case 988:
#line 3585 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 989:
#line 3586 "token.y"
    {
        (yyval.object) = (yyvsp[(3) - (3)].object); 
    ;}
    break;

  case 990:
#line 3591 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 991:
#line 3592 "token.y"
    {
        (yyval.object) = (yyvsp[(4) - (4)].object);
    ;}
    break;

  case 992:
#line 3598 "token.y"
    {
        (yyval.advn_clause)->end_of_page = (yyvsp[(2) - (2)].object);   /* this is in the struct _advaicing_clause */
    ;}
    break;

  case 993:
#line 3603 "token.y"
    { (yyval.advn_clause) = conemp_advancing_clause(); ;}
    break;

  case 994:
#line 3605 "token.y"
    { 
            dbg_print(DBG_TRACE, "found before after advancing.\n");
            (yyval.advn_clause) = construct_advancing_clause((yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].xvaldatatype));
      ;}
    break;

  case 995:
#line 3611 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 996:
#line 3612 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 997:
#line 3616 "token.y"
    {              /* line_clause */ /* xval should retuen either INTEGER or identifier */
        (yyval.xvaldatatype) = (yyvsp[(1) - (2)].xvaldatatype);
        (yyval.xvaldatatype)->usetype = CB_LINES;
    ;}
    break;

  case 998:
#line 3620 "token.y"
    { /* line_on_next_page */
        (yyval.xvaldatatype) = (yyvsp[(3) - (6)].xvaldatatype); (yyval.xvaldatatype)->usetype = CB_LINE_NEXTPAGE;
    ;}
    break;

  case 999:
#line 3623 "token.y"
    {              /* page_clause */ 
        /* check this. This may fail if not implemented correctly... */
        (yyval.xvaldatatype) = getXval2(CB_IDENTIFIER, (yyvsp[(1) - (1)].idValWithOpt), 0);
        (yyval.xvaldatatype)->usetype = CB_IDENTIFIER;
    ;}
    break;

  case 1000:
#line 3628 "token.y"
    {                     /* page_clause */
        (yyval.xvaldatatype) = getXval2(CB_PAGES, NULL, 0);
    ;}
    break;

  case 1004:
#line 3638 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 1005:
#line 3642 "token.y"
    {
        (yyval.object) = construct_action_pair((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object));
    ;}
    break;

  case 1006:
#line 3647 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 1007:
#line 3648 "token.y"
    {
        (yyval.object) = (yyvsp[(3) - (3)].object); 
    ;}
    break;

  case 1008:
#line 3653 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 1009:
#line 3654 "token.y"
    {
        (yyval.object) = (yyvsp[(4) - (4)].object); 
    ;}
    break;

  case 1010:
#line 3667 "token.y"
    {
        (yyval.object) = construct_sort_stmt( (yyvsp[(2) - (7)].idValWithOpt), (yyvsp[(3) - (7)].object), (yyvsp[(4) - (7)].ival), (yyvsp[(5) - (7)].idValWithOpt), (yyvsp[(6) - (7)].fileIOclause), (yyvsp[(7) - (7)].fileIOclause));
    ;}
    break;

  case 1011:
#line 3672 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].onkey_clause)); ;}
    break;

  case 1012:
#line 3673 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].onkey_clause));
    ;}
    break;

  case 1013:
#line 3678 "token.y"
    {
        (yyval.onkey_clause) = construct_on_key_clause(1, (yyvsp[(4) - (4)].itemList));
    ;}
    break;

  case 1014:
#line 3681 "token.y"
    {
        (yyval.onkey_clause) = construct_on_key_clause(2, (yyvsp[(4) - (4)].itemList));
    ;}
    break;

  case 1015:
#line 3686 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 1016:
#line 3687 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 1017:
#line 3690 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 1018:
#line 3691 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 1019:
#line 3694 "token.y"
    { (yyval.idValWithOpt) = NULL; ;}
    break;

  case 1020:
#line 3695 "token.y"
    {
        (yyval.idValWithOpt) = (yyvsp[(4) - (4)].idValWithOpt); 
    ;}
    break;

  case 1021:
#line 3700 "token.y"
    {
        (yyval.fileIOclause) = construct_file_io_clause(CB_FT_INPUT, (yyvsp[(4) - (5)].sval), (yyvsp[(5) - (5)].sval), NULL);
    ;}
    break;

  case 1022:
#line 3703 "token.y"
    {
        (yyval.fileIOclause) = construct_file_io_clause(CB_FT_INPUT, NULL, NULL, (yyvsp[(2) - (2)].itemList));
    ;}
    break;

  case 1023:
#line 3708 "token.y"
    { (yyval.sval) = NULL; ;}
    break;

  case 1024:
#line 3709 "token.y"
    {
        (yyval.sval) = (yyvsp[(2) - (2)].sval);
    ;}
    break;

  case 1025:
#line 3714 "token.y"
    {
        (yyval.fileIOclause) = construct_file_io_clause(CB_FT_OUTPUT, (yyvsp[(4) - (5)].sval), (yyvsp[(5) - (5)].sval), NULL);
    ;}
    break;

  case 1026:
#line 3717 "token.y"
    {
        (yyval.fileIOclause) = construct_file_io_clause(CB_FT_OUTPUT, NULL, NULL, (yyvsp[(2) - (2)].itemList));
    ;}
    break;

  case 1027:
#line 3726 "token.y"
    {
        (yyval.object) = construct_return_stmt((yyvsp[(2) - (6)].idValWithOpt), (yyvsp[(3) - (6)].ival), (yyvsp[(4) - (6)].xvaldatatype), (yyvsp[(5) - (6)].atend_action));
    ;}
    break;

  case 1028:
#line 3731 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 1029:
#line 3732 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 1030:
#line 3735 "token.y"
    { (yyval.xvaldatatype) = NULL; ;}
    break;

  case 1031:
#line 3736 "token.y"
    {    /* identifier or literal */
        (yyval.xvaldatatype) = (yyvsp[(2) - (2)].xvaldatatype);
    ;}
    break;

  case 1034:
#line 3755 "token.y"
    {
        (yyval.object) = cons_set_stmt((yyvsp[(2) - (2)].object));
    ;}
    break;

  case 1035:
#line 3760 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].setclause)); ;}
    break;

  case 1036:
#line 3761 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].setclause));
    ;}
    break;

  case 1037:
#line 3766 "token.y"
    {
        (yyval.setclause) = cons_set_clause((yyvsp[(1) - (3)].object), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].setitem));
    ;}
    break;

  case 1038:
#line 3771 "token.y"
    { (yyval.ival) = CB_SET_TO; ;}
    break;

  case 1039:
#line 3772 "token.y"
    { (yyval.ival) = CB_SET_UPBY; ;}
    break;

  case 1040:
#line 3773 "token.y"
    { (yyval.ival) = CB_SET_DOWNBY; ;}
    break;

  case 1041:
#line 3776 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].setitem)); ;}
    break;

  case 1042:
#line 3777 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].setitem));
    ;}
    break;

  case 1043:
#line 3782 "token.y"
    { (yyval.setitem) = cons_set_item(CB_SET_XVAL, (yyvsp[(1) - (1)].xvaldatatype)); ;}
    break;

  case 1044:
#line 3783 "token.y"
    { (yyval.setitem) = cons_set_item(CB_SET_ON, NULL); ;}
    break;

  case 1045:
#line 3784 "token.y"
    { (yyval.setitem) = cons_set_item(CB_SET_OFF, NULL); ;}
    break;

  case 1046:
#line 3785 "token.y"
    { (yyval.setitem) = cons_set_item(CB_SET_TRUE, NULL); ;}
    break;

  case 1047:
#line 3786 "token.y"
    { (yyval.setitem) = cons_set_item(CB_SET_FALSE, NULL); ;}
    break;

  case 1048:
#line 3787 "token.y"
    { (yyval.setitem) = cons_set_item(CB_SET_NULL, NULL); ;}
    break;

  case 1049:
#line 3796 "token.y"
    { 
        dbg_print(DBG_TRACE, "display_statement: sysname\n"); 
        (yyval.object) = (yyvsp[(1) - (1)].object);
    ;}
    break;

  case 1050:
#line 3800 "token.y"
    { 
        dbg_print(DBG_TRACE, "display_statement: termio\n"); 
        (yyval.object) = (yyvsp[(1) - (1)].object);
    ;}
    break;

  case 1051:
#line 3804 "token.y"
    { 
        dbg_print(DBG_TRACE, "display_statement: screen name\n"); 
        (yyval.object) = (yyvsp[(1) - (1)].object);
    ;}
    break;

  case 1052:
#line 3815 "token.y"
    {
        (yyval.object) = construct_display_stmt_sysname( (yyvsp[(2) - (4)].object), (yyvsp[(3) - (4)].xvaldatatype), (yyvsp[(4) - (4)].ival) );
    ;}
    break;

  case 1053:
#line 3820 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (1)].itemList);
    ;}
    break;

  case 1054:
#line 3836 "token.y"
    { (yyval.xvaldatatype) = NULL; ;}
    break;

  case 1055:
#line 3837 "token.y"
    {   /* this is either mnemonic name or low-volume-io name */
        (yyval.xvaldatatype) = (yyvsp[(2) - (2)].xvaldatatype); 
    ;}
    break;

  case 1056:
#line 3842 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 1057:
#line 3843 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 1058:
#line 3848 "token.y"
    {
        (yyval.object) = construct_display_stmt_term((yyvsp[(2) - (2)].object));
    ;}
    break;

  case 1059:
#line 3853 "token.y"
    {
        (yyval.object) = start_disp_item_list((yyvsp[(1) - (1)].disp_item));
    ;}
    break;

  case 1060:
#line 3856 "token.y"
    {
        (yyval.object) = addto_disp_item_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].disp_item));
    ;}
    break;

  case 1061:
#line 3862 "token.y"
    { /* void ptr */ 
        (yyval.disp_item) = construct_disp_item((yyvsp[(1) - (2)].xvaldatatype), (yyvsp[(2) - (2)].object));
    ;}
    break;

  case 1062:
#line 3867 "token.y"
    {  /* this is xval */
        (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype);
    ;}
    break;

  case 1063:
#line 3872 "token.y"
    { (yyval.object) = NULL; ;}
    break;

  case 1064:
#line 3873 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (1)].object);
    ;}
    break;

  case 1065:
#line 3878 "token.y"
    {
        (yyval.object) = start_with_cl_item_list((yyvsp[(1) - (1)].withclause));
    ;}
    break;

  case 1066:
#line 3881 "token.y"
    {
        (yyval.object) = addto_with_cl_item_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].withclause));
    ;}
    break;

  case 1067:
#line 3886 "token.y"
    {
        (yyval.withclause) = construct_with_clause((yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].xvaldatatype));
    ;}
    break;

  case 1068:
#line 3891 "token.y"
    { (yyval.xvaldatatype) = NULL; ;}
    break;

  case 1069:
#line 3892 "token.y"
    { (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype); ;}
    break;

  case 1070:
#line 3895 "token.y"
    { (yyval.ival) = (yyvsp[(2) - (2)].ival); ;}
    break;

  case 1071:
#line 3896 "token.y"
    { (yyval.ival) = CB_WC_BEEP; ;}
    break;

  case 1072:
#line 3897 "token.y"
    { (yyval.ival) = CB_WC_BELL; ;}
    break;

  case 1073:
#line 3898 "token.y"
    { (yyval.ival) = CB_WC_BLINK; ;}
    break;

  case 1074:
#line 3899 "token.y"
    { (yyval.ival) = CB_WC_CONTROL; ;}
    break;

  case 1075:
#line 3900 "token.y"
    { (yyval.ival) = CB_WC_CONVERT; ;}
    break;

  case 1076:
#line 3901 "token.y"
    { (yyval.ival) = CB_WC_ERASE_EOL; ;}
    break;

  case 1077:
#line 3902 "token.y"
    { (yyval.ival) = CB_WC_ERASE_EOS; ;}
    break;

  case 1078:
#line 3903 "token.y"
    { (yyval.ival) = CB_WC_HIGH; ;}
    break;

  case 1079:
#line 3904 "token.y"
    { (yyval.ival) = CB_WC_HIGHLIGHT; ;}
    break;

  case 1080:
#line 3905 "token.y"
    { (yyval.ival) = CB_WC_LOW; ;}
    break;

  case 1081:
#line 3906 "token.y"
    { (yyval.ival) = CB_WC_LOWLIGHT; ;}
    break;

  case 1082:
#line 3907 "token.y"
    { (yyval.ival) = CB_WC_MODE_IS_BLOCK; ;}
    break;

  case 1083:
#line 3908 "token.y"
    { (yyval.ival) = CB_WC_REVERSE; ;}
    break;

  case 1084:
#line 3909 "token.y"
    { (yyval.ival) = CB_WC_SIZE; ;}
    break;

  case 1085:
#line 3912 "token.y"
    { (yyval.ival) = CB_WC_AT_LINE; ;}
    break;

  case 1086:
#line 3913 "token.y"
    { (yyval.ival) = CB_WC_AT_COLUMN; ;}
    break;

  case 1087:
#line 3914 "token.y"
    { (yyval.ival) = CB_WC_AT_POSITION; ;}
    break;

  case 1088:
#line 3919 "token.y"
    {
        (yyval.object) = construct_display_stmt_screen((yyvsp[(2) - (2)].object));
    ;}
    break;

  case 1089:
#line 3924 "token.y"
    {
        (yyval.object) = create_create_screen_item_lst((yyvsp[(1) - (1)].disp_screen_item));
    ;}
    break;

  case 1090:
#line 3927 "token.y"
    {
        (yyval.object) = addto_create_screen_item_lst((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].disp_screen_item));
    ;}
    break;

  case 1091:
#line 3933 "token.y"
    {
        (yyval.disp_screen_item) = construct_disp_screen_item((yyvsp[(1) - (2)].idValWithOpt), (yyvsp[(2) - (2)].at_cl_accept));
    ;}
    break;

  case 1092:
#line 3955 "token.y"
    {
        (yyval.object) = construct_move_stmt( 1, (yyvsp[(3) - (5)].varVal), (yyvsp[(5) - (5)].itemList) );
    ;}
    break;

  case 1093:
#line 3958 "token.y"
    {
        (yyval.object) = construct_move_stmt( 0, (yyvsp[(2) - (4)].varVal), (yyvsp[(4) - (4)].itemList) );
    ;}
    break;

  case 1094:
#line 3963 "token.y"
    { (yyval.itemList) = (yyvsp[(1) - (1)].itemList); ;}
    break;

  case 1095:
#line 3980 "token.y"
    {
        (yyval.object) = construct_ifelse_stmt( (yyvsp[(2) - (5)].cond), (yyvsp[(3) - (5)].stmts), (yyvsp[(4) - (5)].stmts) );
    ;}
    break;

  case 1096:
#line 3985 "token.y"
    { (yyval.stmts) = (yyvsp[(1) - (1)].stmts); ;}
    break;

  case 1097:
#line 3986 "token.y"
    { (yyval.stmts) = (yyvsp[(1) - (1)].stmts); ;}
    break;

  case 1098:
#line 3989 "token.y"
    { (yyval.stmts) = (yyvsp[(2) - (2)].stmts); ;}
    break;

  case 1099:
#line 3992 "token.y"
    { (yyval.stmts) = NULL; ;}
    break;

  case 1100:
#line 3993 "token.y"
    { (yyval.stmts) = (yyvsp[(1) - (1)].stmts); ;}
    break;

  case 1101:
#line 3996 "token.y"
    { 
        dbg_print(DBG_TRACE, "Else clause found\n"); 
                            { (yyval.stmts) = (yyvsp[(2) - (2)].stmts); }
    ;}
    break;

  case 1102:
#line 4002 "token.y"
    { (yyval.stmts) = construct_stmts_list( (yyvsp[(1) - (1)].object), 1 ); ;}
    break;

  case 1103:
#line 4003 "token.y"
    { (yyval.stmts) = construct_stmts_list( NULL, 2 ); ;}
    break;

  case 1106:
#line 4018 "token.y"
    { 
            /* sysname or implicit def */
        (yyval.object) = construct_accept_stmt(1, (yyvsp[(2) - (4)].idValWithOpt), (yyvsp[(3) - (4)].xvaldatatype), NULL, NULL, 0, NULL);
    ;}
    break;

  case 1107:
#line 4022 "token.y"
    {
            /* term i-o type */
        (yyval.object) = construct_accept_stmt(2, NULL, NULL, (yyvsp[(2) - (4)].object), (yyvsp[(3) - (4)].esc_excp), 0, NULL);
    ;}
    break;

  case 1108:
#line 4026 "token.y"
    {
            /* input CD */
        (yyval.object) = construct_accept_stmt(3, (yyvsp[(2) - (5)].idValWithOpt), NULL, NULL, NULL, 1, NULL);
    ;}
    break;

  case 1109:
#line 4030 "token.y"
    {
            /* screen name type */
       (yyval.object) = construct_accept_stmt(4, (yyvsp[(2) - (5)].idValWithOpt), NULL, NULL, (yyvsp[(4) - (5)].esc_excp), 0, (yyvsp[(3) - (5)].at_cl_accept));
    ;}
    break;

  case 1110:
#line 4036 "token.y"
    {  /* check if xval is needed here...*/
        (yyval.xvaldatatype) = get_from_clause(CB_IDENTIFIER, (yyvsp[(2) - (2)].idValWithOpt), 0);
    ;}
    break;

  case 1111:
#line 4039 "token.y"
    {
        (yyval.xvaldatatype) = get_from_clause(CB_IMPLICIT, NULL, (yyvsp[(2) - (2)].ival));
    ;}
    break;

  case 1114:
#line 4047 "token.y"
    { (yyval.at_cl_accept) = (yyvsp[(2) - (2)].at_cl_accept); ;}
    break;

  case 1115:
#line 4062 "token.y"
    {
        (yyval.at_cl_accept) = construct_at_clause_acc( (yyvsp[(3) - (4)].varVal), (yyvsp[(4) - (4)].varVal) );
    ;}
    break;

  case 1116:
#line 4067 "token.y"
    { (yyval.varVal) = NULL; ;}
    break;

  case 1117:
#line 4068 "token.y"
    {
        (yyval.varVal) = (yyvsp[(3) - (3)].varVal);
    ;}
    break;

  case 1118:
#line 4073 "token.y"
    { (yyval.ival) = CB_ID_CENTURY_DATE; ;}
    break;

  case 1119:
#line 4074 "token.y"
    { (yyval.ival) = CB_ID_CENTURY_DAY; ;}
    break;

  case 1120:
#line 4075 "token.y"
    { (yyval.ival) = CB_ID_DATE; ;}
    break;

  case 1121:
#line 4076 "token.y"
    { (yyval.ival) = CB_ID_DATE_YYYYMMDD; ;}
    break;

  case 1122:
#line 4077 "token.y"
    { (yyval.ival) = CB_ID_DATE_TIME; ;}
    break;

  case 1123:
#line 4078 "token.y"
    { (yyval.ival) = CB_ID_DATE_COMPILED; ;}
    break;

  case 1124:
#line 4079 "token.y"
    { (yyval.ival) = CB_ID_DAY; ;}
    break;

  case 1125:
#line 4080 "token.y"
    { (yyval.ival) = CB_ID_DAY_YYYYDDD; ;}
    break;

  case 1126:
#line 4081 "token.y"
    { (yyval.ival) = CB_ID_DAY_TIME; ;}
    break;

  case 1127:
#line 4082 "token.y"
    { (yyval.ival) = CB_ID_DAY_WEEK; ;}
    break;

  case 1128:
#line 4083 "token.y"
    { (yyval.ival) = CB_ID_TIME; ;}
    break;

  case 1129:
#line 4084 "token.y"
    { (yyval.ival) = CB_ID_ESCAPE; ;}
    break;

  case 1130:
#line 4085 "token.y"
    { (yyval.ival) = CB_ID_EXCEPTION; ;}
    break;

  case 1131:
#line 4088 "token.y"
    {
        (yyval.object) = create_accept_item_list( (yyvsp[(1) - (1)].accitem) );
    ;}
    break;

  case 1132:
#line 4091 "token.y"
    {
        (yyval.object) = addto_accept_item_list( (yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].accitem) );
    ;}
    break;

  case 1133:
#line 4097 "token.y"
    {
        (yyval.accitem) = construct_accept_item( (yyvsp[(1) - (2)].xvaldatatype), (yyvsp[(2) - (2)].object) );
    ;}
    break;

  case 1134:
#line 4102 "token.y"
    { 
        (yyval.xvaldatatype) = getXval(CB_IDENTIFIER, (yyvsp[(1) - (1)].idValWithOpt), NULL);
    ;}
    break;

  case 1135:
#line 4105 "token.y"
    {
        (yyval.xvaldatatype) = getXval(CB_ID_UNITVAL, (yyvsp[(1) - (3)].idValWithOpt), (yyvsp[(3) - (3)].varVal));
    ;}
    break;

  case 1136:
#line 4109 "token.y"
    {
        (yyval.object) = NULL;
    ;}
    break;

  case 1137:
#line 4112 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (1)].object);
    ;}
    break;

  case 1138:
#line 4117 "token.y"
    {
        (yyval.object) = create_with2_list((yyvsp[(1) - (1)].with2));
    ;}
    break;

  case 1139:
#line 4120 "token.y"
    {
        (yyval.object) = addto_with2_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].with2));
    ;}
    break;

  case 1140:
#line 4125 "token.y"
    {
        (yyval.with2) = construct_with_clause2((yyvsp[(2) - (3)].ival), NULL, (yyvsp[(3) - (3)].varVal));
    ;}
    break;

  case 1141:
#line 4128 "token.y"
    { /* moved here from with clause2 for simplicity */
        (yyval.with2) = construct_with_clause2(0, (yyvsp[(2) - (2)].pos_clause), NULL);
    ;}
    break;

  case 1142:
#line 4133 "token.y"
    { (yyval.ival) = CB_WC_AUTO; ;}
    break;

  case 1143:
#line 4134 "token.y"
    { (yyval.ival) = CB_WC_AUTO_SKIP; ;}
    break;

  case 1144:
#line 4135 "token.y"
    { (yyval.ival) = CB_WC_NO_BEEP; ;}
    break;

  case 1145:
#line 4136 "token.y"
    { (yyval.ival) = CB_WC_BEFORE_TIME; ;}
    break;

  case 1146:
#line 4137 "token.y"
    { (yyval.ival) = CB_WC_NO_BELL; ;}
    break;

  case 1147:
#line 4138 "token.y"
    { (yyval.ival) = CB_WC_BLANK; ;}
    break;

  case 1148:
#line 4139 "token.y"
    { (yyval.ival) = CB_WC_CONTROL; ;}
    break;

  case 1149:
#line 4140 "token.y"
    { (yyval.ival) = CB_WC_CONVERT; ;}
    break;

  case 1150:
#line 4141 "token.y"
    { (yyval.ival) = CB_WC_CURSER; ;}
    break;

  case 1151:
#line 4142 "token.y"
    { (yyval.ival) = CB_WC_ECHO; ;}
    break;

  case 1152:
#line 4143 "token.y"
    { (yyval.ival) = CB_WC_ERASE_EOL; ;}
    break;

  case 1153:
#line 4144 "token.y"
    { (yyval.ival) = CB_WC_ERASE_EOS; ;}
    break;

  case 1154:
#line 4145 "token.y"
    { (yyval.ival) = CB_WC_HIGH; ;}
    break;

  case 1155:
#line 4146 "token.y"
    { (yyval.ival) = CB_WC_HIGHLIGHT; ;}
    break;

  case 1156:
#line 4147 "token.y"
    { (yyval.ival) = CB_WC_LOW; ;}
    break;

  case 1157:
#line 4148 "token.y"
    { (yyval.ival) = CB_WC_LOWLIGHT; ;}
    break;

  case 1158:
#line 4149 "token.y"
    { (yyval.ival) = CB_WC_MODE_IS_BLOCK; ;}
    break;

  case 1159:
#line 4150 "token.y"
    { (yyval.ival) = CB_WC_OFF; ;}
    break;

  case 1160:
#line 4151 "token.y"
    { (yyval.ival) = CB_WC_PROMPT_CHAR; ;}
    break;

  case 1161:
#line 4152 "token.y"
    { (yyval.ival) = CB_WC_REVERSE; ;}
    break;

  case 1162:
#line 4153 "token.y"
    { (yyval.ival) = CB_WC_SECURE; ;}
    break;

  case 1163:
#line 4154 "token.y"
    { (yyval.ival) = CB_WC_SIZE; ;}
    break;

  case 1164:
#line 4155 "token.y"
    { (yyval.ival) = CB_WC_TAB; ;}
    break;

  case 1165:
#line 4156 "token.y"
    { (yyval.ival) = CB_WC_UPDATE; ;}
    break;

  case 1169:
#line 4162 "token.y"
    {
        (yyval.pos_clause) = update_pos((yyvsp[(5) - (5)].pos_clause), (yyvsp[(4) - (5)].varVal));
    ;}
    break;

  case 1170:
#line 4167 "token.y"
    {
        (yyval.pos_clause) = construct_pos(1, (yyvsp[(3) - (3)].varVal)); 
    ;}
    break;

  case 1171:
#line 4170 "token.y"
    {
        (yyval.pos_clause) = construct_pos(2, (yyvsp[(3) - (3)].varVal));
    ;}
    break;

  case 1172:
#line 4175 "token.y"
    {   (yyval.esc_excp) = NULL; ;}
    break;

  case 1173:
#line 4176 "token.y"
    {
        (yyval.esc_excp) = update_esc_excp_item((yyvsp[(2) - (5)].ival), (yyvsp[(3) - (5)].idValWithOpt), (yyvsp[(4) - (5)].object), (yyvsp[(5) - (5)].esc_excp));
    ;}
    break;

  case 1174:
#line 4181 "token.y"
    { (yyval.esc_excp) = NULL; ;}
    break;

  case 1175:
#line 4182 "token.y"
    {
        (yyval.esc_excp) = construct_esc_excp_item( (yyvsp[(3) - (4)].ival), (yyvsp[(4) - (4)].object) );
    ;}
    break;

  case 1176:
#line 4187 "token.y"
    { (yyval.ival) = CB_ESCAPE; ;}
    break;

  case 1177:
#line 4188 "token.y"
    { (yyval.ival) = CB_EXCEPTION; ;}
    break;

  case 1178:
#line 4191 "token.y"
    { (yyval.idValWithOpt) = NULL; ;}
    break;

  case 1179:
#line 4192 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(1) - (1)].idValWithOpt); ;}
    break;

  case 1180:
#line 4195 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); ;}
    break;

  case 1181:
#line 4209 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (2)].object);
    ;}
    break;

  case 1182:
#line 4214 "token.y"
    {
         dbg_print(DBG_TRACE, "add_clause: add option 1 \n"); 
         (yyval.object) = construct_add_stmt( CB_MS_SIMPLE, (yyvsp[(2) - (5)].itemList), (yyvsp[(4) - (5)].itemList), NULL, (yyvsp[(5) - (5)].object));
    ;}
    break;

  case 1183:
#line 4218 "token.y"
    {
         dbg_print(DBG_TRACE, "add_clause: add option 2 \n"); 
         (yyval.object) = construct_add_stmt( CB_MS_GIVING, (yyvsp[(2) - (6)].itemList), (yyvsp[(3) - (6)].itemList), (yyvsp[(5) - (6)].itemList), (yyvsp[(6) - (6)].object) );    
    ;}
    break;

  case 1184:
#line 4222 "token.y"
    {
         dbg_print(DBG_TRACE, "add_clause: add option 3 \n"); 
         (yyval.object) = construct_add_stmt( CB_MS_CORR, (yyvsp[(3) - (7)].xvaldatatype), (yyvsp[(5) - (7)].xvaldatatype), NULL, (yyvsp[(7) - (7)].object));             
    ;}
    break;

  case 1185:
#line 4228 "token.y"
    { (yyval.itemList) = NULL; ;}
    break;

  case 1186:
#line 4229 "token.y"
    {
        (yyval.itemList) = (yyvsp[(2) - (2)].itemList);
    ;}
    break;

  case 1187:
#line 4253 "token.y"
    { 
        dbg_print(DBG_TRACE, "from_arg_list: gname \n"); 
        (yyval.itemList) = startGnameList( (yyvsp[(1) - (1)].varVal) );
    ;}
    break;

  case 1188:
#line 4257 "token.y"
    {
        dbg_print(DBG_TRACE, "from_arg_clause: adding item no comma... \n");         
        (yyval.itemList) = addGnameListItem( (yyvsp[(1) - (2)].itemList), (yyvsp[(2) - (2)].varVal) );
    ;}
    break;

  case 1189:
#line 4261 "token.y"
    {
        dbg_print(DBG_TRACE, "from_arg_clause: adding item comma... \n");         
        (yyval.itemList) = addGnameListItem( (yyvsp[(1) - (3)].itemList), (yyvsp[(3) - (3)].varVal) );
    ;}
    break;

  case 1190:
#line 4267 "token.y"
    { 
        dbg_print(DBG_TRACE, "to_arg_list: to_arg\n"); 
        (yyval.itemList) = startGnameList( (yyvsp[(1) - (1)].varVal) );
    ;}
    break;

  case 1191:
#line 4271 "token.y"
    { 
        dbg_print(DBG_TRACE, "to_arg_list: list \n"); 
        (yyval.itemList) = addGnameListItem( (yyvsp[(1) - (2)].itemList), (yyvsp[(2) - (2)].varVal) );
    ;}
    break;

  case 1192:
#line 4275 "token.y"
    { 
        dbg_print(DBG_TRACE, "to_arg_list: list \n"); 
        (yyval.itemList) = addGnameListItem( (yyvsp[(1) - (3)].itemList), (yyvsp[(3) - (3)].varVal) );
    ;}
    break;

  case 1193:
#line 4281 "token.y"
    {          /* xval opt_rounded */
        (yyvsp[(1) - (2)].varVal)->rounded = (yyvsp[(2) - (2)].ival);
        (yyval.varVal) = (yyvsp[(1) - (2)].varVal);
    ;}
    break;

  case 1194:
#line 4287 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 1195:
#line 4288 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 1196:
#line 4291 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 1197:
#line 4292 "token.y"
    { (yyval.ival) = 1; ;}
    break;

  case 1199:
#line 4303 "token.y"
    {
        (yyval.object) = construct_on_error_data( (yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object) );
    ;}
    break;

  case 1200:
#line 4307 "token.y"
    {
        (yyval.object) = NULL;
    ;}
    break;

  case 1201:
#line 4310 "token.y"
    {
        (yyval.object) = (yyvsp[(4) - (4)].object);
    ;}
    break;

  case 1202:
#line 4314 "token.y"
    {
        (yyval.object) = NULL;
    ;}
    break;

  case 1203:
#line 4317 "token.y"
    {
        (yyval.object) = (yyvsp[(5) - (5)].object);
    ;}
    break;

  case 1206:
#line 4333 "token.y"
    {
        (yyval.object) = construct_subtract_stmt( CB_MS_SIMPLE, (yyvsp[(2) - (6)].itemList), (yyvsp[(4) - (6)].itemList), NULL, (yyvsp[(5) - (6)].object), 0 ); 
    ;}
    break;

  case 1207:
#line 4337 "token.y"
    {
        (yyval.object) = construct_subtract_stmt( CB_MS_GIVING, (yyvsp[(2) - (8)].itemList), (yyvsp[(4) - (8)].xvaldatatype), (yyvsp[(6) - (8)].itemList), (yyvsp[(7) - (8)].object), 0 ); 
    ;}
    break;

  case 1208:
#line 4341 "token.y"
    {
        (yyval.object) = construct_subtract_stmt( CB_MS_CORR, (yyvsp[(3) - (8)].idValWithOpt), (yyvsp[(5) - (8)].idValWithOpt), NULL, (yyvsp[(7) - (8)].object), (yyvsp[(6) - (8)].ival) ); 
    ;}
    break;

  case 1209:
#line 4346 "token.y"
    {
        (yyval.itemList) = startXvalList( (yyvsp[(1) - (1)].xvaldatatype) );
    ;}
    break;

  case 1210:
#line 4349 "token.y"
    {
        (yyval.itemList) = addXvalListItem( (yyvsp[(1) - (2)].itemList), (yyvsp[(2) - (2)].xvaldatatype) );
    ;}
    break;

  case 1211:
#line 4352 "token.y"
    {
        (yyval.itemList) = addXvalListItem( (yyvsp[(1) - (3)].itemList), (yyvsp[(3) - (3)].xvaldatatype) );
    ;}
    break;

  case 1212:
#line 4357 "token.y"
    {
        (yyval.itemList) = startXvalList( (yyvsp[(1) - (1)].xvaldatatype) );
    ;}
    break;

  case 1213:
#line 4360 "token.y"
    {
        (yyval.itemList) = addXvalListItem( (yyvsp[(1) - (2)].itemList), (yyvsp[(2) - (2)].xvaldatatype) );
    ;}
    break;

  case 1214:
#line 4363 "token.y"
    {
        (yyval.itemList) = addXvalListItem( (yyvsp[(1) - (3)].itemList), (yyvsp[(3) - (3)].xvaldatatype) );
    ;}
    break;

  case 1215:
#line 4368 "token.y"
    {
        (yyvsp[(1) - (1)].xvaldatatype)->rounded = 0;
        (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype);
    ;}
    break;

  case 1216:
#line 4372 "token.y"
    {
        (yyvsp[(1) - (2)].xvaldatatype)->rounded = 1;
        (yyval.xvaldatatype) = (yyvsp[(1) - (2)].xvaldatatype);
    ;}
    break;

  case 1219:
#line 4388 "token.y"
    {
        (yyval.object) = construct_multiply_stmt( CB_MS_SIMPLE, (yyvsp[(2) - (6)].xvaldatatype), (yyvsp[(4) - (6)].itemList), NULL, (yyvsp[(5) - (6)].object)); 
    ;}
    break;

  case 1220:
#line 4392 "token.y"
    {
        (yyval.object) = construct_multiply_stmt( CB_MS_GIVING, (yyvsp[(2) - (8)].xvaldatatype), (yyvsp[(4) - (8)].xvaldatatype), (yyvsp[(6) - (8)].itemList), (yyvsp[(7) - (8)].object));
    ;}
    break;

  case 1223:
#line 4404 "token.y"
    {
        (yyval.object) = construct_divide_stmt( CB_DIV_INTO, (yyvsp[(2) - (6)].xvaldatatype), (yyvsp[(4) - (6)].itemList), NULL, NULL, (yyvsp[(5) - (6)].object));
    ;}
    break;

  case 1224:
#line 4407 "token.y"
    {
        (yyval.object) = construct_divide_stmt( CB_DIV_INTO_GIVING, (yyvsp[(2) - (8)].xvaldatatype), (yyvsp[(4) - (8)].xvaldatatype), (yyvsp[(6) - (8)].itemList), NULL, (yyvsp[(7) - (8)].object));
    ;}
    break;

  case 1225:
#line 4410 "token.y"
    {
        (yyval.object) = construct_divide_stmt( CB_DIV_BY_GIVING, (yyvsp[(2) - (8)].xvaldatatype), (yyvsp[(4) - (8)].xvaldatatype), (yyvsp[(6) - (8)].itemList), NULL, (yyvsp[(7) - (8)].object));
    ;}
    break;

  case 1226:
#line 4414 "token.y"
    {
        (yyval.object) = construct_divide_stmt( CB_DIV_INTO_GIVING_REM, (yyvsp[(2) - (10)].xvaldatatype), (yyvsp[(4) - (10)].xvaldatatype), (yyvsp[(6) - (10)].itemList), (yyvsp[(8) - (10)].xvaldatatype), (yyvsp[(9) - (10)].object));
    ;}
    break;

  case 1227:
#line 4418 "token.y"
    {
        (yyval.object) = construct_divide_stmt( CB_DIV_BY_GIVING_REM, (yyvsp[(2) - (10)].xvaldatatype), (yyvsp[(4) - (10)].xvaldatatype), (yyvsp[(6) - (10)].itemList), (yyvsp[(8) - (10)].xvaldatatype), (yyvsp[(9) - (10)].object));
    ;}
    break;

  case 1230:
#line 4432 "token.y"
    {
        (yyval.object) = construct_compute_stmt((yyvsp[(2) - (8)].itemList), (yyvsp[(3) - (8)].ival), (yyvsp[(5) - (8)].arithm_expr), (yyvsp[(6) - (8)].ival), (yyvsp[(7) - (8)].object));                                
    ;}
    break;

  case 1233:
#line 4451 "token.y"
    {
        (yyval.object) = cons_start_statement((yyvsp[(2) - (6)].idValWithOpt), (yyvsp[(3) - (6)].startbody), (yyvsp[(4) - (6)].ival), (yyvsp[(5) - (6)].invalid_action));
    ;}
    break;

  case 1234:
#line 4457 "token.y"
    {        /* found only in RM Cobol */
        (yyval.startbody) = cons_start_body(1, (yyvsp[(2) - (4)].ival), (yyvsp[(3) - (4)].varVal), 1, (yyvsp[(4) - (4)].varVal), NULL);
    ;}
    break;

  case 1235:
#line 4462 "token.y"
    {
        (yyval.startbody) = cons_start_body(2, 0, NULL, 0, NULL, (yyvsp[(5) - (5)].itemList));
    ;}
    break;

  case 1238:
#line 4470 "token.y"
    { (yyval.varVal) = NULL; ;}
    break;

  case 1239:
#line 4471 "token.y"
    {
        (yyval.varVal) = (yyvsp[(3) - (3)].varVal); 
    ;}
    break;

  case 1240:
#line 4476 "token.y"
    { (yyval.ival) = 0; ;}
    break;

  case 1241:
#line 4477 "token.y"
    {
        (yyval.ival) = 1;
    ;}
    break;

  case 1242:
#line 4482 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); ;}
    break;

  case 1243:
#line 4483 "token.y"
    { (yyval.ival) = CB_FIRST; ;}
    break;

  case 1244:
#line 4484 "token.y"
    { (yyval.ival) = CB_LAST; ;}
    break;

  case 1245:
#line 4492 "token.y"
    {
        (yyval.object) = cons_initiate_statement((yyvsp[(2) - (2)].sval));
    ;}
    break;

  case 1246:
#line 4502 "token.y"
    {
        (yyval.object) = cons_terminate_statement((yyvsp[(2) - (2)].sval));
    ;}
    break;

  case 1247:
#line 4511 "token.y"
    {
        (yyval.object) = cons_generate_statement((yyvsp[(2) - (2)].sval));
    ;}
    break;

  case 1248:
#line 4521 "token.y"
    {
        (yyval.xvaldatatype) = construct_xval( CB_IDENTIFIER, (void *)(yyvsp[(1) - (1)].idValWithOpt));
    ;}
    break;

  case 1249:
#line 4524 "token.y"
    {
        (yyval.xvaldatatype) = construct_xval( CB_N_LITERAL, (void *)(yyvsp[(1) - (1)].literalval));
    ;}
    break;

  case 1250:
#line 4527 "token.y"
    {
        (yyval.xvaldatatype) = construct_xval( CB_C_LITERAL, (void *)(yyvsp[(1) - (1)].literalval));
    ;}
    break;

  case 1251:
#line 4530 "token.y"
    {
        (yyval.xvaldatatype) = construct_xval( CB_LENGTH, (void *)(yyvsp[(3) - (3)].idValWithOpt));
    ;}
    break;

  case 1252:
#line 4533 "token.y"
    {
        (yyval.xvaldatatype) = construct_xval( CB_ADDRESS, (void *)(yyvsp[(3) - (3)].idValWithOpt));
    ;}
    break;

  case 1253:
#line 4536 "token.y"
    {
        (yyval.xvaldatatype) = construct_xval( CB_ADDRESS, (void *)(yyvsp[(3) - (3)].idValWithOpt));
    ;}
    break;

  case 1254:
#line 4541 "token.y"
    {
        (yyval.literalval) = (yyvsp[(1) - (1)].literalval);
    ;}
    break;

  case 1255:
#line 4544 "token.y"
    {
        (yyval.literalval) = (yyvsp[(2) - (2)].literalval);
    ;}
    break;

  case 1256:
#line 4547 "token.y"
    {
        (yyval.literalval) = negate_numeric((yyvsp[(2) - (2)].literalval));
    ;}
    break;

  case 1257:
#line 4552 "token.y"
    { 
        (yyval.literalval) = get_numliteral( (yyvsp[(1) - (1)].ival), CB_INT );
    ;}
    break;

  case 1258:
#line 4555 "token.y"
    { 
        (yyval.literalval) = get_numliteral( (yyvsp[(1) - (1)].fval), CB_FLOAT);
    ;}
    break;

  case 1259:
#line 4558 "token.y"
    { 
        (yyval.literalval) = get_numliteral( (yyvsp[(1) - (1)].longVal), CB_HEX_NO);
    ;}
    break;

  case 1260:
#line 4563 "token.y"
    { 
        dbg_print(DBG_TRACE, "char_literal: Squote literal\n");
        (yyval.literalval) = get_charliteral( strdup((yyvsp[(1) - (1)].sval)), CB_CHARPTR );
    ;}
    break;

  case 1261:
#line 4567 "token.y"
    {         
        dbg_print(DBG_TRACE, "char_literal: Dquote literal\n");
        (yyval.literalval) = get_charliteral( strdup((yyvsp[(1) - (1)].sval)), CB_CHARPTR );
    ;}
    break;

  case 1262:
#line 4571 "token.y"
    { 
        dbg_print(DBG_TRACE, "char_literal: Hex literal\n");
        (yyval.literalval) = get_charliteral( strdup((yyvsp[(1) - (1)].sval)), CB_CHARPTR );
    ;}
    break;

  case 1263:
#line 4578 "token.y"
    { dbg_print(DBG_TRACE, "comma_opt: Found comma\n"); ;}
    break;

  case 1264:
#line 4586 "token.y"
    {
        /* $$ = construct_identifier_1( $1, $2, $3, $4); */
        (yyval.idValWithOpt) = construct_identifier_1( (yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].itemList), (yyvsp[(3) - (3)].subscrlst));
    ;}
    break;

  case 1265:
#line 4592 "token.y"
    {
        (yyval.sval) = strdup((yyvsp[(1) - (1)].sval));
    ;}
    break;

  case 1266:
#line 4597 "token.y"
    { (yyval.itemList) = NULL; ;}
    break;

  case 1267:
#line 4598 "token.y"
    { (yyval.itemList) = (yyvsp[(1) - (1)].itemList); ;}
    break;

  case 1268:
#line 4601 "token.y"
    { (yyval.subscrlst) = NULL; ;}
    break;

  case 1269:
#line 4602 "token.y"
    { 
        dbg_print(DBG_TRACE, "opt_subscripts: Subscripts found\n");
        (yyval.subscrlst) = (yyvsp[(2) - (3)].subscrlst);
    ;}
    break;

  case 1270:
#line 4608 "token.y"
    { (yyval.itemList) = startList((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 1271:
#line 4609 "token.y"
    { (yyval.itemList) = addListItem((yyvsp[(1) - (2)].itemList), (yyvsp[(2) - (2)].sval));;}
    break;

  case 1272:
#line 4612 "token.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); ;}
    break;

  case 1273:
#line 4613 "token.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); ;}
    break;

  case 1274:
#line 4616 "token.y"
    { 
        (yyval.subscrlst) = start_subscript_list((yyvsp[(1) - (1)].subscritem)); ;}
    break;

  case 1275:
#line 4618 "token.y"
    { 
        (yyval.subscrlst) = add_subscriptlist_item((yyvsp[(1) - (2)].subscrlst), (yyvsp[(2) - (2)].subscritem)); 
    ;}
    break;

  case 1276:
#line 4621 "token.y"
    { 
        (yyval.subscrlst) = add_subscriptlist_item((yyvsp[(1) - (3)].subscrlst), (yyvsp[(3) - (3)].subscritem)); 
    ;}
    break;

  case 1277:
#line 4626 "token.y"
    { (yyval.subscritem) = (yyvsp[(1) - (1)].subscritem); ;}
    break;

  case 1278:
#line 4629 "token.y"
    {
        (yyval.subscritem) = cons_subscript_item(CB_SUBITEM_ID, (yyvsp[(1) - (1)].sval), NULL, NULL, 0, NULL);
    ;}
    break;

  case 1279:
#line 4632 "token.y"
    {
        (yyval.subscritem) = cons_subscript_item(CB_SUBITEM_LIT, NULL, (yyvsp[(1) - (1)].literalval), NULL, 0, NULL);        
    ;}
    break;

  case 1280:
#line 4635 "token.y"
    {
        (yyval.subscritem) = cons_subscript_item(CB_SUBITEM_SUBITEM, NULL, NULL, (yyvsp[(2) - (3)].subscritem), 0, NULL);        
    ;}
    break;

  case 1281:
#line 4638 "token.y"
    {
        (yyval.subscritem) = cons_subscript_item(CB_SUBITEM_SUBITEM, NULL, NULL, (yyvsp[(1) - (3)].subscritem), CB_AO_PLUS, (yyvsp[(3) - (3)].subscritem));        
    ;}
    break;

  case 1282:
#line 4641 "token.y"
    {
        (yyval.subscritem) = cons_subscript_item(CB_SUBITEM_SUBITEM, NULL, NULL, (yyvsp[(1) - (3)].subscritem), CB_AO_MINUS, (yyvsp[(3) - (3)].subscritem));        
    ;}
    break;

  case 1283:
#line 4644 "token.y"
    {
        (yyval.subscritem) = cons_subscript_item(CB_SUBITEM_SUBITEM, NULL, NULL, (yyvsp[(1) - (3)].subscritem), CB_AO_COLON, (yyvsp[(3) - (3)].subscritem));        
    ;}
    break;

  case 1284:
#line 4664 "token.y"
    { 
        dbg_print(DBG_TRACE, "GNAME:identifier_1 \n"); 
        (yyval.varVal) = construct_gname_id((yyvsp[(1) - (1)].idValWithOpt));
    ;}
    break;

  case 1285:
#line 4668 "token.y"
    { 
        dbg_print(DBG_TRACE, "GNAME:gliteral\n"); 
        (yyval.varVal) = (yyvsp[(1) - (1)].literalval);
    ;}
    break;

  case 1286:
#line 4673 "token.y"
    { 
        dbg_print(DBG_TRACE, "GNAME:FUNCTION\n"); 
        (yyval.varVal) = construct_gname_function((yyvsp[(2) - (2)].idValWithOpt), CB_FUNCTION);
    ;}
    break;

  case 1287:
#line 4679 "token.y"
    { (yyval.literalval) = (yyvsp[(1) - (1)].literalval); ;}
    break;

  case 1288:
#line 4680 "token.y"
    { (yyval.literalval) = (yyvsp[(1) - (1)].literalval); ;}
    break;

  case 1289:
#line 4683 "token.y"
    { 
        dbg_print(DBG_TRACE, "WithoutAllLiteral: Literal\n"); 
        (yyval.literalval) = (yyvsp[(1) - (1)].literalval);
    ;}
    break;

  case 1290:
#line 4687 "token.y"
    { 
        dbg_print(DBG_TRACE, "WithoutAllLiteral: Special literal\n"); 
        (yyval.literalval) = get_specialliteral( (yyvsp[(1) - (1)].ival), CB_SPECIAL);
    ;}
    break;

  case 1291:
#line 4693 "token.y"
    { 
            dbg_print(DBG_TRACE, "literal: Signed n literal\n"); 
            (yyval.literalval) = (yyvsp[(1) - (1)].literalval);
        ;}
    break;

  case 1292:
#line 4697 "token.y"
    { 
            dbg_print(DBG_TRACE, "literal: Char literal\n"); 
            (yyval.literalval) = (yyvsp[(1) - (1)].literalval);
        ;}
    break;

  case 1293:
#line 4703 "token.y"
    {
            (yyvsp[(2) - (2)].literalval)->allflag = 1;
            (yyval.literalval) = (yyvsp[(2) - (2)].literalval);
        ;}
    break;

  case 1294:
#line 4707 "token.y"
    {
        (yyval.literalval) = get_specialliteral( (yyvsp[(2) - (2)].ival), CB_SPECIAL);
        (yyval.literalval)->allflag = 1;
    ;}
    break;

  case 1295:
#line 4713 "token.y"
    { (yyval.ival) = CB_SL_SPACES; ;}
    break;

  case 1296:
#line 4714 "token.y"
    { (yyval.ival) = CB_SL_ZERO; ;}
    break;

  case 1297:
#line 4715 "token.y"
    { (yyval.ival) = CB_SL_QUOTES; ;}
    break;

  case 1298:
#line 4716 "token.y"
    { (yyval.ival) = CB_SL_HIGHVALUES; ;}
    break;

  case 1299:
#line 4717 "token.y"
    { (yyval.ival) = CB_SL_LOWVALUES; ;}
    break;

  case 1300:
#line 4718 "token.y"
    { (yyval.ival) = CB_SL_NULL; ;}
    break;

  case 1301:
#line 4719 "token.y"
    { (yyval.ival) = CB_SL_TRUE; ;}
    break;

  case 1302:
#line 4720 "token.y"
    { (yyval.ival) = CB_SL_FALSE; ;}
    break;

  case 1303:
#line 4727 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside the cond feb14 -1 ..\n");
        (yyval.cond) = construct_condition( (yyvsp[(1) - (2)].comb_cond), (yyvsp[(2) - (2)].comb_abri_cond_list) );
    ;}
    break;

  case 1304:
#line 4734 "token.y"
    {   (yyval.comb_abri_cond_list) = NULL; ;}
    break;

  case 1305:
#line 4735 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside opt_comb_abri_condition...\n");
        (yyval.comb_abri_cond_list) = (yyvsp[(1) - (1)].comb_abri_cond_list);
    ;}
    break;

  case 1306:
#line 4741 "token.y"
    {
        (yyval.comb_abri_cond_list) = start_comb_abri_list((yyvsp[(1) - (1)].comb_abri_cond_item));
    ;}
    break;

  case 1307:
#line 4744 "token.y"
    {
        (yyval.comb_abri_cond_list) = add_comb_abri_list((yyvsp[(1) - (2)].comb_abri_cond_list), (yyvsp[(2) - (2)].comb_abri_cond_item));
    ;}
    break;

  case 1308:
#line 4750 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside comb_abri_cond...\n");

        (yyval.comb_abri_cond_item) = update_comb_abri_cond((yyvsp[(1) - (2)].ival), (yyvsp[(2) - (2)].comb_abri_cond_item));
    ;}
    break;

  case 1309:
#line 4757 "token.y"
    { (yyval.ival) = CB_LO_AND; ;}
    break;

  case 1310:
#line 4758 "token.y"
    { (yyval.ival) = CB_LO_OR;  ;}
    break;

  case 1311:
#line 4761 "token.y"
    {
        (yyval.comb_abri_cond_item) = construct_comb_abri_cond( (yyvsp[(1) - (1)].comb_cond), NULL);
    ;}
    break;

  case 1312:
#line 4764 "token.y"
    {
        (yyval.comb_abri_cond_item) = construct_comb_abri_cond( NULL, (yyvsp[(1) - (1)].abbr_rest));
    ;}
    break;

  case 1313:
#line 4769 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside the comb cond feb14 -1 ..\n");
        (yyval.comb_cond) = construct_comb_cond(0, (yyvsp[(1) - (1)].simp_cond));
    ;}
    break;

  case 1314:
#line 4773 "token.y"
    {
        (yyval.comb_cond) = construct_comb_cond(1, (yyvsp[(2) - (2)].simp_cond));
    ;}
    break;

  case 1315:
#line 4779 "token.y"
    {
        (yyval.abbr_rest) = (yyvsp[(1) - (1)].abbr_rest);
    ;}
    break;

  case 1316:
#line 4784 "token.y"
    {
        (yyval.abbr_rest) = start_abri_item_list((yyvsp[(1) - (1)].abbr_item));
    ;}
    break;

  case 1317:
#line 4787 "token.y"
    {
        (yyval.abbr_rest) = add_abri_item_list((yyvsp[(1) - (2)].abbr_rest), (yyvsp[(2) - (2)].abbr_item));
    ;}
    break;

  case 1318:
#line 4792 "token.y"
    {
        (yyval.abbr_item) = update_abbr_item((yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].abbr_item));
    ;}
    break;

  case 1319:
#line 4797 "token.y"
    {
        construct_Abbr_item((yyvsp[(1) - (1)].arithm_expr), NULL);
    ;}
    break;

  case 1320:
#line 4800 "token.y"
    {
        construct_Abbr_item((yyvsp[(2) - (4)].arithm_expr), (yyvsp[(3) - (4)].abbr_rest));
    ;}
    break;

  case 1321:
#line 4805 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside the simple cond feb14 -1 ..\n");
        (yyval.simp_cond) = construct_simp_cond(CB_SC_REL, (yyvsp[(1) - (1)].rel_cond));
    ;}
    break;

  case 1322:
#line 4819 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside simple_condition \n");
        (yyval.simp_cond) = construct_simp_cond_cond(CB_SC_COND, (yyvsp[(2) - (3)].cond));
    ;}
    break;

  case 1323:
#line 4829 "token.y"
    { (yyval.ival) = (yyvsp[(2) - (2)].ival); ;}
    break;

  case 1324:
#line 4832 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside the rel cond feb14 -1 ..\n");
        (yyval.rel_cond) = construct_rel_cond(CB_RC_SINGLE, 0, 0, (yyvsp[(1) - (1)].arithm_expr), NULL);        
    ;}
    break;

  case 1325:
#line 4836 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside the rel cond feb14 ..\n");
        (yyval.rel_cond) = construct_rel_cond(CB_RC_SIMPLE, 0, (yyvsp[(3) - (4)].ival), (yyvsp[(1) - (4)].arithm_expr), (yyvsp[(4) - (4)].arithm_expr));
    ;}
    break;

  case 1326:
#line 4840 "token.y"
    {
        (yyval.rel_cond) = construct_rel_cond(CB_RC_SIMPLE, 1, (yyvsp[(4) - (5)].ival), (yyvsp[(1) - (5)].arithm_expr), (yyvsp[(5) - (5)].arithm_expr));
    ;}
    break;

  case 1327:
#line 4843 "token.y"
    {
        (yyval.rel_cond) = construct_rel_cond_sign(CB_RC_SIGN, (yyvsp[(1) - (1)].ival));
    ;}
    break;

  case 1328:
#line 4846 "token.y"
    {
        (yyval.rel_cond) = construct_rel_cond_class(CB_RC_CLASS, (yyvsp[(2) - (3)].ival), (yyvsp[(1) - (3)].arithm_expr), (yyvsp[(3) - (3)].ival));
    ;}
    break;

  case 1329:
#line 4849 "token.y"
    {
        (yyval.rel_cond) = construct_rel_cond_class(CB_RC_CLASS, 0, (yyvsp[(1) - (3)].arithm_expr), (yyvsp[(3) - (3)].ival));
    ;}
    break;

  case 1330:
#line 4855 "token.y"
    { (yyval.ival) = CB_CI_NUMERIC; ;}
    break;

  case 1331:
#line 4856 "token.y"
    { (yyval.ival) = CB_CI_ALPHABETIC; ;}
    break;

  case 1332:
#line 4857 "token.y"
    { (yyval.ival) = CB_CI_ALPHA_UPPER; ;}
    break;

  case 1333:
#line 4858 "token.y"
    { (yyval.ival) = CB_CI_ALPHA_LOWER; ;}
    break;

  case 1334:
#line 4862 "token.y"
    {
        if((yyvsp[(1) - (2)].ival) == 1) {
            (yyval.ival) = reverse_sign((yyvsp[(1) - (2)].ival));
        }
        else {
            (yyval.ival) = (yyvsp[(2) - (2)].ival);
        }
    ;}
    break;

  case 1335:
#line 4872 "token.y"
    { (yyval.ival) = CB_SI_POSITIVE; ;}
    break;

  case 1336:
#line 4873 "token.y"
    { (yyval.ival) = CB_SI_NEGATIVE; ;}
    break;

  case 1337:
#line 4874 "token.y"
    { (yyval.ival) = CB_SI_ZERO;     ;}
    break;

  case 1338:
#line 4878 "token.y"
    {
        if( (yyvsp[(1) - (2)].ival) == 0 ) {
            (yyval.ival) = (yyvsp[(2) - (2)].ival);
        } else {
            (yyval.ival) = reverse_logical_op( (yyvsp[(2) - (2)].ival) );
        }
        dbg_print(DBG_TRACE, "Inside relational_operator...\n");
    ;}
    break;

  case 1339:
#line 4888 "token.y"
    { (yyval.ival) = CB_GT; ;}
    break;

  case 1340:
#line 4889 "token.y"
    { (yyval.ival) = CB_GE; ;}
    break;

  case 1341:
#line 4890 "token.y"
    { (yyval.ival) = CB_LT; ;}
    break;

  case 1342:
#line 4891 "token.y"
    { (yyval.ival) = CB_LE; ;}
    break;

  case 1343:
#line 4892 "token.y"
    { (yyval.ival) = CB_EQ; ;}
    break;

  case 1344:
#line 4893 "token.y"
    { (yyval.ival) = CB_NE; ;}
    break;

  case 1353:
#line 4909 "token.y"
    { dbg_print(DBG_TRACE, "_eq: EQUAL opt_to \n"); ;}
    break;

  case 1361:
#line 4921 "token.y"
    {
                dbg_print(DBG_TRACE, "parser found LPARAN ( \n");
    ;}
    break;

  case 1362:
#line 4924 "token.y"
    {
                dbg_print(DBG_TRACE, "parser found LPARAN_SUB \n");
    ;}
    break;

  case 1363:
#line 4929 "token.y"
    {
                dbg_print(DBG_TRACE, "parser found RPARAN ) \n");
    ;}
    break;

  case 1364:
#line 4932 "token.y"
    {
                dbg_print(DBG_TRACE, "parser found RPARAN_SUB \n");
    ;}
    break;

  case 1365:
#line 4937 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_gname( CB_AE_GNAME, (yyvsp[(1) - (1)].varVal));
    ;}
    break;

  case 1366:
#line 4940 "token.y"
    {
        dbg_print(DBG_TRACE, "inside arithmetic_expression (gname) \n");        
        (yyval.arithm_expr) = construct_arithm_expr_gname( CB_AE_GNAME, (yyvsp[(2) - (3)].varVal));
    ;}
    break;

  case 1367:
#line 4944 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_class( CB_AE_CLASS, (yyvsp[(1) - (1)].ival));
    ;}
    break;

  case 1368:
#line 4947 "token.y"
    { 
        dbg_print(DBG_TRACE, "Arithmetic_expression: _multiply\n");
        (yyval.arithm_expr) = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_MULTIPLY, (yyvsp[(1) - (3)].arithm_expr), (yyvsp[(3) - (3)].arithm_expr));
     ;}
    break;

  case 1369:
#line 4951 "token.y"
    { 
        dbg_print(DBG_TRACE, "Arithmetic_expression: _plus\n");
        (yyval.arithm_expr) = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_DIVIDE, (yyvsp[(1) - (3)].arithm_expr), (yyvsp[(3) - (3)].arithm_expr) );
      ;}
    break;

  case 1370:
#line 4955 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_PLUS, (yyvsp[(1) - (3)].arithm_expr), (yyvsp[(3) - (3)].arithm_expr) );
    ;}
    break;

  case 1371:
#line 4958 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_MINUS, (yyvsp[(1) - (3)].arithm_expr), (yyvsp[(3) - (3)].arithm_expr) );
    ;}
    break;

  case 1372:
#line 4961 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_POWER, (yyvsp[(1) - (3)].arithm_expr), (yyvsp[(3) - (3)].arithm_expr) );
    ;}
    break;

  case 1373:
#line 4964 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_bracket( CB_AE_QUOTE_EXP, (yyvsp[(2) - (3)].arithm_expr) );
    ;}
    break;

  case 1374:
#line 4967 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_unary( CB_AE_UNRY, CB_AO_PLUS, (yyvsp[(2) - (2)].arithm_expr) );
    ;}
    break;

  case 1375:
#line 4970 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_unary( CB_AE_UNRY, CB_AO_MINUS, (yyvsp[(2) - (2)].arithm_expr) );
    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 12538 "token.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 4978 "token.y"


/***************************************************************************** 
                                Global functions
 - The yyerror could be modified to show the token name that caused parse error

 *****************************************************************************/	
void yyerror(s)
char *s;
{
    dbg_print(DBG_TRACE, "YACC error on : %s : %d : line no. %d\n", s, yychar, yylineno);
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

    while (fileList[currentFile] != (char *)0) {

        file = fopen(fileList[currentFile++], "r");
        if (file != NULL) {
            /* 
             * the new file related handling can be called here...
             */
            /* AST handling. Creating a new file node...*/
            //addFile(fileList[currentFile-1]);
            yylineno = 0;
            yyin = file;
            dbg_print(DBG_TRACE, "Opened file %s\n",fileList[currentFile-1]);
            break;
        }
        fprintf( stderr,  "could not open %s\n",
                  fileList[currentFile-1]);
    }
    return (file ? 0 : 1); /* 0 means there's more input */
}


