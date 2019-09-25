/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
     INDEXM = 452,
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
     INTRINSIC = 468,
     JUSTIFIED = 469,
     KEY = 470,
     LABEL = 471,
     LAST = 472,
     LEADING = 473,
     LEFT = 474,
     LENGTH = 475,
     LESS = 476,
     LIMIT = 477,
     LIMITS = 478,
     LINAGE = 479,
     LINE = 480,
     LINES = 481,
     LINKAGE = 482,
     LISTSEP = 483,
     LITERAL = 484,
     LOCK = 485,
     LOCAL_STORAGE = 486,
     LOW = 487,
     LOWER = 488,
     LOWLIGHT = 489,
     LOWVALUES = 490,
     LPAR = 491,
     MANUAL = 492,
     MEMORY = 493,
     MERGE = 494,
     MINUS = 495,
     MODE = 496,
     MODULES = 497,
     MOVE = 498,
     MULTIPLE = 499,
     MULTIPLY = 500,
     NATIVE = 501,
     NEGATIVE = 502,
     NEXT = 503,
     NO = 504,
     NOECHO = 505,
     NOT = 506,
     NOTEXCEP = 507,
     NULL_TOK = 508,
     NUMBER = 509,
     NUMBERS = 510,
     NUMERIC = 511,
     NUMERIC_EDITED = 512,
     OBJECT_COMPUTER = 513,
     OCCURS = 514,
     OF = 515,
     OFF = 516,
     OMITTED = 517,
     ON = 518,
     ONLY = 519,
     OPEN = 520,
     OPTIONAL = 521,
     OR = 522,
     ORDER = 523,
     ORGANIZATION = 524,
     OTHER = 525,
     OUTPUT = 526,
     OVERFLOW_TOK = 527,
     PACKED_DECIMAL = 528,
     PADDING = 529,
     PAGE_TOK = 530,
     PARAGRAPH = 531,
     PERIOD = 532,
     PERFORM = 533,
     PF = 534,
     PH = 535,
     PICTURE = 536,
     PLUS = 537,
     POINTER = 538,
     POSITION = 539,
     POSITIVE = 540,
     PREVIOUS = 541,
     PRINTER = 542,
     PROCEDURE = 543,
     PROCEDURES = 544,
     PROCEED = 545,
     PROGRAM = 546,
     PROGRAM_ID = 547,
     PURGE = 548,
     QUOTES = 549,
     RANDOM = 550,
     RD = 551,
     READ = 552,
     READY = 553,
     RECORD = 554,
     RECORDS = 555,
     RECURSIVE = 556,
     REDEFINES = 557,
     REEL = 558,
     REFERENCE = 559,
     REFERENCES = 560,
     RELATIVE = 561,
     RELEASE = 562,
     REMAINDER = 563,
     REMARK = 564,
     REMOVAL = 565,
     RENAMES = 566,
     REPLACING = 567,
     REPORT = 568,
     REPORTING = 569,
     REPORTS = 570,
     REPOSITORY = 571,
     REQUIRED = 572,
     RESERVE = 573,
     RESERVED = 574,
     RESERVED_VIDEO = 575,
     RESET = 576,
     RETURN_TOK = 577,
     RETURNING = 578,
     REVERSEVIDEO = 579,
     REWIND = 580,
     REWRITE = 581,
     RF = 582,
     RH = 583,
     RIGHT = 584,
     ROUNDED = 585,
     RUN = 586,
     SAME = 587,
     SCREEN = 588,
     SD = 589,
     SEARCH = 590,
     SECTION = 591,
     SECURE = 592,
     SECURITY = 593,
     SEGMENT_LIMIT = 594,
     SELECT = 595,
     SENTENCE = 596,
     SEPARATE = 597,
     SEQUENCE = 598,
     SEQUENTIAL = 599,
     SET = 600,
     SIGN = 601,
     SIZE = 602,
     SORT = 603,
     SORT_MERGE = 604,
     SOURCE = 605,
     SOURCE_COMPUTER = 606,
     SPACES = 607,
     SPECIAL_NAMES = 608,
     STANDARD = 609,
     STANDARD_1 = 610,
     STANDARD_2 = 611,
     START = 612,
     STATUS = 613,
     STD_ERROR = 614,
     STD_INPUT = 615,
     STD_OUTPUT = 616,
     STOP = 617,
     STRINGCMD = 618,
     SUBTRACT = 619,
     SUM = 620,
     SYNCHRONIZED = 621,
     TALLYING = 622,
     TAPE = 623,
     TCOBPROTO1 = 624,
     TCOBPROTO2 = 625,
     TELLYING = 626,
     TERMINATE = 627,
     TEST = 628,
     THAN = 629,
     THEN = 630,
     THRU = 631,
     TIMES = 632,
     TO = 633,
     TOKDUMMY = 634,
     TOP = 635,
     TRACE = 636,
     TRAILING = 637,
     TRUE_TOK = 638,
     TYPE = 639,
     UNDERLINE = 640,
     UNIT = 641,
     UNLOCK = 642,
     _UNSIGNED = 643,
     UNSTRING = 644,
     UNTIL = 645,
     UP = 646,
     UPDATE = 647,
     UPON = 648,
     UPPER = 649,
     USAGE = 650,
     USAGENUM = 651,
     USE = 652,
     USING = 653,
     VALUE = 654,
     VALUE_LITERAL = 655,
     VARYING = 656,
     WHEN = 657,
     WITH = 658,
     WORDS = 659,
     WORKING_STORAGE = 660,
     WRITE = 661,
     LT = 662,
     LE = 663,
     GT = 664,
     GE = 665,
     EQ = 666,
     NE = 667,
     ZERO = 668,
     REVERSED_VIDEO = 669,
     REVERSE = 670,
     _TIME = 671,
     DATE_AND_TIME = 672,
     YYYYDDD = 673,
     YYYYMMDD = 674,
     _DAY = 675,
     _DATE = 676,
     CENTURY_DAY = 677,
     CENTURY_DATE = 678,
     _ESCAPE = 679,
     TAB = 680,
     AUTO_SKIP = 681,
     PROMPT = 682,
     REVERSED = 683,
     DAY_AND_TIME = 684,
     _MESSAGE = 685,
     DAY_OF_WEEK = 686,
     LPARAN_SUB = 687,
     RPARAN_SUB = 688,
     _COLON = 689,
     _PLUS = 690,
     _MINUS = 691,
     _POW_OP = 692,
     UNARY_SIGN = 693,
     _DIVIDE = 694,
     _MULTIPLY = 695,
     INTEGER_LITERAL = 696,
     NUMBER_LITERAL = 697,
     FLOAT_LITERAL = 698,
     HEX_NUMBER_LITERAL = 699,
     IDENTIFIER = 700,
     DQUOTE_LITERAL = 701,
     SQUOTE_LITERAL = 702,
     TXTLINE = 703,
     PICTURE_STR = 704,
     HEX_STRING = 705
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
#define INDEXM 452
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
#define INTRINSIC 468
#define JUSTIFIED 469
#define KEY 470
#define LABEL 471
#define LAST 472
#define LEADING 473
#define LEFT 474
#define LENGTH 475
#define LESS 476
#define LIMIT 477
#define LIMITS 478
#define LINAGE 479
#define LINE 480
#define LINES 481
#define LINKAGE 482
#define LISTSEP 483
#define LITERAL 484
#define LOCK 485
#define LOCAL_STORAGE 486
#define LOW 487
#define LOWER 488
#define LOWLIGHT 489
#define LOWVALUES 490
#define LPAR 491
#define MANUAL 492
#define MEMORY 493
#define MERGE 494
#define MINUS 495
#define MODE 496
#define MODULES 497
#define MOVE 498
#define MULTIPLE 499
#define MULTIPLY 500
#define NATIVE 501
#define NEGATIVE 502
#define NEXT 503
#define NO 504
#define NOECHO 505
#define NOT 506
#define NOTEXCEP 507
#define NULL_TOK 508
#define NUMBER 509
#define NUMBERS 510
#define NUMERIC 511
#define NUMERIC_EDITED 512
#define OBJECT_COMPUTER 513
#define OCCURS 514
#define OF 515
#define OFF 516
#define OMITTED 517
#define ON 518
#define ONLY 519
#define OPEN 520
#define OPTIONAL 521
#define OR 522
#define ORDER 523
#define ORGANIZATION 524
#define OTHER 525
#define OUTPUT 526
#define OVERFLOW_TOK 527
#define PACKED_DECIMAL 528
#define PADDING 529
#define PAGE_TOK 530
#define PARAGRAPH 531
#define PERIOD 532
#define PERFORM 533
#define PF 534
#define PH 535
#define PICTURE 536
#define PLUS 537
#define POINTER 538
#define POSITION 539
#define POSITIVE 540
#define PREVIOUS 541
#define PRINTER 542
#define PROCEDURE 543
#define PROCEDURES 544
#define PROCEED 545
#define PROGRAM 546
#define PROGRAM_ID 547
#define PURGE 548
#define QUOTES 549
#define RANDOM 550
#define RD 551
#define READ 552
#define READY 553
#define RECORD 554
#define RECORDS 555
#define RECURSIVE 556
#define REDEFINES 557
#define REEL 558
#define REFERENCE 559
#define REFERENCES 560
#define RELATIVE 561
#define RELEASE 562
#define REMAINDER 563
#define REMARK 564
#define REMOVAL 565
#define RENAMES 566
#define REPLACING 567
#define REPORT 568
#define REPORTING 569
#define REPORTS 570
#define REPOSITORY 571
#define REQUIRED 572
#define RESERVE 573
#define RESERVED 574
#define RESERVED_VIDEO 575
#define RESET 576
#define RETURN_TOK 577
#define RETURNING 578
#define REVERSEVIDEO 579
#define REWIND 580
#define REWRITE 581
#define RF 582
#define RH 583
#define RIGHT 584
#define ROUNDED 585
#define RUN 586
#define SAME 587
#define SCREEN 588
#define SD 589
#define SEARCH 590
#define SECTION 591
#define SECURE 592
#define SECURITY 593
#define SEGMENT_LIMIT 594
#define SELECT 595
#define SENTENCE 596
#define SEPARATE 597
#define SEQUENCE 598
#define SEQUENTIAL 599
#define SET 600
#define SIGN 601
#define SIZE 602
#define SORT 603
#define SORT_MERGE 604
#define SOURCE 605
#define SOURCE_COMPUTER 606
#define SPACES 607
#define SPECIAL_NAMES 608
#define STANDARD 609
#define STANDARD_1 610
#define STANDARD_2 611
#define START 612
#define STATUS 613
#define STD_ERROR 614
#define STD_INPUT 615
#define STD_OUTPUT 616
#define STOP 617
#define STRINGCMD 618
#define SUBTRACT 619
#define SUM 620
#define SYNCHRONIZED 621
#define TALLYING 622
#define TAPE 623
#define TCOBPROTO1 624
#define TCOBPROTO2 625
#define TELLYING 626
#define TERMINATE 627
#define TEST 628
#define THAN 629
#define THEN 630
#define THRU 631
#define TIMES 632
#define TO 633
#define TOKDUMMY 634
#define TOP 635
#define TRACE 636
#define TRAILING 637
#define TRUE_TOK 638
#define TYPE 639
#define UNDERLINE 640
#define UNIT 641
#define UNLOCK 642
#define _UNSIGNED 643
#define UNSTRING 644
#define UNTIL 645
#define UP 646
#define UPDATE 647
#define UPON 648
#define UPPER 649
#define USAGE 650
#define USAGENUM 651
#define USE 652
#define USING 653
#define VALUE 654
#define VALUE_LITERAL 655
#define VARYING 656
#define WHEN 657
#define WITH 658
#define WORDS 659
#define WORKING_STORAGE 660
#define WRITE 661
#define LT 662
#define LE 663
#define GT 664
#define GE 665
#define EQ 666
#define NE 667
#define ZERO 668
#define REVERSED_VIDEO 669
#define REVERSE 670
#define _TIME 671
#define DATE_AND_TIME 672
#define YYYYDDD 673
#define YYYYMMDD 674
#define _DAY 675
#define _DATE 676
#define CENTURY_DAY 677
#define CENTURY_DATE 678
#define _ESCAPE 679
#define TAB 680
#define AUTO_SKIP 681
#define PROMPT 682
#define REVERSED 683
#define DAY_AND_TIME 684
#define _MESSAGE 685
#define DAY_OF_WEEK 686
#define LPARAN_SUB 687
#define RPARAN_SUB 688
#define _COLON 689
#define _PLUS 690
#define _MINUS 691
#define _POW_OP 692
#define UNARY_SIGN 693
#define _DIVIDE 694
#define _MULTIPLY 695
#define INTEGER_LITERAL 696
#define NUMBER_LITERAL 697
#define FLOAT_LITERAL 698
#define HEX_NUMBER_LITERAL 699
#define IDENTIFIER 700
#define DQUOTE_LITERAL 701
#define SQUOTE_LITERAL 702
#define TXTLINE 703
#define PICTURE_STR 704
#define HEX_STRING 705




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 104 "token.y"
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
/* Line 1529 of yacc.c.  */
#line 1076 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

