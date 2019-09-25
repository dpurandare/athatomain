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




/* Copy the first part of user declarations.  */
#line 14 "token.y"

#include <stdio.h>
#include <stdlib.h>
#include "global.h"
#include "cobmain.h"
#include "util/reswords.h"
#include "procglobal.h"
#define YYERROR_VERBOSE 1


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
/* Line 193 of yacc.c.  */
#line 1133 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1146 "y.tab.c"

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9177

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  464
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  640
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1387
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2231

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   718

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
     455,   456,   457,   458,   459,   460,   461,   462,   463
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    21,    22,
      24,    27,    34,    38,    43,    49,    53,    54,    56,    62,
      63,    66,    77,    79,    81,    82,    85,    86,    91,    93,
      95,    96,    98,    99,   101,   103,   106,   108,   110,   112,
     114,   116,   118,   123,   128,   133,   138,   143,   148,   151,
     155,   157,   159,   161,   162,   167,   168,   170,   172,   175,
     177,   179,   184,   186,   189,   191,   193,   195,   197,   201,
     202,   205,   207,   210,   214,   218,   219,   221,   227,   228,
     233,   238,   241,   245,   248,   250,   252,   255,   257,   259,
     261,   266,   268,   270,   272,   278,   282,   286,   287,   289,
     291,   294,   300,   305,   308,   311,   312,   316,   320,   321,
     324,   326,   329,   331,   333,   339,   340,   342,   344,   346,
     348,   350,   353,   357,   363,   365,   368,   371,   372,   375,
     379,   381,   384,   390,   391,   394,   396,   399,   401,   403,
     405,   407,   409,   411,   413,   415,   417,   419,   421,   423,
     425,   427,   429,   431,   433,   435,   437,   439,   441,   443,
     445,   447,   452,   454,   456,   458,   460,   464,   467,   470,
     472,   474,   476,   478,   480,   482,   483,   485,   490,   494,
     499,   503,   507,   512,   517,   519,   521,   527,   529,   531,
     533,   534,   539,   544,   551,   558,   560,   561,   563,   565,
     567,   571,   576,   582,   584,   588,   590,   593,   597,   599,
     601,   604,   611,   612,   615,   620,   621,   623,   624,   629,
     632,   633,   635,   637,   640,   642,   644,   646,   648,   650,
     652,   654,   659,   661,   662,   664,   666,   669,   672,   675,
     681,   682,   684,   685,   687,   690,   694,   697,   700,   702,
     704,   706,   708,   710,   712,   714,   716,   720,   724,   726,
     730,   737,   739,   741,   742,   747,   748,   753,   754,   759,
     763,   765,   768,   772,   774,   776,   781,   786,   792,   796,
     802,   804,   806,   808,   810,   816,   817,   820,   821,   824,
     831,   832,   834,   836,   839,   841,   843,   847,   851,   853,
     856,   858,   863,   865,   866,   868,   870,   871,   873,   875,
     878,   880,   882,   884,   886,   888,   890,   892,   894,   896,
     898,   900,   902,   906,   907,   910,   913,   917,   918,   920,
     924,   926,   929,   933,   935,   939,   943,   946,   949,   952,
     954,   956,   958,   961,   964,   967,   969,   971,   973,   975,
     977,   980,   983,   988,   989,   991,   993,   995,   996,   999,
    1002,  1004,  1011,  1012,  1014,  1015,  1019,  1020,  1022,  1024,
    1027,  1032,  1033,  1035,  1037,  1039,  1040,  1042,  1044,  1047,
    1051,  1054,  1057,  1060,  1064,  1069,  1072,  1073,  1075,  1077,
    1082,  1087,  1089,  1094,  1096,  1099,  1106,  1108,  1110,  1112,
    1114,  1117,  1121,  1122,  1124,  1127,  1131,  1134,  1137,  1140,
    1143,  1146,  1149,  1152,  1155,  1158,  1161,  1164,  1167,  1168,
    1170,  1173,  1174,  1176,  1178,  1181,  1186,  1191,  1196,  1202,
    1207,  1212,  1213,  1215,  1219,  1221,  1224,  1228,  1230,  1235,
    1237,  1240,  1245,  1247,  1250,  1255,  1258,  1261,  1262,  1264,
    1266,  1268,  1270,  1272,  1275,  1277,  1279,  1281,  1283,  1285,
    1287,  1289,  1291,  1294,  1297,  1300,  1302,  1305,  1308,  1311,
    1313,  1316,  1318,  1320,  1322,  1324,  1326,  1328,  1332,  1336,
    1339,  1341,  1342,  1345,  1348,  1351,  1354,  1359,  1360,  1362,
    1364,  1367,  1373,  1374,  1376,  1378,  1381,  1383,  1385,  1387,
    1389,  1392,  1395,  1399,  1401,  1404,  1408,  1411,  1414,  1423,
    1424,  1427,  1430,  1433,  1437,  1441,  1444,  1446,  1449,  1454,
    1456,  1457,  1459,  1461,  1464,  1466,  1468,  1470,  1472,  1474,
    1476,  1478,  1480,  1482,  1484,  1486,  1488,  1490,  1497,  1498,
    1500,  1501,  1503,  1504,  1508,  1513,  1515,  1518,  1521,  1527,
    1528,  1531,  1533,  1536,  1538,  1541,  1543,  1545,  1547,  1550,
    1552,  1555,  1557,  1560,  1562,  1563,  1565,  1566,  1568,  1572,
    1574,  1578,  1584,  1587,  1592,  1596,  1600,  1604,  1606,  1609,
    1612,  1613,  1616,  1617,  1619,  1623,  1627,  1630,  1631,  1638,
    1641,  1645,  1646,  1649,  1650,  1653,  1654,  1657,  1659,  1662,
    1666,  1672,  1673,  1675,  1678,  1681,  1682,  1684,  1688,  1692,
    1696,  1699,  1700,  1702,  1703,  1705,  1706,  1708,  1715,  1717,
    1720,  1722,  1724,  1727,  1729,  1734,  1736,  1737,  1739,  1742,
    1744,  1746,  1749,  1751,  1753,  1755,  1757,  1759,  1761,  1763,
    1765,  1767,  1769,  1771,  1773,  1775,  1777,  1779,  1781,  1783,
    1785,  1787,  1789,  1791,  1793,  1795,  1797,  1799,  1801,  1803,
    1805,  1807,  1809,  1811,  1813,  1815,  1817,  1819,  1821,  1823,
    1825,  1827,  1829,  1831,  1833,  1835,  1838,  1845,  1846,  1849,
    1850,  1854,  1855,  1859,  1861,  1864,  1869,  1871,  1873,  1875,
    1877,  1879,  1881,  1883,  1884,  1888,  1894,  1895,  1897,  1899,
    1902,  1909,  1911,  1913,  1915,  1917,  1918,  1920,  1922,  1925,
    1929,  1930,  1932,  1934,  1937,  1944,  1945,  1947,  1949,  1952,
    1958,  1962,  1963,  1965,  1967,  1969,  1974,  1975,  1978,  1979,
    1983,  1985,  1988,  1992,  1997,  2002,  2004,  2007,  2008,  2010,
    2012,  2015,  2018,  2020,  2024,  2026,  2028,  2035,  2038,  2045,
    2047,  2048,  2050,  2053,  2057,  2059,  2062,  2067,  2069,  2071,
    2073,  2076,  2077,  2079,  2081,  2084,  2087,  2089,  2091,  2093,
    2095,  2099,  2101,  2102,  2106,  2112,  2114,  2116,  2119,  2123,
    2124,  2127,  2131,  2133,  2135,  2138,  2140,  2144,  2148,  2152,
    2155,  2156,  2158,  2166,  2167,  2172,  2173,  2176,  2177,  2180,
    2182,  2186,  2189,  2191,  2193,  2195,  2199,  2203,  2205,  2209,
    2212,  2214,  2216,  2217,  2219,  2221,  2224,  2225,  2229,  2230,
    2235,  2243,  2245,  2248,  2253,  2255,  2257,  2259,  2260,  2264,
    2265,  2267,  2276,  2282,  2283,  2285,  2287,  2290,  2294,  2295,
    2297,  2300,  2302,  2305,  2309,  2313,  2314,  2318,  2319,  2323,
    2324,  2328,  2329,  2331,  2340,  2346,  2357,  2363,  2364,  2366,
    2367,  2369,  2370,  2372,  2374,  2376,  2378,  2381,  2383,  2386,
    2391,  2392,  2394,  2395,  2397,  2398,  2400,  2402,  2404,  2406,
    2408,  2410,  2414,  2421,  2422,  2424,  2426,  2429,  2432,  2434,
    2437,  2442,  2443,  2446,  2448,  2451,  2455,  2458,  2461,  2462,
    2464,  2467,  2472,  2477,  2478,  2480,  2482,  2485,  2486,  2488,
    2489,  2491,  2493,  2495,  2499,  2501,  2503,  2506,  2509,  2513,
    2517,  2518,  2522,  2524,  2528,  2536,  2538,  2540,  2543,  2545,
    2549,  2553,  2555,  2559,  2560,  2562,  2564,  2567,  2570,  2572,
    2574,  2576,  2578,  2580,  2582,  2585,  2588,  2590,  2591,  2593,
    2595,  2598,  2601,  2605,  2607,  2610,  2612,  2615,  2619,  2622,
    2623,  2628,  2633,  2637,  2641,  2645,  2648,  2655,  2663,  2666,
    2668,  2669,  2671,  2674,  2677,  2678,  2680,  2683,  2687,  2688,
    2691,  2692,  2696,  2698,  2701,  2702,  2706,  2707,  2712,  2713,
    2715,  2719,  2723,  2727,  2728,  2731,  2732,  2734,  2735,  2737,
    2740,  2741,  2745,  2746,  2751,  2754,  2755,  2759,  2760,  2762,
    2765,  2772,  2774,  2776,  2777,  2779,  2781,  2783,  2786,  2787,
    2791,  2792,  2797,  2805,  2807,  2810,  2815,  2820,  2821,  2823,
    2824,  2829,  2830,  2835,  2841,  2844,  2845,  2848,  2854,  2857,
    2864,  2865,  2867,  2868,  2871,  2872,  2874,  2877,  2879,  2882,
    2886,  2888,  2891,  2894,  2896,  2899,  2901,  2903,  2905,  2907,
    2909,  2911,  2913,  2915,  2917,  2922,  2924,  2925,  2928,  2929,
    2933,  2936,  2938,  2941,  2944,  2946,  2947,  2949,  2951,  2954,
    2958,  2959,  2961,  2964,  2966,  2968,  2970,  2972,  2974,  2977,
    2980,  2982,  2984,  2986,  2988,  2992,  2994,  2996,  2998,  3000,
    3002,  3005,  3007,  3010,  3013,  3019,  3024,  3026,  3032,  3034,
    3036,  3039,  3041,  3043,  3046,  3048,  3051,  3052,  3054,  3059,
    3064,  3070,  3076,  3079,  3082,  3083,  3085,  3088,  3093,  3094,
    3098,  3100,  3102,  3104,  3107,  3109,  3111,  3113,  3116,  3118,
    3120,  3122,  3125,  3128,  3130,  3133,  3136,  3138,  3142,  3143,
    3145,  3147,  3150,  3154,  3157,  3159,  3161,  3164,  3167,  3170,
    3172,  3174,  3176,  3178,  3180,  3183,  3186,  3188,  3190,  3192,
    3194,  3198,  3200,  3204,  3206,  3208,  3210,  3212,  3214,  3216,
    3218,  3220,  3226,  3230,  3234,  3235,  3241,  3242,  3247,  3249,
    3251,  3252,  3254,  3256,  3259,  3265,  3272,  3280,  3281,  3284,
    3286,  3289,  3293,  3295,  3298,  3302,  3305,  3306,  3308,  3310,
    3312,  3313,  3316,  3317,  3322,  3323,  3329,  3330,  3332,  3339,
    3348,  3357,  3359,  3362,  3366,  3368,  3371,  3375,  3377,  3380,
    3381,  3383,  3390,  3399,  3400,  3402,  3409,  3418,  3427,  3438,
    3449,  3450,  3452,  3461,  3462,  3464,  3471,  3476,  3482,  3483,
    3485,  3486,  3490,  3491,  3495,  3497,  3500,  3503,  3506,  3509,
    3512,  3514,  3516,  3518,  3522,  3526,  3530,  3532,  3535,  3538,
    3540,  3542,  3544,  3546,  3548,  3550,  3552,  3556,  3558,  3559,
    3561,  3562,  3566,  3568,  3571,  3574,  3577,  3579,  3582,  3586,
    3588,  3590,  3592,  3596,  3600,  3604,  3608,  3610,  3612,  3615,
    3617,  3619,  3621,  3623,  3625,  3627,  3630,  3633,  3635,  3637,
    3639,  3641,  3643,  3645,  3647,  3649,  3652,  3653,  3655,  3657,
    3660,  3663,  3665,  3667,  3669,  3671,  3673,  3676,  3678,  3680,
    3683,  3687,  3689,  3694,  3696,  3700,  3703,  3705,  3710,  3716,
    3718,  3722,  3726,  3728,  3730,  3732,  3734,  3737,  3739,  3741,
    3743,  3746,  3748,  3750,  3752,  3754,  3756,  3758,  3761,  3763,
    3769,  3771,  3774,  3776,  3782,  3784,  3787,  3790,  3792,  3794,
    3795,  3797,  3798,  3800,  3802,  3804,  3806,  3808,  3810,  3814,
    3816,  3820,  3824,  3828,  3832,  3836,  3840,  3843
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     465,     0,    -1,   466,    -1,   467,    -1,   466,   467,    -1,
     468,    -1,   472,    -1,   477,   494,   582,   747,   469,   474,
      -1,    -1,   470,    -1,   469,   470,    -1,   477,   494,   582,
     747,   469,   471,    -1,   139,   478,   277,    -1,   123,   291,
     478,   277,    -1,   475,   494,   582,   747,   473,    -1,   134,
     478,   277,    -1,    -1,   471,    -1,   181,   277,   478,   476,
     277,    -1,    -1,    25,   229,    -1,   193,   116,   277,   292,
     277,   478,   581,   479,   480,   483,    -1,     1,    -1,  1060,
      -1,    -1,   301,   277,    -1,    -1,   212,   481,   482,   581,
      -1,    67,    -1,   201,    -1,    -1,   291,    -1,    -1,   484,
      -1,   485,    -1,   484,   485,    -1,   486,    -1,   487,    -1,
     488,    -1,   489,    -1,   490,    -1,   491,    -1,    28,   277,
     492,   581,    -1,   207,   277,   492,   581,    -1,    98,   277,
     492,   581,    -1,    97,   277,   492,   581,    -1,   338,   277,
     492,   581,    -1,   309,   277,   492,   581,    -1,   493,   581,
      -1,   492,   493,   581,    -1,   445,    -1,   446,    -1,   447,
      -1,    -1,   150,   116,   277,   495,    -1,    -1,   496,    -1,
     497,    -1,   496,   497,    -1,   498,    -1,   521,    -1,    79,
     336,   277,   499,    -1,   500,    -1,   499,   500,    -1,   506,
      -1,   508,    -1,   517,    -1,   501,    -1,   316,   277,   502,
      -1,    -1,   503,   277,    -1,   504,    -1,   503,   504,    -1,
     180,   709,   505,    -1,   180,     9,   213,    -1,    -1,   213,
      -1,   351,   277,   445,   507,   581,    -1,    -1,   403,   101,
     241,   277,    -1,   258,   277,   509,   581,    -1,   510,   277,
      -1,   510,   511,   277,    -1,   511,   277,    -1,   445,    -1,
     512,    -1,   511,   512,    -1,   513,    -1,   515,    -1,   516,
      -1,   238,   347,   624,   514,    -1,   404,    -1,    55,    -1,
     242,    -1,   291,    62,   343,   212,   445,    -1,   339,   212,
     624,    -1,   353,   277,   518,    -1,    -1,   519,    -1,   520,
      -1,   519,   520,    -1,    91,   346,   212,   445,   277,    -1,
     102,   212,    66,   277,    -1,   522,   535,    -1,   522,   523,
      -1,    -1,   205,   336,   277,    -1,   211,   277,   524,    -1,
      -1,   525,   277,    -1,   526,    -1,   525,   526,    -1,   527,
      -1,   531,    -1,   332,   528,    22,   174,   530,    -1,    -1,
     529,    -1,   299,    -1,   348,    -1,   349,    -1,   915,    -1,
     530,   915,    -1,   530,  1058,   915,    -1,   244,   166,   368,
      81,   532,    -1,   533,    -1,   532,   533,    -1,   915,   534,
      -1,    -1,   284,   624,    -1,   167,   277,   536,    -1,   537,
      -1,   536,   537,    -1,   340,   538,  1060,   539,   581,    -1,
      -1,  1028,   266,    -1,   540,    -1,   539,   540,    -1,   541,
      -1,   542,    -1,   543,    -1,   544,    -1,   545,    -1,   546,
      -1,   547,    -1,   548,    -1,   549,    -1,   550,    -1,   551,
      -1,   552,    -1,   556,    -1,   553,    -1,   560,    -1,   561,
      -1,   562,    -1,   564,    -1,   567,    -1,   571,    -1,   572,
      -1,   573,    -1,   576,    -1,   580,    -1,   318,   554,    18,
     555,    -1,   249,    -1,   624,    -1,    22,    -1,    23,    -1,
      26,  1099,   557,    -1,  1068,   559,    -1,   558,   559,    -1,
     112,    -1,   204,    -1,   271,    -1,   205,    -1,   295,    -1,
     368,    -1,    -1,  1068,    -1,   269,   633,   225,   344,    -1,
     269,   633,   344,    -1,   269,   633,    37,   344,    -1,   269,
     633,   306,    -1,   269,   633,   198,    -1,   274,    54,   633,
    1068,    -1,   299,   107,   633,   563,    -1,   355,    -1,  1054,
      -1,     4,   241,   633,   565,   566,    -1,   344,    -1,   295,
      -1,   119,    -1,    -1,   306,   215,   633,  1054,    -1,   230,
     241,   633,   568,    -1,   237,   403,   230,   263,   569,   570,
      -1,    30,   403,   230,   263,   569,   570,    -1,   161,    -1,
      -1,   244,    -1,   299,    -1,   300,    -1,    61,   633,  1054,
      -1,    62,   343,   633,  1054,    -1,   299,   215,   633,   574,
     579,    -1,  1054,    -1,  1060,   411,   575,    -1,  1060,    -1,
     575,  1060,    -1,   575,  1058,  1060,    -1,   577,    -1,   578,
      -1,   577,   578,    -1,    18,   299,   215,   633,   574,   579,
      -1,    -1,   403,   118,    -1,   166,   358,   212,  1054,    -1,
      -1,   277,    -1,    -1,    95,   116,   277,   583,    -1,     1,
     277,    -1,    -1,   584,    -1,   585,    -1,   584,   585,    -1,
     586,    -1,   662,    -1,   666,    -1,   668,    -1,   688,    -1,
     699,    -1,   665,    -1,   166,   336,   277,   587,    -1,     1,
      -1,    -1,   588,    -1,   589,    -1,   588,   589,    -1,   165,
     590,    -1,   334,   590,    -1,  1060,   581,   592,   581,   591,
      -1,    -1,   621,    -1,    -1,   593,    -1,   594,   581,    -1,
     593,   594,   581,    -1,   633,   163,    -1,   633,   184,    -1,
     608,    -1,   611,    -1,   609,    -1,   607,    -1,   603,    -1,
     598,    -1,   597,    -1,   595,    -1,   313,   633,   596,    -1,
     315,   633,   596,    -1,  1060,    -1,    61,   633,  1060,    -1,
     224,   633,   599,   600,   601,   602,    -1,  1059,    -1,   624,
      -1,    -1,   403,   173,    27,   599,    -1,    -1,   226,    27,
     380,   599,    -1,    -1,   226,    27,    41,   599,    -1,   399,
     260,   604,    -1,   605,    -1,   604,   605,    -1,   606,   633,
    1068,    -1,   216,    -1,  1059,    -1,    95,   299,   212,   575,
      -1,    95,   300,    21,   575,    -1,   216,   300,    21,   354,
     277,    -1,   216,   300,   575,    -1,    40,    81,   624,   613,
     610,    -1,   300,    -1,    55,    -1,   612,    -1,   615,    -1,
     299,    81,   624,   613,    55,    -1,    -1,   378,   624,    -1,
      -1,   178,   624,    -1,   299,   212,   401,   196,   347,   616,
      -1,    -1,   617,    -1,   618,    -1,   617,   618,    -1,   619,
      -1,   620,    -1,   614,   613,    55,    -1,   108,   263,  1059,
      -1,   622,    -1,   621,   622,    -1,   623,    -1,   624,   625,
     626,   581,    -1,   441,    -1,    -1,   170,    -1,   445,    -1,
      -1,   627,    -1,   628,    -1,   627,   628,    -1,   631,    -1,
     632,    -1,   634,    -1,   637,    -1,   640,    -1,   641,    -1,
     642,    -1,   646,    -1,   659,    -1,   660,    -1,   661,    -1,
     629,    -1,   311,  1060,   630,    -1,    -1,   376,  1060,    -1,
     302,  1060,    -1,   281,   633,   449,    -1,    -1,   212,    -1,
     399,   633,   635,    -1,   636,    -1,   635,   636,    -1,   635,
    1058,   636,    -1,  1068,    -1,  1068,   376,  1068,    -1,   395,
     633,   639,    -1,   639,   759,    -1,   395,   633,    -1,    37,
     441,    -1,    69,    -1,    70,    -1,    71,    -1,    72,   441,
      -1,    73,   441,    -1,    74,   441,    -1,    75,    -1,   112,
      -1,   197,    -1,   273,    -1,   283,    -1,   212,   163,    -1,
     212,   184,    -1,   643,   633,   644,   645,    -1,    -1,   346,
      -1,   218,    -1,   382,    -1,    -1,   342,    54,    -1,   259,
     647,    -1,   648,    -1,   441,   613,   649,   650,   651,   656,
      -1,    -1,   377,    -1,    -1,   108,   263,  1060,    -1,    -1,
     652,    -1,   653,    -1,   652,   653,    -1,   654,   215,   633,
    1024,    -1,    -1,   655,    -1,    24,    -1,   109,    -1,    -1,
     657,    -1,   658,    -1,   684,   658,    -1,   198,    42,  1024,
      -1,   366,   219,    -1,   366,   329,    -1,   214,   329,    -1,
      38,   402,   413,    -1,   405,   336,   581,   663,    -1,     1,
     277,    -1,    -1,   664,    -1,   621,    -1,   231,   336,   581,
     621,    -1,   227,   336,   277,   667,    -1,   621,    -1,    68,
     336,   277,   669,    -1,   670,    -1,   669,   670,    -1,    48,
    1060,   174,   671,   621,   581,    -1,   672,    -1,   679,    -1,
     685,    -1,   673,    -1,   672,   673,    -1,   674,   204,   675,
      -1,    -1,   451,    -1,   676,   678,    -1,   677,   633,  1068,
      -1,   452,   453,    -1,   452,   454,    -1,   452,   455,    -1,
     452,   456,    -1,   457,   421,    -1,   457,   416,    -1,   452,
     350,    -1,   458,   220,    -1,   123,   215,    -1,   358,   215,
      -1,   457,    90,    -1,   452,   459,    -1,    -1,   575,    -1,
     271,   680,    -1,    -1,   681,    -1,   682,    -1,   681,   682,
      -1,   460,    90,   633,  1068,    -1,   458,   220,   633,  1068,
      -1,   358,   215,   633,  1068,    -1,   460,   461,   259,   624,
     683,    -1,   157,   215,   633,  1068,    -1,   452,   460,   633,
    1068,    -1,    -1,   684,    -1,   198,    42,  1035,    -1,   686,
      -1,   685,   686,    -1,   674,   210,   687,    -1,   676,    -1,
     333,   336,   277,   689,    -1,   690,    -1,   689,   690,    -1,
     624,   625,   691,   581,    -1,   692,    -1,   691,   692,    -1,
     694,   633,  1019,   693,    -1,   697,  1068,    -1,   632,   698,
      -1,    -1,   695,    -1,    31,    -1,    32,    -1,   176,    -1,
     177,    -1,   638,   112,    -1,   642,    -1,    29,    -1,   426,
      -1,   337,    -1,   317,    -1,   179,    -1,    36,    -1,    33,
      -1,    38,   333,    -1,    38,   225,    -1,    38,   308,    -1,
      39,    -1,   156,   153,    -1,   156,   152,    -1,   156,   333,
      -1,   191,    -1,   249,   191,    -1,   234,    -1,   415,    -1,
     324,    -1,   385,    -1,   225,    -1,    64,    -1,    38,   402,
     413,    -1,   254,   633,   696,    -1,   282,   624,    -1,  1060,
      -1,    -1,   399,   633,    -1,   178,  1068,    -1,   378,  1068,
      -1,   398,  1068,    -1,   313,   336,   277,   700,    -1,    -1,
     701,    -1,   702,    -1,   701,   702,    -1,   296,   596,   703,
     277,   717,    -1,    -1,   704,    -1,   705,    -1,   704,   705,
      -1,   706,    -1,   707,    -1,   708,    -1,   711,    -1,   633,
     184,    -1,    60,  1068,    -1,   710,   732,   709,    -1,  1068,
      -1,   709,  1068,    -1,   709,    66,  1068,    -1,    84,   633,
      -1,    85,    21,    -1,   275,   712,   624,   948,   713,   714,
     715,   716,    -1,    -1,   222,   212,    -1,   223,    21,    -1,
     189,   624,    -1,   172,   110,   624,    -1,   217,   110,   624,
      -1,   173,   624,    -1,   718,    -1,   717,   718,    -1,   719,
     720,   721,   277,    -1,   624,    -1,    -1,  1060,    -1,   722,
      -1,   721,   722,    -1,   723,    -1,   727,    -1,   729,    -1,
     733,    -1,   734,    -1,   735,    -1,   736,    -1,   661,    -1,
     737,    -1,   738,    -1,   739,    -1,   740,    -1,   746,    -1,
     225,   724,   633,   725,   624,   726,    -1,    -1,   254,    -1,
      -1,   282,    -1,    -1,   263,   248,   275,    -1,   248,   188,
     633,   728,    -1,   624,    -1,   282,   624,    -1,   248,   275,
      -1,   384,   633,   730,   731,   732,    -1,    -1,   313,   189,
      -1,   328,    -1,   275,   189,    -1,   280,    -1,    84,   189,
      -1,    51,    -1,   110,    -1,   100,    -1,    84,   173,    -1,
      50,    -1,   275,   173,    -1,   279,    -1,   313,   173,    -1,
     327,    -1,    -1,  1068,    -1,    -1,   171,    -1,   395,   633,
     112,    -1,   112,    -1,   281,   633,   449,    -1,   346,   633,
     644,   342,    54,    -1,   214,   329,    -1,    64,   724,   633,
     624,    -1,   350,   633,  1059,    -1,   399,   633,  1068,    -1,
     365,   741,   744,    -1,   742,    -1,   741,   742,    -1,   575,
     743,    -1,    -1,   393,   575,    -1,    -1,   745,    -1,   321,
     263,  1068,    -1,   321,   263,   171,    -1,   188,   199,    -1,
      -1,   288,   116,   748,   277,   760,   762,    -1,     1,   277,
      -1,   749,   750,   751,    -1,    -1,   398,   752,    -1,    -1,
      53,   752,    -1,    -1,   323,   445,    -1,   753,    -1,   752,
     753,    -1,   752,  1058,   753,    -1,   754,   756,   759,   758,
    1060,    -1,    -1,   755,    -1,    42,   304,    -1,    42,   399,
      -1,    -1,   757,    -1,   347,   633,    29,    -1,   347,   633,
     104,    -1,   388,   347,   633,    -1,   347,   633,    -1,    -1,
     266,    -1,    -1,   624,    -1,    -1,   761,    -1,   103,   581,
     762,   123,   103,   581,    -1,   763,    -1,   762,   763,    -1,
     764,    -1,   767,    -1,   769,   581,    -1,   277,    -1,   765,
     336,   766,   277,    -1,   445,    -1,    -1,  1068,    -1,   445,
     277,    -1,   769,    -1,   770,    -1,   769,   770,    -1,   893,
      -1,   990,    -1,   908,    -1,   919,    -1,   936,    -1,   923,
      -1,   829,    -1,   962,    -1,   966,    -1,   953,    -1,   972,
      -1,   992,    -1,   999,    -1,  1021,    -1,  1034,    -1,  1039,
      -1,  1041,    -1,  1043,    -1,   906,    -1,   873,    -1,   884,
      -1,   887,    -1,   891,    -1,   839,    -1,   808,    -1,   811,
      -1,   813,    -1,   825,    -1,   827,    -1,   828,    -1,   831,
      -1,   833,    -1,   835,    -1,   854,    -1,   860,    -1,   834,
      -1,   793,    -1,   771,    -1,   779,    -1,  1045,    -1,  1051,
      -1,  1052,    -1,  1053,    -1,     1,   277,    -1,   200,  1035,
     772,   773,   774,   778,    -1,    -1,   403,   170,    -1,    -1,
     777,  1099,   399,    -1,    -1,   375,   312,   775,    -1,   776,
      -1,   775,   776,    -1,   777,    95,    42,  1054,    -1,     9,
      -1,    11,    -1,    14,    -1,    15,    -1,    96,    -1,   256,
      -1,   257,    -1,    -1,   375,   378,   104,    -1,   206,  1068,
     780,   787,   790,    -1,    -1,   781,    -1,   782,    -1,   781,
     782,    -1,   367,  1059,   174,   783,   731,   784,    -1,    55,
      -1,     9,    -1,   218,    -1,   172,    -1,    -1,   785,    -1,
     786,    -1,   784,   786,    -1,   905,   201,  1068,    -1,    -1,
     788,    -1,   789,    -1,   788,   789,    -1,   312,   783,  1068,
      42,  1068,   784,    -1,    -1,   791,    -1,   792,    -1,   791,
     792,    -1,    87,  1068,   378,  1068,   784,    -1,   335,   795,
     794,    -1,    -1,   143,    -1,   796,    -1,   801,    -1,  1059,
     797,   798,   799,    -1,    -1,   401,  1059,    -1,    -1,    27,
     123,   769,    -1,   800,    -1,   799,   800,    -1,   402,  1074,
     803,    -1,     9,  1059,   798,   802,    -1,   402,   807,   804,
     803,    -1,   769,    -1,   248,   341,    -1,    -1,   805,    -1,
     806,    -1,   805,   806,    -1,    19,   807,    -1,  1074,    -1,
     149,   809,   810,    -1,  1060,    -1,  1060,    -1,   239,   915,
     954,   958,   812,   961,    -1,   398,   530,    -1,   158,   823,
     815,   817,   824,   814,    -1,   133,    -1,    -1,   816,    -1,
      16,   823,    -1,   816,    16,   823,    -1,   818,    -1,   817,
     818,    -1,   402,   819,   820,   769,    -1,    20,    -1,   383,
      -1,   164,    -1,  1028,   823,    -1,    -1,   821,    -1,   822,
      -1,   821,   822,    -1,    16,   819,    -1,  1068,    -1,  1103,
      -1,   383,    -1,   164,    -1,   823,   376,   823,    -1,  1074,
      -1,    -1,   402,   270,   769,    -1,   326,  1059,   938,   940,
     826,    -1,   142,    -1,   186,    -1,   293,  1059,    -1,   307,
    1059,   830,    -1,    -1,   178,  1054,    -1,   387,   915,   832,
      -1,   299,    -1,   300,    -1,    47,  1035,    -1,    83,    -1,
     105,   836,   838,    -1,   105,   837,   838,    -1,   915,   963,
     940,    -1,   166,  1035,    -1,    -1,   130,    -1,    43,   482,
    1054,   840,   850,  1016,   849,    -1,    -1,   398,   843,   841,
     842,    -1,    -1,   183,  1059,    -1,    -1,   323,  1059,    -1,
     844,    -1,   843,  1058,   844,    -1,   843,   844,    -1,   845,
      -1,   846,    -1,   847,    -1,    42,   304,   847,    -1,    42,
      82,   847,    -1,   848,    -1,   847,  1058,   848,    -1,   847,
     848,    -1,  1068,    -1,   262,    -1,    -1,   126,    -1,   851,
      -1,   852,   853,    -1,    -1,   263,   272,   769,    -1,    -1,
     251,   263,   272,   769,    -1,   363,   855,   208,  1059,   858,
     850,   859,    -1,   856,    -1,   855,   856,    -1,  1024,   106,
      42,   857,    -1,  1059,    -1,  1069,    -1,   347,    -1,    -1,
     403,   283,  1059,    -1,    -1,   145,    -1,   389,  1059,   861,
     866,   858,   871,   850,   872,    -1,   106,    42,   865,  1068,
     862,    -1,    -1,   863,    -1,   864,    -1,   863,   864,    -1,
     267,   865,  1068,    -1,    -1,     9,    -1,   208,   867,    -1,
     868,    -1,   867,   868,    -1,   867,  1058,   868,    -1,  1059,
     869,   870,    -1,    -1,   107,   196,  1059,    -1,    -1,    90,
     196,  1059,    -1,    -1,   367,   196,  1059,    -1,    -1,   147,
      -1,   397,   879,     8,   880,   882,   288,   874,   883,    -1,
     397,   875,   101,   874,   877,    -1,   397,   879,     8,   880,
     881,   876,   216,   288,   874,   883,    -1,   397,   879,    34,
     314,  1059,    -1,    -1,   263,    -1,    -1,   174,    -1,    -1,
     166,    -1,   303,    -1,   386,    -1,   878,    -1,   877,   878,
      -1,  1059,    -1,     9,   289,    -1,     9,   305,   260,  1059,
      -1,    -1,   184,    -1,    -1,   354,    -1,    -1,    35,    -1,
     123,    -1,   157,    -1,   159,    -1,   915,    -1,   912,    -1,
     185,  1099,   885,    -1,   185,  1099,   886,   108,   263,  1059,
      -1,    -1,   900,    -1,  1060,    -1,   886,  1060,    -1,    17,
     888,    -1,   889,    -1,   888,   889,    -1,   900,   378,   890,
     900,    -1,    -1,   290,   378,    -1,   160,    -1,   160,   291,
      -1,   160,   278,   892,    -1,   160,   276,    -1,   160,   336,
      -1,    -1,    93,    -1,   278,   898,    -1,   278,   898,   894,
     897,    -1,   278,   894,   896,   138,    -1,    -1,   895,    -1,
     901,    -1,   895,   901,    -1,    -1,   769,    -1,    -1,   138,
      -1,   899,    -1,   900,    -1,   900,   376,   900,    -1,  1060,
      -1,   175,    -1,   624,   377,    -1,  1059,   377,    -1,   902,
     390,  1074,    -1,   902,   401,   903,    -1,    -1,   403,   373,
     905,    -1,   904,    -1,   903,     8,   904,    -1,  1068,   178,
    1068,    42,  1068,   390,  1074,    -1,    34,    -1,     8,    -1,
     362,   907,    -1,   331,    -1,   331,   323,  1054,    -1,   331,
     183,  1054,    -1,  1054,    -1,   265,   909,   910,    -1,    -1,
     161,    -1,   911,    -1,   910,   911,    -1,   912,   913,    -1,
     204,    -1,   271,    -1,   210,    -1,   205,    -1,   162,    -1,
     914,    -1,   913,   914,    -1,   915,   916,    -1,  1059,    -1,
      -1,   917,    -1,   918,    -1,   917,   918,    -1,   403,   230,
      -1,   403,   249,   325,    -1,   428,    -1,    57,   920,    -1,
     921,    -1,   920,   921,    -1,   920,  1058,   921,    -1,   915,
     922,    -1,    -1,   303,   403,   249,   325,    -1,   386,   403,
     249,   325,    -1,   303,   174,   310,    -1,   386,   174,   310,
      -1,   403,   249,   325,    -1,   403,   230,    -1,   924,   925,
     927,   929,   931,   935,    -1,   924,   925,   927,   929,   930,
     940,   935,    -1,   297,   915,    -1,   926,    -1,    -1,   299,
      -1,   248,   299,    -1,   286,   299,    -1,    -1,   928,    -1,
     403,   230,    -1,   403,   249,   230,    -1,    -1,   208,  1059,
      -1,    -1,   215,   212,  1059,    -1,   932,    -1,   933,   934,
      -1,    -1,    27,   123,   768,    -1,    -1,   251,    27,   123,
     768,    -1,    -1,   140,    -1,   937,   944,   939,    -1,   937,
     940,   939,    -1,   406,  1059,   938,    -1,    -1,   178,  1068,
      -1,    -1,   148,    -1,    -1,   941,    -1,   942,   943,    -1,
      -1,   209,   215,   769,    -1,    -1,   251,   209,   215,   769,
      -1,   945,   949,    -1,    -1,   905,   946,   947,    -1,    -1,
       7,    -1,  1054,   948,    -1,   378,   225,  1054,   263,   248,
     275,    -1,  1059,    -1,   275,    -1,    -1,   225,    -1,   226,
      -1,   950,    -1,   951,   952,    -1,    -1,    27,   137,   770,
      -1,    -1,   251,    27,   137,   770,    -1,   348,   915,   954,
     957,   958,   959,   961,    -1,   955,    -1,   954,   955,    -1,
     263,    24,   956,  1035,    -1,   263,   109,   956,  1035,    -1,
      -1,   215,    -1,    -1,   403,   118,   196,   268,    -1,    -1,
      62,   343,   633,  1059,    -1,   204,   288,   633,   445,   960,
      -1,   398,  1035,    -1,    -1,   376,   445,    -1,   271,   288,
     633,   445,   960,    -1,   183,  1035,    -1,   322,   915,   963,
     964,   931,   965,    -1,    -1,   299,    -1,    -1,   208,  1054,
      -1,    -1,   141,    -1,   345,   967,    -1,   968,    -1,   967,
     968,    -1,   970,   969,   971,    -1,   378,    -1,   391,    42,
      -1,   117,    42,    -1,   971,    -1,   970,   971,    -1,  1054,
      -1,   263,    -1,   261,    -1,   383,    -1,   164,    -1,   253,
      -1,   973,    -1,   977,    -1,   987,    -1,   112,   974,   975,
     976,    -1,  1024,    -1,    -1,   393,  1054,    -1,    -1,   403,
     249,     7,    -1,   112,   978,    -1,   979,    -1,   978,   979,
      -1,   980,   981,    -1,  1008,    -1,    -1,   982,    -1,   983,
      -1,   982,   983,    -1,   403,   985,   984,    -1,    -1,  1054,
      -1,    27,   986,    -1,    33,    -1,    36,    -1,    39,    -1,
      84,    -1,    86,    -1,   156,   152,    -1,   156,   153,    -1,
     190,    -1,   191,    -1,   232,    -1,   234,    -1,   241,   212,
      40,    -1,  1013,    -1,   347,    -1,   225,    -1,    64,    -1,
     284,    -1,   112,   988,    -1,   989,    -1,   988,   989,    -1,
    1059,  1002,    -1,   243,    89,  1068,   378,   991,    -1,   243,
    1068,   378,   991,    -1,  1025,    -1,   194,  1074,   993,   995,
     998,    -1,   997,    -1,   994,    -1,   375,   997,    -1,  1029,
      -1,   996,    -1,   122,   997,    -1,   768,    -1,   248,   341,
      -1,    -1,   135,    -1,     3,  1059,  1000,  1001,    -1,     3,
    1006,  1016,  1001,    -1,     3,  1059,   430,    90,  1001,    -1,
       3,  1059,  1002,  1016,  1001,    -1,   178,  1059,    -1,   178,
    1005,    -1,    -1,   124,    -1,    27,  1003,    -1,   225,   254,
    1068,  1004,    -1,    -1,    64,   254,  1068,    -1,   423,    -1,
     422,    -1,   421,    -1,   421,   419,    -1,   417,    -1,    97,
      -1,   420,    -1,   420,   418,    -1,   429,    -1,   431,    -1,
     416,    -1,   424,   215,    -1,   159,   358,    -1,  1007,    -1,
    1006,  1007,    -1,  1008,  1009,    -1,  1059,    -1,  1059,   386,
    1068,    -1,    -1,  1010,    -1,  1011,    -1,  1010,  1011,    -1,
     403,  1012,  1068,    -1,    27,  1014,    -1,    29,    -1,   426,
      -1,   249,    33,    -1,    34,   416,    -1,   249,    36,    -1,
      38,    -1,    84,    -1,    86,    -1,    92,    -1,   121,    -1,
     156,   152,    -1,   156,   153,    -1,   190,    -1,   191,    -1,
     232,    -1,   234,    -1,   241,   212,    40,    -1,   261,    -1,
     427,    54,   212,    -1,  1013,    -1,   337,    -1,   347,    -1,
     425,    -1,   392,    -1,   415,    -1,   428,    -1,   414,    -1,
      27,   225,   724,  1068,  1015,    -1,    64,   724,  1068,    -1,
     284,   724,  1068,    -1,    -1,   263,  1018,  1019,  1020,  1017,
      -1,    -1,   251,   263,  1018,   769,    -1,   424,    -1,   159,
      -1,    -1,  1059,    -1,   769,    -1,  1022,  1033,    -1,     5,
    1036,   378,  1036,  1030,    -1,     5,  1036,  1023,   183,  1036,
    1030,    -1,     5,    89,  1054,   378,  1054,  1027,  1030,    -1,
      -1,   378,  1036,    -1,  1068,    -1,  1024,  1068,    -1,  1024,
    1058,  1068,    -1,  1026,    -1,  1025,  1026,    -1,  1025,  1058,
    1026,    -1,  1068,  1027,    -1,    -1,   330,    -1,  1029,    -1,
     251,    -1,    -1,  1031,  1032,    -1,    -1,   263,   347,   157,
     770,    -1,    -1,   251,   263,   347,   157,   770,    -1,    -1,
     125,    -1,   364,  1035,   178,  1036,  1030,  1038,    -1,   364,
    1035,   178,  1054,   183,  1036,  1030,  1038,    -1,   364,    89,
    1059,   178,  1059,  1027,  1030,  1038,    -1,  1054,    -1,  1035,
    1054,    -1,  1035,  1058,  1054,    -1,  1037,    -1,  1036,  1037,
      -1,  1036,  1058,  1037,    -1,  1054,    -1,  1054,   330,    -1,
      -1,   146,    -1,   245,  1054,    42,  1036,  1030,  1040,    -1,
     245,  1054,    42,  1054,   183,  1036,  1030,  1040,    -1,    -1,
     136,    -1,   115,  1054,   208,  1036,  1030,  1042,    -1,   115,
    1054,   208,  1054,   183,  1036,  1030,  1042,    -1,   115,  1054,
      42,  1054,   183,  1036,  1030,  1042,    -1,   115,  1054,   208,
    1054,   183,  1036,   308,  1054,  1030,  1042,    -1,   115,  1054,
      42,  1054,   183,  1036,   308,  1054,  1030,  1042,    -1,    -1,
     132,    -1,    77,  1036,  1027,  1097,  1103,  1028,  1030,  1044,
      -1,    -1,   129,    -1,   357,   915,  1046,  1049,   940,  1047,
      -1,   215,  1050,  1068,  1048,    -1,   172,   299,   215,   633,
    1024,    -1,    -1,   144,    -1,    -1,   403,   347,  1068,    -1,
      -1,   403,   428,   268,    -1,  1091,    -1,   633,   172,    -1,
     633,   217,    -1,   203,   596,    -1,   372,   596,    -1,   182,
     596,    -1,  1059,    -1,  1055,    -1,  1057,    -1,   220,   260,
    1059,    -1,     6,   260,  1059,    -1,     6,   196,  1059,    -1,
    1056,    -1,   435,  1056,    -1,   436,  1056,    -1,   441,    -1,
     442,    -1,   444,    -1,   447,    -1,   446,    -1,   450,    -1,
      66,    -1,  1060,  1061,  1062,    -1,   445,    -1,    -1,  1063,
      -1,    -1,  1101,  1065,  1102,    -1,  1064,    -1,  1063,  1064,
      -1,   196,  1060,    -1,   260,  1060,    -1,  1066,    -1,  1065,
    1066,    -1,  1065,  1058,  1066,    -1,  1067,    -1,  1060,    -1,
    1071,    -1,  1101,  1067,  1102,    -1,  1067,   435,  1067,    -1,
    1067,   436,  1067,    -1,  1067,   434,  1067,    -1,  1059,    -1,
    1069,    -1,   180,  1059,    -1,  1070,    -1,  1072,    -1,  1071,
      -1,  1073,    -1,  1055,    -1,  1057,    -1,     9,  1071,    -1,
       9,  1073,    -1,   352,    -1,   413,    -1,   294,    -1,   192,
      -1,   235,    -1,   253,    -1,   383,    -1,   164,    -1,  1080,
    1075,    -1,    -1,  1076,    -1,  1077,    -1,  1076,  1077,    -1,
    1078,  1079,    -1,    19,    -1,   267,    -1,  1080,    -1,  1081,
      -1,  1085,    -1,   251,  1085,    -1,  1082,    -1,  1083,    -1,
    1082,  1083,    -1,  1028,  1091,  1084,    -1,  1103,    -1,  1101,
    1103,  1081,  1102,    -1,  1087,    -1,  1101,  1074,  1102,    -1,
     633,  1028,    -1,  1103,    -1,  1103,   633,  1091,  1103,    -1,
    1103,   633,   251,  1091,  1103,    -1,  1089,    -1,  1103,  1086,
    1088,    -1,  1103,   633,  1088,    -1,   256,    -1,    11,    -1,
      12,    -1,    13,    -1,  1086,  1090,    -1,   285,    -1,   247,
      -1,   413,    -1,  1086,  1092,    -1,  1093,    -1,  1094,    -1,
    1095,    -1,  1096,    -1,  1097,    -1,  1098,    -1,   187,  1100,
      -1,   409,    -1,   187,  1100,   267,   154,  1099,    -1,   410,
      -1,   221,  1100,    -1,   407,    -1,   221,  1100,   267,   154,
    1099,    -1,   408,    -1,   154,  1099,    -1,   155,  1099,    -1,
     411,    -1,   412,    -1,    -1,   378,    -1,    -1,   374,    -1,
     462,    -1,   432,    -1,   463,    -1,   433,    -1,  1068,    -1,
    1101,  1068,  1102,    -1,  1088,    -1,  1103,   440,  1103,    -1,
    1103,   439,  1103,    -1,  1103,   435,  1103,    -1,  1103,   436,
    1103,    -1,  1103,   437,  1103,    -1,  1101,  1103,  1102,    -1,
     435,  1103,    -1,   436,  1103,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   581,   581,   587,   591,   597,   601,   607,   618,   620,
     624,   630,   641,   642,   645,   655,   657,   658,   666,   670,
     671,   678,   686,   690,   695,   696,   699,   700,   703,   704,
     706,   707,   709,   712,   715,   716,   721,   722,   723,   724,
     725,   726,   729,   734,   739,   744,   749,   754,   759,   763,
     769,   773,   777,   786,   787,   794,   795,   800,   801,   806,
     807,   814,   820,   821,   826,   829,   832,   835,   841,   846,
     847,   852,   853,   858,   861,   866,   867,   872,   878,   879,
     885,   889,   892,   895,   900,   903,   904,   909,   913,   917,
     923,   926,   927,   928,   931,   934,   939,   943,   944,   947,
     948,   953,   956,   971,   974,   982,   983,   989,   994,   995,
     998,   999,  1005,  1009,  1014,  1019,  1020,  1023,  1024,  1025,
    1028,  1029,  1032,  1037,  1042,  1043,  1048,  1053,  1054,  1060,
    1067,  1068,  1073,  1084,  1091,  1104,  1105,  1111,  1114,  1117,
    1120,  1123,  1126,  1129,  1132,  1135,  1138,  1141,  1144,  1155,
    1158,  1161,  1164,  1167,  1170,  1173,  1176,  1179,  1182,  1185,
    1188,  1192,  1197,  1198,  1201,  1201,  1208,  1213,  1216,  1235,
    1236,  1237,  1238,  1239,  1240,  1243,  1244,  1249,  1250,  1251,
    1252,  1253,  1256,  1261,  1264,  1266,  1271,  1276,  1277,  1278,
    1281,  1282,  1287,  1290,  1291,  1292,  1294,  1295,  1298,  1299,
    1302,  1307,  1312,  1318,  1319,  1324,  1325,  1328,  1333,  1336,
    1337,  1342,  1348,  1349,  1352,  1356,  1358,  1364,  1366,  1371,
    1376,  1378,  1381,  1382,  1387,  1388,  1389,  1390,  1391,  1392,
    1393,  1399,  1404,  1407,  1408,  1411,  1412,  1417,  1421,  1427,
    1435,  1436,  1439,  1440,  1443,  1444,  1449,  1450,  1451,  1452,
    1463,  1467,  1468,  1469,  1470,  1471,  1475,  1478,  1483,  1486,
    1489,  1494,  1495,  1498,  1499,  1502,  1503,  1506,  1507,  1510,
    1513,  1514,  1519,  1524,  1525,  1528,  1529,  1532,  1533,  1536,
    1541,  1542,  1545,  1548,  1553,  1559,  1560,  1563,  1564,  1567,
    1571,  1572,  1575,  1576,  1581,  1584,  1589,  1594,  1599,  1600,
    1605,  1608,  1616,  1619,  1620,  1621,  1624,  1625,  1628,  1632,
    1638,  1639,  1640,  1641,  1642,  1643,  1644,  1645,  1646,  1647,
    1648,  1649,  1652,  1657,  1658,  1661,  1664,  1667,  1668,  1688,
    1693,  1694,  1697,  1703,  1706,  1713,  1720,  1726,  1729,  1730,
    1731,  1732,  1733,  1734,  1735,  1736,  1737,  1738,  1739,  1740,
    1743,  1746,  1749,  1753,  1754,  1757,  1758,  1760,  1761,  1764,
    1773,  1784,  1791,  1792,  1795,  1796,  1800,  1801,  1804,  1805,
    1808,  1810,  1811,  1814,  1815,  1817,  1818,  1821,  1822,  1825,
    1828,  1829,  1832,  1835,  1841,  1845,  1848,  1849,  1852,  1862,
    1871,  1875,  1881,  1887,  1888,  1893,  1901,  1902,  1903,  1906,
    1907,  1912,  1919,  1920,  1923,  1930,  1935,  1936,  1937,  1938,
    1939,  1940,  1941,  1942,  1943,  1944,  1945,  1946,  1949,  1950,
    1953,  1957,  1958,  1961,  1962,  1967,  1970,  1973,  1976,  1979,
    1982,  1986,  1987,  1990,  1994,  1995,  2000,  2008,  2024,  2030,
    2031,  2036,  2043,  2044,  2049,  2052,  2055,  2060,  2061,  2064,
    2065,  2066,  2067,  2068,  2069,  2070,  2071,  2072,  2073,  2074,
    2075,  2076,  2077,  2078,  2079,  2080,  2081,  2082,  2083,  2084,
    2085,  2086,  2087,  2088,  2089,  2090,  2091,  2092,  2095,  2100,
    2101,  2103,  2104,  2107,  2108,  2109,  2116,  2119,  2120,  2123,
    2124,  2127,  2131,  2132,  2135,  2136,  2139,  2140,  2141,  2142,
    2145,  2148,  2151,  2154,  2155,  2158,  2164,  2165,  2168,  2175,
    2176,  2177,  2180,  2183,  2186,  2189,  2192,  2193,  2196,  2201,
    2203,  2204,  2207,  2208,  2211,  2212,  2213,  2214,  2215,  2216,
    2217,  2218,  2219,  2220,  2221,  2222,  2223,  2226,  2228,  2229,
    2231,  2232,  2234,  2235,  2238,  2242,  2243,  2244,  2247,  2252,
    2253,  2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,  2262,
    2263,  2264,  2265,  2266,  2268,  2269,  2271,  2272,  2275,  2276,
    2279,  2282,  2285,  2288,  2291,  2294,  2297,  2301,  2302,  2305,
    2307,  2308,  2310,  2311,  2314,  2315,  2318,  2325,  2327,  2334,
    2339,  2346,  2347,  2350,  2351,  2354,  2355,  2358,  2359,  2362,
    2367,  2372,  2373,  2376,  2377,  2380,  2381,  2384,  2385,  2386,
    2387,  2390,  2391,  2394,  2395,  2398,  2399,  2402,  2409,  2410,
    2421,  2424,  2427,  2439,  2444,  2450,  2453,  2454,  2457,  2473,
    2479,  2480,  2491,  2492,  2493,  2494,  2495,  2496,  2497,  2498,
    2499,  2500,  2501,  2502,  2503,  2504,  2505,  2506,  2507,  2508,
    2509,  2510,  2511,  2512,  2513,  2514,  2515,  2516,  2517,  2518,
    2519,  2520,  2521,  2522,  2523,  2524,  2525,  2526,  2527,  2528,
    2529,  2530,  2531,  2532,  2533,  2536,  2545,  2555,  2556,  2559,
    2560,  2563,  2564,  2569,  2570,  2575,  2580,  2581,  2582,  2583,
    2584,  2585,  2586,  2589,  2590,  2597,  2605,  2606,  2609,  2610,
    2615,  2620,  2621,  2622,  2623,  2626,  2627,  2630,  2631,  2636,
    2641,  2642,  2645,  2646,  2651,  2656,  2657,  2660,  2661,  2666,
    2675,  2681,  2682,  2685,  2686,  2689,  2696,  2697,  2700,  2701,
    2704,  2705,  2710,  2715,  2722,  2729,  2730,  2733,  2734,  2739,
    2740,  2745,  2752,  2764,  2770,  2773,  2779,  2787,  2795,  2803,
    2806,  2807,  2810,  2811,  2816,  2817,  2822,  2829,  2830,  2831,
    2832,  2839,  2840,  2843,  2844,  2849,  2858,  2861,  2862,  2863,
    2864,  2866,  2869,  2870,  2876,  2883,  2889,  2895,  2901,  2906,
    2907,  2915,  2920,  2921,  2927,  2933,  2939,  2942,  2947,  2953,
    2957,  2958,  2964,  2975,  2976,  2983,  2984,  2987,  2988,  2991,
    2994,  2997,  3003,  3004,  3005,  3009,  3014,  3019,  3022,  3025,
    3030,  3031,  3033,  3034,  3039,  3044,  3050,  3051,  3056,  3057,
    3066,  3075,  3078,  3083,  3087,  3088,  3089,  3092,  3093,  3095,
    3096,  3102,  3113,  3118,  3119,  3124,  3125,  3131,  3136,  3137,
    3140,  3143,  3144,  3147,  3152,  3159,  3160,  3165,  3166,  3171,
    3172,  3174,  3175,  3184,  3189,  3193,  3199,  3206,  3207,  3210,
    3211,  3214,  3215,  3216,  3217,  3220,  3221,  3226,  3227,  3228,
    3233,  3234,  3237,  3238,  3241,  3242,  3243,  3246,  3247,  3250,
    3251,  3257,  3261,  3267,  3268,  3271,  3272,  3280,  3285,  3288,
    3293,  3297,  3298,  3304,  3305,  3306,  3307,  3308,  3311,  3312,
    3318,  3323,  3330,  3339,  3340,  3345,  3348,  3355,  3359,  3364,
    3365,  3372,  3375,  3378,  3383,  3386,  3389,  3392,  3395,  3402,
    3407,  3408,  3413,  3416,  3421,  3426,  3429,  3438,  3442,  3443,
    3444,  3445,  3463,  3470,  3471,  3474,  3477,  3482,  3488,  3489,
    3490,  3491,  3492,  3495,  3496,  3501,  3507,  3511,  3512,  3517,
    3518,  3523,  3524,  3525,  3531,  3537,  3540,  3543,  3548,  3554,
    3555,  3556,  3558,  3559,  3561,  3562,  3572,  3582,  3596,  3599,
    3602,  3603,  3604,  3605,  3608,  3609,  3612,  3613,  3616,  3617,
    3620,  3621,  3626,  3631,  3637,  3638,  3644,  3645,  3647,  3648,
    3654,  3659,  3667,  3672,  3673,  3675,  3676,  3679,  3680,  3683,
    3689,  3690,  3695,  3696,  3701,  3707,  3708,  3715,  3716,  3720,
    3724,  3727,  3732,  3736,  3737,  3738,  3742,  3745,  3751,  3752,
    3757,  3758,  3766,  3776,  3777,  3782,  3785,  3790,  3791,  3794,
    3795,  3798,  3799,  3804,  3807,  3812,  3813,  3818,  3821,  3830,
    3836,  3837,  3840,  3841,  3845,  3846,  3861,  3866,  3867,  3872,
    3877,  3878,  3879,  3882,  3883,  3888,  3889,  3890,  3891,  3892,
    3893,  3902,  3906,  3910,  3919,  3926,  3942,  3943,  3948,  3949,
    3953,  3959,  3962,  3967,  3973,  3978,  3979,  3984,  3987,  3992,
    3997,  3998,  4001,  4002,  4003,  4004,  4005,  4006,  4007,  4008,
    4009,  4010,  4011,  4012,  4013,  4014,  4015,  4018,  4019,  4020,
    4024,  4030,  4033,  4038,  4061,  4064,  4069,  4086,  4091,  4092,
    4095,  4098,  4099,  4102,  4108,  4109,  4111,  4112,  4124,  4129,
    4133,  4137,  4143,  4146,  4150,  4151,  4154,  4168,  4174,  4175,
    4180,  4181,  4182,  4183,  4184,  4185,  4186,  4187,  4188,  4189,
    4190,  4191,  4192,  4195,  4198,  4203,  4209,  4212,  4216,  4219,
    4224,  4227,  4232,  4235,  4240,  4241,  4242,  4243,  4244,  4245,
    4246,  4247,  4248,  4249,  4250,  4251,  4252,  4253,  4254,  4255,
    4256,  4257,  4258,  4259,  4260,  4261,  4262,  4263,  4266,  4266,
    4266,  4269,  4274,  4277,  4282,  4283,  4288,  4289,  4294,  4295,
    4298,  4299,  4302,  4315,  4321,  4325,  4329,  4335,  4336,  4360,
    4364,  4368,  4374,  4378,  4382,  4388,  4394,  4395,  4398,  4399,
    4406,  4409,  4414,  4417,  4421,  4424,  4428,  4429,  4439,  4443,
    4447,  4453,  4456,  4459,  4464,  4467,  4470,  4475,  4479,  4484,
    4485,  4495,  4498,  4503,  4504,  4511,  4514,  4517,  4520,  4524,
    4529,  4530,  4536,  4543,  4544,  4554,  4563,  4568,  4573,  4574,
    4577,  4578,  4583,  4584,  4589,  4590,  4591,  4599,  4609,  4618,
    4628,  4631,  4634,  4637,  4640,  4643,  4648,  4651,  4654,  4659,
    4662,  4665,  4670,  4674,  4678,  4685,  4690,  4699,  4704,  4705,
    4708,  4709,  4715,  4716,  4719,  4720,  4723,  4727,  4731,  4738,
    4743,  4746,  4749,  4752,  4755,  4758,  4778,  4782,  4786,  4793,
    4794,  4797,  4801,  4807,  4811,  4817,  4821,  4827,  4828,  4829,
    4830,  4831,  4832,  4833,  4834,  4840,  4852,  4853,  4859,  4862,
    4867,  4875,  4876,  4879,  4882,  4887,  4891,  4897,  4902,  4905,
    4910,  4915,  4918,  4923,  4937,  4946,  4950,  4954,  4958,  4961,
    4964,  4967,  4973,  4974,  4975,  4976,  4979,  4990,  4991,  4992,
    4995,  5006,  5007,  5008,  5009,  5010,  5011,  5014,  5015,  5017,
    5018,  5021,  5022,  5024,  5025,  5027,  5028,  5029,  5032,  5035,
    5035,  5036,  5036,  5039,  5042,  5047,  5050,  5055,  5058,  5062,
    5065,  5069,  5073,  5076,  5079,  5082,  5085,  5088
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
  "IF", "IGNORE", "IN", "INDEXM", "INDEXED", "INDICATE", "INITIALIZE",
  "INITIAL_TOK", "INKEY", "INITIATE", "INPUT", "INPUT_OUTPUT", "INSPECT",
  "INSTALLATION", "INTO", "INVALID", "I_O", "I_O_CONTROL", "IS",
  "INTRINSIC", "JUSTIFIED", "KEY", "LABEL", "LAST", "LEADING", "LEFT",
  "LENGTH", "LESS", "LIMIT", "LIMITS", "LINAGE", "LINE", "LINES",
  "LINKAGE", "LISTSEP", "LITERAL", "LOCK", "LOCAL_STORAGE", "LOW", "LOWER",
  "LOWLIGHT", "LOWVALUES", "LPAR", "MANUAL", "MEMORY", "MERGE", "MINUS",
  "MODE", "MODULES", "MOVE", "MULTIPLE", "MULTIPLY", "NATIVE", "NEGATIVE",
  "NEXT", "NO", "NOECHO", "NOT", "NOTEXCEP", "NULL_TOK", "NUMBER",
  "NUMBERS", "NUMERIC", "NUMERIC_EDITED", "OBJECT_COMPUTER", "OCCURS",
  "OF", "OFF", "OMITTED", "ON", "ONLY", "OPEN", "OPTIONAL", "OR", "ORDER",
  "ORGANIZATION", "OTHER", "OUTPUT", "OVERFLOW_TOK", "PACKED_DECIMAL",
  "PADDING", "PAGE_TOK", "PARAGRAPH", "PERIOD", "PERFORM", "PF", "PH",
  "PICTURE", "PLUS", "POINTER", "POSITION", "POSITIVE", "PREVIOUS",
  "PRINTER", "PROCEDURE", "PROCEDURES", "PROCEED", "PROGRAM", "PROGRAM_ID",
  "PURGE", "QUOTES", "RANDOM", "RD", "READ", "READY", "RECORD", "RECORDS",
  "RECURSIVE", "REDEFINES", "REEL", "REFERENCE", "REFERENCES", "RELATIVE",
  "RELEASE", "REMAINDER", "REMARK", "REMOVAL", "RENAMES", "REPLACING",
  "REPORT", "REPORTING", "REPORTS", "REPOSITORY", "REQUIRED", "RESERVE",
  "RESERVED", "RESERVED_VIDEO", "RESET", "RETURN_TOK", "RETURNING",
  "REVERSEVIDEO", "REWIND", "REWRITE", "RF", "RH", "RIGHT", "ROUNDED",
  "RUN", "SAME", "SCREEN", "SD", "SEARCH", "SECTION", "SECURE", "SECURITY",
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
  "nested_prog_list", "source_item", "program_definition", "nested_prog",
  "program_mandatory", "end_mandatory", "function_definition",
  "end_function", "end_program", "function_division", "as_literal",
  "identification_division", "program_name", "opt_recursive",
  "opt_prog_desc", "common_or_initial", "opt_program", "opt_other_options",
  "other_options", "id_option", "author_option", "installation_option",
  "date_written_option", "date_compiled_option", "security_option",
  "remarks_option", "txt_lines", "txt_line", "environment_division",
  "opt_env_div_options", "env_div_options", "env_div_section",
  "configuration_section", "configuration_section_options",
  "config_section_option", "repository_options", "opt_repository",
  "repository_list", "repository_name", "opt_intrinsic",
  "source_comp_options", "opt_debug_mode", "object_comp_options",
  "object_computer_clauses", "computer_name", "object_clauses_list",
  "obj_comp_clause", "obj_comp_memory", "mem_option", "obj_comp_sequence",
  "obj_comp_segment", "special_names_clauses", "opt_special_names_options",
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
     715,   716,   717,   718
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   464,   465,   466,   466,   467,   467,   468,   469,   469,
     469,   470,   471,   471,   472,   473,   474,   474,   475,   476,
     476,   477,   477,   478,   479,   479,   480,   480,   481,   481,
     482,   482,   483,   483,   484,   484,   485,   485,   485,   485,
     485,   485,   486,   487,   488,   489,   490,   491,   492,   492,
     493,   493,   493,   494,   494,   495,   495,   496,   496,   497,
     497,   498,   499,   499,   500,   500,   500,   500,   501,   502,
     502,   503,   503,   504,   504,   505,   505,   506,   507,   507,
     508,   509,   509,   509,   510,   511,   511,   512,   512,   512,
     513,   514,   514,   514,   515,   516,   517,   518,   518,   519,
     519,   520,   520,   521,   521,   522,   522,   523,   524,   524,
     525,   525,   526,   526,   527,   528,   528,   529,   529,   529,
     530,   530,   530,   531,   532,   532,   533,   534,   534,   535,
     536,   536,   537,   538,   538,   539,   539,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   554,   555,   555,   556,   557,   557,   558,
     558,   558,   558,   558,   558,   559,   559,   560,   560,   560,
     560,   560,   561,   562,   563,   563,   564,   565,   565,   565,
     566,   566,   567,   568,   568,   568,   569,   569,   570,   570,
     571,   572,   573,   574,   574,   575,   575,   575,   576,   577,
     577,   578,   579,   579,   580,   581,   581,   582,   582,   582,
     583,   583,   584,   584,   585,   585,   585,   585,   585,   585,
     585,   586,   586,   587,   587,   588,   588,   589,   589,   590,
     591,   591,   592,   592,   593,   593,   594,   594,   594,   594,
     594,   594,   594,   594,   594,   594,   595,   595,   596,   597,
     598,   599,   599,   600,   600,   601,   601,   602,   602,   603,
     604,   604,   605,   606,   606,   607,   607,   608,   608,   609,
     610,   610,   611,   611,   612,   613,   613,   614,   614,   615,
     616,   616,   617,   617,   618,   618,   619,   620,   621,   621,
     622,   623,   624,   625,   625,   625,   626,   626,   627,   627,
     628,   628,   628,   628,   628,   628,   628,   628,   628,   628,
     628,   628,   629,   630,   630,   631,   632,   633,   633,   634,
     635,   635,   635,   636,   636,   637,   637,   638,   639,   639,
     639,   639,   639,   639,   639,   639,   639,   639,   639,   639,
     640,   641,   642,   643,   643,   644,   644,   645,   645,   646,
     647,   648,   649,   649,   650,   650,   651,   651,   652,   652,
     653,   654,   654,   655,   655,   656,   656,   657,   657,   658,
     659,   659,   660,   661,   662,   662,   663,   663,   664,   665,
     666,   667,   668,   669,   669,   670,   671,   671,   671,   672,
     672,   673,   674,   674,   675,   676,   677,   677,   677,   677,
     677,   677,   677,   677,   677,   677,   677,   677,   678,   678,
     679,   680,   680,   681,   681,   682,   682,   682,   682,   682,
     682,   683,   683,   684,   685,   685,   686,   687,   688,   689,
     689,   690,   691,   691,   692,   692,   692,   693,   693,   694,
     694,   694,   694,   694,   694,   694,   694,   694,   694,   694,
     694,   694,   694,   694,   694,   694,   694,   694,   694,   694,
     694,   694,   694,   694,   694,   694,   694,   694,   695,   696,
     696,   697,   697,   698,   698,   698,   699,   700,   700,   701,
     701,   702,   703,   703,   704,   704,   705,   705,   705,   705,
     706,   707,   708,   709,   709,   709,   710,   710,   711,   712,
     712,   712,   713,   714,   715,   716,   717,   717,   718,   719,
     720,   720,   721,   721,   722,   722,   722,   722,   722,   722,
     722,   722,   722,   722,   722,   722,   722,   723,   724,   724,
     725,   725,   726,   726,   727,   728,   728,   728,   729,   730,
     730,   730,   730,   730,   730,   730,   730,   730,   730,   730,
     730,   730,   730,   730,   731,   731,   732,   732,   733,   733,
     734,   735,   736,   737,   738,   739,   740,   741,   741,   742,
     743,   743,   744,   744,   745,   745,   746,   747,   747,   747,
     748,   749,   749,   750,   750,   751,   751,   752,   752,   752,
     753,   754,   754,   755,   755,   756,   756,   757,   757,   757,
     757,   758,   758,   759,   759,   760,   760,   761,   762,   762,
     763,   763,   763,   763,   764,   765,   766,   766,   767,   768,
     769,   769,   770,   770,   770,   770,   770,   770,   770,   770,
     770,   770,   770,   770,   770,   770,   770,   770,   770,   770,
     770,   770,   770,   770,   770,   770,   770,   770,   770,   770,
     770,   770,   770,   770,   770,   770,   770,   770,   770,   770,
     770,   770,   770,   770,   770,   770,   771,   772,   772,   773,
     773,   774,   774,   775,   775,   776,   777,   777,   777,   777,
     777,   777,   777,   778,   778,   779,   780,   780,   781,   781,
     782,   783,   783,   783,   783,   784,   784,   785,   785,   786,
     787,   787,   788,   788,   789,   790,   790,   791,   791,   792,
     793,   794,   794,   795,   795,   796,   797,   797,   798,   798,
     799,   799,   800,   801,   802,   803,   803,   804,   804,   805,
     805,   806,   807,   808,   809,   810,   811,   812,   813,   814,
     815,   815,   816,   816,   817,   817,   818,   819,   819,   819,
     819,   820,   820,   821,   821,   822,   823,   823,   823,   823,
     823,   823,   824,   824,   825,   826,   827,   828,   829,   830,
     830,   831,   832,   832,   833,   834,   835,   835,   836,   837,
     838,   838,   839,   840,   840,   841,   841,   842,   842,   843,
     843,   843,   844,   844,   844,   845,   846,   847,   847,   847,
     848,   848,   849,   849,   850,   851,   852,   852,   853,   853,
     854,   855,   855,   856,   857,   857,   857,   858,   858,   859,
     859,   860,   861,   862,   862,   863,   863,   864,   865,   865,
     866,   867,   867,   867,   868,   869,   869,   870,   870,   871,
     871,   872,   872,   873,   873,   873,   873,   874,   874,   875,
     875,   876,   876,   876,   876,   877,   877,   878,   878,   878,
     879,   879,   880,   880,   881,   881,   881,   882,   882,   883,
     883,   884,   884,   885,   885,   886,   886,   887,   888,   888,
     889,   890,   890,   891,   891,   891,   891,   891,   892,   892,
     893,   893,   893,   894,   894,   895,   895,   896,   896,   897,
     897,   898,   899,   899,   900,   901,   901,   901,   901,   901,
     902,   902,   903,   903,   904,   905,   905,   906,   907,   907,
     907,   907,   908,   909,   909,   910,   910,   911,   912,   912,
     912,   912,   912,   913,   913,   914,   915,   916,   916,   917,
     917,   918,   918,   918,   919,   920,   920,   920,   921,   922,
     922,   922,   922,   922,   922,   922,   923,   923,   924,   925,
     926,   926,   926,   926,   927,   927,   928,   928,   929,   929,
     930,   930,   931,   932,   933,   933,   934,   934,   935,   935,
     936,   936,   937,   938,   938,   939,   939,   940,   940,   941,
     942,   942,   943,   943,   944,   945,   945,   946,   946,   947,
     947,   947,   947,   948,   948,   948,   949,   950,   951,   951,
     952,   952,   953,   954,   954,   955,   955,   956,   956,   957,
     957,   958,   958,   959,   959,   960,   960,   961,   961,   962,
     963,   963,   964,   964,   965,   965,   966,   967,   967,   968,
     969,   969,   969,   970,   970,   971,   971,   971,   971,   971,
     971,   972,   972,   972,   973,   974,   975,   975,   976,   976,
     977,   978,   978,   979,   980,   981,   981,   982,   982,   983,
     984,   984,   985,   985,   985,   985,   985,   985,   985,   985,
     985,   985,   985,   985,   985,   985,   985,   986,   986,   986,
     987,   988,   988,   989,   990,   990,   991,   992,   993,   993,
     994,   995,   995,   996,   997,   997,   998,   998,   999,   999,
     999,   999,  1000,  1000,  1001,  1001,  1002,  1003,  1004,  1004,
    1005,  1005,  1005,  1005,  1005,  1005,  1005,  1005,  1005,  1005,
    1005,  1005,  1005,  1006,  1006,  1007,  1008,  1008,  1009,  1009,
    1010,  1010,  1011,  1011,  1012,  1012,  1012,  1012,  1012,  1012,
    1012,  1012,  1012,  1012,  1012,  1012,  1012,  1012,  1012,  1012,
    1012,  1012,  1012,  1012,  1012,  1012,  1012,  1012,  1013,  1013,
    1013,  1014,  1015,  1015,  1016,  1016,  1017,  1017,  1018,  1018,
    1019,  1019,  1020,  1021,  1022,  1022,  1022,  1023,  1023,  1024,
    1024,  1024,  1025,  1025,  1025,  1026,  1027,  1027,  1028,  1028,
    1029,  1030,  1031,  1031,  1032,  1032,  1033,  1033,  1034,  1034,
    1034,  1035,  1035,  1035,  1036,  1036,  1036,  1037,  1037,  1038,
    1038,  1039,  1039,  1040,  1040,  1041,  1041,  1041,  1041,  1041,
    1042,  1042,  1043,  1044,  1044,  1045,  1046,  1046,  1047,  1047,
    1048,  1048,  1049,  1049,  1050,  1050,  1050,  1051,  1052,  1053,
    1054,  1054,  1054,  1054,  1054,  1054,  1055,  1055,  1055,  1056,
    1056,  1056,  1057,  1057,  1057,  1058,  1059,  1060,  1061,  1061,
    1062,  1062,  1063,  1063,  1064,  1064,  1065,  1065,  1065,  1066,
    1067,  1067,  1067,  1067,  1067,  1067,  1068,  1068,  1068,  1069,
    1069,  1070,  1070,  1071,  1071,  1072,  1072,  1073,  1073,  1073,
    1073,  1073,  1073,  1073,  1073,  1074,  1075,  1075,  1076,  1076,
    1077,  1078,  1078,  1079,  1079,  1080,  1080,  1081,  1082,  1082,
    1083,  1084,  1084,  1085,  1085,  1086,  1087,  1087,  1087,  1087,
    1087,  1087,  1088,  1088,  1088,  1088,  1089,  1090,  1090,  1090,
    1091,  1092,  1092,  1092,  1092,  1092,  1092,  1093,  1093,  1094,
    1094,  1095,  1095,  1096,  1096,  1097,  1097,  1097,  1098,  1099,
    1099,  1100,  1100,  1101,  1101,  1102,  1102,  1103,  1103,  1103,
    1103,  1103,  1103,  1103,  1103,  1103,  1103,  1103
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     6,     0,     1,
       2,     6,     3,     4,     5,     3,     0,     1,     5,     0,
       2,    10,     1,     1,     0,     2,     0,     4,     1,     1,
       0,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     2,     3,
       1,     1,     1,     0,     4,     0,     1,     1,     2,     1,
       1,     4,     1,     2,     1,     1,     1,     1,     3,     0,
       2,     1,     2,     3,     3,     0,     1,     5,     0,     4,
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
       2,     6,     0,     2,     4,     0,     1,     0,     4,     2,
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
       1,     2,     3,     1,     3,     3,     2,     2,     2,     1,
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
       0,     2,     0,     1,     3,     3,     2,     0,     6,     2,
       3,     0,     2,     0,     2,     0,     2,     1,     2,     3,
       5,     0,     1,     2,     2,     0,     1,     3,     3,     3,
       2,     0,     1,     0,     1,     0,     1,     6,     1,     2,
       1,     1,     2,     1,     4,     1,     0,     1,     2,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     6,     0,     2,     0,
       3,     0,     3,     1,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     5,     0,     1,     1,     2,
       6,     1,     1,     1,     1,     0,     1,     1,     2,     3,
       0,     1,     1,     2,     6,     0,     1,     1,     2,     5,
       3,     0,     1,     1,     1,     4,     0,     2,     0,     3,
       1,     2,     3,     4,     4,     1,     2,     0,     1,     1,
       2,     2,     1,     3,     1,     1,     6,     2,     6,     1,
       0,     1,     2,     3,     1,     2,     4,     1,     1,     1,
       2,     0,     1,     1,     2,     2,     1,     1,     1,     1,
       3,     1,     0,     3,     5,     1,     1,     2,     3,     0,
       2,     3,     1,     1,     2,     1,     3,     3,     3,     2,
       0,     1,     7,     0,     4,     0,     2,     0,     2,     1,
       3,     2,     1,     1,     1,     3,     3,     1,     3,     2,
       1,     1,     0,     1,     1,     2,     0,     3,     0,     4,
       7,     1,     2,     4,     1,     1,     1,     0,     3,     0,
       1,     8,     5,     0,     1,     1,     2,     3,     0,     1,
       2,     1,     2,     3,     3,     0,     3,     0,     3,     0,
       3,     0,     1,     8,     5,    10,     5,     0,     1,     0,
       1,     0,     1,     1,     1,     1,     2,     1,     2,     4,
       0,     1,     0,     1,     0,     1,     1,     1,     1,     1,
       1,     3,     6,     0,     1,     1,     2,     2,     1,     2,
       4,     0,     2,     1,     2,     3,     2,     2,     0,     1,
       2,     4,     4,     0,     1,     1,     2,     0,     1,     0,
       1,     1,     1,     3,     1,     1,     2,     2,     3,     3,
       0,     3,     1,     3,     7,     1,     1,     2,     1,     3,
       3,     1,     3,     0,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     1,     1,
       2,     2,     3,     1,     2,     1,     2,     3,     2,     0,
       4,     4,     3,     3,     3,     2,     6,     7,     2,     1,
       0,     1,     2,     2,     0,     1,     2,     3,     0,     2,
       0,     3,     1,     2,     0,     3,     0,     4,     0,     1,
       3,     3,     3,     0,     2,     0,     1,     0,     1,     2,
       0,     3,     0,     4,     2,     0,     3,     0,     1,     2,
       6,     1,     1,     0,     1,     1,     1,     2,     0,     3,
       0,     4,     7,     1,     2,     4,     4,     0,     1,     0,
       4,     0,     4,     5,     2,     0,     2,     5,     2,     6,
       0,     1,     0,     2,     0,     1,     2,     1,     2,     3,
       1,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     0,     2,     0,     3,
       2,     1,     2,     2,     1,     0,     1,     1,     2,     3,
       0,     1,     2,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       2,     1,     2,     2,     5,     4,     1,     5,     1,     1,
       2,     1,     1,     2,     1,     2,     0,     1,     4,     4,
       5,     5,     2,     2,     0,     1,     2,     4,     0,     3,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     2,     2,     1,     2,     2,     1,     3,     0,     1,
       1,     2,     3,     2,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     3,     3,     0,     5,     0,     4,     1,     1,
       0,     1,     1,     2,     5,     6,     7,     0,     2,     1,
       2,     3,     1,     2,     3,     2,     0,     1,     1,     1,
       0,     2,     0,     4,     0,     5,     0,     1,     6,     8,
       8,     1,     2,     3,     1,     2,     3,     1,     2,     0,
       1,     6,     8,     0,     1,     6,     8,     8,    10,    10,
       0,     1,     8,     0,     1,     6,     4,     5,     0,     1,
       0,     3,     0,     3,     1,     2,     2,     2,     2,     2,
       1,     1,     1,     3,     3,     3,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     0,     1,
       0,     3,     1,     2,     2,     2,     1,     2,     3,     1,
       1,     1,     3,     3,     3,     3,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     2,     1,     1,     2,
       3,     1,     4,     1,     3,     2,     1,     4,     5,     1,
       3,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     2,     1,     5,
       1,     2,     1,     5,     1,     2,     2,     1,     1,     0,
       1,     0,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    22,     0,     0,     0,     0,     3,     5,     6,    53,
      53,     0,     0,     1,     4,     0,     0,     0,  1277,    19,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      55,   219,     0,     0,     0,     0,     0,    20,    18,     0,
       0,     0,    54,    56,    57,    59,    60,     0,     0,   589,
     591,     0,    14,     0,     9,    53,   215,     0,     0,    58,
       0,     0,   104,   103,   232,     0,     0,     0,     0,     0,
       0,     0,   218,     0,   222,   224,   225,   230,   226,   227,
     228,   229,   601,     0,   593,     0,     0,     0,    10,    17,
       7,     0,   216,    24,     0,   106,     0,   108,   385,     0,
       0,     0,   215,     0,     0,   215,   223,     0,   601,   597,
     605,   602,   615,   601,   595,    15,     0,     0,     0,     0,
      26,     0,     0,     0,     0,    61,    62,    67,    64,    65,
      66,   133,   129,   130,     0,   115,   107,     0,   110,   112,
     113,     0,   233,     0,     0,   487,     0,   386,   603,   604,
    1275,   598,   601,   327,     0,   613,   606,   215,     0,   616,
     601,     0,   590,     0,    12,     0,    25,     0,    32,     0,
      69,     0,    97,    63,  1209,     0,     0,  1208,   131,     0,
     117,   118,   119,     0,   116,   109,   111,     0,   392,   393,
       0,     0,   231,   234,   235,   302,   391,   298,   300,   303,
     390,   389,     0,   486,   488,   489,   303,   438,   439,   388,
     384,   387,   599,   328,   610,   327,   614,   611,     0,     0,
       0,     0,     0,    30,     0,     0,     0,   785,     0,     0,
       0,     0,   327,   893,     0,  1369,   776,   327,     0,     0,
       0,     0,     0,     0,   933,   623,   903,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   870,     0,   625,     0,   618,   620,     0,   621,
       0,   630,   669,   670,   668,   656,   657,   658,   659,   660,
     661,   638,   662,   663,   667,   664,   655,   665,   666,   651,
     652,   653,   654,   632,   650,   634,   635,   637,   970,   636,
     997,   641,   639,   640,   642,  1061,  1062,  1063,   633,   643,
     644,   645,  1216,   646,   647,   648,   649,   671,   672,   673,
     674,   596,    13,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,    21,    33,    34,    36,    37,    38,    39,
      40,    41,     0,     0,     0,    84,   215,     0,     0,    85,
      87,    88,    89,     0,    68,     0,    71,    78,     0,     0,
      96,    98,    99,     0,   134,     0,     0,     0,   394,   237,
     215,   238,   236,   299,   304,   305,   306,   327,   258,   490,
     481,   440,   607,   608,   609,   612,     0,     0,   675,  1184,
    1143,  1148,  1146,  1278,     0,     0,     0,     0,     0,  1269,
    1270,  1271,  1273,  1272,  1274,  1197,  1224,  1227,  1261,  1266,
    1262,  1260,   887,   888,     0,   914,    31,     0,   784,  1221,
     959,   954,   955,   946,  1206,     0,   790,   790,  1040,     0,
    1314,     0,  1310,  1311,  1312,  1309,  1307,  1313,  1308,  1066,
    1070,  1071,  1075,  1100,  1101,  1074,  1065,  1303,  1304,  1146,
    1199,  1297,  1299,  1301,  1300,  1302,     0,     0,   744,  1343,
    1344,  1345,   769,   327,  1342,   768,  1374,     0,     0,  1373,
    1210,   750,  1296,   766,   771,  1316,  1325,     0,  1333,  1379,
    1339,   327,   767,   896,   898,   894,   897,  1259,  1370,   883,
    1377,     0,  1336,   677,  1257,   696,     0,     0,     0,     0,
     934,     0,   915,     0,     0,     0,   904,   900,   911,   912,
     905,     0,     0,   914,   777,   968,   779,  1040,   993,     0,
     721,   723,   724,   726,  1059,  1060,  1057,  1056,  1058,  1046,
    1047,     0,  1053,  1055,     0,     0,   928,   927,   931,     0,
     821,     0,     0,     0,  1258,     0,     0,   860,   871,     0,
       0,   993,   628,   619,   626,   622,   631,     0,     0,   971,
     974,   969,   926,   925,     0,  1007,   995,   998,  1002,   995,
    1018,  1217,  1193,    11,   215,     0,     0,     0,     0,     0,
       0,    35,     0,     0,     0,    80,    81,     0,    83,    86,
       0,    75,   503,    70,    72,     0,   215,     0,     0,   100,
       0,     0,  1369,   327,     0,     0,     0,   327,     0,     0,
       0,   215,   135,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   150,   149,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   208,   209,   160,     0,
       0,   402,   242,     0,     0,   339,   340,   341,     0,     0,
       0,   345,   346,   347,     0,     0,     0,   348,   327,   349,
       0,     0,   354,     0,   327,   327,   215,   307,   308,   321,
     310,   311,   312,   313,   613,   314,   315,   316,   327,   317,
     318,   319,   320,     0,   327,     0,   509,     0,     0,   327,
     494,   496,   497,   498,   566,   499,   455,   449,   450,   461,
     460,     0,   465,   476,     0,   451,   452,   459,   469,   475,
     471,     0,   458,   473,   457,   474,   327,   327,   472,   456,
       0,     0,   454,   481,   442,   327,     0,   600,     0,     0,
    1144,  1124,  1146,     0,     0,  1145,  1149,  1150,     0,     0,
       0,     0,  1124,  1184,     0,     0,  1280,  1279,  1282,     0,
       0,     0,     0,  1267,  1268,     0,     0,  1225,     0,  1228,
     889,   891,   793,  1222,     0,     0,     0,     0,   958,   956,
       0,  1207,     0,   789,   791,   786,   787,  1041,   997,  1305,
    1306,  1298,     0,  1068,  1072,     0,  1073,  1076,  1077,  1102,
       0,     0,  1200,  1103,     0,     0,   743,   745,  1326,  1266,
       0,  1386,  1266,  1387,  1335,   327,   327,     0,   751,  1321,
    1322,  1315,  1317,  1318,  1210,  1348,  1347,  1349,  1346,  1377,
       0,   327,     0,     0,     0,     0,     0,   327,     0,   899,
     895,   881,     0,   884,   914,     0,     0,  1114,     0,  1210,
    1109,  1108,     0,   679,     0,   710,   697,   698,     0,  1031,
    1023,     0,     0,     0,   942,   938,   941,   940,   939,   932,
     935,     0,     0,   916,     0,     0,   906,   909,     0,   327,
       0,   917,     0,   778,  1042,     0,   997,   728,   722,   720,
       0,   728,  1048,     0,  1050,     0,     0,  1054,  1029,     0,
     327,  1252,     0,     0,     0,   822,     0,     0,     0,   782,
     783,   781,     0,     0,   857,   872,     0,   992,     0,   627,
     972,   973,     0,   978,   975,     0,  1008,     0,   996,   991,
       0,   999,   990,     0,  1004,  1016,  1020,    27,    50,    51,
      52,   215,   215,   215,   215,   215,   215,   215,     0,     0,
      95,    82,    74,     0,    76,    73,   504,     0,    77,     0,
       0,   327,     0,     0,     0,   327,     0,   327,     0,   327,
     327,   327,   162,     0,   163,   136,   132,   210,   123,   124,
     127,   114,   120,   421,   403,     0,   396,   399,     0,   397,
     398,   434,     0,   327,     0,     0,   327,     0,   327,   327,
       0,   215,   243,   215,   255,   254,   253,   252,   251,   248,
     250,   249,   282,   283,     0,   338,     0,   342,   343,   344,
     350,   351,   382,   285,   359,   360,     0,   325,   323,   380,
     381,     0,     0,   301,   309,   336,     0,   501,   506,   507,
       0,     0,     0,   500,     0,   495,   567,     0,   463,   464,
     462,     0,   467,   466,   468,   470,   337,   482,     0,     0,
       0,   446,   453,   441,   443,  1190,   445,   215,  1189,  1188,
    1190,  1125,  1119,     0,  1153,  1154,     0,  1159,  1160,  1161,
    1162,  1163,     0,  1166,  1167,  1168,  1169,     0,     0,  1171,
    1174,  1175,  1177,  1180,  1178,  1176,  1155,     0,  1179,     0,
    1173,  1151,     0,  1126,  1135,     0,  1140,  1134,  1136,  1132,
    1131,  1130,     0,  1138,  1139,  1123,  1122,  1147,  1124,  1118,
    1124,  1284,  1285,  1276,     0,  1283,  1265,  1264,     0,  1263,
    1212,     0,  1226,     0,     0,     0,   816,  1223,     0,     0,
       0,     0,   965,     0,   957,  1369,  1369,  1367,     0,   788,
    1067,     0,  1064,     0,  1083,  1084,  1085,  1086,  1087,     0,
    1090,  1091,  1092,  1093,     0,  1096,  1080,  1095,  1078,  1201,
       0,  1212,  1227,     0,   752,   770,  1210,   772,   754,   327,
    1319,  1209,   327,  1320,  1323,  1324,  1327,  1328,  1376,  1375,
    1378,  1334,  1385,  1382,  1383,  1384,  1381,  1380,   327,     0,
    1341,     0,  1340,     0,   886,  1115,  1110,     0,  1116,  1112,
    1111,   678,   686,   687,   688,   689,   690,   691,   692,   681,
    1369,     0,     0,   715,   711,   712,   699,  1027,  1027,     0,
    1024,     0,     0,  1105,  1106,  1202,  1206,  1212,  1227,   936,
     937,   943,   947,   921,   902,   910,   901,   913,   918,   919,
     922,     0,   780,     0,   984,   994,     0,     0,     0,   727,
       0,  1052,  1051,  1049,     0,  1031,     0,  1210,     0,  1254,
       0,   997,   930,   929,   827,     0,     0,  1212,  1227,   838,
       0,   827,   858,     0,   873,   874,     0,   624,   976,     0,
       0,   980,     0,  1012,     0,  1006,  1013,  1011,     0,     0,
       0,  1017,   215,    42,    48,    45,    44,    43,    47,    46,
      92,    93,    91,    90,     0,   505,     0,     0,   102,     0,
     327,   169,   170,   172,   171,   173,   174,   166,   175,   175,
     200,     0,     0,     0,     0,   181,     0,   180,   178,     0,
       0,     0,     0,   125,     0,   126,   121,     0,     0,     0,
       0,     0,     0,   420,   422,   423,   215,   400,     0,     0,
       0,     0,   435,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   240,   215,   244,   246,   247,   383,
       0,   362,   326,     0,   322,   335,   329,   330,   333,   355,
     356,   357,   510,   511,  1013,   519,   491,   516,   520,   502,
     477,   483,   484,   485,   447,  1191,   617,     0,   538,  1157,
    1164,  1165,     0,  1156,  1158,     0,  1152,     0,  1142,  1137,
    1133,  1141,  1120,  1121,  1290,     0,  1286,  1289,  1291,     0,
    1206,     0,  1194,  1214,  1212,   892,   890,     0,   811,   795,
     799,   802,   803,   804,   807,   810,     0,  1184,   814,   818,
     962,     0,   963,     0,   964,  1365,  1366,  1210,     0,  1098,
    1097,  1099,  1082,  1088,  1089,     0,  1079,  1081,     0,  1240,
       0,   757,   759,   758,   761,   327,  1210,   755,     0,   753,
       0,  1329,     0,  1371,  1371,  1362,  1364,  1358,  1360,  1368,
    1350,  1351,  1352,  1353,  1354,  1355,  1356,  1337,     0,  1113,
    1117,  1107,     0,   693,     0,     0,   702,   701,   704,   703,
       0,     0,   695,   716,   717,   713,  1028,     0,     0,   327,
       0,     0,  1104,  1203,     0,  1205,  1233,     0,   944,     0,
     953,   945,   948,   949,     0,     0,  1043,     0,  1044,   982,
     986,   775,   774,     0,   327,   733,   327,   725,   730,     0,
       0,   327,  1255,  1256,  1250,     0,  1248,     0,   816,   826,
     823,   824,   825,  1206,  1229,     0,   839,     0,   840,   841,
     845,   849,     0,   854,   865,   867,   875,   876,   877,   878,
     861,     0,   856,   977,   979,     0,   997,   988,     0,  1014,
    1015,  1009,     0,  1019,     0,    49,    94,    79,   101,   189,
     188,   187,   190,     0,   168,   176,   167,   201,   214,     0,
     195,     0,   192,   179,   177,   182,   184,   183,   185,   212,
     203,  1278,   164,   165,   161,   128,   122,   327,   327,   327,
     327,   327,     0,   424,   395,     0,     0,     0,     0,     0,
     401,   418,   327,   437,   436,   285,   259,     0,     0,     0,
     278,   205,   263,   262,   261,   285,     0,   256,   257,   273,
     269,   270,   327,   274,   239,   241,   245,   286,   363,   364,
     324,   331,     0,     0,     0,   352,     0,   517,     0,   521,
     327,   444,   448,     0,  1186,   539,     0,  1170,  1172,  1128,
       0,  1287,  1281,     0,     0,     0,     0,  1212,     0,     0,
    1211,  1195,     0,     0,     0,   797,   801,     0,   809,     0,
       0,   812,     0,   815,   960,   961,  1212,  1069,  1094,  1212,
    1241,  1235,  1212,  1210,     0,   762,   763,   760,     0,   749,
     748,  1330,     0,  1331,  1338,  1372,  1357,  1361,   882,     0,
       0,   676,   680,   564,     0,     0,   718,  1025,  1026,     0,
     747,     0,     0,   746,  1204,  1234,  1231,  1212,   951,     0,
     950,   923,     0,     0,  1045,  1039,     0,   983,     0,   737,
     742,     0,   731,     0,     0,     0,     0,     0,     0,  1246,
    1253,  1249,  1245,     0,   829,  1212,  1230,  1218,  1212,   833,
     842,     0,     0,   847,     0,   816,   868,     0,   866,   862,
     863,   864,     0,   857,     0,   988,   989,   966,     0,     0,
       0,     0,   186,   212,     0,     0,     0,   202,     0,     0,
       0,     0,     0,     0,     0,   414,   415,   412,   406,   407,
     408,   409,   417,   416,   411,   410,   413,   419,   404,     0,
       0,   275,   276,     0,     0,   206,     0,   265,     0,     0,
     271,     0,     0,   366,   332,   334,   358,     0,     0,   538,
     569,     0,     0,   538,     0,   327,   327,   327,     0,   327,
     327,   327,   531,     0,   522,   524,   525,   526,   527,   528,
     529,   530,   532,   533,   534,   535,   536,     0,     0,  1185,
       0,     0,  1127,  1288,  1295,  1293,  1294,  1292,  1196,     0,
       0,   806,   805,   796,     0,   794,   800,   808,     0,   813,
     792,     0,  1243,     0,  1240,     0,  1240,   765,     0,   764,
       0,  1210,     0,     0,   682,   683,     0,     0,   705,   565,
       0,     0,  1032,  1038,   327,  1233,   952,     0,   985,     0,
     327,     0,   738,   739,     0,     0,   732,  1030,   327,  1034,
    1022,  1247,     0,   828,   830,   820,  1229,  1229,   838,   832,
     834,   835,   843,     0,     0,   844,     0,   851,     0,     0,
       0,   981,   967,     0,  1021,   327,   211,     0,     0,   213,
     204,   429,   427,   430,   426,   425,   431,   405,   281,   280,
     279,   277,   207,     0,     0,   267,   284,   290,   272,     0,
     373,   374,   375,   367,   368,     0,   372,   512,     0,     0,
     327,   586,   572,   327,   327,     0,     0,     0,   580,   582,
     577,   549,     0,     0,   518,   523,     0,   478,   480,     0,
     538,   538,  1181,     0,  1213,     0,   798,     0,  1244,  1242,
    1212,  1237,  1212,  1236,     0,  1369,  1369,   684,     0,   694,
     700,   706,   707,     0,   705,   705,     0,  1232,     0,     0,
     741,   734,   740,   736,     0,  1251,  1220,  1219,     0,   836,
     846,     0,   850,   852,   831,   869,   857,   853,   880,   879,
       0,     0,   196,   196,     0,   428,   432,     0,     0,     0,
     260,     0,     0,   285,   289,   291,   292,   294,   295,   365,
       0,   361,   376,   377,     0,   369,   327,     0,     0,     0,
       0,   540,     0,   570,     0,   574,     0,   579,     0,   578,
     576,   583,   559,   555,     0,   557,   556,     0,   561,   553,
       0,   563,   551,   564,   568,   575,   479,     0,     0,     0,
    1129,     0,     0,  1240,  1240,  1332,  1359,  1363,     0,   708,
       0,   714,   719,  1035,   327,   987,  1035,   837,   848,     0,
    1010,   191,   197,     0,     0,     0,   264,     0,     0,     0,
     288,     0,   293,     0,     0,   378,     0,   513,     0,     0,
     508,   573,   541,     0,     0,     0,   545,   544,     0,   581,
       0,   558,   554,   560,   552,   562,   550,   566,     0,  1182,
    1183,  1215,  1239,  1238,   685,   709,     0,  1037,   924,  1033,
     855,   198,   199,   194,   193,   433,   266,     0,   297,   296,
     379,  1303,  1304,  1296,     0,   370,   514,   515,   542,   547,
     546,   571,   585,   584,   548,  1036,   268,     0,   537,     0,
     543
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    53,    54,    89,     8,    52,
      90,     9,    28,    55,    19,   120,   168,   326,   417,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   931,   932,
      16,    42,    43,    44,    45,   125,   126,   127,   354,   355,
     356,   945,   128,   596,   129,   346,   347,   348,   349,   350,
    1303,   351,   352,   130,   360,   361,   362,    46,    47,    62,
     136,   137,   138,   139,   183,   184,   971,   140,   968,   969,
    1335,    63,   132,   133,   175,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     963,  1614,   626,  1317,  1318,  1594,   627,   628,   629,  1607,
     630,  1592,  1802,   631,  1602,  2153,  2203,   632,   633,   634,
    1609,  2008,   635,   636,   637,  1807,   638,    93,    25,    72,
      73,    74,    75,   192,   193,   194,   369,  1654,   991,   992,
     993,   994,   377,   995,   996,  1642,  1837,  1985,  2080,   997,
    1650,  1651,  1652,   998,   999,  1000,  1980,  1001,  1002,  1371,
    2083,  1003,  2084,  2085,  2086,  2087,  2088,   196,   197,   198,
     199,   376,   666,   667,   668,   669,  1374,   670,   671,   470,
     672,  1376,  1377,   673,   721,   674,   675,   676,   677,   678,
    1381,  1665,   679,  1014,  1015,  1659,  1843,  1992,  1993,  1994,
    1995,  1996,  2091,  2092,  2093,   680,   681,   682,    76,   210,
     211,    77,    78,   200,    79,   188,   189,   975,   976,   977,
     978,  1630,  1631,  1632,  1828,   979,  1343,  1344,  1345,  2075,
    2076,   980,   981,  1634,    80,   207,   208,   723,   724,  1671,
     725,  1672,  2017,   726,  1051,    81,   203,   204,   205,   688,
     689,   690,   691,   692,   693,   591,   694,   695,  1032,  1848,
    1999,  2099,  2170,  1386,  1387,  1388,  1668,  1863,  1864,  1865,
    1676,  2173,  2228,  1866,  2177,  1867,  2123,  1918,  1037,  1868,
    1869,  1870,  1871,  1872,  1873,  1874,  1875,  2009,  2010,  2107,
    2110,  2111,  1876,    35,    83,    84,   114,   162,   108,   109,
     110,   111,   155,   156,   386,   217,   158,   159,   265,   266,
     267,   268,   908,   269,   837,   838,   271,   272,   843,  1209,
    1493,  1914,  1915,  1916,  1731,   273,   845,   846,   847,  1500,
    2040,  2041,  2042,  1213,  1214,  1215,  1502,  1503,  1504,   274,
     879,   520,   521,   881,  1248,  1537,  1538,   522,  1535,  1936,
    1931,  1932,  1933,  1759,   275,   457,   796,   276,  1511,   277,
    1720,   807,   808,  1167,  1168,  1464,  1714,  1715,  1716,   471,
    1468,   278,  1532,   279,   280,   281,   873,   282,   901,   283,
     284,   285,   426,   427,   775,   286,  1126,  1695,  1895,  1429,
    1430,  1431,  1432,  1433,  1434,  1900,  1437,  1438,  1439,  1703,
     287,   539,   540,  1550,  1548,  1945,   288,   903,  1949,  1950,
    1951,  1557,  1271,  1558,  1559,  1783,  1955,  1785,  2064,   289,
    1273,   549,  1792,  1563,  1564,   550,  1275,  1570,  1571,  2067,
     290,   831,   832,   291,   412,   413,  1124,   292,   830,   293,
     505,   506,   865,  1236,   507,   508,   414,   510,   511,  1239,
    1240,  2043,   294,   537,   295,   501,   859,   860,   861,  1230,
    1231,   420,  1521,  1522,  1523,   296,   421,   422,   768,   297,
     298,   560,   561,   913,   914,  1281,  1576,  1528,  1529,  1530,
    1757,  1797,   299,   300,   876,   919,   566,   567,   568,   921,
     569,   570,   917,  1285,  1581,   924,   925,   926,  1291,   301,
     849,   850,  1507,  1255,  1221,  1766,  2197,  1743,   302,   778,
    1244,  1755,   303,   529,   530,   886,   531,   532,   304,   305,
     439,   783,  1142,   306,   440,   441,   442,   786,   787,   788,
    1456,  1156,  1452,   307,   443,   444,   308,  1223,   309,   839,
     840,  1198,  1199,   841,  1491,   310,   742,  1062,   793,  1093,
    1882,  1105,   389,   390,   391,   735,   736,   737,  1089,  1090,
    1064,  2022,   731,  1879,  1060,  1394,  1674,   311,   312,   756,
     541,  1224,  1225,   772,   804,   177,  1422,  1423,  1690,   572,
     313,  2205,   405,   406,  1777,   314,  1746,   315,  1711,   316,
    2029,   317,   891,  1772,  1769,  1261,  1258,   318,   319,   320,
     407,   447,   409,   448,   758,   472,   393,   746,  1113,   747,
     748,  1415,  1416,  1417,   490,   451,   452,   453,   454,   455,
     474,   811,   812,   813,   814,  1173,   475,  1175,  1176,  1177,
    1721,   476,   477,   478,   479,   480,   818,  1191,  1480,  1481,
    1482,  1483,  1484,  1138,  1486,   489,  1726,   481,  1182,   492
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1868
static const yytype_int16 yypact[] =
{
     517, -1868,   -50,   526,   713,   547, -1868, -1868, -1868,   536,
     536,   278,   472, -1868, -1868,   654,    82,   501, -1868,   800,
   -1868,   555,   582,   587,   716,    97,   855,   656,   632,   700,
      72, -1868,   712,   715,   776,   797,  1049, -1868, -1868,   278,
     621,   669, -1868,    72, -1868, -1868, -1868,    15,    95, -1868,
     625,   278, -1868,  1086, -1868,   536,   732,   741,   749, -1868,
     755,   761, -1868, -1868,   763,   677,   721,   730,   733,   742,
     748,   754, -1868,   126, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868,  1010,   787,  1032,   828,   804,   278, -1868, -1868,
   -1868,   454, -1868,   807,   851, -1868,   780,   -70, -1868,   845,
     853,   854,   732,   871,   873,   732, -1868,  -119,   267, -1868,
    -191, -1868,  1025,  1010,   829, -1868,   278,   878,   280,   880,
     951,   892,   898,   901,   906,   851, -1868, -1868, -1868, -1868,
   -1868,   464,   780, -1868,  1020,   332, -1868,   -85, -1868, -1868,
   -1868,  1144,   -32,   752,   752,   900,   752,   752, -1868, -1868,
   -1868, -1868,  1010,   985,   852,   752, -1868,   732,  6853, -1868,
     288,   756, -1868,   923, -1868,   486, -1868,    63,    64,   345,
    1028,   760,   759, -1868, -1868,   278,   945, -1868, -1868,   856,
   -1868, -1868, -1868,  1204, -1868, -1868, -1868,   278,  1144, -1868,
     278,   278, -1868,   -32, -1868, -1868,   752, -1868, -1868,   -86,
   -1868,   752,   278, -1868,   900, -1868,   -86,   752, -1868,   752,
   -1868, -1868, -1868, -1868,   535,   985, -1868,   961,  6853,   957,
     278,   125,   278,   937,  1819,   278,  1819, -1868,   -69,  5220,
    1819,   278,  1698,   826,   278,   857, -1868,  2351,  1819,   278,
    5220,   278,  3385,  1819,  1077, -1868,   321,   278,   278,   278,
     278,   278,    38,   647,   278,   278,  1152,  5220,  1735,   278,
     278,   278,   590,   278,   966,  3580, -1868, -1868,   908, -1868,
    6587, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,   521, -1868,
     276, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868,  1120, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868,   525, -1868, -1868,   937,   972,   976,   978,
     980,   981,   986, -1868,    64, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868,   917,  1207,  1064, -1868,   732,   -67,   494, -1868,
   -1868, -1868, -1868,  5528, -1868,     8, -1868,   875,   936,  1068,
   -1868,   759, -1868,   320, -1868,  1203,  1111,  1113, -1868, -1868,
     732, -1868, -1868, -1868, -1868, -1868,  6061,   802, -1868, -1868,
    7301, -1868, -1868, -1868, -1868, -1868,   278,  6806, -1868,   221,
   -1868,    39,    37,     3,   331,  1819,  1029,   657,   657, -1868,
   -1868, -1868, -1868, -1868, -1868,   476, -1868,   958, -1868, -1868,
   -1868, -1868,   278, -1868,   912, -1868, -1868,  1819,  1785, -1868,
     292,    -7, -1868, -1868,   540,  1819,  1167,  1167,  1006,  4160,
   -1868,   278, -1868, -1868, -1868, -1868, -1868, -1868, -1868,   920,
     278, -1868,   915,   278, -1868, -1868,  3682, -1868, -1868,  3223,
   -1868, -1868, -1868, -1868, -1868, -1868,   457,   278, -1868, -1868,
   -1868, -1868,  3793,   771, -1868,  6466, -1868,  1030,  1030, -1868,
    1070,    49, -1868,  6935, -1868,    74, -1868,  -102, -1868, -1868,
   -1868,  2351,  7194, -1868,  1222, -1868, -1868, -1868, -1868,   278,
   -1868,  7413,  7232,  1009, -1868,   955,  1065,  5220,   952,  1295,
   -1868,   737, -1868,   974,   962,  7819,   321,   321, -1868,   973,
   -1868,   462,   971,   257, -1868, -1868,  1174,  1006,  1177,   278,
    1213, -1868, -1868,   956, -1868, -1868, -1868, -1868, -1868,   647,
   -1868,   227, -1868, -1868,  1065,   511,   -37, -1868, -1868,  4176,
   -1868,  2248,   278,   735, -1868,   316,  1252, -1868, -1868,  1259,
     179,  1177, -1868, -1868,  5220, -1868, -1868,  1076,  1079, -1868,
     977, -1868, -1868, -1868,  1166,  1376,  1236, -1868,  1140,  1236,
    1367, -1868, -1868, -1868,   732,   503,   503,   503,   503,   503,
     503, -1868,   752,  1052,   752, -1868, -1868,   613, -1868, -1868,
    3706,  2888, -1868, -1868, -1868,  1297,   732,  1184,  1333, -1868,
    1159,  1102,   857,   985,  1059,  1048,  1168,   985,  1353,    40,
    -120,  2841, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868,  1392, -1868, -1868,   278,
     278,   205,    75,   970,  1014, -1868, -1868, -1868,   983,   989,
     990, -1868, -1868, -1868,   396,  1097,   991, -1868,   985, -1868,
     278,   278, -1868,   -62,   985,   985,   732,  6061, -1868, -1868,
   -1868, -1868, -1868, -1868,   752, -1868, -1868, -1868,   985, -1868,
   -1868, -1868, -1868,  5220,   985,  1406,   432,  1249,  1157,   975,
   -1868, -1868, -1868, -1868,  1264, -1868, -1868, -1868, -1868, -1868,
   -1868,   379, -1868, -1868,   421, -1868, -1868, -1868, -1868, -1868,
   -1868,  1245, -1868, -1868, -1868, -1868,   985,   985, -1868, -1868,
     158,  1327, -1868,  7043, -1868,   985,  5220, -1868,  1337,   -58,
   -1868,  1317,  1060,  1420,  4669, -1868,    39, -1868,  1223,  1092,
    5220,  1359,  1317,  1194,   278,   278,   273,     3, -1868,   278,
     278,  1080,   278, -1868, -1868,  1819,  1277, -1868,  1819, -1868,
   -1868,  1171,  1066, -1868,  1819,   -56,   -54,   568, -1868, -1868,
     278, -1868,   -55,  1785, -1868, -1868, -1868, -1868,  1254, -1868,
   -1868, -1868,  1819,  1067, -1868,  2400, -1868,   915, -1868, -1868,
    1440,  5220, -1868, -1868,  1819,  1819, -1868, -1868, -1868, -1868,
    1030,  1041, -1868,  1041, -1868,  1698,  1698,  1082,  1453, -1868,
   -1868, -1868,    74, -1868,    78, -1868, -1868, -1868, -1868,   343,
     343,    29,  1030,  1030,  1030,  1030,  1030,   615,   156, -1868,
   -1868, -1868,   -35, -1868,   -34,  1138,  7993, -1868,  4169,  1365,
   -1868, -1868,  1311,   777,   278,  1176,   955, -1868,   598,   178,
   -1868,  1108,  5220,  1819, -1868, -1868, -1868, -1868, -1868,   737,
   -1868,   278,   188, -1868,  8167,  1351, -1868,  1352,   278,  2351,
    5220, -1868,  1819, -1868,  1283,  5220,   500,  1467, -1868, -1868,
     278,  1467, -1868,  1454, -1868,  1455,   647, -1868,  -103,  1200,
     985,  1098,  1819,  1819,   278, -1868,  1458,  1324,  1819, -1868,
   -1868, -1868,  1461,  1296,  1242,  1153,  1192, -1868,  1241, -1868,
   -1868, -1868,   593,  1312, -1868,  8771, -1868,  1139, -1868, -1868,
    1310, -1868, -1868,  1387, -1868, -1868,  1278, -1868, -1868, -1868,
   -1868,   369,   732,   369,   369,   369,   369,   369,    12,  1318,
   -1868, -1868, -1868,  5220, -1868, -1868, -1868,  1290, -1868,  1087,
    1256,   985,  1320,  2996,  1819,   985,  1326,   985,   171,   985,
     985,   985, -1868,  1518, -1868, -1868, -1868, -1868,   278, -1868,
    1255,    -7, -1868,   -63, -1868,   752,  -101, -1868,   553, -1868,
     -96, -1868,  1459,   985,   497,  1244,   985,   481,   985,   985,
    1282,   732,    75,   732, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868,   545, -1868,  1133, -1868, -1868, -1868,
   -1868, -1868, -1868,  1169, -1868, -1868,  1099, -1868,  1173, -1868,
   -1868,    69,  5220, -1868, -1868, -1868,   293, -1868, -1868, -1868,
    1338,  1530,   752, -1868,   752, -1868, -1868,  5220, -1868, -1868,
   -1868,  1141, -1868, -1868, -1868, -1868, -1868, -1868,  5220,  5220,
    5220, -1868, -1868, -1868, -1868,   278, -1868,   732, -1868, -1868,
     278, -1868, -1868,  1328, -1868, -1868,  1142, -1868, -1868, -1868,
   -1868, -1868,   772, -1868, -1868, -1868, -1868,  1343,   903, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868,  1502, -1868,  5220,
   -1868, -1868,  1305, -1868, -1868,  1202, -1868, -1868,  1145,  1143,
   -1868, -1868,  1349, -1868, -1868, -1868, -1868, -1868,  1317, -1868,
    1317, -1868, -1868, -1868,  1364, -1868, -1868, -1868,  1819, -1868,
     358,  1819, -1868,  1187,   278,  3078,  1303, -1868,  1257,  1321,
    1261,  1323, -1868,  1251, -1868,   857,   857, -1868,  1030, -1868,
   -1868,  1329, -1868,    53, -1868, -1868, -1868, -1868, -1868,   791,
   -1868, -1868, -1868, -1868,  1378, -1868,  1819, -1868, -1868, -1868,
    1394,  1248,   -33,   934,  1215,  1215,    43,  1190, -1868,  1698,
   -1868,   575,   985, -1868, -1868, -1868,  1011, -1868, -1868, -1868,
   -1868, -1868, -1868,  -237,  -237, -1868,  1041,  1041,   239,   591,
   -1868,  1030, -1868,  1316, -1868, -1868, -1868,  7993,  1460, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,  1226,
     857,  1429,   110,  1520,  1176, -1868, -1868,  1393,  1393,  1266,
   -1868,  1212,  5220, -1868,  3682, -1868,  1281,  1248,   -29, -1868,
     278, -1868,  -219, -1868, -1868, -1868, -1868, -1868, -1868,  1604,
   -1868,  1435, -1868,  1819,  1587, -1868,  1473,  1493,  1216, -1868,
    1217, -1868, -1868, -1868,  1499,  1559,  1407,   607,  5220, -1868,
    1195,  1254, -1868, -1868,  1221,  3263,   278,  1248,   314,  1619,
     278,  1221, -1868,    44, -1868,   686,   278, -1868, -1868,  1400,
     278,   108,  4520, -1868,  1412, -1868,   728,   736,  1424,  8771,
    1613, -1868,   732, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868,  1197, -1868,  1366,  1368, -1868,   149,
     985, -1868, -1868, -1868, -1868, -1868, -1868, -1868,  5220,  5220,
   -1868,  1819,  1819,   302,  1302, -1868,  1304, -1868, -1868,  5220,
    1806,  1819,   950, -1868,   752, -1868, -1868,   278,  1432,  1434,
    1191,  1437,   -30, -1868,   -63, -1868,   235, -1868,  1448,     0,
       0,  1444, -1868,   752,   278,  1443,  1639,    34,   453,   752,
    1260,   278,   278,   -94,   752,   732, -1868, -1868, -1868, -1868,
     752,  1285, -1868,   278, -1868, -1868,  3682, -1868,  1287, -1868,
   -1868,  1322, -1868, -1868,   728, -1868,   752, -1868,   278,  4604,
   -1868, -1868, -1868, -1868,  1411, -1868, -1868,  8771,  1416, -1868,
   -1868, -1868,  1626, -1868, -1868,  1464, -1868,  5220, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868,  2058, -1868,   620, -1868,  1364,
    1281,  1331, -1868,  1431,  1248, -1868, -1868,   150, -1868,  1884,
   -1868, -1868, -1868,  3547, -1868, -1868,  1399,  1194, -1868,  1436,
   -1868,  1360, -1868,  1361, -1868, -1868, -1868,   466,  1681, -1868,
   -1868, -1868, -1868, -1868, -1868,  1651, -1868, -1868,  1819,  1564,
    1819, -1868, -1868, -1868,  1684,  1698,    57, -1868,  1568,  1215,
    1030, -1868,  1030,  1332,  1332, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868,   896,   278, -1868,
   -1868, -1868,  1385,  1330,  1313,   110, -1868, -1868, -1868, -1868,
    5220,  5220, -1868,  1520, -1868, -1868, -1868,  1819,  1819,   985,
     278,    18, -1868, -1868,  5220, -1868,  1578,  1819, -1868,   619,
   -1868, -1868,  -219, -1868,  5220,  5220, -1868,  1580,  1574, -1868,
    1465, -1868, -1868,  8771,  2351, -1868,  2351,  1217, -1868,  1521,
     -80,   985, -1868, -1868,  1315,  1451,  1576,  1439,  1303, -1868,
   -1868, -1868, -1868,  1281,  1577,  1819, -1868,  5220,    -7, -1868,
    1617,  1362,  -100,    44, -1868, -1868, -1868, -1868, -1868, -1868,
     169,  1445, -1868, -1868, -1868,  1515,  1254,  1588,  1819, -1868,
   -1868, -1868,  8771, -1868,  1594, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868,  1426,  1819, -1868, -1868, -1868, -1868, -1868,  1335,
   -1868,  1340, -1868, -1868, -1868, -1868, -1868, -1868, -1868,  1341,
   -1868,   274, -1868, -1868, -1868, -1868, -1868,   985,   985,   985,
     985,   985,  1476, -1868, -1868,  1525,  1531,   818,   -12,  1516,
   -1868,   278,   985, -1868, -1868,  1169, -1868,   278,   278,  1391,
      -7, -1868,  1345, -1868, -1868,  1169,  1553, -1868, -1868, -1868,
     -94, -1868,   985, -1868, -1868,   752, -1868, -1868, -1868,  1643,
   -1868, -1868,  5220,  5220,  1699, -1868,  1563, -1868,  2487, -1868,
     985, -1868, -1868,  4828,  1503, -1868,  5220, -1868, -1868,  1691,
    1364, -1868, -1868,  1364,  1364,  1364,   611,  1494,  1599,  1497,
   -1868, -1868,  4912,  4912,   278,  1438, -1868,  3078, -1868,  4912,
    8771,  1636,  1500, -1868, -1868, -1868,  1494, -1868, -1868,   394,
   -1868, -1868,   626,    43,  8771,  1684, -1868,  1215,  8771, -1868,
   -1868, -1868,  1030,   896,   896, -1868,  1501,  1504, -1868,   777,
    1386, -1868, -1868,  5220,  1725,  1395, -1868,  1785,  1785,   278,
      -7,  1819,  1481, -1868, -1868, -1868, -1868,  1248, -1868,  1450,
   -1868, -1868,  1728,  8771, -1868, -1868,  1749, -1868,  8341,  1758,
   -1868,  8515, -1868,  1513,  1495,  1819,    18,  5220,  1441, -1868,
   -1868, -1868, -1868,   278,  1637,  1494, -1868, -1868,  1248,  1522,
   -1868,   278,  1597,  1700,  1605,  1303, -1868,  1535, -1868, -1868,
   -1868, -1868,  1586,  1242,   278,  1588, -1868, -1868,  1541,  5136,
    8771,  1598, -1868,  1341,  1585,  1589,  1704, -1868,   278,  5220,
    5220,  5220,  5220,  5220,   752, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868,    -7, -1868,  5220,
     120,    -7,    -7,  1550,   278, -1868,  1645,  1602,  1774,  1483,
   -1868,  5220,  1569,   528, -1868, -1868, -1868,   752,  1659,  1416,
   -1868,  1635,  1507,  1416,  1649,   985,   985,   985,   278,   985,
     985,   985, -1868,  3347, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868,   303,  1575, -1868,
     172,  1592, -1868, -1868, -1868, -1868, -1868, -1868, -1868,  8771,
    1492,  3547,  3547, -1868,   278, -1868, -1868, -1868,  5444, -1868,
   -1868,  1570,  1712,  1819,  1564,  1819,  1564, -1868,  7645, -1868,
    8724,   905,  1689,  1694,   777, -1868,  1754,  1746,   188, -1868,
    5220,  5220, -1868,  1785,   985,  1578, -1868,  5220, -1868,  1729,
    2351,  8515,  1758, -1868,  1512,  5752, -1868, -1868,   985,  1785,
   -1868,  3682,  5220, -1868, -1868, -1868,  1577,  1577,  1619, -1868,
    1522, -1868, -1868,   278,  1660, -1868,   278,  1708,   278,  1571,
     -52, -1868, -1868,  1610, -1868,   985, -1868,  1600,  1606, -1868,
      -7, -1868, -1868, -1868, -1868, -1868,  1662, -1868, -1868, -1868,
   -1868, -1868, -1868,  1834,  1838,  1642, -1868,    20, -1868,   278,
   -1868, -1868,  1673,   528, -1868,  1657, -1868, -1868,  1763,  1658,
     985, -1868, -1868,   985,   985,  1425,   293,   278,    -9,  -166,
   -1868,   846,  1764,  5220, -1868, -1868,   752, -1868, -1868,   -58,
    1416,  1416, -1868,  5220, -1868,  1722, -1868,  8771, -1868, -1868,
    1494, -1868,  1494, -1868,   343,   857,   857, -1868,  1839, -1868,
     188, -1868, -1868,  1679,   188,   188,  1447, -1868,  1496,  8771,
   -1868, -1868, -1868, -1868,  1449, -1868, -1868, -1868,  5220, -1868,
   -1868,   278, -1868, -1868, -1868, -1868,  1242, -1868, -1868, -1868,
    1608,  1819,  1640,  1640,  1846, -1868, -1868,   453,  1509,  1868,
   -1868,  1633,   752,  1169, -1868,    20, -1868, -1868, -1868, -1868,
    1855, -1868, -1868, -1868,  1705, -1868,   985,   752,  1788,  1732,
     752,  1624,   297, -1868,  1565, -1868,   278, -1868,  1646, -1868,
   -1868, -1868, -1868, -1868,   563, -1868, -1868,   583, -1868, -1868,
     664, -1868, -1868,  5220, -1868, -1868, -1868,  8771,  5220,  5220,
   -1868,  8771,  6060,  1564,  1564, -1868, -1868, -1868,  1819, -1868,
    5220,   188,   188,  1532,  2351, -1868,  1532, -1868, -1868,   -52,
   -1868, -1868, -1868,   680,   680,  1819, -1868,   453,  1870,   278,
   -1868,  1857, -1868,   524,  1871, -1868,  5220, -1868,   752,   752,
   -1868, -1868, -1868,   752,  1648,   752, -1868, -1868,  1861,    -7,
    2720, -1868, -1868, -1868, -1868, -1868, -1868,  1264,  6368, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868,  1475, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868,  1785, -1868,   453, -1868, -1868,
    3682,  1539,  1567,  1647,  5220,  3682, -1868, -1868,  1655, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868,  1674, -1868,  1650,
   -1868
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1868, -1868, -1868,  1916, -1868,  1759,    56,  1607, -1868, -1868,
   -1868, -1868, -1868,   190,   877, -1868, -1868, -1868,  1601, -1868,
   -1868,  1595, -1868, -1868, -1868, -1868, -1868, -1868,   810,   365,
     642, -1868, -1868,  1885, -1868, -1868,  1807, -1868, -1868, -1868,
    1579, -1868, -1868, -1868, -1868, -1868, -1868,  1609,  -227, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868,  1581, -1868, -1868, -1868,
   -1868, -1868,  1798, -1868, -1868, -1868,   429, -1868, -1868,   979,
   -1868, -1868, -1868,  1812, -1868, -1868,  1334, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868,   629, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868,  -121,  -194, -1868, -1868, -1868,
     360, -1333, -1868, -1868,  1336,   159, -1868,   -53,   155, -1868,
   -1868,  1891, -1868, -1868, -1868,  1772,  1775, -1868, -1868, -1868,
     984, -1868,  -201, -1868, -1868, -1432, -1868, -1868, -1868, -1868,
   -1868,   317, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1589,
   -1868, -1868, -1868, -1868,  -117, -1868, -1868,  -127,  -182, -1868,
    -139,  1765, -1868, -1868,  1306, -1868, -1868, -1868,  -310,  2544,
   -1868, -1868, -1291, -1868, -1868,   948, -1868, -1868,  -294, -1868,
     -24, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,   -16,
   -1868, -1868, -1868, -1868,  -107, -1868, -1868, -1557, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868,  1802, -1868, -1868,  1015,
     -61, -1868,   644, -1868, -1868, -1868, -1868, -1868,   651, -1868,
       4, -1868,  1019, -1868, -1868, -1868,  1793, -1868,  1292, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,  1797, -1868,
   -1868,  1339, -1868, -1868, -1868,   982, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868,   624, -1868, -1868, -1868,   153, -1868,
   -1088, -1868, -1868, -1868, -1868, -1868, -1868,   -99,  -167, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,    13, -1868,
   -1868, -1868, -1868,   490, -1868, -1868, -1868, -1868,  1908,    85,
   -1868, -1868, -1868, -1868, -1868,  1357, -1868, -1868,  1805,   264,
   -1868, -1868, -1868, -1868, -1672,  -157,  -231, -1868, -1868, -1868,
   -1868, -1868,   111,  1189, -1868, -1868, -1868, -1868,  1181,   538,
   -1048, -1868, -1867, -1868, -1868,   821, -1868, -1868,   534, -1868,
   -1868, -1868, -1868, -1868,  1160, -1868,   506, -1868, -1868,   107,
   -1868, -1868,   113,   116, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868,   882,   327, -1868, -1868,   336,  -762,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868,  1625, -1868, -1868, -1868, -1868, -1868,
   -1292, -1868, -1868,  -664, -1383, -1868, -1370, -1868, -1868, -1868,
   -1868, -1868,  1523, -1868,   783, -1868, -1868, -1868, -1868, -1868,
     105,   109, -1868, -1868, -1442, -1868, -1868, -1868, -1868, -1868,
   -1705, -1868, -1868, -1868,   498, -1868, -1868, -1868, -1868,   -89,
   -1868, -1868, -1868, -1868, -1868,  1653, -1868, -1868, -1868, -1868,
    1556, -1868, -1868, -1868, -1868, -1868,  -233,  1566, -1868, -1868,
     546,  -265, -1868, -1868, -1868, -1868, -1868,  1210, -1835, -1868,
     841,  -218, -1868, -1868,   552, -1868, -1868,  -352, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868,   794, -1868, -1868,
   -1868,   282, -1868, -1868,  1529,  1527,  -763, -1868, -1868, -1868,
   -1868, -1868, -1868, -1868,   703, -1868, -1868, -1868, -1868, -1868,
    1572,  -663,   866, -1868,   835, -1868,   -48,   334, -1868,  1584,
   -1868, -1868, -1868, -1868,  1573, -1868, -1868,  -469, -1868, -1868,
   -1868, -1868, -1868, -1868, -1868,  1663, -1868, -1868, -1868,  1325,
   -1868, -1868, -1868, -1868, -1868,  1664, -1868,   888, -1868, -1868,
   -1868, -1868, -1868,  -765, -1868, -1868, -1868,  -660,  1716, -1868,
   -1868, -1868, -1868,  1726,   -97, -1868, -1868,  1381, -1868,  1342,
   -1868, -1868,  -717, -1868,    99,  1054, -1868, -1868, -1868, -1868,
    -226, -1868, -1122, -1147,  -113,  1286, -1155, -1868, -1868, -1868,
   -1868,  -213,  -192,  -393,  -866, -1868,   195, -1868, -1700, -1868,
   -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868, -1868,
    2123,  1661,   232,  2331,  -106,   886,   -11, -1868, -1868, -1868,
    1374, -1868, -1281, -1025,  1253,   861, -1868,  -424, -1868,   124,
    -228, -1868, -1868,  1319, -1868, -1868,  1308,   224, -1868,   960,
   -1868,  -434,  -441, -1868,   363, -1868, -1868,  -810, -1868, -1868,
   -1868, -1868, -1868,   943, -1868,  -598,   667,  -319,  -798,  -224
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1378
static const yytype_int16 yytable[] =
{
      20,   270,   152,   446,   953,   779,  1459,   206,   482,   491,
     428,   418,   757,   509,   373,  1139,   216,   201,   176,   373,
     209,  1180,  1181,   496,  1640,   493,  1110,   373,    20,   798,
     515,   757,   517,   487,   424,   565,   534,   535,   494,   556,
      20,   828,   545,  1164,  1165,   543,  1830,   519, -1336,   144,
    1698,   828,   147,  1562,   152,  1639,  1838,   150,   544,   150,
    1621,   270,   887,  1461,   738,   805,   733,  1300,   206,   769,
     720,  1196,  1516,  1193,  -885,  -287,    20,  1461,  1823,  1515,
    1259,  1928,  1109,    23,   374,  1661,   722,   429,  1960,   459,
     460,   461,   327,   809,  1338,  -220,    64,   425,    33,  1135,
    1136,  1058,  1513,  -402,   218,    20,   643,   504,   270,    88,
     854,  1862,  1554,  1246,  -402,   982,  1780,  1449,  1128,  1496,
    1130,   589,  1649,  1625,  1764,  2068,  -221,    64,  2081,   962,
     324,   394,   445,   190,  1681,  1527,   983,  1696,   645,   646,
     647,   648,   649,   650,   651,   815,   892,   960,   800,   800,
    1460,    40,   855,   856,  1517,  2108,   153,  1019,   857,   134,
     848,   328,   329,    65,   363,  1497,   779,   459,   460,   461,
     984,   342,    26,  2139,   134,  1978,   367,    24,  1774,   370,
     370,   652,    60,   816,  1519,   148,  1220,   905,   353,  1786,
      10,   378,   185,   151,    65,    10,   562,   154,  2082,   744,
     824,  1741,   825,   826,  2031,  1787,  2033,  1462,  1324,  1520,
     586,   415,   773,   906,   395,   739,  -217,   555,  -220,   858,
     458,  1462,   563,   378,   343,  1220,    61,    11,   378,  -220,
     270,  -587,  1692,   394,  -220,   513,  2020,   212,  -327,  -105,
    1219,   213,   430,   801,   803,   151,   118,   135,   378,  -221,
   -1209, -1209, -1209,   820,  1301,   961,   833,   821,   431,  -327,
    -221,    66,   135,   745,   325,  -221,   653,  1020,  1589,  1691,
     432,   330,   344,  1687,  2139,  2139,  -220,    41,  1450,    18,
     149,    33,  1498,  -105,   562,   593,   893,   213,  -220,  1742,
     213,   985,    66,   585,   174,  1339, -1336,   759,  1827,   986,
    1254,   759,   191, -1005,  1831,  1832,  1862,  -221,   174,   107,
     563,   817,   764,   433,  2068,   770,  1897,   642,  1765,  -221,
    -592,   195,    67,  1575,   600,  -327,    68,  1718,  1499,  1171,
     107,   434,  1599,   150,   464,  1789,  1048,  1451,   601,  1952,
     791,   810,   657,   445,   883,   396,   602,  1129,   864,  1131,
     974,    18,   659,    67,   150,   974,  1137,    68,  1626,   375,
     589,  2149,  1470,  -327,   394,  1122,  1059,   504,   504,  1325,
    -217,  1844,   435,   331,   987,   727,    18,  2145,  1472,    88,
     828,   603,   604,  -220,  2106,    34,  1189,   764,   988,  1340,
     989,   524,  1744,    18,  1686,  1341,  1326,  1342,  -287,  1883,
     394,   415,   332,  -587,  1824,  1896,  1775,  1469,    69,  1825,
      18,  -885,   464,   720,  -221,  1957,  1302,  1253,  1134,  -587,
    1979,   970,   972,   740,   150,   806,  1463,  1114,    70,   722,
     436,  1622,  1489,  2192,  2193,   791,    18,   764,    18,    69,
    1463,   848,   734,   938,  1590,   940,   797,   396,  1412,  1189,
    1413,   213,  1627,   744,  1693,    23,  2021,  1628,  1629,    70,
     150,   437,  1178,  1600,   822,   823,   824,   741,   825,   826,
     744,   964,  1790,  -587,   990,  1970,   973,  1327,   834,    18,
     525,   800,   394,    18,   729,   564,   605,     1,   526,    18,
     527,   438,  1179,  1591,  2161, -1209,   502,  1555,  1546,   794,
      71,  -217,    23,   800,   800,   800,   800,   800,  1698,  1698,
     466,  1379,    92,   467,   468,  1328,    36,   745,     1,   399,
     400,   927,   401,    18,   402,   403,     1,   749,   404,   553,
     394,    71,  1888,   429,   745,   216,  1049,  1445,  1446,  1601,
     469, -1198,   150,   948,  -592,  2174,   394,    -2,     1,    24,
     606,  1902,  1990,   780,  1904,  1791,  1050,  1906,   966,  1010,
     397,   398,  1359,  1120,   382,  -594,   399,   400,    34,   401,
      18,   402,   403,  1042,  1043,   404,  1163,  -217,   396,  2175,
    1011,   482,   482,   342,   429,  2016,   459,   460,   461,   607,
    -592,   750,  1925,  -217,   608,   765,    24,  1233,  1183,  1184,
    1185,  1186,  1187,  1161,  1038,   884,   150,   556,   165,    -8,
     528,  -594,  1494,  1023,   396,   899,   900,  1682,   885,   609,
    1946,  1421,  1217,  1947,  -217,    -8,   459,   460,   461,   753,
     754,   180,   394,   556, -1278,  1237,   343,  1991,   610,   383,
    -217,  1238,    12,  1232,   759,  2156,    92,  -217,    86,  1017,
    1018,   553,    17,   394,  1030,  1031,   974,  1421,  1884,  1885,
    1886,  1227,   397,   398,    87,   795,    18,   764,   399,   400,
    1053,   401,    18,   402,   403,  1380,   195,   404,   766,     3,
     181,   182,  -217,   889,   344,  1808,    15,  1039,   430, -1278,
    1418,  -859,   150,  1360,  -217,   767,   396,    91,     2,   799,
     802,  1172,  1903,  1717,   431,   466,  1267,  1218,  1367,   564,
       3,  -920,  1040,    13,   780,   174,   432,   174,     3, -1278,
    1701,  1566,  -920,    18,   503,  2206,   890,   757,     2,  1368,
   -1210,  1189,   342,  1111,  1112,   469,  2181,   798,   195,   430,
       3,   394,  -217,  -371,   396,  1135,  1136,  1189,    18,    21,
     970, -1000,  2182,  1336,  1044,   431,  2183,  1349,  1282,   433,
     396,  2000,   195,  1350,   547,  2003,    18,   432,   757,   557,
      22,   588,  2184,  2179,   548,  2226,  1178,   434,  1473,  1542,
     429,  1041,   459,   460,   461,   343,  1202,   213,  1203,  -217,
     345,  1204,  1205,   397,   398,  1419,  1355,  1356,  1132,   399,
     400,   150,   401,    18,   402,   403,  1179,   558,   404,  1567,
     433,   524,  1474,  1795,   928,   929,   930,  1133,   435,   800,
     559,  1194,  -327,  1278,  1543,    27,  -327,   213,   434,   397,
     398,   464,    32,   344,   757,   399,   400,  2185,   401,    18,
     402,   403,  1279,  1568,   404,  1569,   396,    29,  1346,  1748,
     358,   342,   869,  2186,   755,  -587,    33,   415,   174,    30,
    -327,   359,   683,   870,    31,  1337,  1188,   396,  1749,   435,
     771,   464,   800,  1206,   757,  2133,   436,  2134,  1293,  1294,
    1295,  1296,  1297,  1298,  1299,    37,   684,   685,  1887,  1421,
     941,  1426,    50,  1384,   195,  1385,  2112,  2113,    18,   854,
     525,   822,   823,   824,   343,   825,   826,   437,   526,    38,
     527,   397,   398,   898,  1447,  1348,    56,   399,   400,  1351,
     401,    18,   402,   403,  1400,  1401,   404,   436,    85,  1424,
    2114,    51,  2128,  2129,  1905,   430,  1403,   438,  1364,  1404,
    1366,   855,   856,  1453,  1454,   482,  2115,   857,   928,   929,
     930,   431,   344,  1579,  1580,   396,  2116,    57,   437,   397,
     398, -1260, -1260,   432,   117,   399,   400,  1487,   401,    18,
     402,   403,  1612,  1613,   404,   397,   398,    39,  -587,  2201,
    2202,   399,   400,   213,   401,    18,   402,   403,   438,    48,
     404,  1418,    49,   163,  -587,  1418,  2141,  2142,  1475,  1476,
    1477,  1478,  1137,  1479,  1396,    58,   433,   466,   858,    92,
     467,   468,  1232,    99,   213,   394,   399,   400,    94,   401,
      18,   402,   403,    82,   434,   404,    95,   464,  1891,  1892,
     528,   757,    96,  1207,  1208,   683,  -587,   469,    97,   429,
      98,   459,   460,   461,  1178,  1683,  1684,  1685,  -587,    -8,
       1,   556,   107,  1465,  1683,  1684,  1685,   100,  1583,   684,
     685,   397,   398,  1172,   112,   435,   101,   399,   400,   102,
     401,    18,   402,   403,  1179,   150,   404,   686,   103,  -492,
    2056,  2057,   397,   398,   104,   113,   -16,     1,   399,   400,
     105,   401,    18,   402,   403,   116,  1419,   404,   399,   400,
    1419,   401,   483,  1414,   484,   115,   392,   411,   119,   121,
     411,   423,   411,   415,   423,   449,   411,   485,  1514,  1616,
     131,  2117,   141,   436,   411,  2118,  2119,   423,   157,   411,
     142,   143,   512,   514,   423,   516,   423,   518,   523,   411,
     423,   423,   411,    34,   411,   394,   423,   546,   145,   551,
     146,  1722,   161,   800,   437,   164,   174,   166,   394,  2120,
    1647,  1648,   486,   167,   373, -1210, -1210,   122,  1817,   169,
     397,   398,    -8,  2121,  2122,   170,   399,   400,   171,   401,
      18,   402,   403,   172,   438,   404,   179,   213,    -8,  1094,
    1190,  1192,   187,   195,   430,  1615,   202,   213, -1210,   215,
     322,   321,   123,   466,   124,   357,   467,   468,   353,    86,
     431,   364,   399,   400,  1635,   401,    18,   402,   403,  1643,
    1645,   404,   432, -1210,   365,    87,   366,   385,   416,   396,
      -8,  1657, -1210,   469,   388,   488,  2135,  1655,   500,  1585,
    1673,   482,     3,   552,   554,   571,  1723,  1385,  1724,   575,
     686,  1095,  -493,   576,   394,   577,  1418,   578,   579,  1418,
    1418,  1418,   174,   580,   582,   433,  1709,   -16,  1712,   583,
    1662,  1818,  1819,  1820,  1821,   732,   584,  1822,   595,     3,
     598,   411,   597,   434,   639,   640,   464,   641,   759,   752,
     761,   411,   972,  1624,  1737,  1738,  1292,   774,  1292,  1292,
    1292,  1292,  1292,   411,   411,   777,  1760,   423,  1761,  1680,
     411,   411,  1656,   782,   150,   829,   757,   781,   785,   757,
    1611,   174,   844,  1697,   435,  1747,   732,  1699,   848,   790,
     852,   822,   823,   824,  1706,   825,   826,   853,  1178,   863,
     822,   823,   824,  1636,   825,   826,  1641,   862,   871,   868,
     378,   378,   872,  1465,   757,   875,   878,   880,   902,   396,
     904,  1419,  1660,  1778,  1419,  1419,  1419,  1178,  1179,   822,
     823,   824,   396,   825,   826,   910,  1758,  1669,   911,   411,
     912,   915,   436,   916,   918,   757,   933,   934,   935,   936,
     937,   920,   512,   512,   923,   939,   949,  1179,   947,   950,
     951,   952,   955,   800,  1414,   877,   956,   959,  1414,   957,
     601,  1005,   842,   437,  1283,   411,  1006,   411, -1210, -1210,
   -1210, -1210, -1210, -1210,  1007,  1799,  1012,  1029,   897,   411,
    1008,  1009,  1013,  1033,  1034,  1036,  1045,  2136,  2137,  1052,
    1057,  1061,   556,   438,   397,   398,   740,  1063,  1092,  1108,
     399,   400,  1781,   401,    18,   402,   403,   729,  1118,   404,
    1121,  1123,   466,   564,  1125,   467,   468,   738,   396,  1169,
    1141,   399,   400,   373,   401,    18,   402,   403,   824,  1195,
     404,  1201,   450,   536,  1166,   473,  1222,  1197,  1212,  1234,
    1235,  1243,   469,   495,  1247,   498,  1251,  1252,  1911,  1256,
    1265,  1260,  1266,  1269,  1270,  1272,  1276,  1274,  1096,  1097,
     450,  1421,  1098,  1099,  1100,  1101,  1102,  1284,  1277,  1288,
    1280,  1103,  1336,  1104,  1289,   423,   423,   556,  1923,  1290,
    1304,  1306,  1307,  1308,  1834,  1310,  1332,    18,  1322,  1334,
    1353,  1941,  1363,  1898,  1357, -1261,  1369,  1370,  1372,  1373,
    1382,  1383,  1939,  1398,  1390,  1402,  1405,  1908,  1399,  1407,
    1408,  1910,  1410,  1409,  1411,  1425,  1436,  1440,   556,  1964,
    1441,  1442,  1443, -1262,   397,   398,  1444,  1458,  1448,  1488,
     399,   400,  1611,   401,    18,   402,   403,   397,   398,   404,
    1455,   806,  1466,   399,   400,  1490,   401,    18,   402,   403,
    1465,  1492,   404,  1495,  1935, -1261,   592,  1501,  1506,  1509,
    1510,   771,  1524,  1525,  1527,  1531,  1533,  1539,  1534,  1536,
    1641,  1219,  1541,  1545,  1547,  1106,  1641,  1641,  1556,  1835,
    1573,   764,   764, -1262,  1337,  1116,  1117,  1578,  1119,  1582,
    1584,   411,  1586,  1587,   411,  1588,  1603,  1617,  1604,  1618,
     411,  1619,  1349, -1260,  1350,  1637,   423,  1620,  2024,   411,
    1638,  1646,  1658,  1663,  1664,  1670,  1677,   556,   411,  1414,
    1675,  1700,  1414,  1414,  1414,  1976,  1678,   556,  1688,   556,
     411,   411,  1689,   397,   398,  1704,  1705,  1702,  1707,   399,
     400,  1708,   401,    18,   402,   403,  1710,  1729,   404,   792,
    1713,  1719,  1760,  1753,   556,  1730,  1725,   429,  1997,   459,
     460,   461,  1732, -1260,  1745,  1754,  1756,  1763,  1768,  1770,
    1771,  1834,  1773,  1776,  1782,  1834,  1834,  1794,  1796,  1784,
    1211,  1800,  1801,  1793,   819,  1814,  1826, -1261,  1804,   411,
    1815,   394,  2069,  1805,  1806,  1833,  1816,   423,  1836,  1839,
     851,  1842,  1847,  1846,  1878,  1881,  1889,  1421,   411, -1261,
    1890,  1894,  1899,  1901,  1917, -1262,  1249,  1920,  1912,  1924,
    1927,  1913,   411,  1921,  1935,  1926,  1929,  1930,   411,   411,
    1264,  1937,  1944,  1938,   411,  1699,  1699, -1262,  1942,  1948,
    1954,   394,   450,  1953,   792,  1958,   466,  1641,  1172,   397,
     398,  1956,  1959,  1287,  1963,   399,   400,   909,   401,    18,
     402,   403,   394,  1965,   404,  1967,  1835,   764,  1983,  1968,
    1835,  1835,  1969,  1982,   542,   394,   469,  1981,  1984,  1986,
    1987,  1998,  1989,   764,  2001,   791,  2002,  2004,  2019,  2025,
     411,  2028,  2027,  2035,   946, -1260,  2023,  1641,  2036,  2038,
    2039,   150,  2049,  2053,   423,  2063,  2061,   423,  2070,  2066,
    2074,  2077,   462,  2072,  1834,  2078,  2018, -1260,  2079,  2073,
    2132,  2090,  2096,  2097,  2103,  2098,  2124,  2126,   431,  2131,
    2140,  2138,   408,  2150,  2152,   408,  2144,   408,  2155,  2157,
     432,   408,  2143,   429,  2146,  2158,  2159,  2163,  2168,   408,
    2191,   556,  1834,  2164,   408,  2169,  2172,  2178,  2196,  2180,
     213,  2207,  2209,  2214,   408,  2221,  2198,   408,  2227,   408,
    2225,    14,  2229,  2219,   323,  2230,  1427,   574,    59,   581,
     573,  2069,   173,   433,   594,   186,  1027,  2210,  1643,  1740,
    2215,  1395,   599,  2160,   178,   965,  1395,  1333,  1596,   463,
     150,   434,  2154,  1803,   464,   396,   587,   556,  2167,  1835,
    2204,  2171,  1966,  2176,   106,   372,   371,  1840,  2162,  1375,
    2188,   380,   967,  1024, -1261, -1261,  1365,  2095,  2089,  1056,
   -1261, -1261,  2104, -1261, -1261, -1261, -1261,  2165,  2210, -1261,
     368,  1347,   435,  1107,  1633,  1623,  2094,  1835,  1641,  1352,
     381,   379, -1262, -1262,   411,   396,   411,   411, -1262, -1262,
    1667, -1262, -1262, -1262, -1262,  1054,  2015, -1262,  1643,  1389,
    2224,   160,  2109,   387,  2187,  2037,   396,  1216,  1035,  2216,
    2217,  1025,  1210,  1733,  2218,  1505,  2220,  1736,  2051,   396,
    1907,  1250,   411,  1762,  1159,  2052,  2050,   411,   430,  1467,
     436,  1909,   776,   819,  1561,  2059,   408,  2058,   473,   473,
    2200,  1788,   895,   867,   431,   760,   408,  1694,  1643,  1229,
    1751,  1518,   866,  1834,  1750,  1577,   432,  1962,   408,   408,
     907,   465, -1260, -1260,  1508,   408,   408,  1666, -1260, -1260,
    1540, -1260, -1260, -1260, -1260,  1641,   922, -1260,  2199,   764,
    1940,   874,   882,   784,   791,  1226,   888,   789,   743,   791,
    1512,   438,  1158,   411,  1397,   730,   423,  1091,  2127,   433,
    2047,  1115,  1174,  1241,   150,  1200,  1552,  1157,  1245,   411,
     466,  1170,  1485,   467,   468,  2034,  1471,   434,     0,   399,
     400,  1727,   401,    18,   402,   403,  1428,     0,   404,     0,
       0,  1551,  1553,   411,   408,     0,  1560,     0,     0,  1565,
     469,  1606,  1572,     0,     0,     0,  1574,     0,  1835,     0,
     397,   398,     0,     0,     0,     0,   399,   400,   435,   401,
      18,   402,   403,     0,     0,   404,     0,     0,     0,     0,
     408,     0,   408,     0,     0,     0,  1305,     0,     0,     0,
       0,     0,     0,     0,   408,     0,  1319,   411,   411,     0,
       0,     0,     0,     0,     0,     0,   411,   411,     0,     0,
     397,   398,     0,   423,     0,     0,   399,   400,     0,   401,
      18,   402,   403,     0,     0,   404,   436,     0,     0,     0,
       0,   397,   398,     0,  1644,     0,     0,   399,   400,  1653,
     401,    18,   402,   403,   397,   398,   404,   429,     0,     0,
     399,   400,     0,   401,    18,   402,   403,   437,     0,   404,
       0,     0,     0,     0,     0,  1378,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     592,     0,     0,     0,     0,     0,     0,   438,     0,     0,
       0,  1391,  1392,  1393,     0,     0,     0,     0,     0,     0,
     411,     0,     0,     0,   150,     0,     0,     0,     0,   397,
     398,     0,     0,     0,     0,   399,   400,     0,   401,    18,
     402,   403,     0,     0,   404,     0,     0,     0,     0,     0,
       0,     0,  1406,     0,   411,     0,   411,   419,     0,     0,
       0,     0,     0,   456,   896,     0,     0,     0,     0,     0,
     429,   419,   459,   460,   461,     0,   499,     0,     0,     0,
       0,     0,     0,     0,  1728,     0,   533,     0,  1435,   538,
       0,   419,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   411,   411,     0,   423,     0,     0,     0,
       0,     0,     0,   411,     0,     0,     0,     0,     0,     0,
       0,     0,   430,     0,     0,     0,   408,     0,     0,   408,
       0,     0,   473,     0,     0,   408,     0,  1143,   431,     0,
       0,     0,     0,  1144,   408,     0,  1145,     0,     0,  1146,
     432,   411,     0,   408,  1560,     0,     0,     0,     0,  1565,
       0,     0,     0,     0,     0,   408,   408,     0,     0,     0,
       0,     0,     0,     0,   411,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1226,     0,  1226,     0,   411,
       0,     0,     0,   433,  1147,     0,  1148,     0,     0,     0,
     466,  1178,     0,   397,   398,     0,     0,     0,     0,   399,
     400,   434,   401,    18,   402,   403,     0,     0,   404,     0,
       0,  1544,     0,     0,   408,   430,     0,     0,   751,     0,
     469,  1179,     0,     0,     0,   644,     0,     0,     0,     0,
       0,   431,     0,   408,     0,     0,  1653,     0,     0,     0,
     762,   763,   435,   432,     0,     0,     0,   408,   419,     0,
       0,  1849,   410,   408,   408,   410,  1149,   410,     0,   408,
       0,   410,     0,   213,     0,     0,     0,     0,     0,   410,
       0,  1595,  1595,     0,   410,     0,     0,     0,   408,     0,
    1893,     0,  1605,     0,   410,     0,   433,   410,     0,   410,
    1150,  1151,     0,     0,     0,   411,     0,     0,   411,  1850,
     436,     0,   463,     0,   434,     0,     0,   464,     0,     0,
       0,     0,     0,     0,     0,   408,   763,     0,     0,     0,
       0,     0,     0,   411,   411,  1922,   423,   411,     0,  1378,
       0,   437,  1152,   411,  1153,     0,     0,     0,     0,     0,
       0,  1154,   946,     0,     0,   435,     0,     0,     0,     0,
       0,   411,   533,     0,   533,     0,     0,     0,     0,  1943,
    1679,   438,     0,     0,   411,     0,   763,  1560,     0,     0,
       0,     0,     0,     0,     0,  1851,     0,     0,     0,     0,
    1961,     0,  1435,   397,   398,     0,  1435,     0,     0,   399,
     400,     0,   401,    18,   402,   403,     0,   214,   404,     0,
       0,  1852,     0,   436,     0,     0,     0,     0,     0,     0,
       0,     0,  1853,     0,     0,     0,     0,     0,   473,     0,
       0,     0,     0,     0,     0,     0,   410,     0,     0,   429,
       0,     0,     0,     0,   437,  1854,   410,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1155,   410,   410,
       0,     0,     0,  1734,  1735,   410,   410,     0,     0,   384,
       0,     0,     0,     0,   438,     0,     0,  1226,  1855,     0,
       0,     0,     0,     0,     0,     0,     0,  1241,  1752,   408,
    2026,   408,   408,   466,     0,     0,   467,   468,     0,   411,
       0,   411,   399,   400,     0,   401,    18,   402,   403,     0,
       0,   404,     0,     0,     0,     0,     0,     0,     0,   411,
    1779,     0,     0,   469,  1083,  1084,     0,   408,     0,     0,
       0,     0,   408,     0,   410,   411,     0,     0,  1088,     0,
       0,     0,     0,  1856,     0,     0,     0,  1857,     0,  2060,
       0,     0,  2062,     0,  2065,   600,   423,     0,     0,     0,
       0,     0,  1858,     0,     0,     0,     0,     0,     0,   601,
     410,     0,   410,     0,     0,     0,     0,   602,     0,     0,
       0,  1859,     0,     0,   410,     0,     0,     0,     0,     0,
       0,     0,  1860,     0,   430,     0,  1861,  1127,   408,     0,
       0,  2222,     0,  2105,     0,     0,   763,   429,     0,     0,
     431,     0,   603,   604,   408,  1140,     0,     0,     0,     0,
       0,     0,   432,     0,     0,  1378,  1845,  1160,  1162,     0,
       0,   687,     0,     0,     0,     0,     0,     0,   408,  1880,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1435,  1435,  2148,     0,     0,
    1435,     0,  1435,     0,   943,   433,     0,   411,     0,     0,
       0,     0,     0,  1644,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   434,     0,   819,  1228,     0,     0,     0,
       0,     0,   408,   408,     0,     0,  1919,     0,     0,     0,
       0,   408,   408,     0,     0,  1242,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   429,     0,   605,     0,   533,
       0,     0,     0,     0,   435,  1262,  1263,     0,     0,     0,
     450,  1268,     0,     0,   411,     0,   827,     0,     0,     0,
       0,     0,     0,     0,     0,   423,   827,     0,     0,     0,
    1286,   411,     0,  1644,     0,  2208,     0,     0,     0,  2213,
       0,     0,   430,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1971,  1972,  1973,  1974,  1975,     0,   431,     0,
       0,   606,   436,     0,     0,     0,     0,  1320,     0,     0,
     432,     0,  1977,     0,     0,   408,   410,   429,     0,   410,
       0,   411,     0,  1644,  1988,   410,     0,     0,     0,     0,
       0,   944,     0,   437,   410,     0,     0,     0,  1311,     0,
     607,     0,     0,   410,     0,   608,     0,     0,    92,   408,
    1427,   408,     0,   433,     0,   410,   410,     0,     0,     0,
       0,     0,     0,   438,     0,     0,     0,     0,     0,     0,
     609,   434,     0,     0,  1435,  1435,     0,   954,     0,     0,
       0,   958,     0,     0,     0,   397,   398,     0,     0,   610,
     430,   399,   400,     0,   401,    18,   402,   403,   408,   408,
     404,     0,     0,  2044,  2045,     0,   431,     0,   408,     0,
    2048,     0,   435,     0,   410,     0,  1004,     0,   432,     0,
       0,     0,     0,     0,   792,  2055,     0,     0,     0,     0,
    1312,  1313,  1016,   410,     0,     0,     0,     0,  1021,  1022,
       0,     0,     0,     0,     0,     0,   408,   410,     0,     0,
       0,     0,  1026,   410,   410,     0,     0,     0,  1028,   410,
       0,   433, -1296,   687,     0,     0,     0,     0,     0,   408,
     436,  1420,   430,     0,     0,     0,     0,     0,   410,   434,
     738,     0,     0,     0,   408,     0,     0,     0,   431,     0,
    1046,  1047,     0,     0,     0,     0,  2125,  1314,     0,  1055,
     432,   437,   429,     0,     0,     0,  2130,     0,     0,  1457,
       0,     0,     0,     0,     0,   410,     0,     0,     0, -1296,
     435,  1315,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   438,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2147,     0,   433,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   397,   398,     0,     0,     0,     0,   399,
     400,   434,   401,    18,   402,   403,     0,     0,   404,     0,
    1428,     0,     0,     0,     0,     0,     0,     0,   436,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1316,   827,  1526,     0,     0,     0,
     408,     0,   435,   408,     0,     0,  1919,     0,     0,   437,
       0,  2189,  2190,     0,     0,   644,     0, -1296,     0,     0,
       0,     0,     0,  2195,   429,     0,     0,     0,   408,   408,
       0,     0,   408, -1296,     0,     0,     0,     0,   408,   438,
       0,  1849,     0,     0,     0, -1296,   450,     0,     0,   450,
       0,     0,     0,     0,     0,     0,   408,   430,     0,     0,
     436,   397,   398,  2223,  1257,     0,     0,   399,   400,   408,
     401,    18,   402,   403,  1597,  1598,   404,     0,     0,   410,
       0,   410,   410,  1608,  1610,   432,     0,     0, -1296,  1850,
       0,   437,     0,   792,     0,     0,     0,   450,   792,     0,
       0,     0,     0,     0,   497,     0, -1296,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   410,     0,     0,
       0,   438,   410,     0,     0,  1309,     0,     0,   433,  1321,
       0,  1323,     0,  1329,  1330,  1331,     0,     0,     0,     0,
       0,     0,     0,   397,   398,     0,   434, -1296,     0,   399,
     400,     0,   401,    18,   402,   403,     0,  1354,   404,     0,
    1358,     0,  1361,  1362,     0,  1851,  1004,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   430,
       0,     0,     0,     0,     0,     0,   429,   435,   410,     0,
       0,  1852,     0,     0,   408,   431,   408,     0,     0,     0,
       0,     0,  1853,     0,   410, -1296,     0,   432,     0,     0,
    -588,   219,     0,   220,   408,   221,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1854,     0,   222,   410,     0,
     408,     0,     0,     0,     0,     0, -1296,     0,     0,   740,
    1549,     0,     0,   150,     0,   436, -1296,     0,     0,     0,
     433,     0,     0,   223,  2014,     0,     0,   224,  1855,     0,
     419,   419,     0,     0,     0,     0, -1296,   225,   434,     0,
       0,     0,     0,     0,     0,     0,   437,     0,     0,     0,
       0,     0,   410,   410,     0,     0,     0,   226, -1296, -1296,
       0,   410,   410,   227, -1296, -1296,     0, -1296,     0, -1296,
   -1296,     0,     0, -1296,     0,     0,   438,     0,     0,   435,
       0,     0,     0,     0,     0,   228,     0,     0,     0,     0,
       0,   429,   229,  1856,     0,   230,     0,  1857,   397,   398,
       0,  1798,     0,  -588,   399,   400,     0,   401,    18,   402,
     403,   430,  1858,   404,  -588,     0,  1610,     0,     0,  -588,
       0,     0,     0,     0,     0,     0,     0,   431,     0,   231,
       0,  1859,   408,     0,     0,     0,     0,   436,   232,   432,
     233,     0,  1860,     0,     0,     0,  1861,     0,   150,     0,
       0,     0,     0,     0,     0,   410,     0,     0,     0,     0,
       0,  -588,   234,     0,     0,   235,   236,     0,   437,     0,
       0,     0,     0,  -588,   237,     0,     0,     0,     0,     0,
     238,     0,   433,   239,     0,     0,   240,     0,     0,   410,
       0,   410,     0,     0,     0,     0,     0,     0,   438,   408,
     434,     0,     0,     0, -1314, -1314, -1314,     0,     0,  1428,
       0,     0, -1314,     0,     0,     0,   408,     0,     0,   241,
     397,   398,     0,   242,  2211,   243,   399,   400,     0,   401,
      18,   402,   403,     0,     0,   404,     0,     0,   410,   410,
       0,   435,     0,     0,     0,   244,   430,     0,   410,     0,
       0,     0,     0,     0,  1593,     0,     0,   245,   246,     0,
     763,   763,   431,     0,   419,     0,   408,     0,     0,     0,
     430,     0,     0,   247,   432,     0,     0,   248,     0,     0,
       0,     0,     0,     0,     0,     0,   410,   249,   419,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   432,   436,
       0,     0,   250,     0,     0,     0,   251,     0,     0,   410,
       0,     0,     0,     0,     0,   252,     0,   433,     0,   942,
       0,     0,     0,     0,   410,   253,     0,     0,   254,     0,
     437,     0,     0,     0,     0,   434,     0,   255,     0,     0,
       0,   433,   256,   257,   258,     0,     0, -1314, -1314,     0,
       0,     0,   259,     0,     0,     0,     0,     0,     0,   434,
     438,     0,     0,     0,     0,     0,     0,   260,     0,   261,
       0,     0,     0,     0,     0,     0,   435,   262,     0,     0,
   -1314,     0,   397,   398,     0,     0,   263,     0,   399,   400,
       0,   401,    18,   402,   403,     0,     0,   404,     0,     0,
     435,     0,     0,     0,     0, -1314,     0,     0,     0,     0,
       0,     0,     0,     0, -1314,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   264,  2030,     0,  2032,     0,
       0,     0,     0,     0,   436,     0,     0,     0,     0,     0,
     410,     0,     0,   410, -1314,     0,   763,     0,     0, -1314,
       0,     0,     0,  1739,     0,     0,     0,     0,   436,     0,
   -1314,     0,   763,     0,     0,   437,     0,     0,   410,   410,
       0,     0,   410,     0,     0,     0,     0,     0,   410,     0,
       0,     0,     0,     0,     0,  1767,     0,     0,     0,   437,
       0,     0,     0,     0,     0,   438,   410,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   410,
       0,     0,     0,     0,     0,     0,     0,   397,   398,   438,
       0,     0,     0,   399,   400,     0,   401,    18,   402,   403,
       0,     0,   404,     0,     0,     0,     0,     0,     0,     0,
       0,   397,   398,     0,     0,     0,     0,   399,   400,     0,
     401,     0,   402,   403,     0,     0,   404,     0,     0,     0,
       0,  1809,  1810,  1811,  1812,  1813,     0,     0,     0,  -629,
     219,     0,   220,     0,   221,     0,  1829,     0,     0,     0,
       0,     0,     0,     0,     0,   429,   222,     0,     0,     0,
       0,     0,     0,     0,  2151,     0,  1841,     0,     0,     0,
   -1314, -1314, -1314, -1314, -1314, -1314,     0,     0,     0,     0,
       0,     0,   223,     0,  1877,     0,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0, -1314, -1314,
   -1314,     0, -1314, -1314,   410,     0,   410,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   226,     0,     0,     0,
       0,     0,   227,     0,   410,     0,     0,     0,     0,     0,
       0,  2194,     0,     0,     0,     0,     0,     0,     0,     0,
     410,     0,     0,     0,   228,     0,     0,     0,   419,     0,
       0,   229,     0,     0,   230,     0,   419,     0,     0,     0,
       0,  -629,  -629,  -629,  -629,  -629,     0,     0,  -629,  -629,
       0,  -629,  -629,  -629,  -629,  -629,     0,  -629,  -629,  -629,
    -629,  -629,  -629,  -629,  -629,  -629,  -629,  -629,   231,     0,
       0,     0,     0,     0,   430,     0,     0,   232,   763,   233,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     430,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -629,   234,   432,     0,   235,   236,   431,     0,     0,     0,
       0,     0,  -629,   237,     0,     0,     0,     0,   432,   238,
       0,     0,   239,     0,     0,   240,     0,     0,     0,     0,
       0,     0,     0,     0,   894,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   433,     0,     0,     0,  2005,
    2006,  2007,   410,  2011,  2012,  2013,     0,     0,   241,     0,
       0,   433,   242,   434,   243,     0,     0,     0,     0,     0,
    -629,     0,     0,     0,     0,     0,     0,     0,     0,   434,
       0,     0,  -629,     0,   244,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -629,   246,     0,     0,
       0,     0,     0,     0,   435,     0,     0,     0,     0,     0,
       0,     0,   247,     0,     0,     0,   248,     0,  2046,   410,
     435,     0,     0,     0,     0,     0,   249,     0,     0,     0,
       0,     0,  2054,     0,     0,     0,   410,     0,     0,     0,
       0,   250,     0,     0,  2212,   251,     0,     0,     0,     0,
       0,     0,     0,     0,   252,     0,     0,     0,     0,  2071,
       0,     0,   436,     0,   253,     0,     0,   254,     0,     0,
   -1001,   219,     0,   220,     0,   221,   255,     0,   436,     0,
       0,   256,   257,   258,     0,     0,   410,   222,     0,     0,
       0,   259,     0,   437,  2100,     0,     0,  2101,  2102,     0,
       0,     0,     0,     0,     0,     0,   260,     0,   261,   437,
       0,     0,     0,   223,     0,     0,   262,   224,     0,     0,
       0,  -629,     0,   438,     0,   263,     0,   225,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   438,
       0,     0,     0,     0,     0,   397,   398,   226,     0,     0,
       0,   399,   400,   227,   401,     0,   402,   403,     0,     0,
     404,   397,   398,   429,  -629,     0,     0,   399,   400,     0,
     401,    18,   402,   403,     0,   228,   404,     0,     0,     0,
       0,     0,   229,     0,     0,   230,     0,     0,     0,     0,
    2166,     0, -1001, -1001, -1001, -1001, -1001,     0,     0, -1001,
   -1001,     0, -1001, -1001, -1001, -1001, -1001,     0, -1001, -1001,
   -1001, -1001, -1001, -1001, -1001, -1001, -1001, -1001, -1001,   231,
     943,     0,     0,     0,     0,     0,     0,     0,   232,     0,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1065,     0,
       0, -1001,   234,  1066,     0,   235,   236,  1067,     0,     0,
       0,     0,     0, -1001,   237,     0,     0,     0,     0,     0,
     238,     0,     0,   239,     0,     0,   240,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1068,     0,  1069,     0,     0,     0,   241,
       0,  1070,     0,   242,     0,   243,     0,     0,   430,     0,
       0, -1001,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0, -1001,   431,   244,     0,     0,     0,     0,
    1071,     0,     0,     0,     0,     0,   432, -1001,   246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   247,     0,     0,     0,   248,     0,     0,
       0,     0,     0,     0,     0,  1072,     0,   249, -1192,   219,
       0,   220,     0,   221,     0,     0,     0,     0,     0,   433,
       0,     0,   250,     0,     0,   222,   251,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,   434,     0,  1073,
    1074,     0,     0,     0,     0,   253,     0,     0,   254,     0,
       0,   223,     0,     0,     0,   224,     0,   255,     0,     0,
       0,     0,   256,   257,   258,   225,     0,     0,     0,     0,
       0,     0,   259,     0,     0,     0,     0,     0,   435,     0,
       0,  1075,     0,  1076,     0,   226,     0,   260,     0,   261,
    1077,   227,     0,     0,     0,     0,     0,   262,  1078,     0,
       0,   429, -1001,     0,     0,     0,   263,     0,     0,     0,
    1079,     0,     0,   228,     0,     0,     0,     0,     0,     0,
     229,     0,     0,   230,     0,     0,     0,     0,     0,     0,
   -1192, -1192, -1192, -1192, -1192,     0,   436, -1192, -1192,     0,
   -1192, -1192, -1192, -1192, -1192, -1001, -1192, -1192, -1192, -1192,
   -1192, -1192, -1192, -1192, -1192, -1192, -1192,   231,     0,     0,
       0,     0,     0,     0,     0,     0,   232,   437,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1080,     0,     0, -1192,
     234,     0,     0,   235,   236,     0,  1081,   438,     0,     0,
       0, -1192,   237,     0,     0,     0,     0,     0,   238,     0,
       0,   239,     0,     0,   240,     0,     0,     0,     0,   397,
     398,     0,     0,     0,     0,   399,   400,     0,   401,    18,
     402,   403,     0,     0,   404,     0,     0,     0,     0,     0,
       0,  1082,     0,     0,     0,     0,     0,   241,     0,     0,
       0,   242,     0,   243,     0,     0,   430,     0,     0, -1192,
       0,     0,     0,  1083,  1084,     0,     0,     0,     0,     0,
       0, -1192,   431,   244,  1085,  1086,  1087,  1088,     0,     0,
       0,     0,     0,     0,   432, -1192,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   247,     0,     0,     0,   248,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   249, -1003,   219,     0,   220,
       0,   221,     0,     0,     0,     0,     0,   433,     0,     0,
     250,     0,     0,   222,   251,     0,     0,     0,     0,     0,
       0,     0,     0,   252,     0,   434,     0,     0,     0,     0,
       0,     0,     0,   253,  1428,     0,   254,     0,     0,   223,
       0,     0,     0,   224,     0,   255,     0,     0,     0,     0,
     256,   257,   258,   225,     0,     0,     0,     0,     0,     0,
     259,     0,     0,     0,     0,     0,   435,     0,     0,     0,
       0,     0,     0,   226,     0,   260,     0,   261,     0,   227,
       0,     0,     0,     0,     0,   262,     0,     0,     0,   429,
   -1192,     0,     0,     0,   263,     0,     0,     0,     0,     0,
       0,   228,     0,     0,     0,     0,     0,     0,   229,     0,
       0,   230,     0,     0,     0,     0,     0,     0, -1003, -1003,
   -1003, -1003, -1003,     0,   436, -1003, -1003,     0, -1003, -1003,
   -1003, -1003, -1003, -1192, -1003, -1003, -1003, -1003, -1003, -1003,
   -1003, -1003, -1003, -1003, -1003,   231,     0,     0,     0,     0,
       0,     0,     0,     0,   232,   437,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -1003,   234,     0,
       0,   235,   236,     0,     0,   438,     0,     0,     0, -1003,
     237,     0,     0,     0,     0,     0,   238,     0,     0,   239,
       0,     0,   240,     0,     0,     0,     0,   397,   398,     0,
       0,     0,     0,   399,   400,     0,   401,    18,   402,   403,
       0,     0,   404,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   241,     0,     0,     0,   242,
       0,   243,     0,     0,   430,     0,     0, -1003,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -1003,
     431,   244,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   432, -1003,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   247,
       0,     0,     0,   248,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,  -817,   219,     0,   220,     0,   221,
       0,     0,     0,     0,     0,   433,     0,     0,   250,     0,
       0,   222,   251,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,   434,     0,     0,     0,     0,     0,     0,
       0,   253,     0,     0,   254,     0,     0,   223,     0,     0,
       0,   224,     0,   255,     0,     0,     0,     0,   256,   257,
     258,   225,     0,     0,     0,     0,     0,     0,   259,     0,
       0,     0,     0,     0,   435,     0,     0,     0,     0,     0,
       0,   226,     0,   260,     0,   261,     0,   227,     0,     0,
       0,     0,     0,   262,     0,     0,     0,   590, -1003,     0,
       0,     0,   263,     0,     0,     0,     0,     0,     0,   228,
       0,     0,     0,     0,     0,     0,   229,     0,     0,   230,
       0,     0,     0,     0,     0,     0,  -817,  -817,  -817,  -817,
    -817,     0,   436,  -817,  -817,     0,  -817,  -817,  -817,  -817,
    -817, -1003,  -817,  -817,  -817,  -817,  -817,  -817,  -817,  -817,
    -817,  -817,  -817,   231,     0,     0,     0,     0,     0,     0,
       0,     0,   232,   437,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -817,   234,     0,     0,   235,
     236,     0,     0,   438,     0,     0,     0,  -817,   237,     0,
       0,     0,     0,     0,   238,     0,     0,   239,     0,     0,
     240,     0,     0,     0,     0,   397,   398,     0,     0,     0,
       0,   399,   400,     0,   401,    18,   402,   403,     0,     0,
     404,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   241,     0,     0,     0,   242,     0,   243,
       0,     0,   430,     0,     0,  -817,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -817,   431,   244,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     432,  -817,   246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   247,     0,     0,
       0,   248,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,  -735,   219,     0,   220,     0,   221,     0,     0,
       0,     0,     0,   433,     0,     0,   250,     0,     0,   222,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,   434,     0,     0,     0,     0,     0,     0,     0,   253,
       0,     0,   254,     0,     0,   223,     0,     0,     0,   224,
       0,   255,     0,     0,     0,     0,   256,   257,   258,   225,
       0,     0,     0,     0,     0,     0,   259,     0,     0,     0,
       0,     0,   435,     0,     0,     0,     0,     0,     0,   226,
       0,   260,     0,   261,     0,   227,     0,     0,     0,     0,
       0,   262,     0,     0,     0,     0,  -817,     0,     0,     0,
     263,     0,     0,     0,     0,     0,     0,   228,     0,     0,
       0,     0,     0,     0,   229,     0,     0,   230,     0,     0,
       0,     0,     0,     0,  -735,  -735,  -735,  -735,  -735,     0,
     436,  -735,  -735,     0,  -735,  -735,  -735,  -735,  -735,  -817,
    -735,  -735,  -735,  -735,  -735,  -735,  -735,  -735,  -735,  -735,
    -735,   231,     0,     0,     0,     0,     0,     0,     0,     0,
     232,   437,   233,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -735,   234,     0,     0,   235,   236,     0,
       0,   438,     0,     0,     0,  -735,   237,     0,     0,     0,
       0,     0,   238,     0,     0,   239,     0,     0,   240,     0,
       0,     0,     0,   397,   398,     0,     0,     0,     0,   399,
     400,     0,   401,    18,   402,   403,     0,     0,   404,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   241,     0,     0,     0,   242,     0,   243,     0,     0,
       0,     0,     0,  -735,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -735,     0,   244,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -735,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   247,     0,     0,     0,   248,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
    -819,   219,     0,   220,     0,   221,     0,     0,     0,     0,
       0,     0,     0,     0,   250,     0,     0,   222,   251,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   253,   643,   644,
     254,     0,     0,   223,     0,     0,     0,   224,     0,   255,
       0,     0,     0,     0,   256,   257,   258,   225,     0,     0,
       0,     0,     0,     0,   259,     0,     0,     0,     0,     0,
     645,   646,   647,   648,   649,   650,   651,   226,     0,   260,
       0,   261,     0,   227,     0,     0,     0,     0,     0,   262,
       0,     0,     0,     0,  -735,     0,     0,     0,   263,     0,
       0,     0,     0,     0,     0,   228,     0,     0,     0,     0,
       0,     0,   229,   652,     0,   230,     0,     0,     0,     0,
       0,     0,  -819,  -819,  -819,  -819,  -819,     0,     0,  -819,
    -819,     0,  -819,  -819,  -819,  -819,  -819,  -735,  -819,  -819,
    -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,  -819,   231,
       0,     0,     0,     0,     0,     0,     0,     0,   232,     0,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -819,   234,     0,     0,   235,   236,     0,     0,     0,
       0,     0,     0,  -819,   237,     0,     0,     0,   653,     0,
     238,     0,     0,   239,     0,     0,   240,     0,     0,     0,
       0,     0,     0,   654,     0,   655,     0,     0,     0,  -353,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   241,
       0,     0,     0,   242,     0,   243,     0,     0,     0,     0,
       0,  -819,     0,     0,     0,     0,     0,     0,     0,     0,
     656,     0,     0,  -819,     0,   244,     0,     0,     0,     0,
       0,     0,     0,     0,   657,     0,     0,  -819,   246,     0,
       0,     0,   658,     0,   659,     0,     0,     0,     0,     0,
       0,     0,     0,   247,     0,     0,     0,   248,     0,     0,
       0,     0,     0,   660,     0,     0,     0,   249, -1187,   219,
       0,   220,   661,   221,     0,     0,     0,     0,     0,     0,
       0,     0,   250,     0,     0,   222,   251,     0,     0,     0,
       0,     0,     0,     0,     0,   252,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   253,     0,   662,   254,     0,
       0,   223,     0,     0,     0,   224,     0,   255,     0,     0,
       0,     0,   256,   257,   258,   225,     0,   663,     0,     0,
       0,     0,   259,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -353,     0,   226,     0,   260,     0,   261,
       0,   227,     0,     0,     0,     0,   664,   262,     0,     0,
     665,     0,  -819,     0,     0,     0,   263,     0,     0,     0,
       0,     0,     0,   228,     0,     0,     0, -1313, -1313, -1313,
     229,     0,     0,   230,     0, -1313,     0,     0,     0,     0,
   -1187, -1187, -1187, -1187, -1187,     0,     0, -1187, -1187,     0,
   -1187, -1187, -1187, -1187, -1187,  -819, -1187, -1187, -1187, -1187,
   -1187, -1187, -1187, -1187, -1187, -1187, -1187,   231,     0,     0,
       0,     0,     0,     0,     0,     0,   232,     0,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -1187,
     234,     0,     0,   235,   236,     0,     0,     0,     0,     0,
       0, -1187,   237,     0,     0,     0,     0,     0,   238,     0,
       0,   239,     0,     0,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -215,   219,     0,
     220,     0,   221,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   222,     0,     0,   241,     0,     0,
       0,   242,     0,   243,     0,     0,     0,     0,     0, -1187,
   -1313, -1313,     0,     0,     0,     0,     0,     0,     0,     0,
     223, -1187,     0,   244,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225, -1187,   246,     0,     0,     0,
       0,     0,     0, -1313,     0,     0,     0,     0,     0,     0,
       0,   247,     0,     0,   226,   248,     0,     0,     0,     0,
     227,     0,     0,     0,     0,   249,     0,     0, -1313,     0,
       0,     0,     0,     0,     0,     0,     0, -1313,     0,     0,
     250,     0,   228,     0,   251,     0,     0,     0,     0,   229,
       0,     0,   230,   252,     0,     0,     0,     0,     0,     0,
    -215,     0,     0,   253,     0,     0,   254, -1313,     0,     0,
       0,  -215, -1313,     0,     0,   255,  -215,     0,     0,     0,
     256,   257,   258, -1313,     0,     0,   231,     0,     0,     0,
     259,     0,     0,     0,     0,   232,     0,   233,     0,     0,
       0,     0,     0,     0,     0,   260,     0,   261,     0,     0,
       0,     0,     0,     0,     0,   262,     0,     0,  -215,   234,
   -1187,     0,   235,   236,   263,     0,     0,     0,     0,     0,
    -215,   237,     0,     0,     0,     0,     0,   238,     0,     0,
     239,     0,     0,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,   220,
       0,   221,     0, -1187,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   222,     0,     0,   241,     0,     0,     0,
     242,     0,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
       0,     0,   244,   224,   219,     0,   220,     0,   221,     0,
       0,     0,     0,   225,    92,   246,     0,     0,     0,     0,
     222,     0,     0, -1313, -1313, -1313, -1313, -1313, -1313,     0,
     247,     0,     0,   226,   248,     0,     0,     0,     0,   227,
       0,     0,     0,     0,   249,     0,   223,     0,     0,     0,
     224, -1313, -1313, -1313,     0, -1313, -1313,     0,     0,   250,
     225,   228,     0,   251,     0,     0,     0,     0,   229,     0,
       0,   230,   252,     0,     0,     0,     0,     0,     0,   728,
     226,     0,   253,     0,     0,   254,   227,     0,     0,     0,
       0,     0,     0,     0,   255,     0, -1377, -1377, -1377,   256,
     257,   258,     0,     0, -1377,   231,     0,     0,   228,   259,
       0,     0,     0,     0,   232,   229,   233,     0,   230,     0,
       0,     0,     0,     0,   260,     0,   261,     0,     0,     0,
       0,     0,     0,     0,   262,     0,     0,     0,   234,     0,
       0,   235,   236,   263,     0,     0,     0,     0,     0,     0,
     237,     0,   231,     0,     0,     0,   238,     0,     0,   239,
       0,   232,   240,   233,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -215,     0,     0,   234,     0,     0,   235,   236,
       0,     0,     0,  -215,  -215,   241,     0,   237,     0,   242,
       0,   243,     0,   238,     0,     0,   239,     0,     0,   240,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   244,   696,     0,   697,   698,   699,     0,     0,   700,
       0,   701,   702,   245,   246,     0,     0,     0,     0, -1377,
   -1377,     0,   241,     0,     0,     0,   242,     0,   243,   247,
       0,     0,     0,   248,     0,     0,     0,   703,     0,     0,
       0,  -215,     0,   249,     0,     0,     0,     0,   244,     0,
       0,     0, -1377,     0,     0,     0,     0,     0,   250,     0,
     245,   246,   251,     0,     0,     0,     0,     0,     0,     0,
       0,   252,     0,     0,     0,     0,   247, -1377,     0,     0,
     248,   253,     0,     0,   254,     0, -1377,     0,     0,     0,
     249,     0,     0,   255,     0,     0,  -215,     0,   256,   257,
     258,     0,     0,     0,     0,   250,     0,  -215,   259,   251,
       0,     0,  -215,     0,     0,     0, -1377,     0,   252,     0,
       0, -1377,     0,   260,     0,   261,     0,     0,   253,   704,
       0,   254, -1377,   262,     0,  -327,  -327,  -327,     0,  -215,
     255,     0,   263, -1336,     0,   256,   257,   258,     0,   705,
     706,     0,   707,     0,  -215,   259,     0,     0,     0,     0,
       0,     0,     0,     0,   708,     0,  -215,     0,     0,     0,
     260,     0,   261,  -327,  -327,  -327,     0,     0,     0,     0,
     262,   264,     0,     0,     0,  -353,     0,     0,     0,   263,
       0,  -353,     0,     0,     0,     0,     0,     0,   709,     0,
    -215,     0,     0,     0,  -215,     0,     0,   710,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   711,     0,     0,     0,     0,     0,   264,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,     0,     0,     0,   658,     0,     0,     0,     0,     0,
     696,  -215,   697,   698,   699,     0,     0,   700,     0,   701,
     702,     0, -1377, -1377, -1377, -1377, -1377, -1377,  -327,  -327,
       0,     0,     0,     0,     0,     0,  -215,     0,     0,     0,
     712,     0,     0,     0,     0,   703,     0,   713,     0,     0,
   -1377, -1377, -1377,     0, -1377, -1377,  -215,     0,     0,     0,
     714,  -327,     0,     0,     0,     0,  -327,  -327,     0,   662,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   213,     0,     0,     0,
       0,     0,     0,     0,   219,  -327,   220,     0,   221,  -327,
       0,     0,     0,     0,     0,  -353,     0,     0,   715,     0,
     222,     0,     0,     0,     0,     0,     0,     0,   716,     0,
       0,     0,   717,     0,   213,  -327,     0,     0,  -215,     0,
    -327,     0,     0,  -327,     0,     0,   223,   704,   718,     0,
     224, -1336,     0,     0,     0,     0,     0,     0,     0,   719,
     225,     0,     0,     0,     0,     0,     0,   705,   706,     0,
     707,     0,     0,  -327,  -215,     0,     0,     0,  -327,     0,
     226,     0,   708,     0,     0,     0,   227,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -353,     0,     0,     0,     0,   228,  -353,
       0,     0,     0,     0,     0,   229,   709,     0,   230,     0,
       0,     0,     0,     0,     0,   710,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     711,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   231,     0,     0,     0,     0,     0,     0,     0,
       0,   232,     0,   233,     0,     0,     0,     0,     0,     0,
       0,     0,   658,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   234,     0,     0,   235,   236,
       0,  -327,  -327,  -327,  -327,  -327,  -327,   237,     0,     0,
       0,     0,     0,   238,     0,     0,   239,     0,   712,   240,
       0,     0,     0,     0,     0,   713,     0,     0,     0,   822,
     823,   824,     0,   825,   826,     0,     0,     0,   714,  -327,
    -327,  -327,  -327,  -327,  -327,     0,   219,   662,   220,     0,
     221,     0,   241,     0,     0,     0,   242,     0,   243,     0,
       0,   835,   222,     0,     0,     0,     0,   822,   823,   824,
       0,   825,   826,     0,     0,     0,     0,     0,   244,     0,
       0,     0,     0,  -353,     0,     0,   715,     0,   223,     0,
       0,   246,   224,     0,     0,     0,   716,     0,     0,     0,
     717,     0,   225,     0,     0,     0,   247,     0,     0,     0,
     248,     0,     0,     0,     0,     0,   718,     0,     0,     0,
     249,     0,   226,     0,     0,     0,     0,   719,   227,     0,
       0,     0,     0,     0,     0,   250,     0,     0,     0,   251,
       0,     0,     0,     0,     0,     0,     0,     0,   252,     0,
     228,     0,     0,     0,     0,     0,     0,   229,   253,     0,
     230,   254,     0,     0,     0,     0,     0,     0,     0,     0,
     255,     0,     0,     0,     0,   256,   257,   258,  -756,     0,
       0,     0,     0,     0,     0,   259,     0,     0,   836,     0,
       0,     0,     0,     0,   231,     0,     0,     0,     0,     0,
     260,     0,   261,   232,     0,   233,     0,     0,     0,     0,
     262,     0,     0,     0,     0,     0,     0,     0,     0,   263,
     219,     0,   220,     0,   221,     0,     0,   234,     0,     0,
     235,   236,     0,     0,     0,     0,   222,     0,     0,   237,
       0,     0,     0,     0,     0,   238,     0,     0,   239,     0,
       0,   240,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   223,     0,     0,     0,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     0,     0,   241,     0,     0,     0,   242,     0,
     243,     0,     0,     0,     0,     0,   226,     0,     0,     0,
       0,     0,   227,     0,     0,     0,     0,     0,     0,     0,
     244,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   246,   228,     0,     0,     0,     0,     0,
       0,   229,     0,     0,   230,     0,     0,     0,   247,     0,
       0,     0,   248,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,     0,     0,     0,     0,  -907,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   231,     0,
       0,   251,     0,     0,     0,     0,     0,   232,     0,   233,
     252,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     253,     0,     0,   254,   219,     0,   220,     0,   221,     0,
       0,   234,   255,     0,   235,   236,     0,   256,   257,   258,
     222,     0,     0,   237,     0,     0,     0,   259,     0,   238,
       0,     0,   239,     0,     0,   240,     0,     0,     0,     0,
       0,     0,   260,     0,   261,     0,   223,     0,     0,     0,
     224,     0,   262,     0,     0,     0,     0,  -756,     0,     0,
     225,   263,     0,     0,     0,     0,     0,     0,   241,     0,
       0,     0,   242,     0,   243,     0,     0,     0,     0,     0,
     226,     0,     0,     0,     0,     0,   227,     0,     0,     0,
       0,     0,     0,     0,   244,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   246,   228,     0,
       0,     0,     0,     0,     0,   229,     0,     0,   230,     0,
       0,     0,   247,     0,     0,     0,   248,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,   231,     0,     0,   251,     0,     0,     0,     0,
       0,   232,     0,   233,   252,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   253,     0,     0,   254,   219,     0,
     220,     0,   221,     0,     0,   234,   255,     0,   235,   236,
       0,   256,   257,   258,   222,     0,     0,   237,     0,     0,
       0,   259,     0,   238,     0,     0,   239,     0,     0,   240,
       0,     0,     0,     0,     0,     0,   260,     0,   261,     0,
     223,     0,     0,     0,   224,     0,   262,     0,     0,     0,
       0,     0,     0,     0,   225,   263,     0,     0,     0,     0,
       0,     0,   241,     0,     0,     0,   242,     0,   243,     0,
       0,   835,     0,     0,   226,     0,     0,     0,     0,     0,
     227,     0,     0,     0,     0,     0,     0,     0,   244,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,   228,     0,     0,     0,     0,     0,     0,   229,
       0,     0,   230,     0,     0,     0,   247,     0,     0,     0,
     248,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     249,     0,     0,     0,     0,  -908,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   250,   231,     0,     0,   251,
       0,     0,     0,     0,     0,   232,     0,   233,   252,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   253,     0,
       0,   254,   219,     0,   220,     0,   221,     0,     0,   234,
     255,     0,   235,   236,     0,   256,   257,   258,   222,     0,
       0,   237,     0,     0,     0,   259,     0,   238,     0,     0,
     239,     0,     0,   240,     0,     0,     0,     0,     0,     0,
     260,     0,   261,     0,   223,     0,     0,     0,   224,     0,
     262,     0,     0,     0,     0,     0,     0,     0,   225,   263,
       0,     0,     0,     0,     0,     0,   241,     0,     0,     0,
     242,     0,   243,     0,     0,     0,     0,     0,   226,     0,
       0,     0,     0,     0,   227,     0,     0,     0,     0,     0,
       0,     0,   244,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   246,   228,     0,     0,     0,
       0,     0,     0,   229,     0,     0,   230,     0,     0,     0,
     247,     0,     0,     0,   248,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   249,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
     231,     0,     0,   251,     0,     0,     0,     0,     0,   232,
       0,   233,   252,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   253,     0,     0,   254,   219,     0,   220,     0,
     221,     0,     0,   234,   255,     0,   235,   236,     0,   256,
     257,   258,   222,     0,     0,   237,     0,     0,     0,   259,
       0,   238,     0,     0,   239,     0,     0,   240,     0,     0,
       0,     0,     0,     0,   260,     0,   261,     0,   223,     0,
       0,     0,   224,     0,   262,     0,     0,     0,     0,     0,
       0,     0,   225,   263,     0,     0,     0,     0,     0,     0,
     241,     0,     0,     0,   242,     0,   243,     0,     0,     0,
       0,     0,   226,     0,     0,     0,     0,     0,   227,     0,
       0,     0,     0,     0,     0,     0,   244,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   246,
     228,     0,     0,     0,     0,     0,     0,   229,     0,     0,
     230,     0,     0,     0,   247,     0,     0,     0,   248,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   250,   231,     0,     0,   251,     0,     0,
       0,     0,     0,   232,     0,   233,   252,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   253,     0,     0,   254,
       0,     0,     0,     0,     0,     0,     0,   234,   255,     0,
     235,   236,     0,   256,   257,   258,     0,     0,     0,   237,
       0,     0,     0,   259,     0,   238,     0,     0,   239,     0,
       0,   240,     0,     0,     0,   219,     0,   220,   260,   221,
     261,     0,     0,     0,     0,     0,     0,     0,   262,     0,
       0,   222,     0,  -729,     0,     0,     0,   263,     0,     0,
       0,     0,     0,     0,   241,     0,     0,     0,   242,     0,
     243,     0,     0,  1934,     0,     0,     0,   223,     0,     0,
       0,   224,   219,     0,   220,     0,   221,     0,     0,     0,
     244,   225,     0,     0,     0,     0,     0,     0,   222,     0,
       0,     0,     0,   246,     0,     0,     0,     0,     0,     0,
       0,   226,     0,     0,     0,     0,     0,   227,   247,     0,
       0,     0,   248,     0,   223,     0,     0,     0,   224,     0,
       0,     0,   249,     0,     0,     0,     0,     0,   225,   228,
       0,     0,     0,     0,     0,     0,   229,   250,     0,   230,
       0,   251,     0,     0,     0,     0,     0,     0,   226,     0,
     252,     0,     0,     0,   227,     0,     0,  -773,     0,     0,
     253,     0,     0,   254,     0,     0,     0,     0,     0,     0,
       0,     0,   255,   231,     0,     0,   228,   256,   257,   258,
       0,     0,   232,   229,   233,     0,   230,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   260,     0,   261,     0,   234,     0,     0,   235,
     236,     0,   262,     0,     0,     0,     0,     0,   237,     0,
     231,   263,     0,     0,   238,     0,     0,   239,     0,   232,
     240,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   234,     0,     0,   235,   236,     0,     0,
       0,     0,     0,   241,     0,   237,     0,   242,     0,   243,
       0,   238,     0,     0,   239,     0,     0,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   244,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,     0,     0,     0,     0,     0,     0,     0,
     241,     0,     0,     0,   242,     0,   243,   247,     0,     0,
       0,   248,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   249,     0,     0,     0,     0,   244,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,     0,     0,   246,
     251,     0,     0,     0,     0,     0,     0,     0,     0,   252,
       0,     0,     0,     0,   247,     0,     0,     0,   248,   253,
       0,     0,   254,     0,     0,     0,     0,     0,   249,     0,
       0,   255,     0,     0,     0,     0,   256,   257,   258,     0,
       0,     0,     0,   250,     0,     0,   259,   251,     0,     0,
       0,     0,     0,     0,     0,     0,   252,     0,     0,     0,
       0,   260,     0,   261,     0,     0,   253,     0,     0,   254,
       0,   262,     0,     0,     0,     0,     0,     0,   255,     0,
     263,     0,     0,   256,   257,   258,     0,     0,     0,     0,
       0,     0,     0,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   260,     0,
     261,     0,     0,     0,     0,     0,     0,     0,   262,     0,
       0,     0,     0,     0,     0,     0,     0,   263
};

static const yytype_int16 yycheck[] =
{
      11,   158,   108,   229,   602,   429,  1161,   146,   232,   237,
     228,   224,   405,   246,   196,   778,   155,   144,   131,   201,
     147,   819,   820,   241,  1357,   238,   743,   209,    39,   463,
     248,   424,   250,   234,   226,   300,   254,   255,   239,   270,
      51,   482,   260,   805,   806,   258,  1635,     9,    19,   102,
    1433,   492,   105,     9,   160,    21,  1645,    66,   259,    66,
      90,   218,   531,    20,    27,    16,    27,    55,   207,   421,
     380,   836,  1227,   108,   108,    55,    87,    20,    90,  1226,
     890,  1753,   742,     1,   170,  1376,   380,     9,  1793,    11,
      12,    13,    28,    19,   157,     0,     1,   166,     1,   154,
     155,   159,  1224,   204,   157,   116,    37,   246,   265,    53,
     162,  1668,  1267,   876,   210,    40,  1558,    64,   174,     9,
     174,   348,   216,   123,   204,  1960,     0,     1,   108,   249,
      67,     6,   229,   165,  1415,    27,    61,  1429,    69,    70,
      71,    72,    73,    74,    75,   247,   183,   107,   467,   468,
     183,    79,   204,   205,   183,   321,   347,   219,   210,   244,
     263,    97,    98,    68,   175,    55,   590,    11,    12,    13,
      95,   238,    17,  2040,   244,    55,   187,    95,  1548,   190,
     191,   112,   167,   285,   403,   304,   849,     8,   180,   289,
       0,   202,   277,   108,    68,     5,     8,   388,   178,   196,
     437,   183,   439,   440,  1904,   305,  1906,   164,    37,   428,
     277,   222,   425,    34,    89,   178,   134,   270,   123,   271,
     231,   164,    34,   234,   291,   888,   211,   277,   239,   134,
     387,   134,    82,     6,   139,   246,    64,   152,   163,   167,
      62,   212,   164,   467,   468,   160,    91,   332,   259,   123,
      11,    12,    13,   481,   242,   215,   489,   481,   180,   184,
     134,   166,   332,   260,   201,   139,   197,   329,   119,  1424,
     192,   207,   339,  1420,  2141,  2142,   181,   205,   225,   445,
     399,     1,   172,   211,     8,   277,   323,   212,   193,   271,
     212,   216,   166,   346,   251,   358,   267,   330,  1631,   224,
     403,   330,   334,    27,  1637,  1638,  1863,   181,   251,    42,
      34,   413,   418,   235,  2149,   421,  1699,   370,   398,   193,
      53,   441,   227,   215,     4,   247,   231,   270,   218,   251,
      42,   253,    30,    66,   256,   166,   178,   284,    18,  1781,
     446,   267,   273,   440,   117,   220,    26,   403,   505,   403,
     451,   445,   283,   227,    66,   451,   411,   231,   358,   445,
     587,  2066,  1172,   285,     6,   758,   424,   506,   507,   198,
     288,  1662,   294,   309,   299,   386,   445,  2049,  1188,   323,
     821,    61,    62,   288,   393,   288,   827,   493,   313,   452,
     315,   164,  1514,   445,  1419,   458,   225,   460,   378,  1680,
       6,   412,   338,   123,   416,  1697,  1553,  1169,   313,   421,
     445,   445,   256,   723,   288,  1785,   404,   886,   770,   139,
     300,   639,   640,   386,    66,   376,   383,   746,   333,   723,
     352,   461,  1197,  2133,  2134,   541,   445,   543,   445,   313,
     383,   263,   403,   582,   295,   584,   457,   220,  1108,   890,
    1110,   212,   452,   196,   304,     1,   284,   457,   458,   333,
      66,   383,   433,   161,   435,   436,   437,   430,   439,   440,
     196,   610,   303,   193,   399,  1808,   271,   306,   489,   445,
     253,   800,     6,   445,   263,   209,   166,     1,   261,   445,
     263,   413,   463,   344,  2083,   256,   175,   183,  1261,    42,
     405,     0,     1,   822,   823,   824,   825,   826,  1891,  1892,
     432,   218,   277,   435,   436,   344,    26,   260,     1,   441,
     442,   574,   444,   445,   446,   447,     1,   196,   450,   265,
       6,   405,  1687,     9,   260,   674,   378,  1135,  1136,   237,
     462,   183,    66,   596,   277,   248,     6,     0,     1,    95,
     230,  1706,    24,   429,  1709,   386,   398,  1712,   611,   163,
     435,   436,    81,   755,    29,   277,   441,   442,   288,   444,
     445,   446,   447,   152,   153,   450,   800,   123,   220,   282,
     184,   805,   806,   238,     9,   282,    11,    12,    13,   269,
     323,   260,  1747,   139,   274,   303,    95,   862,   822,   823,
     824,   825,   826,   795,   225,   378,    66,   838,   118,   123,
     383,   323,  1210,   666,   220,   299,   300,  1415,   391,   299,
    1775,   263,    24,  1778,   123,   139,    11,    12,    13,   397,
     398,   299,     6,   864,   377,   868,   291,   109,   318,   104,
     139,   869,   116,   861,   330,  2077,   277,   193,   123,   660,
     661,   387,    10,     6,   222,   223,   451,   263,  1683,  1684,
    1685,   853,   435,   436,   139,   208,   445,   773,   441,   442,
     723,   444,   445,   446,   447,   382,   441,   450,   386,   193,
     348,   349,   181,   172,   339,   411,   150,   308,   164,   432,
    1114,   101,    66,   212,   193,   403,   220,    55,   181,   467,
     468,   814,   308,  1465,   180,   432,   898,   109,   163,   209,
     193,   390,   333,     0,   590,   251,   192,   251,   193,   462,
    1437,    35,   401,   445,   403,  2157,   215,  1120,   181,   184,
     266,  1172,   238,   744,   745,   462,   173,  1171,   441,   164,
     193,     6,   288,   215,   220,   154,   155,  1188,   445,   277,
     968,   251,   189,   971,   333,   180,   173,   204,   915,   235,
     220,  1849,   441,   210,   174,  1853,   445,   192,  1161,   248,
     116,   277,   189,  2106,   184,  2207,   433,   253,   187,   172,
       9,   402,    11,    12,    13,   291,     9,   212,    11,   288,
     445,    14,    15,   435,   436,  1114,   299,   300,   230,   441,
     442,    66,   444,   445,   446,   447,   463,   286,   450,   123,
     235,   164,   221,  1576,   445,   446,   447,   249,   294,  1138,
     299,   832,   247,   230,   217,    25,   251,   212,   253,   435,
     436,   256,   116,   339,  1227,   441,   442,   173,   444,   445,
     446,   447,   249,   157,   450,   159,   220,   292,   975,   230,
      91,   238,   390,   189,   378,     0,     1,   868,   251,   277,
     285,   102,    60,   401,   277,   971,   251,   220,   249,   294,
     330,   256,  1191,    96,  1267,  2030,   352,  2032,   931,   932,
     933,   934,   935,   936,   937,   229,    84,    85,  1686,   263,
     277,  1124,   116,  1032,   441,  1034,    50,    51,   445,   162,
     253,   435,   436,   437,   291,   439,   440,   383,   261,   277,
     263,   435,   436,   178,  1138,   976,    39,   441,   442,   980,
     444,   445,   446,   447,   152,   153,   450,   352,    51,  1121,
      84,   134,  2020,  2021,   308,   164,    33,   413,   991,    36,
     993,   204,   205,   152,   153,  1169,   100,   210,   445,   446,
     447,   180,   339,   225,   226,   220,   110,   336,   383,   435,
     436,   225,   226,   192,    87,   441,   442,  1191,   444,   445,
     446,   447,    22,    23,   450,   435,   436,   277,   123,   299,
     300,   441,   442,   212,   444,   445,   446,   447,   413,   277,
     450,  1415,   277,   116,   139,  1419,  2044,  2045,   407,   408,
     409,   410,   411,   412,  1057,   336,   235,   432,   271,   277,
     435,   436,  1230,   336,   212,     6,   441,   442,   277,   444,
     445,   446,   447,   398,   253,   450,   277,   256,  1692,  1693,
     383,  1424,   277,   256,   257,    60,   181,   462,   277,     9,
     277,    11,    12,    13,   433,   434,   435,   436,   193,     0,
       1,  1282,    42,  1166,   434,   435,   436,   336,  1289,    84,
      85,   435,   436,  1176,   277,   294,   336,   441,   442,   336,
     444,   445,   446,   447,   463,    66,   450,   275,   336,   277,
    1946,  1947,   435,   436,   336,    53,     0,     1,   441,   442,
     336,   444,   445,   446,   447,   291,  1415,   450,   441,   442,
    1419,   444,   276,  1114,   278,   277,   220,   221,   301,   258,
     224,   225,   226,  1124,   228,   229,   230,   291,  1224,  1337,
     340,   275,   277,   352,   238,   279,   280,   241,   103,   243,
     277,   277,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   288,   258,     6,   260,   261,   277,   263,
     277,  1470,   323,  1472,   383,   277,   251,   277,     6,   313,
    1361,  1362,   336,   212,  1346,   154,   155,   316,   350,   277,
     435,   436,   123,   327,   328,   277,   441,   442,   277,   444,
     445,   446,   447,   277,   413,   450,   166,   212,   139,    97,
     827,   828,    48,   441,   164,  1334,   296,   212,   187,   347,
     277,   445,   351,   432,   353,   445,   435,   436,   180,   123,
     180,   266,   441,   442,  1353,   444,   445,   446,   447,  1358,
    1359,   450,   192,   212,   368,   139,    22,   266,   291,   220,
     181,  1370,   221,   462,   277,   378,  2034,  1364,   161,  1292,
    1397,  1465,   193,   277,   336,   125,  1470,  1386,  1472,   277,
     275,   159,   277,   277,     6,   277,  1680,   277,   277,  1683,
    1684,  1685,   251,   277,   347,   235,  1458,   181,  1460,    62,
    1376,   453,   454,   455,   456,   389,   212,   459,   403,   193,
     212,   395,   346,   253,    81,   174,   256,   174,   330,   260,
     378,   405,  1510,  1346,  1507,  1508,   931,   130,   933,   934,
     935,   936,   937,   417,   418,   299,  1534,   421,  1536,  1415,
     424,   425,  1365,   393,    66,    93,  1709,   431,   403,  1712,
    1331,   251,   367,  1429,   294,  1517,   440,  1433,   263,   443,
     378,   435,   436,   437,  1447,   439,   440,    42,   433,   377,
     435,   436,   437,  1354,   439,   440,  1357,   373,   377,   376,
    1361,  1362,   178,  1466,  1747,   178,   143,   401,   106,   220,
     101,  1680,  1373,  1555,  1683,  1684,  1685,   433,   463,   435,
     436,   437,   220,   439,   440,   299,  1533,  1388,   299,   493,
     403,   215,   352,     7,   148,  1778,   576,   577,   578,   579,
     580,   251,   506,   507,    27,   343,   212,   463,   101,    66,
     241,   299,   343,  1722,  1415,   519,   358,    54,  1419,   241,
      18,   441,   403,   383,   275,   529,   402,   531,   407,   408,
     409,   410,   411,   412,   441,  1582,   329,    21,   542,   543,
     441,   441,   441,   184,   277,   171,   191,  2035,  2036,   112,
     103,   124,  1673,   413,   435,   436,   386,    27,   225,    90,
     441,   442,  1558,   444,   445,   446,   447,   263,   378,   450,
     183,   290,   432,   209,   398,   435,   436,    27,   220,    16,
     403,   441,   442,  1655,   444,   445,   446,   447,   437,   341,
     450,   170,   229,   331,   402,   232,   378,   122,   312,   138,
     138,   208,   462,   240,    27,   242,    42,    42,  1722,   299,
      42,   403,   178,    42,   208,   263,   314,   354,   416,   417,
     257,   263,   420,   421,   422,   423,   424,   378,   277,   209,
     208,   429,  1740,   431,   137,   639,   640,  1758,  1741,   251,
     212,   241,   445,   277,  1640,   215,    18,   445,   212,   284,
      81,  1767,   260,  1700,   300,     6,   413,   378,   449,   376,
     212,    21,  1765,   225,   413,   212,    54,  1714,   416,   254,
     358,  1718,   419,   418,   215,   378,   263,   310,  1799,  1800,
     249,   310,   249,     6,   435,   436,   325,   183,   249,   263,
     441,   442,  1593,   444,   445,   446,   447,   435,   436,   450,
     212,   376,   402,   441,   442,   135,   444,   445,   446,   447,
    1713,   375,   450,   174,  1761,    66,   353,    87,   215,   343,
     398,   330,     8,   178,    27,   142,   123,   118,   402,   402,
    1631,    62,   215,   428,   403,   739,  1637,  1638,     9,  1640,
     230,  1737,  1738,    66,  1740,   749,   750,   225,   752,   215,
      27,   755,   445,   277,   758,   277,   344,   215,   344,   215,
     764,   460,   204,     6,   210,   212,   770,   220,  1889,   773,
      21,   401,   377,   376,   342,   254,    40,  1898,   782,  1680,
     254,   272,  1683,  1684,  1685,  1814,   212,  1908,   347,  1910,
     794,   795,   251,   435,   436,   325,   325,   251,     7,   441,
     442,    40,   444,   445,   446,   447,   132,   312,   450,   446,
      16,   133,  1930,   123,  1935,   375,   374,     9,  1847,    11,
      12,    13,   399,    66,   136,   141,   251,   196,   403,   268,
     144,  1827,   283,   146,   107,  1831,  1832,   212,   140,   367,
     844,   137,   306,   288,   481,   259,   220,   198,   403,   853,
     215,     6,  1960,   403,   403,   354,   215,   861,   403,   196,
     497,   108,   189,    54,   251,    64,   157,   263,   872,   220,
     263,   323,   126,   263,   378,   198,   880,    42,   267,   288,
      42,   267,   886,   378,  1931,   325,    27,    19,   892,   893,
     894,   268,   145,   288,   898,  1891,  1892,   220,   347,   267,
      90,     6,   539,   196,   541,   260,   432,  1808,  1911,   435,
     436,   196,   216,   917,   263,   441,   442,   554,   444,   445,
     446,   447,     6,   215,   450,   230,  1827,  1923,   173,   230,
    1831,  1832,   118,  1834,    89,     6,   462,   277,   226,    55,
     347,   172,   263,  1939,   199,  1941,   329,   188,   263,   347,
     954,   129,   272,   154,   591,   198,   254,  1858,   154,    95,
     104,    66,   123,   341,   968,   147,   196,   971,   248,   288,
     198,    27,   164,   263,  1970,    27,  1877,   220,   226,   263,
    2027,   198,   215,   110,   449,   217,   112,  2016,   180,   157,
     201,    42,   221,   275,   244,   224,   390,   226,    42,   380,
     192,   230,   445,     9,   445,    27,   263,    42,   110,   238,
    2131,  2132,  2008,   198,   243,   173,   282,   342,   376,   263,
     212,    41,    55,    42,   253,    54,  2144,   256,   263,   258,
     445,     5,   248,   275,   165,   275,    42,   326,    43,   334,
     323,  2149,   125,   235,   355,   137,   683,  2163,  2077,  1510,
    2166,  1055,   361,  2082,   132,   611,  1060,   968,  1319,   251,
      66,   253,  2073,  1593,   256,   220,   347,  2188,  2097,  1970,
    2154,  2100,  1803,  2102,    73,   193,   191,  1650,  2085,  1021,
    2127,   206,   636,   667,   435,   436,   992,  1993,  1989,   726,
     441,   442,  2006,   444,   445,   446,   447,  2094,  2214,   450,
     188,   976,   294,   740,  1350,  1344,  1992,  2008,  2009,   980,
     207,   204,   435,   436,  1118,   220,  1120,  1121,   441,   442,
    1386,   444,   445,   446,   447,   723,  1863,   450,  2157,  1037,
    2187,   113,  2009,   218,  2123,  1914,   220,   846,   689,  2168,
    2169,   674,   843,  1495,  2173,  1214,  2175,  1503,  1931,   220,
    1713,   881,  1156,  1537,   791,  1932,  1930,  1161,   164,  1167,
     352,  1715,   427,   800,  1271,  1950,   395,  1948,   805,   806,
    2149,  1563,   539,   507,   180,   412,   405,   183,  2207,   859,
    1524,  1230,   506,  2179,  1522,  1281,   192,  1795,   417,   418,
     551,   383,   435,   436,  1218,   424,   425,  1384,   441,   442,
    1255,   444,   445,   446,   447,  2106,   569,   450,  2146,  2205,
    1766,   517,   529,   440,  2210,   852,   534,   443,   392,  2215,
    1222,   413,   787,  1227,  1060,   389,  1230,   736,  2019,   235,
    1925,   747,   814,   870,    66,   839,  1265,   785,   875,  1243,
     432,   812,  1189,   435,   436,  1911,  1176,   253,    -1,   441,
     442,  1474,   444,   445,   446,   447,   262,    -1,   450,    -1,
      -1,  1265,  1266,  1267,   493,    -1,  1270,    -1,    -1,  1273,
     462,   355,  1276,    -1,    -1,    -1,  1280,    -1,  2179,    -1,
     435,   436,    -1,    -1,    -1,    -1,   441,   442,   294,   444,
     445,   446,   447,    -1,    -1,   450,    -1,    -1,    -1,    -1,
     529,    -1,   531,    -1,    -1,    -1,   943,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   543,    -1,   953,  1321,  1322,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1330,  1331,    -1,    -1,
     435,   436,    -1,  1337,    -1,    -1,   441,   442,    -1,   444,
     445,   446,   447,    -1,    -1,   450,   352,    -1,    -1,    -1,
      -1,   435,   436,    -1,  1358,    -1,    -1,   441,   442,  1363,
     444,   445,   446,   447,   435,   436,   450,     9,    -1,    -1,
     441,   442,    -1,   444,   445,   446,   447,   383,    -1,   450,
      -1,    -1,    -1,    -1,    -1,  1022,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1037,    -1,    -1,    -1,    -1,    -1,    -1,   413,    -1,    -1,
      -1,  1048,  1049,  1050,    -1,    -1,    -1,    -1,    -1,    -1,
    1424,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,   435,
     436,    -1,    -1,    -1,    -1,   441,   442,    -1,   444,   445,
     446,   447,    -1,    -1,   450,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1089,    -1,  1458,    -1,  1460,   224,    -1,    -1,
      -1,    -1,    -1,   230,   106,    -1,    -1,    -1,    -1,    -1,
       9,   238,    11,    12,    13,    -1,   243,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1488,    -1,   253,    -1,  1125,   256,
      -1,   258,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1507,  1508,    -1,  1510,    -1,    -1,    -1,
      -1,    -1,    -1,  1517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,    -1,    -1,    -1,   755,    -1,    -1,   758,
      -1,    -1,  1169,    -1,    -1,   764,    -1,    27,   180,    -1,
      -1,    -1,    -1,    33,   773,    -1,    36,    -1,    -1,    39,
     192,  1555,    -1,   782,  1558,    -1,    -1,    -1,    -1,  1563,
      -1,    -1,    -1,    -1,    -1,   794,   795,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1578,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1222,    -1,  1224,    -1,  1593,
      -1,    -1,    -1,   235,    84,    -1,    86,    -1,    -1,    -1,
     432,   433,    -1,   435,   436,    -1,    -1,    -1,    -1,   441,
     442,   253,   444,   445,   446,   447,    -1,    -1,   450,    -1,
      -1,  1258,    -1,    -1,   853,   164,    -1,    -1,   395,    -1,
     462,   463,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,   180,    -1,   872,    -1,    -1,  1650,    -1,    -1,    -1,
     417,   418,   294,   192,    -1,    -1,    -1,   886,   425,    -1,
      -1,    64,   221,   892,   893,   224,   156,   226,    -1,   898,
      -1,   230,    -1,   212,    -1,    -1,    -1,    -1,    -1,   238,
      -1,  1318,  1319,    -1,   243,    -1,    -1,    -1,   917,    -1,
    1694,    -1,  1329,    -1,   253,    -1,   235,   256,    -1,   258,
     190,   191,    -1,    -1,    -1,  1709,    -1,    -1,  1712,   112,
     352,    -1,   251,    -1,   253,    -1,    -1,   256,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   954,   493,    -1,    -1,    -1,
      -1,    -1,    -1,  1737,  1738,  1739,  1740,  1741,    -1,  1376,
      -1,   383,   232,  1747,   234,    -1,    -1,    -1,    -1,    -1,
      -1,   241,  1389,    -1,    -1,   294,    -1,    -1,    -1,    -1,
      -1,  1765,   529,    -1,   531,    -1,    -1,    -1,    -1,  1773,
    1407,   413,    -1,    -1,  1778,    -1,   543,  1781,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,
    1794,    -1,  1429,   435,   436,    -1,  1433,    -1,    -1,   441,
     442,    -1,   444,   445,   446,   447,    -1,   153,   450,    -1,
      -1,   214,    -1,   352,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,  1465,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,     9,
      -1,    -1,    -1,    -1,   383,   248,   405,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   347,   417,   418,
      -1,    -1,    -1,  1500,  1501,   424,   425,    -1,    -1,   215,
      -1,    -1,    -1,    -1,   413,    -1,    -1,  1514,   281,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1524,  1525,  1118,
    1894,  1120,  1121,   432,    -1,    -1,   435,   436,    -1,  1903,
      -1,  1905,   441,   442,    -1,   444,   445,   446,   447,    -1,
      -1,   450,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1923,
    1557,    -1,    -1,   462,   414,   415,    -1,  1156,    -1,    -1,
      -1,    -1,  1161,    -1,   493,  1939,    -1,    -1,   428,    -1,
      -1,    -1,    -1,   346,    -1,    -1,    -1,   350,    -1,  1953,
      -1,    -1,  1956,    -1,  1958,     4,  1960,    -1,    -1,    -1,
      -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,    -1,    18,
     529,    -1,   531,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,   384,    -1,    -1,   543,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   395,    -1,   164,    -1,   399,   764,  1227,    -1,
      -1,   171,    -1,  2007,    -1,    -1,   773,     9,    -1,    -1,
     180,    -1,    61,    62,  1243,   782,    -1,    -1,    -1,    -1,
      -1,    -1,   192,    -1,    -1,  1662,  1663,   794,   795,    -1,
      -1,   377,    -1,    -1,    -1,    -1,    -1,    -1,  1267,  1676,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1692,  1693,  2061,    -1,    -1,
    1697,    -1,  1699,    -1,    66,   235,    -1,  2071,    -1,    -1,
      -1,    -1,    -1,  2077,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   253,    -1,  1722,   853,    -1,    -1,    -1,
      -1,    -1,  1321,  1322,    -1,    -1,  1733,    -1,    -1,    -1,
      -1,  1330,  1331,    -1,    -1,   872,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,   166,    -1,   886,
      -1,    -1,    -1,    -1,   294,   892,   893,    -1,    -1,    -1,
    1767,   898,    -1,    -1,  2138,    -1,   482,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2149,   492,    -1,    -1,    -1,
     917,  2155,    -1,  2157,    -1,  2159,    -1,    -1,    -1,  2163,
      -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1809,  1810,  1811,  1812,  1813,    -1,   180,    -1,
      -1,   230,   352,    -1,    -1,    -1,    -1,   954,    -1,    -1,
     192,    -1,  1829,    -1,    -1,  1424,   755,     9,    -1,   758,
      -1,  2205,    -1,  2207,  1841,   764,    -1,    -1,    -1,    -1,
      -1,   213,    -1,   383,   773,    -1,    -1,    -1,   112,    -1,
     269,    -1,    -1,   782,    -1,   274,    -1,    -1,   277,  1458,
      42,  1460,    -1,   235,    -1,   794,   795,    -1,    -1,    -1,
      -1,    -1,    -1,   413,    -1,    -1,    -1,    -1,    -1,    -1,
     299,   253,    -1,    -1,  1891,  1892,    -1,   603,    -1,    -1,
      -1,   607,    -1,    -1,    -1,   435,   436,    -1,    -1,   318,
     164,   441,   442,    -1,   444,   445,   446,   447,  1507,  1508,
     450,    -1,    -1,  1920,  1921,    -1,   180,    -1,  1517,    -1,
    1927,    -1,   294,    -1,   853,    -1,   642,    -1,   192,    -1,
      -1,    -1,    -1,    -1,  1941,  1942,    -1,    -1,    -1,    -1,
     204,   205,   658,   872,    -1,    -1,    -1,    -1,   664,   665,
      -1,    -1,    -1,    -1,    -1,    -1,  1555,   886,    -1,    -1,
      -1,    -1,   678,   892,   893,    -1,    -1,    -1,   684,   898,
      -1,   235,     9,   689,    -1,    -1,    -1,    -1,    -1,  1578,
     352,  1118,   164,    -1,    -1,    -1,    -1,    -1,   917,   253,
      27,    -1,    -1,    -1,  1593,    -1,    -1,    -1,   180,    -1,
     716,   717,    -1,    -1,    -1,    -1,  2013,   271,    -1,   725,
     192,   383,     9,    -1,    -1,    -1,  2023,    -1,    -1,  1156,
      -1,    -1,    -1,    -1,    -1,   954,    -1,    -1,    -1,    66,
     294,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   413,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2058,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   435,   436,    -1,    -1,    -1,    -1,   441,
     442,   253,   444,   445,   446,   447,    -1,    -1,   450,    -1,
     262,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   368,   821,  1243,    -1,    -1,    -1,
    1709,    -1,   294,  1712,    -1,    -1,  2123,    -1,    -1,   383,
      -1,  2128,  2129,    -1,    -1,    38,    -1,   164,    -1,    -1,
      -1,    -1,    -1,  2140,     9,    -1,    -1,    -1,  1737,  1738,
      -1,    -1,  1741,   180,    -1,    -1,    -1,    -1,  1747,   413,
      -1,    64,    -1,    -1,    -1,   192,  2163,    -1,    -1,  2166,
      -1,    -1,    -1,    -1,    -1,    -1,  1765,   164,    -1,    -1,
     352,   435,   436,  2180,   890,    -1,    -1,   441,   442,  1778,
     444,   445,   446,   447,  1321,  1322,   450,    -1,    -1,  1118,
      -1,  1120,  1121,  1330,  1331,   192,    -1,    -1,   235,   112,
      -1,   383,    -1,  2210,    -1,    -1,    -1,  2214,  2215,    -1,
      -1,    -1,    -1,    -1,    89,    -1,   253,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1156,    -1,    -1,
      -1,   413,  1161,    -1,    -1,   951,    -1,    -1,   235,   955,
      -1,   957,    -1,   959,   960,   961,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   435,   436,    -1,   253,   294,    -1,   441,
     442,    -1,   444,   445,   446,   447,    -1,   983,   450,    -1,
     986,    -1,   988,   989,    -1,   188,   992,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
      -1,    -1,    -1,    -1,    -1,    -1,     9,   294,  1227,    -1,
      -1,   214,    -1,    -1,  1903,   180,  1905,    -1,    -1,    -1,
      -1,    -1,   225,    -1,  1243,   352,    -1,   192,    -1,    -1,
       0,     1,    -1,     3,  1923,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   248,    -1,    17,  1267,    -1,
    1939,    -1,    -1,    -1,    -1,    -1,   383,    -1,    -1,   386,
     347,    -1,    -1,    66,    -1,   352,   393,    -1,    -1,    -1,
     235,    -1,    -1,    43,   277,    -1,    -1,    47,   281,    -1,
    1507,  1508,    -1,    -1,    -1,    -1,   413,    57,   253,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   383,    -1,    -1,    -1,
      -1,    -1,  1321,  1322,    -1,    -1,    -1,    77,   435,   436,
      -1,  1330,  1331,    83,   441,   442,    -1,   444,    -1,   446,
     447,    -1,    -1,   450,    -1,    -1,   413,    -1,    -1,   294,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,     9,   112,   346,    -1,   115,    -1,   350,   435,   436,
      -1,  1578,    -1,   123,   441,   442,    -1,   444,   445,   446,
     447,   164,   365,   450,   134,    -1,  1593,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,    -1,   149,
      -1,   384,  2071,    -1,    -1,    -1,    -1,   352,   158,   192,
     160,    -1,   395,    -1,    -1,    -1,   399,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,  1424,    -1,    -1,    -1,    -1,
      -1,   181,   182,    -1,    -1,   185,   186,    -1,   383,    -1,
      -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,    -1,
     200,    -1,   235,   203,    -1,    -1,   206,    -1,    -1,  1458,
      -1,  1460,    -1,    -1,    -1,    -1,    -1,    -1,   413,  2138,
     253,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,   262,
      -1,    -1,    19,    -1,    -1,    -1,  2155,    -1,    -1,   239,
     435,   436,    -1,   243,  2163,   245,   441,   442,    -1,   444,
     445,   446,   447,    -1,    -1,   450,    -1,    -1,  1507,  1508,
      -1,   294,    -1,    -1,    -1,   265,   164,    -1,  1517,    -1,
      -1,    -1,    -1,    -1,  1310,    -1,    -1,   277,   278,    -1,
    1737,  1738,   180,    -1,  1741,    -1,  2205,    -1,    -1,    -1,
     164,    -1,    -1,   293,   192,    -1,    -1,   297,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1555,   307,  1765,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   352,
      -1,    -1,   322,    -1,    -1,    -1,   326,    -1,    -1,  1578,
      -1,    -1,    -1,    -1,    -1,   335,    -1,   235,    -1,   213,
      -1,    -1,    -1,    -1,  1593,   345,    -1,    -1,   348,    -1,
     383,    -1,    -1,    -1,    -1,   253,    -1,   357,    -1,    -1,
      -1,   235,   362,   363,   364,    -1,    -1,   154,   155,    -1,
      -1,    -1,   372,    -1,    -1,    -1,    -1,    -1,    -1,   253,
     413,    -1,    -1,    -1,    -1,    -1,    -1,   387,    -1,   389,
      -1,    -1,    -1,    -1,    -1,    -1,   294,   397,    -1,    -1,
     187,    -1,   435,   436,    -1,    -1,   406,    -1,   441,   442,
      -1,   444,   445,   446,   447,    -1,    -1,   450,    -1,    -1,
     294,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   445,  1903,    -1,  1905,    -1,
      -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,
    1709,    -1,    -1,  1712,   251,    -1,  1923,    -1,    -1,   256,
      -1,    -1,    -1,  1509,    -1,    -1,    -1,    -1,   352,    -1,
     267,    -1,  1939,    -1,    -1,   383,    -1,    -1,  1737,  1738,
      -1,    -1,  1741,    -1,    -1,    -1,    -1,    -1,  1747,    -1,
      -1,    -1,    -1,    -1,    -1,  1541,    -1,    -1,    -1,   383,
      -1,    -1,    -1,    -1,    -1,   413,  1765,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1778,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   435,   436,   413,
      -1,    -1,    -1,   441,   442,    -1,   444,   445,   446,   447,
      -1,    -1,   450,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   435,   436,    -1,    -1,    -1,    -1,   441,   442,    -1,
     444,    -1,   446,   447,    -1,    -1,   450,    -1,    -1,    -1,
      -1,  1617,  1618,  1619,  1620,  1621,    -1,    -1,    -1,     0,
       1,    -1,     3,    -1,     5,    -1,  1632,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2071,    -1,  1652,    -1,    -1,    -1,
     407,   408,   409,   410,   411,   412,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,  1670,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,   435,   436,
     437,    -1,   439,   440,  1903,    -1,  1905,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    83,    -1,  1923,    -1,    -1,    -1,    -1,    -1,
      -1,  2138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1939,    -1,    -1,    -1,   105,    -1,    -1,    -1,  2155,    -1,
      -1,   112,    -1,    -1,   115,    -1,  2163,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,    -1,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    -1,
      -1,    -1,    -1,    -1,   164,    -1,    -1,   158,  2205,   160,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     181,   182,   192,    -1,   185,   186,   180,    -1,    -1,    -1,
      -1,    -1,   193,   194,    -1,    -1,    -1,    -1,   192,   200,
      -1,    -1,   203,    -1,    -1,   206,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,  1855,
    1856,  1857,  2071,  1859,  1860,  1861,    -1,    -1,   239,    -1,
      -1,   235,   243,   253,   245,    -1,    -1,    -1,    -1,    -1,
     251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,
      -1,    -1,   263,    -1,   265,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   277,   278,    -1,    -1,
      -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   293,    -1,    -1,    -1,   297,    -1,  1924,  2138,
     294,    -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,
      -1,    -1,  1938,    -1,    -1,    -1,  2155,    -1,    -1,    -1,
      -1,   322,    -1,    -1,  2163,   326,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   335,    -1,    -1,    -1,    -1,  1965,
      -1,    -1,   352,    -1,   345,    -1,    -1,   348,    -1,    -1,
       0,     1,    -1,     3,    -1,     5,   357,    -1,   352,    -1,
      -1,   362,   363,   364,    -1,    -1,  2205,    17,    -1,    -1,
      -1,   372,    -1,   383,  2000,    -1,    -1,  2003,  2004,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   387,    -1,   389,   383,
      -1,    -1,    -1,    43,    -1,    -1,   397,    47,    -1,    -1,
      -1,   402,    -1,   413,    -1,   406,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   413,
      -1,    -1,    -1,    -1,    -1,   435,   436,    77,    -1,    -1,
      -1,   441,   442,    83,   444,    -1,   446,   447,    -1,    -1,
     450,   435,   436,     9,   445,    -1,    -1,   441,   442,    -1,
     444,   445,   446,   447,    -1,   105,   450,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,
    2096,    -1,   122,   123,   124,   125,   126,    -1,    -1,   129,
     130,    -1,   132,   133,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,   181,   182,    34,    -1,   185,   186,    38,    -1,    -1,
      -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    -1,    -1,
     200,    -1,    -1,   203,    -1,    -1,   206,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    -1,   239,
      -1,    92,    -1,   243,    -1,   245,    -1,    -1,   164,    -1,
      -1,   251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   263,   180,   265,    -1,    -1,    -1,    -1,
     121,    -1,    -1,    -1,    -1,    -1,   192,   277,   278,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   293,    -1,    -1,    -1,   297,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   156,    -1,   307,     0,     1,
      -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,   322,    -1,    -1,    17,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   335,    -1,   253,    -1,   190,
     191,    -1,    -1,    -1,    -1,   345,    -1,    -1,   348,    -1,
      -1,    43,    -1,    -1,    -1,    47,    -1,   357,    -1,    -1,
      -1,    -1,   362,   363,   364,    57,    -1,    -1,    -1,    -1,
      -1,    -1,   372,    -1,    -1,    -1,    -1,    -1,   294,    -1,
      -1,   232,    -1,   234,    -1,    77,    -1,   387,    -1,   389,
     241,    83,    -1,    -1,    -1,    -1,    -1,   397,   249,    -1,
      -1,     9,   402,    -1,    -1,    -1,   406,    -1,    -1,    -1,
     261,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,    -1,   352,   129,   130,    -1,
     132,   133,   134,   135,   136,   445,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   383,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,    -1,   181,
     182,    -1,    -1,   185,   186,    -1,   347,   413,    -1,    -1,
      -1,   193,   194,    -1,    -1,    -1,    -1,    -1,   200,    -1,
      -1,   203,    -1,    -1,   206,    -1,    -1,    -1,    -1,   435,
     436,    -1,    -1,    -1,    -1,   441,   442,    -1,   444,   445,
     446,   447,    -1,    -1,   450,    -1,    -1,    -1,    -1,    -1,
      -1,   392,    -1,    -1,    -1,    -1,    -1,   239,    -1,    -1,
      -1,   243,    -1,   245,    -1,    -1,   164,    -1,    -1,   251,
      -1,    -1,    -1,   414,   415,    -1,    -1,    -1,    -1,    -1,
      -1,   263,   180,   265,   425,   426,   427,   428,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   277,   278,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   293,    -1,    -1,    -1,   297,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,     0,     1,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
     322,    -1,    -1,    17,   326,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   335,    -1,   253,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   345,   262,    -1,   348,    -1,    -1,    43,
      -1,    -1,    -1,    47,    -1,   357,    -1,    -1,    -1,    -1,
     362,   363,   364,    57,    -1,    -1,    -1,    -1,    -1,    -1,
     372,    -1,    -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,   387,    -1,   389,    -1,    83,
      -1,    -1,    -1,    -1,    -1,   397,    -1,    -1,    -1,     9,
     402,    -1,    -1,    -1,   406,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,    -1,   352,   129,   130,    -1,   132,   133,
     134,   135,   136,   445,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   158,   383,   160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,    -1,
      -1,   185,   186,    -1,    -1,   413,    -1,    -1,    -1,   193,
     194,    -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,   203,
      -1,    -1,   206,    -1,    -1,    -1,    -1,   435,   436,    -1,
      -1,    -1,    -1,   441,   442,    -1,   444,   445,   446,   447,
      -1,    -1,   450,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   239,    -1,    -1,    -1,   243,
      -1,   245,    -1,    -1,   164,    -1,    -1,   251,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,
     180,   265,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   277,   278,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,
      -1,    -1,    -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   307,     0,     1,    -1,     3,    -1,     5,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,   322,    -1,
      -1,    17,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   335,    -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   345,    -1,    -1,   348,    -1,    -1,    43,    -1,    -1,
      -1,    47,    -1,   357,    -1,    -1,    -1,    -1,   362,   363,
     364,    57,    -1,    -1,    -1,    -1,    -1,    -1,   372,    -1,
      -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,   387,    -1,   389,    -1,    83,    -1,    -1,
      -1,    -1,    -1,   397,    -1,    -1,    -1,     9,   402,    -1,
      -1,    -1,   406,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,    -1,   352,   129,   130,    -1,   132,   133,   134,   135,
     136,   445,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,   383,   160,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   181,   182,    -1,    -1,   185,
     186,    -1,    -1,   413,    -1,    -1,    -1,   193,   194,    -1,
      -1,    -1,    -1,    -1,   200,    -1,    -1,   203,    -1,    -1,
     206,    -1,    -1,    -1,    -1,   435,   436,    -1,    -1,    -1,
      -1,   441,   442,    -1,   444,   445,   446,   447,    -1,    -1,
     450,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   239,    -1,    -1,    -1,   243,    -1,   245,
      -1,    -1,   164,    -1,    -1,   251,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   263,   180,   265,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,   277,   278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,
      -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,     0,     1,    -1,     3,    -1,     5,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,   322,    -1,    -1,    17,
     326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,
      -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,
      -1,    -1,   348,    -1,    -1,    43,    -1,    -1,    -1,    47,
      -1,   357,    -1,    -1,    -1,    -1,   362,   363,   364,    57,
      -1,    -1,    -1,    -1,    -1,    -1,   372,    -1,    -1,    -1,
      -1,    -1,   294,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,   387,    -1,   389,    -1,    83,    -1,    -1,    -1,    -1,
      -1,   397,    -1,    -1,    -1,    -1,   402,    -1,    -1,    -1,
     406,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,    -1,
     352,   129,   130,    -1,   132,   133,   134,   135,   136,   445,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     158,   383,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   181,   182,    -1,    -1,   185,   186,    -1,
      -1,   413,    -1,    -1,    -1,   193,   194,    -1,    -1,    -1,
      -1,    -1,   200,    -1,    -1,   203,    -1,    -1,   206,    -1,
      -1,    -1,    -1,   435,   436,    -1,    -1,    -1,    -1,   441,
     442,    -1,   444,   445,   446,   447,    -1,    -1,   450,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   239,    -1,    -1,    -1,   243,    -1,   245,    -1,    -1,
      -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   263,    -1,   265,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   277,
     278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,   297,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,
       0,     1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   322,    -1,    -1,    17,   326,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,    37,    38,
     348,    -1,    -1,    43,    -1,    -1,    -1,    47,    -1,   357,
      -1,    -1,    -1,    -1,   362,   363,   364,    57,    -1,    -1,
      -1,    -1,    -1,    -1,   372,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    77,    -1,   387,
      -1,   389,    -1,    83,    -1,    -1,    -1,    -1,    -1,   397,
      -1,    -1,    -1,    -1,   402,    -1,    -1,    -1,   406,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,   112,   112,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,    -1,    -1,   129,
     130,    -1,   132,   133,   134,   135,   136,   445,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,   182,    -1,    -1,   185,   186,    -1,    -1,    -1,
      -1,    -1,    -1,   193,   194,    -1,    -1,    -1,   197,    -1,
     200,    -1,    -1,   203,    -1,    -1,   206,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,   214,    -1,    -1,    -1,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,
      -1,    -1,    -1,   243,    -1,   245,    -1,    -1,    -1,    -1,
      -1,   251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     259,    -1,    -1,   263,    -1,   265,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   273,    -1,    -1,   277,   278,    -1,
      -1,    -1,   281,    -1,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   293,    -1,    -1,    -1,   297,    -1,    -1,
      -1,    -1,    -1,   302,    -1,    -1,    -1,   307,     0,     1,
      -1,     3,   311,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,    -1,    -1,    17,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   335,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   345,    -1,   346,   348,    -1,
      -1,    43,    -1,    -1,    -1,    47,    -1,   357,    -1,    -1,
      -1,    -1,   362,   363,   364,    57,    -1,   366,    -1,    -1,
      -1,    -1,   372,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   382,    -1,    77,    -1,   387,    -1,   389,
      -1,    83,    -1,    -1,    -1,    -1,   395,   397,    -1,    -1,
     399,    -1,   402,    -1,    -1,    -1,   406,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    11,    12,    13,
     112,    -1,    -1,   115,    -1,    19,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,    -1,    -1,   129,   130,    -1,
     132,   133,   134,   135,   136,   445,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,
     182,    -1,    -1,   185,   186,    -1,    -1,    -1,    -1,    -1,
      -1,   193,   194,    -1,    -1,    -1,    -1,    -1,   200,    -1,
      -1,   203,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,
       3,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,   239,    -1,    -1,
      -1,   243,    -1,   245,    -1,    -1,    -1,    -1,    -1,   251,
     154,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,   263,    -1,   265,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,   277,   278,    -1,    -1,    -1,
      -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   293,    -1,    -1,    77,   297,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,   307,    -1,    -1,   212,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,    -1,
     322,    -1,   105,    -1,   326,    -1,    -1,    -1,    -1,   112,
      -1,    -1,   115,   335,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,    -1,   345,    -1,    -1,   348,   251,    -1,    -1,
      -1,   134,   256,    -1,    -1,   357,   139,    -1,    -1,    -1,
     362,   363,   364,   267,    -1,    -1,   149,    -1,    -1,    -1,
     372,    -1,    -1,    -1,    -1,   158,    -1,   160,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   387,    -1,   389,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   397,    -1,    -1,   181,   182,
     402,    -1,   185,   186,   406,    -1,    -1,    -1,    -1,    -1,
     193,   194,    -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,
     203,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      -1,     5,    -1,   445,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    -1,   239,    -1,    -1,    -1,
     243,    -1,   245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,   265,    47,     1,    -1,     3,    -1,     5,    -1,
      -1,    -1,    -1,    57,   277,   278,    -1,    -1,    -1,    -1,
      17,    -1,    -1,   407,   408,   409,   410,   411,   412,    -1,
     293,    -1,    -1,    77,   297,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,   307,    -1,    43,    -1,    -1,    -1,
      47,   435,   436,   437,    -1,   439,   440,    -1,    -1,   322,
      57,   105,    -1,   326,    -1,    -1,    -1,    -1,   112,    -1,
      -1,   115,   335,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      77,    -1,   345,    -1,    -1,   348,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   357,    -1,    11,    12,    13,   362,
     363,   364,    -1,    -1,    19,   149,    -1,    -1,   105,   372,
      -1,    -1,    -1,    -1,   158,   112,   160,    -1,   115,    -1,
      -1,    -1,    -1,    -1,   387,    -1,   389,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   397,    -1,    -1,    -1,   182,    -1,
      -1,   185,   186,   406,    -1,    -1,    -1,    -1,    -1,    -1,
     194,    -1,   149,    -1,    -1,    -1,   200,    -1,    -1,   203,
      -1,   158,   206,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   445,    -1,    -1,   182,    -1,    -1,   185,   186,
      -1,    -1,    -1,     0,     1,   239,    -1,   194,    -1,   243,
      -1,   245,    -1,   200,    -1,    -1,   203,    -1,    -1,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   265,    29,    -1,    31,    32,    33,    -1,    -1,    36,
      -1,    38,    39,   277,   278,    -1,    -1,    -1,    -1,   154,
     155,    -1,   239,    -1,    -1,    -1,   243,    -1,   245,   293,
      -1,    -1,    -1,   297,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    68,    -1,   307,    -1,    -1,    -1,    -1,   265,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,   322,    -1,
     277,   278,   326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   335,    -1,    -1,    -1,    -1,   293,   212,    -1,    -1,
     297,   345,    -1,    -1,   348,    -1,   221,    -1,    -1,    -1,
     307,    -1,    -1,   357,    -1,    -1,   123,    -1,   362,   363,
     364,    -1,    -1,    -1,    -1,   322,    -1,   134,   372,   326,
      -1,    -1,   139,    -1,    -1,    -1,   251,    -1,   335,    -1,
      -1,   256,    -1,   387,    -1,   389,    -1,    -1,   345,   156,
      -1,   348,   267,   397,    -1,    11,    12,    13,    -1,   166,
     357,    -1,   406,    19,    -1,   362,   363,   364,    -1,   176,
     177,    -1,   179,    -1,   181,   372,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   191,    -1,   193,    -1,    -1,    -1,
     387,    -1,   389,    11,    12,    13,    -1,    -1,    -1,    -1,
     397,   445,    -1,    -1,    -1,   212,    -1,    -1,    -1,   406,
      -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,
     227,    -1,    -1,    -1,   231,    -1,    -1,   234,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,   445,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     277,    -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,
      29,   288,    31,    32,    33,    -1,    -1,    36,    -1,    38,
      39,    -1,   407,   408,   409,   410,   411,   412,   154,   155,
      -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,
     317,    -1,    -1,    -1,    -1,    64,    -1,   324,    -1,    -1,
     435,   436,   437,    -1,   439,   440,   333,    -1,    -1,    -1,
     337,   187,    -1,    -1,    -1,    -1,   154,   155,    -1,   346,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,   221,     3,    -1,     5,   187,
      -1,    -1,    -1,    -1,    -1,   382,    -1,    -1,   385,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,
      -1,    -1,   399,    -1,   212,   251,    -1,    -1,   405,    -1,
     256,    -1,    -1,   221,    -1,    -1,    43,   156,   415,    -1,
      47,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,
      57,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,    -1,
     179,    -1,    -1,   251,   441,    -1,    -1,    -1,   256,    -1,
      77,    -1,   191,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,   105,   218,
      -1,    -1,    -1,    -1,    -1,   112,   225,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   158,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,   185,   186,
      -1,   407,   408,   409,   410,   411,   412,   194,    -1,    -1,
      -1,    -1,    -1,   200,    -1,    -1,   203,    -1,   317,   206,
      -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,   435,
     436,   437,    -1,   439,   440,    -1,    -1,    -1,   337,   407,
     408,   409,   410,   411,   412,    -1,     1,   346,     3,    -1,
       5,    -1,   239,    -1,    -1,    -1,   243,    -1,   245,    -1,
      -1,   248,    17,    -1,    -1,    -1,    -1,   435,   436,   437,
      -1,   439,   440,    -1,    -1,    -1,    -1,    -1,   265,    -1,
      -1,    -1,    -1,   382,    -1,    -1,   385,    -1,    43,    -1,
      -1,   278,    47,    -1,    -1,    -1,   395,    -1,    -1,    -1,
     399,    -1,    57,    -1,    -1,    -1,   293,    -1,    -1,    -1,
     297,    -1,    -1,    -1,    -1,    -1,   415,    -1,    -1,    -1,
     307,    -1,    77,    -1,    -1,    -1,    -1,   426,    83,    -1,
      -1,    -1,    -1,    -1,    -1,   322,    -1,    -1,    -1,   326,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,   112,   345,    -1,
     115,   348,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     357,    -1,    -1,    -1,    -1,   362,   363,   364,   133,    -1,
      -1,    -1,    -1,    -1,    -1,   372,    -1,    -1,   375,    -1,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,
     387,    -1,   389,   158,    -1,   160,    -1,    -1,    -1,    -1,
     397,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,
       1,    -1,     3,    -1,     5,    -1,    -1,   182,    -1,    -1,
     185,   186,    -1,    -1,    -1,    -1,    17,    -1,    -1,   194,
      -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,   203,    -1,
      -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   239,    -1,    -1,    -1,   243,    -1,
     245,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     265,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   278,   105,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,   115,    -1,    -1,    -1,   293,    -1,
      -1,    -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   307,    -1,    -1,    -1,    -1,   138,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   149,    -1,
      -1,   326,    -1,    -1,    -1,    -1,    -1,   158,    -1,   160,
     335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     345,    -1,    -1,   348,     1,    -1,     3,    -1,     5,    -1,
      -1,   182,   357,    -1,   185,   186,    -1,   362,   363,   364,
      17,    -1,    -1,   194,    -1,    -1,    -1,   372,    -1,   200,
      -1,    -1,   203,    -1,    -1,   206,    -1,    -1,    -1,    -1,
      -1,    -1,   387,    -1,   389,    -1,    43,    -1,    -1,    -1,
      47,    -1,   397,    -1,    -1,    -1,    -1,   402,    -1,    -1,
      57,   406,    -1,    -1,    -1,    -1,    -1,    -1,   239,    -1,
      -1,    -1,   243,    -1,   245,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,   105,    -1,
      -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,
      -1,    -1,   293,    -1,    -1,    -1,   297,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   322,   149,    -1,    -1,   326,    -1,    -1,    -1,    -1,
      -1,   158,    -1,   160,   335,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   345,    -1,    -1,   348,     1,    -1,
       3,    -1,     5,    -1,    -1,   182,   357,    -1,   185,   186,
      -1,   362,   363,   364,    17,    -1,    -1,   194,    -1,    -1,
      -1,   372,    -1,   200,    -1,    -1,   203,    -1,    -1,   206,
      -1,    -1,    -1,    -1,    -1,    -1,   387,    -1,   389,    -1,
      43,    -1,    -1,    -1,    47,    -1,   397,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,   406,    -1,    -1,    -1,    -1,
      -1,    -1,   239,    -1,    -1,    -1,   243,    -1,   245,    -1,
      -1,   248,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   278,   105,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,   115,    -1,    -1,    -1,   293,    -1,    -1,    -1,
     297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,   149,    -1,    -1,   326,
      -1,    -1,    -1,    -1,    -1,   158,    -1,   160,   335,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,    -1,
      -1,   348,     1,    -1,     3,    -1,     5,    -1,    -1,   182,
     357,    -1,   185,   186,    -1,   362,   363,   364,    17,    -1,
      -1,   194,    -1,    -1,    -1,   372,    -1,   200,    -1,    -1,
     203,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,
     387,    -1,   389,    -1,    43,    -1,    -1,    -1,    47,    -1,
     397,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,   406,
      -1,    -1,    -1,    -1,    -1,    -1,   239,    -1,    -1,    -1,
     243,    -1,   245,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   278,   105,    -1,    -1,    -1,
      -1,    -1,    -1,   112,    -1,    -1,   115,    -1,    -1,    -1,
     293,    -1,    -1,    -1,   297,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
     149,    -1,    -1,   326,    -1,    -1,    -1,    -1,    -1,   158,
      -1,   160,   335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   345,    -1,    -1,   348,     1,    -1,     3,    -1,
       5,    -1,    -1,   182,   357,    -1,   185,   186,    -1,   362,
     363,   364,    17,    -1,    -1,   194,    -1,    -1,    -1,   372,
      -1,   200,    -1,    -1,   203,    -1,    -1,   206,    -1,    -1,
      -1,    -1,    -1,    -1,   387,    -1,   389,    -1,    43,    -1,
      -1,    -1,    47,    -1,   397,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,   406,    -1,    -1,    -1,    -1,    -1,    -1,
     239,    -1,    -1,    -1,   243,    -1,   245,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,
     105,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,
     115,    -1,    -1,    -1,   293,    -1,    -1,    -1,   297,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,   149,    -1,    -1,   326,    -1,    -1,
      -1,    -1,    -1,   158,    -1,   160,   335,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   345,    -1,    -1,   348,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,   357,    -1,
     185,   186,    -1,   362,   363,   364,    -1,    -1,    -1,   194,
      -1,    -1,    -1,   372,    -1,   200,    -1,    -1,   203,    -1,
      -1,   206,    -1,    -1,    -1,     1,    -1,     3,   387,     5,
     389,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   397,    -1,
      -1,    17,    -1,   402,    -1,    -1,    -1,   406,    -1,    -1,
      -1,    -1,    -1,    -1,   239,    -1,    -1,    -1,   243,    -1,
     245,    -1,    -1,   248,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    47,     1,    -1,     3,    -1,     5,    -1,    -1,    -1,
     265,    57,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    83,   293,    -1,
      -1,    -1,   297,    -1,    43,    -1,    -1,    -1,    47,    -1,
      -1,    -1,   307,    -1,    -1,    -1,    -1,    -1,    57,   105,
      -1,    -1,    -1,    -1,    -1,    -1,   112,   322,    -1,   115,
      -1,   326,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
     335,    -1,    -1,    -1,    83,    -1,    -1,   133,    -1,    -1,
     345,    -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   357,   149,    -1,    -1,   105,   362,   363,   364,
      -1,    -1,   158,   112,   160,    -1,   115,   372,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   387,    -1,   389,    -1,   182,    -1,    -1,   185,
     186,    -1,   397,    -1,    -1,    -1,    -1,    -1,   194,    -1,
     149,   406,    -1,    -1,   200,    -1,    -1,   203,    -1,   158,
     206,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   182,    -1,    -1,   185,   186,    -1,    -1,
      -1,    -1,    -1,   239,    -1,   194,    -1,   243,    -1,   245,
      -1,   200,    -1,    -1,   203,    -1,    -1,   206,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     239,    -1,    -1,    -1,   243,    -1,   245,   293,    -1,    -1,
      -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,    -1,    -1,    -1,    -1,   265,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,    -1,   278,
     326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,
      -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,   297,   345,
      -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,   307,    -1,
      -1,   357,    -1,    -1,    -1,    -1,   362,   363,   364,    -1,
      -1,    -1,    -1,   322,    -1,    -1,   372,   326,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   335,    -1,    -1,    -1,
      -1,   387,    -1,   389,    -1,    -1,   345,    -1,    -1,   348,
      -1,   397,    -1,    -1,    -1,    -1,    -1,    -1,   357,    -1,
     406,    -1,    -1,   362,   363,   364,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   372,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   387,    -1,
     389,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   397,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   406
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,   181,   193,   465,   466,   467,   468,   472,   475,
     477,   277,   116,     0,   467,   150,   494,   494,   445,   478,
    1060,   277,   116,     1,    95,   582,   582,    25,   476,   292,
     277,   277,   116,     1,   288,   747,   747,   229,   277,   277,
      79,   205,   495,   496,   497,   498,   521,   522,   277,   277,
     116,   134,   473,   469,   470,   477,   478,   336,   336,   497,
     167,   211,   523,   535,     1,    68,   166,   227,   231,   313,
     333,   405,   583,   584,   585,   586,   662,   665,   666,   668,
     688,   699,   398,   748,   749,   478,   123,   139,   470,   471,
     474,   494,   277,   581,   277,   277,   277,   277,   277,   336,
     336,   336,   336,   336,   336,   336,   585,    42,   752,   753,
     754,   755,   277,    53,   750,   277,   291,   478,   582,   301,
     479,   258,   316,   351,   353,   499,   500,   501,   506,   508,
     517,   340,   536,   537,   244,   332,   524,   525,   526,   527,
     531,   277,   277,   277,   581,   277,   277,   581,   304,   399,
      66,   753,  1058,   347,   388,   756,   757,   103,   760,   761,
     752,   323,   751,   478,   277,   747,   277,   212,   480,   277,
     277,   277,   277,   500,   251,   538,  1028,  1029,   537,   166,
     299,   348,   349,   528,   529,   277,   526,    48,   669,   670,
     165,   334,   587,   588,   589,   441,   621,   622,   623,   624,
     667,   621,   296,   700,   701,   702,   624,   689,   690,   621,
     663,   664,   753,   212,   633,   347,   624,   759,   581,     1,
       3,     5,    17,    43,    47,    57,    77,    83,   105,   112,
     115,   149,   158,   160,   182,   185,   186,   194,   200,   203,
     206,   239,   243,   245,   265,   277,   278,   293,   297,   307,
     322,   326,   335,   345,   348,   357,   362,   363,   364,   372,
     387,   389,   397,   406,   445,   762,   763,   764,   765,   767,
     769,   770,   771,   779,   793,   808,   811,   813,   825,   827,
     828,   829,   831,   833,   834,   835,   839,   854,   860,   873,
     884,   887,   891,   893,   906,   908,   919,   923,   924,   936,
     937,   953,   962,   966,   972,   973,   977,   987,   990,   992,
     999,  1021,  1022,  1034,  1039,  1041,  1043,  1045,  1051,  1052,
    1053,   445,   277,   469,    67,   201,   481,    28,    97,    98,
     207,   309,   338,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   238,   291,   339,   445,   509,   510,   511,   512,
     513,   515,   516,   180,   502,   503,   504,   445,    91,   102,
     518,   519,   520,  1060,   266,   368,    22,  1060,   670,   590,
    1060,   590,   589,   622,   170,   445,   625,   596,  1060,   702,
     625,   690,    29,   104,   633,   266,   758,   762,   277,  1006,
    1007,  1008,  1059,  1060,     6,    89,   220,   435,   436,   441,
     442,   444,   446,   447,   450,  1036,  1037,  1054,  1055,  1056,
    1057,  1059,   888,   889,   900,  1060,   291,   482,  1035,  1054,
     915,   920,   921,  1059,  1036,   166,   836,   837,   915,     9,
     164,   180,   192,   235,   253,   294,   352,   383,   413,   974,
     978,   979,   980,   988,   989,  1008,  1024,  1055,  1057,  1059,
    1068,  1069,  1070,  1071,  1072,  1073,  1054,   809,  1060,    11,
      12,    13,   164,   251,   256,   383,   432,   435,   436,   462,
     633,   823,  1059,  1068,  1074,  1080,  1085,  1086,  1087,  1088,
    1089,  1101,  1103,   276,   278,   291,   336,   596,   378,  1099,
    1068,  1074,  1103,  1035,   596,  1068,   915,    89,  1068,  1054,
     161,   909,   175,   403,   624,   894,   895,   898,   899,   900,
     901,   902,  1059,  1060,  1059,   915,  1059,   915,  1059,     9,
     795,   796,   801,  1059,   164,   253,   261,   263,   383,   967,
     968,   970,   971,  1054,   915,   915,   331,   907,  1054,   855,
     856,  1024,    89,  1035,   596,   915,  1059,   174,   184,   875,
     879,  1059,   277,   763,   336,   581,   770,   248,   286,   299,
     925,   926,     8,    34,   209,   905,   940,   941,   942,   944,
     945,   125,  1033,   471,   482,   277,   277,   277,   277,   277,
     277,   485,   347,    62,   212,   581,   277,   511,   277,   512,
       9,   709,  1068,   277,   504,   403,   507,   346,   212,   520,
       4,    18,    26,    61,    62,   166,   230,   269,   274,   299,
     318,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   556,   560,   561,   562,
     564,   567,   571,   572,   573,   576,   577,   578,   580,    81,
     174,   174,   581,    37,    38,    69,    70,    71,    72,    73,
      74,    75,   112,   197,   212,   214,   259,   273,   281,   283,
     302,   311,   346,   366,   395,   399,   626,   627,   628,   629,
     631,   632,   634,   637,   639,   640,   641,   642,   643,   646,
     659,   660,   661,    60,    84,    85,   275,   633,   703,   704,
     705,   706,   707,   708,   710,   711,    29,    31,    32,    33,
      36,    38,    39,    64,   156,   176,   177,   179,   191,   225,
     234,   249,   317,   324,   337,   385,   395,   399,   415,   426,
     632,   638,   642,   691,   692,   694,   697,  1060,   123,   263,
    1007,  1016,  1059,    27,   403,  1009,  1010,  1011,    27,   178,
     386,   430,  1000,  1002,   196,   260,  1061,  1063,  1064,   196,
     260,  1054,   260,  1056,  1056,   378,  1023,  1037,  1058,   330,
     889,   378,  1054,  1054,  1058,   303,   386,   403,   922,   921,
    1058,   330,  1027,  1035,   130,   838,   838,   299,   963,  1071,
    1073,  1059,   393,   975,   979,   403,   981,   982,   983,   989,
    1059,  1058,  1068,  1002,    42,   208,   810,  1060,  1085,  1056,
    1101,  1103,  1056,  1103,  1028,    16,   376,   815,   816,    19,
     267,  1075,  1076,  1077,  1078,   247,   285,   413,  1090,  1068,
    1074,  1103,   435,   436,   437,   439,   440,   633,  1086,    93,
     892,   885,   886,   900,  1060,   248,   375,   768,   769,   993,
     994,   997,   403,   772,   367,   780,   781,   782,   263,   954,
     955,  1068,   378,    42,   162,   204,   205,   210,   271,   910,
     911,   912,   373,   377,   769,   896,   901,   894,   376,   390,
     401,   377,   178,   830,   963,   178,   938,  1059,   143,   794,
     401,   797,   968,   117,   378,   391,   969,   971,   954,   172,
     215,  1046,   183,   323,   208,   856,   106,  1059,   178,   299,
     300,   832,   106,   861,   101,     8,    34,   938,   766,  1068,
     299,   299,   403,   927,   928,   215,     7,   946,   148,   939,
     251,   943,   939,    27,   949,   950,   951,   581,   445,   446,
     447,   492,   493,   492,   492,   492,   492,   492,   624,   343,
     624,   277,   213,    66,   213,   505,  1068,   101,   581,   212,
      66,   241,   299,  1099,   633,   343,   358,   241,   633,    54,
     107,   215,   249,   554,   624,   540,   581,   578,   532,   533,
     915,   530,   915,   271,   451,   671,   672,   673,   674,   679,
     685,   686,    40,    61,    95,   216,   224,   299,   313,   315,
     399,   592,   593,   594,   595,   597,   598,   603,   607,   608,
     609,   611,   612,   615,   633,   441,   402,   441,   441,   441,
     163,   184,   329,   441,   647,   648,   633,  1060,  1060,   219,
     329,   633,   633,   581,   628,   759,   633,  1068,   633,    21,
     222,   223,   712,   184,   277,   705,   171,   732,   225,   308,
     333,   402,   152,   153,   333,   191,   633,   633,   178,   378,
     398,   698,   112,   581,   692,   633,  1068,   103,   159,   424,
    1018,   124,  1001,    27,  1014,    29,    34,    38,    84,    86,
      92,   121,   156,   190,   191,   232,   234,   241,   249,   261,
     337,   347,   392,   414,   415,   425,   426,   427,   428,  1012,
    1013,  1011,   225,  1003,    97,   159,   416,   417,   420,   421,
     422,   423,   424,   429,   431,  1005,  1059,  1068,    90,  1001,
    1016,  1060,  1060,  1062,  1101,  1064,  1059,  1059,   378,  1059,
    1036,   183,  1037,   290,   890,   398,   840,  1054,   174,   403,
     174,   403,   230,   249,   921,   154,   155,   411,  1097,   940,
    1054,   403,   976,    27,    33,    36,    39,    84,    86,   156,
     190,   191,   232,   234,   241,   347,   985,  1013,   983,  1068,
    1054,  1036,  1054,  1103,   823,   823,   402,   817,   818,    16,
    1077,   251,  1028,  1079,  1080,  1081,  1082,  1083,   433,   463,
    1102,  1102,  1102,  1103,  1103,  1103,  1103,  1103,   251,  1086,
    1088,  1091,  1088,   108,  1060,   341,   997,   122,   995,   996,
    1029,   170,     9,    11,    14,    15,    96,   256,   257,   773,
     777,  1059,   312,   787,   788,   789,   782,    24,   109,    62,
     955,   958,   378,   991,  1025,  1026,  1068,  1036,  1054,   911,
     913,   914,   915,   905,   138,   138,   897,   900,  1074,   903,
     904,  1068,  1054,   208,   964,  1068,   940,    27,   798,  1059,
     798,    42,    42,   971,   403,   957,   299,   633,  1050,  1091,
     403,  1049,  1054,  1054,  1059,    42,   178,  1036,  1054,    42,
     208,   866,   263,   874,   354,   880,   314,   277,   230,   249,
     208,   929,   769,   275,   378,   947,  1054,  1059,   209,   137,
     251,   952,   493,   581,   581,   581,   581,   581,   581,   581,
      55,   242,   404,   514,   212,  1068,   241,   445,   277,   633,
     215,   112,   204,   205,   271,   295,   368,   557,   558,  1068,
    1054,   633,   212,   633,    37,   198,   225,   306,   344,   633,
     633,   633,    18,   533,   284,   534,   915,  1058,   157,   358,
     452,   458,   460,   680,   681,   682,   621,   673,   674,   204,
     210,   674,   686,    81,   633,   299,   300,   300,   633,    81,
     212,   633,   633,   260,   581,   594,   581,   163,   184,   413,
     378,   613,   449,   376,   630,   639,   635,   636,  1068,   218,
     382,   644,   212,    21,   624,   624,   717,   718,   719,   709,
     413,  1068,  1068,  1068,  1019,  1059,   581,  1019,   225,   416,
     152,   153,   212,    33,    36,    54,  1068,   254,   358,   418,
     419,   215,  1001,  1001,  1060,  1065,  1066,  1067,  1071,  1101,
    1054,   263,  1030,  1031,  1036,   378,   900,    42,   262,   843,
     844,   845,   846,   847,   848,  1068,   263,   850,   851,   852,
     310,   249,   310,   249,   325,  1099,  1099,  1103,   249,    64,
     225,   284,   986,   152,   153,   212,   984,  1054,   183,  1030,
     183,    20,   164,   383,   819,  1028,   402,   818,   824,   823,
    1091,  1083,  1091,   187,   221,   407,   408,   409,   410,   412,
    1092,  1093,  1094,  1095,  1096,  1097,  1098,  1103,   263,   997,
     135,   998,   375,   774,  1099,   174,     9,    55,   172,   218,
     783,    87,   790,   791,   792,   789,   215,   956,   956,   343,
     398,   812,   991,  1026,  1058,  1027,  1030,   183,   914,   403,
     428,   916,   917,   918,     8,   178,  1054,    27,   931,   932,
     933,   142,   826,   123,   402,   802,   402,   799,   800,   118,
     958,   215,   172,   217,  1068,   428,   940,   403,   858,   347,
     857,  1059,  1069,  1059,  1030,   183,     9,   865,   867,   868,
    1059,   858,     9,   877,   878,  1059,    35,   123,   157,   159,
     881,   882,  1059,   230,  1059,   215,   930,   931,   225,   225,
     226,   948,   215,   770,    27,   581,   445,   277,   277,   119,
     295,   344,   565,   633,   559,  1068,   559,  1054,  1054,    30,
     161,   237,   568,   344,   344,  1068,   355,   563,  1054,   574,
    1054,  1060,    22,    23,   555,   624,   915,   215,   215,   460,
     220,    90,   461,   682,   581,   123,   358,   452,   457,   458,
     675,   676,   677,   676,   687,   624,  1060,   212,    21,    21,
     575,  1060,   599,   624,  1059,   624,   401,   596,   596,   216,
     604,   605,   606,  1059,   591,   621,   581,   624,   377,   649,
    1060,   636,  1058,   376,   342,   645,   948,   718,   720,  1060,
     254,   693,   695,   769,  1020,   254,   724,    40,   212,  1068,
    1058,  1066,  1102,   434,   435,   436,  1067,  1027,   347,   251,
    1032,  1030,    82,   304,   183,   841,   844,  1058,   848,  1058,
     272,  1016,   251,   853,   325,   325,  1028,     7,    40,  1036,
     132,  1042,  1036,    16,   820,   821,   822,   823,   270,   133,
     814,  1084,  1101,  1103,  1103,   374,  1100,  1100,  1059,   312,
     375,   778,   399,   783,  1068,  1068,   792,  1035,  1035,   633,
     530,   183,   271,   961,  1026,   136,  1040,  1036,   230,   249,
     918,   904,  1068,   123,   141,   965,   251,   934,   769,   807,
    1074,  1074,   800,   196,   204,   398,   959,   633,   403,  1048,
     268,   144,  1047,   283,   850,  1027,   146,  1038,  1036,  1068,
     868,  1058,   107,   869,   367,   871,   289,   305,   878,   166,
     303,   386,   876,   288,   212,   940,   140,   935,  1054,   769,
     137,   306,   566,   574,   403,   403,   403,   579,   411,   633,
     633,   633,   633,   633,   259,   215,   215,   350,   453,   454,
     455,   456,   459,    90,   416,   421,   220,   575,   678,   633,
     613,   575,   575,   354,  1058,  1060,   403,   600,   613,   196,
     605,   633,   108,   650,   636,  1068,    54,   189,   713,    64,
     112,   188,   214,   225,   248,   281,   346,   350,   365,   384,
     395,   399,   661,   721,   722,   723,   727,   729,   733,   734,
     735,   736,   737,   738,   739,   740,   746,   633,   251,  1017,
    1068,    64,  1004,  1066,  1067,  1067,  1067,  1102,  1030,   157,
     263,   847,   847,  1059,   323,   842,   844,   848,   769,   126,
     849,   263,  1030,   308,  1030,   308,  1030,   819,   769,   822,
     769,  1103,   267,   267,   775,   776,   777,   378,   731,  1068,
      42,   378,  1059,  1035,   288,  1030,   325,    42,   768,    27,
      19,   804,   805,   806,   248,   769,   803,   268,   288,  1035,
     961,  1024,   347,  1059,   145,   859,  1030,  1030,   267,   862,
     863,   864,   868,   196,    90,   870,   196,   850,   260,   216,
     874,  1059,   935,   263,   770,   215,   579,   230,   230,   118,
     575,  1068,  1068,  1068,  1068,  1068,   624,  1068,    55,   300,
     610,   277,  1060,   173,   226,   601,    55,   347,  1068,   263,
      24,   109,   651,   652,   653,   654,   655,   624,   172,   714,
     724,   199,   329,   724,   188,   633,   633,   633,   575,   741,
     742,   633,   633,   633,   277,   722,   282,   696,  1060,   263,
      64,   284,  1015,   254,   770,   347,  1059,   272,   129,  1044,
    1054,  1042,  1054,  1042,  1081,   154,   154,   776,    95,   104,
     784,   785,   786,   905,  1068,  1068,   633,  1040,  1068,   123,
     807,   803,   806,   341,   633,  1068,  1038,  1038,   865,   864,
    1059,   196,  1059,   147,   872,  1059,   288,   883,   912,   915,
     248,   633,   263,   263,   198,   683,   684,    27,    27,   226,
     602,   108,   178,   614,   616,   617,   618,   619,   620,  1060,
     198,   656,   657,   658,   684,   653,   215,   110,   217,   715,
     633,   633,   633,   449,   644,  1059,   393,   743,   321,   742,
     744,   745,    50,    51,    84,   100,   110,   275,   279,   280,
     313,   327,   328,   730,   112,  1068,   624,  1018,   724,   724,
    1068,   157,   769,  1030,  1030,  1102,  1099,  1099,    42,   786,
     201,   784,   784,   445,   390,   768,   445,  1068,  1059,   874,
     275,  1054,   244,   569,   569,    42,   599,   380,    27,   263,
     624,   613,   618,    42,   198,   658,   633,   624,   110,   173,
     716,   624,   282,   725,   248,   282,   624,   728,   342,   575,
     263,   173,   189,   173,   189,   173,   189,   731,   769,  1068,
    1068,   770,  1042,  1042,  1054,  1068,   376,   960,  1074,   960,
     883,   299,   300,   570,   570,  1035,   599,    41,  1059,    55,
    1024,  1055,  1057,  1059,    42,  1024,   624,   624,   624,   275,
     624,    54,   171,  1068,   732,   445,   599,   263,   726,   248,
     275
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
#line 581 "token.y"
    { 
        dbg_print(DBG_PARSER, ".... Reached the start node .....\n"); 
        (yyval.object) = cons_project((yyvsp[(1) - (1)].object));
    }
    break;

  case 3:
#line 587 "token.y"
    { 
        dbg_print(DBG_PARSER, ".... Reached nested prog list : source item.....\n"); 
        (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].object));
    }
    break;

  case 4:
#line 591 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].object));
        dbg_print(DBG_PARSER, ".... Reached nested prog list : list .....\n"); 
    }
    break;

  case 5:
#line 597 "token.y"
    { 
        dbg_print(DBG_PARSER, ".... Reached source item : program definition.....\n"); 
        (yyval.object) = (yyvsp[(1) - (1)].object); 
    }
    break;

  case 6:
#line 601 "token.y"
    { 
        dbg_print(DBG_PARSER, ".... Reached source item : function definition.....\n"); 
        (yyval.object) = (yyvsp[(1) - (1)].object); 
    }
    break;

  case 7:
#line 612 "token.y"
    { 
        dbg_print(DBG_PARSER, ".... Reached program definition .....\n"); 
        (yyval.object) = cons_program_definition((yyvsp[(1) - (6)].object), (yyvsp[(2) - (6)].cobobject), (yyvsp[(3) - (6)].object), (yyvsp[(4) - (6)].object), (yyvsp[(5) - (6)].object));
    }
    break;

  case 8:
#line 618 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 9:
#line 620 "token.y"
    { 
        (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].object)); 
        dbg_print(DBG_PARSER, ".... Reached nested program : program def .....\n"); 
    }
    break;

  case 10:
#line 624 "token.y"
    { 
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object));
        dbg_print(DBG_PARSER, ".... Reached nested program : program def list.....\n"); 
    }
    break;

  case 11:
#line 635 "token.y"
    { 
        dbg_print(DBG_PARSER, ".... Reached program mandatory .....\n"); 
        (yyval.object) = cons_program_definition((yyvsp[(1) - (6)].object), (yyvsp[(2) - (6)].cobobject), (yyvsp[(3) - (6)].object), (yyvsp[(4) - (6)].object), (yyvsp[(5) - (6)].object));
    }
    break;

  case 14:
#line 649 "token.y"
    { 
        dbg_print(DBG_PARSER, ".... Reached function definition .....\n"); 
        (yyval.object) = cons_function_definition((yyvsp[(1) - (5)].object), (yyvsp[(2) - (5)].cobobject), (yyvsp[(3) - (5)].object), (yyvsp[(4) - (5)].object));
    }
    break;

  case 18:
#line 666 "token.y"
    {
        (yyval.object) = cons_function_division((yyvsp[(3) - (5)].sval), currentFileName);
    }
    break;

  case 21:
#line 682 "token.y"
    {
        (yyval.object) = cons_identification_division((yyvsp[(6) - (10)].sval), (yyvsp[(9) - (10)].ival), (yyvsp[(10) - (10)].object), currentFileName);
    }
    break;

  case 22:
#line 686 "token.y"
    { dbg_print(DBG_PARSER, "Error in identification division"); }
    break;

  case 23:
#line 690 "token.y"
    {  
        (yyval.sval) = (yyvsp[(1) - (1)].sval);
    }
    break;

  case 26:
#line 699 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 27:
#line 700 "token.y"
    { (yyval.ival) = (yyvsp[(2) - (4)].ival); }
    break;

  case 28:
#line 703 "token.y"
    { (yyval.ival) = CB_COMMON; }
    break;

  case 29:
#line 704 "token.y"
    { (yyval.ival) = CB_INITIAL; }
    break;

  case 32:
#line 709 "token.y"
    {
        (yyval.object) = NULL;
    }
    break;

  case 33:
#line 712 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 34:
#line 715 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].idoption)); }
    break;

  case 35:
#line 716 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].idoption));
    }
    break;

  case 36:
#line 721 "token.y"
    { (yyval.idoption) = (yyvsp[(1) - (1)].idoption); }
    break;

  case 37:
#line 722 "token.y"
    { (yyval.idoption) = (yyvsp[(1) - (1)].idoption); }
    break;

  case 38:
#line 723 "token.y"
    { (yyval.idoption) = (yyvsp[(1) - (1)].idoption); }
    break;

  case 39:
#line 724 "token.y"
    { (yyval.idoption) = (yyvsp[(1) - (1)].idoption); }
    break;

  case 40:
#line 725 "token.y"
    { (yyval.idoption) = (yyvsp[(1) - (1)].idoption); }
    break;

  case 41:
#line 726 "token.y"
    { (yyval.idoption) = (yyvsp[(1) - (1)].idoption); }
    break;

  case 42:
#line 729 "token.y"
    { 
        (yyval.idoption) = cons_id_option(CB_IDD_AUTHOR, (yyvsp[(3) - (4)].sval));
    }
    break;

  case 43:
#line 734 "token.y"
    { 
        (yyval.idoption) = cons_id_option(CB_IDD_INSTALL, (yyvsp[(3) - (4)].sval));
    }
    break;

  case 44:
#line 739 "token.y"
    { 
        (yyval.idoption) = cons_id_option(CB_IDD_DATEWRI, (yyvsp[(3) - (4)].sval));
    }
    break;

  case 45:
#line 744 "token.y"
    { 
        (yyval.idoption) = cons_id_option(CB_IDD_DATECOM, (yyvsp[(3) - (4)].sval));
    }
    break;

  case 46:
#line 749 "token.y"
    { 
        (yyval.idoption) = cons_id_option(CB_IDD_SECURITY, (yyvsp[(3) - (4)].sval));
    }
    break;

  case 47:
#line 754 "token.y"
    { 
        (yyval.idoption) = cons_id_option(CB_IDD_REMARKS, (yyvsp[(3) - (4)].sval));
    }
    break;

  case 48:
#line 759 "token.y"
    {
        /* printf("the text line is %s\n", $1); */
        (yyval.sval) = start_buffer((yyvsp[(1) - (2)].sval));
        }
    break;

  case 49:
#line 763 "token.y"
    {
        /* printf("the text line in two %s\n", $2); */
        (yyval.sval) = append_buffer((yyvsp[(2) - (3)].sval));
        }
    break;

  case 50:
#line 769 "token.y"
    {    
        (yyval.sval) = (yyvsp[(1) - (1)].sval);
        dbg_print(DBG_TRACE, "literal : %s\n", (yyvsp[(1) - (1)].sval));
        }
    break;

  case 51:
#line 773 "token.y"
    {
        (yyval.sval) = (yyvsp[(1) - (1)].sval);
        dbg_print(DBG_TRACE, "literal : %s\n", (yyvsp[(1) - (1)].sval)); 
        }
    break;

  case 52:
#line 777 "token.y"
    {
        (yyval.sval) = (yyvsp[(1) - (1)].sval);    
        }
    break;

  case 53:
#line 786 "token.y"
    { (yyval.cobobject) = NULL; }
    break;

  case 54:
#line 788 "token.y"
    {
 /*   | error { dbg_print(DBG_PARSER, "Error in ENVIRONMENT DIVISION"); } */
        (yyval.cobobject) = cons_environment_division((yyvsp[(4) - (4)].cobobject));
    }
    break;

  case 55:
#line 794 "token.y"
    { (yyval.cobobject) = NULL; }
    break;

  case 56:
#line 795 "token.y"
    {
        (yyval.cobobject) = (yyvsp[(1) - (1)].cobobject);
    }
    break;

  case 57:
#line 800 "token.y"
    { (yyval.cobobject) = start_generic_list((void *) (yyvsp[(1) - (1)].cobobject)); }
    break;

  case 58:
#line 801 "token.y"
    {
        (yyval.cobobject) = addto_generic_list((yyvsp[(1) - (2)].cobobject), (yyvsp[(2) - (2)].cobobject));
    }
    break;

  case 59:
#line 806 "token.y"
    { (yyval.cobobject) = (yyvsp[(1) - (1)].cobobject); }
    break;

  case 60:
#line 807 "token.y"
    { (yyval.cobobject) = (yyvsp[(1) - (1)].cobobject); }
    break;

  case 61:
#line 815 "token.y"
    { 
        (yyval.cobobject) = cons_configuration_section((yyvsp[(4) - (4)].object)); 
    }
    break;

  case 62:
#line 820 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].cfgsecopt)); }
    break;

  case 63:
#line 821 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].cfgsecopt));
    }
    break;

  case 64:
#line 826 "token.y"
    {
        (yyval.cfgsecopt) = cons_config_sec_option(CB_CONFIG_SEC_SOURCE, (yyvsp[(1) - (1)].intchrpair), NULL, NULL, NULL);
    }
    break;

  case 65:
#line 829 "token.y"
    {
        (yyval.cfgsecopt) = cons_config_sec_option(CB_CONFIG_SEC_OBJECT, NULL, (yyvsp[(1) - (1)].objectcompclauses), NULL, NULL);
    }
    break;

  case 66:
#line 832 "token.y"
    {
        (yyval.cfgsecopt) = cons_config_sec_option(CB_CONFIG_SEC_SPNAMES, NULL, NULL, (yyvsp[(1) - (1)].object), NULL);
    }
    break;

  case 67:
#line 835 "token.y"
    {
        (yyval.cfgsecopt) = cons_config_sec_option(CB_CONFIG_SEC_REPOSITORY, NULL, NULL, NULL, (yyvsp[(1) - (1)].object));
    }
    break;

  case 68:
#line 841 "token.y"
    {
        (yyval.object) = (yyvsp[(3) - (3)].object);
    }
    break;

  case 69:
#line 846 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 70:
#line 847 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (2)].object);
    }
    break;

  case 71:
#line 852 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].object)); }
    break;

  case 72:
#line 853 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object));
    }
    break;

  case 73:
#line 858 "token.y"
    {
        (yyval.object) = (yyvsp[(2) - (3)].object);
    }
    break;

  case 74:
#line 861 "token.y"
    {
        (yyval.object) = NULL;  
    }
    break;

  case 75:
#line 866 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 76:
#line 867 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 77:
#line 873 "token.y"
    {
        (yyval.intchrpair) = cons_intchar_pair((yyvsp[(3) - (5)].sval), (yyvsp[(4) - (5)].ival));
    }
    break;

  case 78:
#line 878 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 79:
#line 879 "token.y"
    {
        (yyval.ival) = 1;
    }
    break;

  case 80:
#line 886 "token.y"
    { (yyval.objectcompclauses) = (yyvsp[(3) - (4)].objectcompclauses); }
    break;

  case 81:
#line 889 "token.y"
    {
        (yyval.objectcompclauses) = cons_object_computer_clauses((yyvsp[(1) - (2)].sval), NULL); 
    }
    break;

  case 82:
#line 892 "token.y"
    {
        (yyval.objectcompclauses) = cons_object_computer_clauses((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].object));
    }
    break;

  case 83:
#line 895 "token.y"
    {
        (yyval.objectcompclauses) = cons_object_computer_clauses(NULL, (yyvsp[(1) - (2)].object));
    }
    break;

  case 84:
#line 900 "token.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 85:
#line 903 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].objcompcl)); }
    break;

  case 86:
#line 904 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].objcompcl));
    }
    break;

  case 87:
#line 909 "token.y"
    {
        /* int pair */
        (yyval.objcompcl) = cons_obj_comp_clause(CB_OBJCOMP_MEM, (yyvsp[(1) - (1)].intpair), NULL, 0); 
    }
    break;

  case 88:
#line 913 "token.y"
    {
        /* char */
        (yyval.objcompcl) = cons_obj_comp_clause(CB_OBJCOMP_SEQ, NULL, (yyvsp[(1) - (1)].sval), 0);
    }
    break;

  case 89:
#line 917 "token.y"
    {
        /* int */
        (yyval.objcompcl) = cons_obj_comp_clause(CB_OBJCOMP_SEG, NULL, NULL, (yyvsp[(1) - (1)].ival));
    }
    break;

  case 90:
#line 923 "token.y"
    { (yyval.intpair) = cons_intpair((yyvsp[(3) - (4)].ival), (yyvsp[(4) - (4)].ival)); }
    break;

  case 91:
#line 926 "token.y"
    { (yyval.ival) = CB_MEM_WORDS; }
    break;

  case 92:
#line 927 "token.y"
    { (yyval.ival) = CB_MEM_CHARS; }
    break;

  case 93:
#line 928 "token.y"
    { (yyval.ival) = CB_MEM_MODULE; }
    break;

  case 94:
#line 931 "token.y"
    { (yyval.sval) = (yyvsp[(5) - (5)].sval); }
    break;

  case 95:
#line 934 "token.y"
    { (yyval.ival) = (yyvsp[(3) - (3)].ival); }
    break;

  case 96:
#line 940 "token.y"
    { (yyval.object) = (yyvsp[(3) - (3)].object); }
    break;

  case 97:
#line 943 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 98:
#line 944 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 99:
#line 947 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].spnames)); }
    break;

  case 100:
#line 948 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].spnames));
    }
    break;

  case 101:
#line 953 "token.y"
    {
        (yyval.spnames) = cons_special_names(CB_SN_CURRENCY, (yyvsp[(4) - (5)].sval));
    }
    break;

  case 102:
#line 956 "token.y"
    {
        (yyval.spnames) = cons_special_names(CB_SN_DECIMALPT, NULL);
    }
    break;

  case 103:
#line 971 "token.y"
    {
        (yyval.cobobject) = cons_input_output_section((yyvsp[(2) - (2)].object), NULL);
    }
    break;

  case 104:
#line 974 "token.y"
    {
        (yyval.cobobject) = cons_input_output_section(NULL, (yyvsp[(2) - (2)].object));
    }
    break;

  case 107:
#line 989 "token.y"
    { 
        (yyval.object) = cons_io_control((yyvsp[(3) - (3)].object)); 
    }
    break;

  case 108:
#line 994 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 109:
#line 995 "token.y"
    { (yyval.object) = (yyvsp[(1) - (2)].object); }
    break;

  case 110:
#line 998 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].iocontrolitem)); }
    break;

  case 111:
#line 999 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].iocontrolitem));
    }
    break;

  case 112:
#line 1005 "token.y"
    {
        /* this is struct _same_clause ptr */
        (yyval.iocontrolitem) = cons_io_control_item(CB_IOCONTROL_SAME, (yyvsp[(1) - (1)].sameclause), NULL);
    }
    break;

  case 113:
#line 1009 "token.y"
    {
        (yyval.iocontrolitem) = cons_io_control_item(CB_IOCONTROL_MULTI, NULL, (yyvsp[(1) - (1)].object)); 
    }
    break;

  case 114:
#line 1014 "token.y"
    { 
        (yyval.sameclause) = cons_same_clause( (yyvsp[(2) - (5)].ival), (yyvsp[(5) - (5)].object) );
    }
    break;

  case 115:
#line 1019 "token.y"
    { (yyval.ival) = CB_SAME_ABSENT; }
    break;

  case 116:
#line 1020 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 117:
#line 1023 "token.y"
    { (yyval.ival) = CB_SAME_RECORD; }
    break;

  case 118:
#line 1024 "token.y"
    { (yyval.ival) = CB_SAME_SORT; }
    break;

  case 119:
#line 1025 "token.y"
    { (yyval.ival) = CB_SAME_SORT_MERGE; }
    break;

  case 120:
#line 1028 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].idValWithOpt)); }
    break;

  case 121:
#line 1029 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].idValWithOpt));
    }
    break;

  case 122:
#line 1032 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (yyvsp[(3) - (3)].idValWithOpt));
    }
    break;

  case 123:
#line 1037 "token.y"
    {
        (yyval.object) = (yyvsp[(5) - (5)].object);
    }
    break;

  case 124:
#line 1042 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].intidpair)); }
    break;

  case 125:
#line 1043 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].intidpair));
    }
    break;

  case 126:
#line 1048 "token.y"
    {
        (yyval.intidpair) = cons_int_id_pair((yyvsp[(2) - (2)].ival), (yyvsp[(1) - (2)].idValWithOpt));
    }
    break;

  case 127:
#line 1053 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 128:
#line 1054 "token.y"
    { (yyval.ival) = (yyvsp[(2) - (2)].ival); }
    break;

  case 129:
#line 1061 "token.y"
    { 
        (yyval.object) = cons_file_control((yyvsp[(3) - (3)].object)); 
    }
    break;

  case 130:
#line 1067 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].filecontrolexpr)); }
    break;

  case 131:
#line 1068 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].filecontrolexpr));
    }
    break;

  case 132:
#line 1079 "token.y"
    {
        (yyval.filecontrolexpr) = cons_file_control_expression((yyvsp[(2) - (5)].ival), (yyvsp[(3) - (5)].sval), (yyvsp[(4) - (5)].object));
    }
    break;

  case 133:
#line 1084 "token.y"
    {   /* 
        dbg_print(DBG_TRACE, "setting flag 0 \n");
        setFCIOptFlag(0); 
        dbg_print(DBG_TRACE, "setting flag 0 done\n");
        */
        (yyval.ival) = CB_OPT_NOTDEFINED;
    }
    break;

  case 134:
#line 1091 "token.y"
    { 
        if((yyvsp[(1) - (2)].ival) == 0) {
            (yyval.ival) = CB_OPT_OPTIONAL;
            /* setFCIOptFlag(1); */
        }
        else { 
            (yyval.ival) = CB_OPT_NOTOPTIONAL;
            /* setFCIOptFlag(2); */
        }
    }
    break;

  case 135:
#line 1104 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].filecontrolclause)); }
    break;

  case 136:
#line 1105 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].filecontrolclause));
    }
    break;

  case 137:
#line 1111 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_gnamepair(CB_FCC_ASSIGN, (yyvsp[(1) - (1)].gnamepairint));
    }
    break;

  case 138:
#line 1114 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_int(CB_FCC_RESERVE, (yyvsp[(1) - (1)].ival));
    }
    break;

  case 139:
#line 1117 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_int(CB_FCC_ORG, (yyvsp[(1) - (1)].ival));
    }
    break;

  case 140:
#line 1120 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_val(CB_FCC_PADDING, (yyvsp[(1) - (1)].varVal));
    }
    break;

  case 141:
#line 1123 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_xval(CB_FCC_DELIM, (yyvsp[(1) - (1)].xvaldatatype));
    }
    break;

  case 142:
#line 1126 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_int_xval(CB_FCC_ACCESS, (yyvsp[(1) - (1)].intxval));
    }
    break;

  case 143:
#line 1129 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_int(CB_FCC_LOCK, (yyvsp[(1) - (1)].ival));
    }
    break;

  case 144:
#line 1132 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_xval(CB_FCC_CODESET, (yyvsp[(1) - (1)].xvaldatatype));
    }
    break;

  case 145:
#line 1135 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_xval(CB_FCC_COLLATING, (yyvsp[(1) - (1)].xvaldatatype));
    }
    break;

  case 146:
#line 1138 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_reckey(CB_FCC_RECKEY, (yyvsp[(1) - (1)].reckeyclause));
    }
    break;

  case 147:
#line 1141 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_key(CB_FCC_KEYCLAUSE, (yyvsp[(1) - (1)].object));
    }
    break;

  case 148:
#line 1144 "token.y"
    {
        (yyval.filecontrolclause) = cons_fcc_item_xval(CB_FCC_FILESTATUE, (yyvsp[(1) - (1)].xvaldatatype));
    }
    break;

  case 149:
#line 1155 "token.y"
    { (yyval.gnamepairint) = (yyvsp[(1) - (1)].gnamepairint); }
    break;

  case 150:
#line 1158 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 151:
#line 1161 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 152:
#line 1164 "token.y"
    { (yyval.varVal) = (yyvsp[(1) - (1)].varVal); }
    break;

  case 153:
#line 1167 "token.y"
    { (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype); }
    break;

  case 154:
#line 1170 "token.y"
    { (yyval.intxval) = (yyvsp[(1) - (1)].intxval); }
    break;

  case 155:
#line 1173 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 156:
#line 1176 "token.y"
    { (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype); }
    break;

  case 157:
#line 1179 "token.y"
    { (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype); }
    break;

  case 158:
#line 1182 "token.y"
    { (yyval.reckeyclause) = (yyvsp[(1) - (1)].reckeyclause); }
    break;

  case 159:
#line 1185 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 160:
#line 1188 "token.y"
    { (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype); }
    break;

  case 161:
#line 1192 "token.y"
    {
        (yyval.ival) = (yyvsp[(2) - (4)].ival);
    }
    break;

  case 162:
#line 1197 "token.y"
    { (yyval.ival) = -1;}
    break;

  case 163:
#line 1198 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 166:
#line 1208 "token.y"
    { /* many more options to handle */
        (yyval.gnamepairint) = (yyvsp[(3) - (3)].gnamepairint);
    }
    break;

  case 167:
#line 1213 "token.y"
    {
        (yyval.gnamepairint) = cons_file_assignment_clause((yyvsp[(1) - (2)].varVal), (yyvsp[(2) - (2)].varVal), 0);
    }
    break;

  case 168:
#line 1216 "token.y"
    {
        (yyval.gnamepairint) = cons_file_assignment_clause(NULL, (yyvsp[(2) - (2)].varVal), (yyvsp[(1) - (2)].ival));
    }
    break;

  case 169:
#line 1235 "token.y"
    { (yyval.ival) = CB_DISPLAY; }
    break;

  case 170:
#line 1236 "token.y"
    { (yyval.ival) = CB_INPUT; }
    break;

  case 171:
#line 1237 "token.y"
    { (yyval.ival) = CB_OUTPUT; }
    break;

  case 172:
#line 1238 "token.y"
    { (yyval.ival) = CB_INPUT_OUTPUT; }
    break;

  case 173:
#line 1239 "token.y"
    { (yyval.ival) = CB_RANDOM; }
    break;

  case 174:
#line 1240 "token.y"
    { (yyval.ival) = CB_TAPE; }
    break;

  case 175:
#line 1243 "token.y"
    { (yyval.varVal) = NULL; }
    break;

  case 176:
#line 1244 "token.y"
    {
        (yyval.varVal) = (yyvsp[(1) - (1)].varVal);
    }
    break;

  case 177:
#line 1249 "token.y"
    { (yyval.ival) = CB_FL_LINE_SEQUENTIAL; }
    break;

  case 178:
#line 1250 "token.y"
    { (yyval.ival) = CB_FL_SEQUENTIAL; }
    break;

  case 179:
#line 1251 "token.y"
    { (yyval.ival) = CB_FL_BIN_SEQUENTIAL; }
    break;

  case 180:
#line 1252 "token.y"
    { (yyval.ival) = CB_FL_RELATIVE; }
    break;

  case 181:
#line 1253 "token.y"
    { (yyval.ival) = CB_FL_INDEXED; }
    break;

  case 182:
#line 1256 "token.y"
    { /* literal or identifter */
        (yyval.varVal) = (yyvsp[(4) - (4)].varVal);
    }
    break;

  case 183:
#line 1261 "token.y"
    { (yyval.xvaldatatype) = (yyvsp[(4) - (4)].xvaldatatype); }
    break;

  case 184:
#line 1264 "token.y"
    { (yyval.xvaldatatype) = NULL; }
    break;

  case 185:
#line 1266 "token.y"
    { /* this is delimiter_name could be string literal or identifier */
        (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype);
    }
    break;

  case 186:
#line 1271 "token.y"
    {
        (yyval.intxval) = cons_accessmode_clause((yyvsp[(4) - (5)].ival), (yyvsp[(5) - (5)].xvaldatatype));
    }
    break;

  case 187:
#line 1276 "token.y"
    { (yyval.ival) = CB_FM_SEQUENTIAL; }
    break;

  case 188:
#line 1277 "token.y"
    { (yyval.ival) = CB_FM_RANDOM; }
    break;

  case 189:
#line 1278 "token.y"
    { (yyval.ival) = CB_FM_DYNAMIC; }
    break;

  case 190:
#line 1281 "token.y"
    { (yyval.xvaldatatype) = NULL; }
    break;

  case 191:
#line 1282 "token.y"
    { /* data name: identifier or literal */
        (yyval.xvaldatatype) = (yyvsp[(4) - (4)].xvaldatatype); 
    }
    break;

  case 192:
#line 1287 "token.y"
    { (yyval.ival) = (yyvsp[(4) - (4)].ival); }
    break;

  case 193:
#line 1290 "token.y"
    { (yyval.ival) = CB_LM_MAN_ON_MUL_REC; }
    break;

  case 194:
#line 1291 "token.y"
    { (yyval.ival) = CB_LM_AUT_ON_MUL_REC; }
    break;

  case 195:
#line 1292 "token.y"
    { (yyval.ival) = CB_LM_EXCLUSIVE; }
    break;

  case 200:
#line 1302 "token.y"
    { /* alphabet name as per rmss */
        (yyval.xvaldatatype) = (yyvsp[(3) - (3)].xvaldatatype);
    }
    break;

  case 201:
#line 1307 "token.y"
    { /* alphabet name as per rmss */
        (yyval.xvaldatatype) = (yyvsp[(4) - (4)].xvaldatatype);
    }
    break;

  case 202:
#line 1313 "token.y"
    {
        (yyval.reckeyclause) = mod_record_key_clause((yyvsp[(4) - (5)].reckeyclause), (yyvsp[(5) - (5)].ival));
    }
    break;

  case 203:
#line 1318 "token.y"
    { (yyval.reckeyclause) = cons_record_key_clause( (yyvsp[(1) - (1)].xvaldatatype), NULL, NULL); }
    break;

  case 204:
#line 1319 "token.y"
    {
        (yyval.reckeyclause) = cons_record_key_clause( NULL, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].itemList));
    }
    break;

  case 205:
#line 1324 "token.y"
    { (yyval.itemList) = start_generic_list((void *) (yyvsp[(1) - (1)].sval)); }
    break;

  case 206:
#line 1325 "token.y"
    {
        (yyval.itemList) = addto_generic_list((yyvsp[(1) - (2)].itemList), (yyvsp[(2) - (2)].sval));
    }
    break;

  case 207:
#line 1328 "token.y"
    {
        (yyval.itemList) = addto_generic_list((yyvsp[(1) - (3)].itemList), (yyvsp[(3) - (3)].sval));
    }
    break;

  case 208:
#line 1333 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 209:
#line 1336 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].reckeyclause)); }
    break;

  case 210:
#line 1337 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].reckeyclause));
    }
    break;

  case 211:
#line 1343 "token.y"
    {
        (yyval.reckeyclause) = mod_record_key_clause((yyvsp[(5) - (6)].reckeyclause), (yyvsp[(6) - (6)].ival));
    }
    break;

  case 212:
#line 1348 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 213:
#line 1349 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 214:
#line 1352 "token.y"
    {
        (yyval.xvaldatatype) = (yyvsp[(4) - (4)].xvaldatatype);
    }
    break;

  case 217:
#line 1364 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 218:
#line 1367 "token.y"
    {
        (yyval.object) = cons_data_division((yyvsp[(4) - (4)].object));
        dbg_print(DBG_PARSER, "In Data Division ...\n"); 
    }
    break;

  case 219:
#line 1371 "token.y"
    { dbg_print(DBG_ERROR, "Error in Data Division ...\n"); 
        (yyval.object) = NULL; yyerrok;
    }
    break;

  case 220:
#line 1376 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 221:
#line 1378 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 222:
#line 1381 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].object)); }
    break;

  case 223:
#line 1382 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].object));
    }
    break;

  case 224:
#line 1387 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 225:
#line 1388 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 226:
#line 1389 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 227:
#line 1390 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 228:
#line 1391 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 229:
#line 1392 "token.y"
    { (yyval.object) = NULL;}
    break;

  case 230:
#line 1393 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 231:
#line 1400 "token.y"
    {
        (yyval.object) = cons_file_section((yyvsp[(4) - (4)].object));
        dbg_print(DBG_PARSER, "In file section ...\n"); 
    }
    break;

  case 232:
#line 1404 "token.y"
    { dbg_print(DBG_ERROR, "Error in file section ...\n"); }
    break;

  case 233:
#line 1407 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 234:
#line 1408 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 235:
#line 1411 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].object)); }
    break;

  case 236:
#line 1412 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].object));
    }
    break;

  case 237:
#line 1417 "token.y"
    {
        /* addFileDiscriptor(CB_FD_FD); */
        (yyval.object) = set_file_description_type( CB_FD_FD, (yyvsp[(2) - (2)].object));
    }
    break;

  case 238:
#line 1421 "token.y"
    {
        /* addFileDiscriptor(CB_FD_SD); */
        (yyval.object) = set_file_description_type( CB_FD_SD, (yyvsp[(2) - (2)].object)); // this needs to be modified with the FD/SD flag. 
    }
    break;

  case 239:
#line 1429 "token.y"
    {
        dbg_print(DBG_TRACE, "FD_SD_MAIN: Identifier ....: %s\n", (yyvsp[(1) - (5)].sval)); 
        (yyval.object) = cons_file_description((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].object), (yyvsp[(5) - (5)].object));
    }
    break;

  case 240:
#line 1435 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 241:
#line 1436 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 242:
#line 1439 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 243:
#line 1440 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 244:
#line 1443 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (2)].fdsdoption)); }
    break;

  case 245:
#line 1444 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *)(yyvsp[(2) - (3)].fdsdoption));
    }
    break;

  case 246:
#line 1449 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_int(CB_FDSD_EXTERNAL, 1); }
    break;

  case 247:
#line 1450 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_int(CB_FDSD_GLOBAL, 1); }
    break;

  case 248:
#line 1451 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_void(CB_FDSD_LAB_REC_CLAUSE, (yyvsp[(1) - (1)].object)); }
    break;

  case 249:
#line 1452 "token.y"
    { 
        (yyval.fdsdoption) = cons_fdsd_opt_reccon(CB_FDSD_REC_CON_CLAUSE, (yyvsp[(1) - (1)].reccontainsclause)); 
        /* this will define the size of the record in case of FORMAT-U type files - IBM. 
           This should override the item 01 sizes while read/write. When this is not defined the record 
           length is determined by largest of the 01 level field. When RECORD IS VARYING defined it depends 
           on the size defined in the second integer. When RECORD IS VARYING DEPENDING on IDF, size is take
           from IDF.
           Create the routine that takes the FD record and tell you the physical size that can be passed on to 
           to the DataItem class in constructor. 
        */
    }
    break;

  case 250:
#line 1463 "token.y"
    { 
        (yyval.fdsdoption) = cons_fdsd_opt_blockcon(CB_FDSD_BLO_CON_CLAUSE, (yyvsp[(1) - (1)].blockcontains)); 
        /* this can be ignored. File handling in object oriented lang will leave these details to immpelemtation */
    }
    break;

  case 251:
#line 1467 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_void(CB_FDSD_DATA_REC_CLAUSE, (yyvsp[(1) - (1)].object)); }
    break;

  case 252:
#line 1468 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_void(CB_FDSD_VAL_OF_CLAUSE, (yyvsp[(1) - (1)].object)); }
    break;

  case 253:
#line 1469 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_linage_clause(CB_FDSD_LINAGE_CLAUSE, (yyvsp[(1) - (1)].linageclause)); }
    break;

  case 254:
#line 1470 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_codeset(CB_FDSD_CODESET_CLAUSE, (yyvsp[(1) - (1)].sval)); }
    break;

  case 255:
#line 1471 "token.y"
    { (yyval.fdsdoption) = cons_fdsd_opt_report(CB_FDSD_REPORT_CLAUSE, (yyvsp[(1) - (1)].sval)); }
    break;

  case 256:
#line 1475 "token.y"
    {
        (yyval.sval) = (yyvsp[(3) - (3)].sval);
    }
    break;

  case 257:
#line 1478 "token.y"
    {
        (yyval.sval) = (yyvsp[(3) - (3)].sval);
    }
    break;

  case 258:
#line 1483 "token.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 259:
#line 1486 "token.y"
    { (yyval.sval) = (yyvsp[(3) - (3)].sval); }
    break;

  case 260:
#line 1489 "token.y"
    { 
        (yyval.linageclause) = cons_linage_clause((yyvsp[(3) - (6)].idint), (yyvsp[(4) - (6)].idint), (yyvsp[(5) - (6)].idint), (yyvsp[(6) - (6)].idint));
    }
    break;

  case 261:
#line 1494 "token.y"
    {  (yyval.idint) = cons_int_id( CB_IDENTIFIER, 0, (yyvsp[(1) - (1)].idValWithOpt)); }
    break;

  case 262:
#line 1495 "token.y"
    {  (yyval.idint) = cons_int_id( CB_INT, (yyvsp[(1) - (1)].ival), NULL); }
    break;

  case 263:
#line 1498 "token.y"
    { (yyval.idint) = NULL; }
    break;

  case 264:
#line 1499 "token.y"
    { (yyval.idint) = (yyvsp[(4) - (4)].idint); }
    break;

  case 265:
#line 1502 "token.y"
    { (yyval.idint) = NULL; }
    break;

  case 266:
#line 1503 "token.y"
    { (yyval.idint) = (yyvsp[(4) - (4)].idint); }
    break;

  case 267:
#line 1506 "token.y"
    { (yyval.idint) = NULL; }
    break;

  case 268:
#line 1507 "token.y"
    { (yyval.idint) = (yyvsp[(4) - (4)].idint); }
    break;

  case 269:
#line 1510 "token.y"
    { (yyval.object) = (yyvsp[(3) - (3)].object); }
    break;

  case 270:
#line 1513 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].valclauseitem)); }
    break;

  case 271:
#line 1514 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].valclauseitem));
    }
    break;

  case 272:
#line 1519 "token.y"
    {
        (yyval.valclauseitem) = cons_val_clause_item((yyvsp[(1) - (3)].idValWithOpt), (yyvsp[(3) - (3)].varVal));
    }
    break;

  case 273:
#line 1524 "token.y"
    { (yyval.idValWithOpt) = NULL; }
    break;

  case 274:
#line 1525 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(1) - (1)].idValWithOpt); }
    break;

  case 275:
#line 1528 "token.y"
    { (yyval.object) = (yyvsp[(4) - (4)].itemList); }
    break;

  case 276:
#line 1529 "token.y"
    { (yyval.object) = (yyvsp[(4) - (4)].itemList); }
    break;

  case 277:
#line 1532 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 278:
#line 1533 "token.y"
    { (yyval.object) = (yyvsp[(3) - (3)].itemList); }
    break;

  case 279:
#line 1536 "token.y"
    {
        (yyval.blockcontains) = cons_block_contains_clause((yyvsp[(3) - (5)].ival), (yyvsp[(4) - (5)].ival), (yyvsp[(5) - (5)].ival));
    }
    break;

  case 280:
#line 1541 "token.y"
    { (yyval.ival) = CB_SL_RECORDS; }
    break;

  case 281:
#line 1542 "token.y"
    { (yyval.ival) = CB_SL_CHARACTERS; }
    break;

  case 282:
#line 1545 "token.y"
    { /* struct _intpair ptr */
        (yyval.reccontainsclause) = cons_record_contains_clause(CB_REC_CON, (yyvsp[(1) - (1)].intpair), NULL);
    }
    break;

  case 283:
#line 1548 "token.y"
    { /* void ptr */
        (yyval.reccontainsclause) = cons_record_contains_clause(CB_REC_VAR, NULL, (yyvsp[(1) - (1)].object));
    }
    break;

  case 284:
#line 1553 "token.y"
    {
        (yyval.intpair) = cons_intpair((yyvsp[(3) - (5)].ival), (yyvsp[(4) - (5)].ival));
        /* come back again. In some variants CHARACTERS is optional */
    }
    break;

  case 285:
#line 1559 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 286:
#line 1560 "token.y"
    { (yyval.ival) = (yyvsp[(2) - (2)].ival); }
    break;

  case 287:
#line 1563 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 288:
#line 1564 "token.y"
    { (yyval.ival) = (yyvsp[(2) - (2)].ival); }
    break;

  case 289:
#line 1568 "token.y"
    { (yyval.object) = (yyvsp[(6) - (6)].object); }
    break;

  case 290:
#line 1571 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 291:
#line 1572 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 292:
#line 1575 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].variationclause)); }
    break;

  case 293:
#line 1576 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].variationclause));
    }
    break;

  case 294:
#line 1581 "token.y"
    { 
        (yyval.variationclause) = cons_variation_clause(CB_VAR_FROMTO, (yyvsp[(1) - (1)].intpair), NULL); 
    }
    break;

  case 295:
#line 1584 "token.y"
    {
        (yyval.variationclause) = cons_variation_clause(CB_VAR_DEPEND, NULL, (yyvsp[(1) - (1)].idValWithOpt)); 
    }
    break;

  case 296:
#line 1589 "token.y"
    {
        (yyval.intpair) = cons_intpair((yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival));
    }
    break;

  case 297:
#line 1594 "token.y"
    {
        (yyval.idValWithOpt) = (yyvsp[(3) - (3)].idValWithOpt);
    }
    break;

  case 298:
#line 1599 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].object)); }
    break;

  case 299:
#line 1600 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].object));
    }
    break;

  case 300:
#line 1605 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 301:
#line 1611 "token.y"
    { 
        (yyval.object) = cons_field_description((yyvsp[(1) - (4)].ival), (yyvsp[(2) - (4)].sval), (yyvsp[(3) - (4)].object));
    }
    break;

  case 302:
#line 1616 "token.y"
    {  (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 303:
#line 1619 "token.y"
    { (yyval.sval) = NULL; }
    break;

  case 304:
#line 1620 "token.y"
    { (yyval.sval) = strdup("FILLER"); }
    break;

  case 305:
#line 1621 "token.y"
    { (yyval.sval) = strdup((yyvsp[(1) - (1)].sval)); }
    break;

  case 306:
#line 1624 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 307:
#line 1625 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 308:
#line 1628 "token.y"
    { 
        (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].dataclause)); 
        dbg_print(DBG_TRACE, "Inside : Data clause \n"); 
    }
    break;

  case 309:
#line 1632 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].dataclause));
        dbg_print(DBG_TRACE, "Inside : Data clause -list \n"); 
    }
    break;

  case 310:
#line 1638 "token.y"
    { (yyval.dataclause) = cons_dataclause_str(CB_DC_REDEFINE, (yyvsp[(1) - (1)].sval)); }
    break;

  case 311:
#line 1639 "token.y"
    { (yyval.dataclause) = cons_dataclause_str(CB_DC_PICTURE, (yyvsp[(1) - (1)].sval)); }
    break;

  case 312:
#line 1640 "token.y"
    { (yyval.dataclause) = cons_dataclause_gnamepairlst(CB_DC_VALUE, (yyvsp[(1) - (1)].object)); }
    break;

  case 313:
#line 1641 "token.y"
    { (yyval.dataclause) = cons_dataclause_usage(CB_DC_USAGE, (yyvsp[(1) - (1)].usageclause)); }
    break;

  case 314:
#line 1642 "token.y"
    { (yyval.dataclause) = cons_dataclause_int(CB_DC_EXTERN, (yyvsp[(1) - (1)].ival)); }
    break;

  case 315:
#line 1643 "token.y"
    { (yyval.dataclause) = cons_dataclause_int(CB_DC_GLOBAL, (yyvsp[(1) - (1)].ival)); }
    break;

  case 316:
#line 1644 "token.y"
    { (yyval.dataclause) = cons_dataclause_int(CB_DC_SIGN, (yyvsp[(1) - (1)].ival)); }
    break;

  case 317:
#line 1645 "token.y"
    { (yyval.dataclause) = cons_dataclause_occur(CB_DC_OCCUR, (yyvsp[(1) - (1)].occuranceclause)); }
    break;

  case 318:
#line 1646 "token.y"
    { (yyval.dataclause) = cons_dataclause_int(CB_DC_SYNCH, (yyvsp[(1) - (1)].ival)); }
    break;

  case 319:
#line 1647 "token.y"
    { (yyval.dataclause) = cons_dataclause_int(CB_DC_JUSTIFY, (yyvsp[(1) - (1)].ival)); }
    break;

  case 320:
#line 1648 "token.y"
    { (yyval.dataclause) = cons_dataclause_int(CB_DC_BLANK, (yyvsp[(1) - (1)].ival)); }
    break;

  case 321:
#line 1649 "token.y"
    { (yyval.dataclause) = (yyvsp[(1) - (1)].dataclause); }
    break;

  case 322:
#line 1652 "token.y"
    { 
        cons_dataclause_rename(CB_DC_RENAMES, (yyvsp[(2) - (3)].sval), (yyvsp[(3) - (3)].sval)); 
    }
    break;

  case 323:
#line 1657 "token.y"
    { (yyval.sval) = NULL; }
    break;

  case 324:
#line 1658 "token.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 325:
#line 1661 "token.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 326:
#line 1665 "token.y"
    { (yyval.sval) = strdup((yyvsp[(3) - (3)].sval)); }
    break;

  case 329:
#line 1688 "token.y"
    {
        (yyval.object) = (yyvsp[(3) - (3)].object);
    }
    break;

  case 330:
#line 1693 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].gnamepair)); }
    break;

  case 331:
#line 1694 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].gnamepair));
    }
    break;

  case 332:
#line 1697 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *)(yyvsp[(3) - (3)].gnamepair));
    }
    break;

  case 333:
#line 1703 "token.y"
    { 
        (yyval.gnamepair) = cons_value_pair((yyvsp[(1) - (1)].varVal), NULL); 
    }
    break;

  case 334:
#line 1706 "token.y"
    { 
        (yyval.gnamepair) = cons_value_pair((yyvsp[(1) - (3)].varVal), (yyvsp[(3) - (3)].varVal)); 
    }
    break;

  case 335:
#line 1713 "token.y"
    { 
        (yyval.usageclause) = (yyvsp[(3) - (3)].dsuageitem);
        dbg_print(DBG_TRACE, "Inside : USAGE clause \n"); 
    }
    break;

  case 336:
#line 1720 "token.y"
    {
        (yyval.usageclause) = (yyvsp[(1) - (2)].dsuageitem);
    }
    break;

  case 338:
#line 1729 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_BINARY, (yyvsp[(2) - (2)].ival)); }
    break;

  case 339:
#line 1730 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_COMP, 0); }
    break;

  case 340:
#line 1731 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_COMP_1, 0); }
    break;

  case 341:
#line 1732 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_COMP_2, 0); }
    break;

  case 342:
#line 1733 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_COMP_3, (yyvsp[(2) - (2)].ival)); }
    break;

  case 343:
#line 1734 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_COMP_4, (yyvsp[(2) - (2)].ival)); }
    break;

  case 344:
#line 1735 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_COMP_5, (yyvsp[(2) - (2)].ival)); }
    break;

  case 345:
#line 1736 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_COMP_6, 0); }
    break;

  case 346:
#line 1737 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_DISPLAY, 0); }
    break;

  case 347:
#line 1738 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_INDEX, 0); }
    break;

  case 348:
#line 1739 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_PACKED_DECIMAL, 0); }
    break;

  case 349:
#line 1740 "token.y"
    { (yyval.dsuageitem) = construct_usage_clause(CB_UC_POINTER, 0); }
    break;

  case 350:
#line 1743 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 351:
#line 1746 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 352:
#line 1751 "token.y"
    { (yyval.ival) = (yyvsp[(3) - (4)].ival); }
    break;

  case 355:
#line 1757 "token.y"
    { (yyval.ival) = CB_LEADING; }
    break;

  case 356:
#line 1758 "token.y"
    { (yyval.ival) = CB_TRAILING; }
    break;

  case 359:
#line 1765 "token.y"
    { (yyval.occuranceclause) = (yyvsp[(2) - (2)].occuranceclause); }
    break;

  case 360:
#line 1773 "token.y"
    { 
        (yyvsp[(1) - (1)].occuranceclause)->multi = 1; 
        (yyval.occuranceclause) = (yyvsp[(1) - (1)].occuranceclause);
    }
    break;

  case 361:
#line 1786 "token.y"
    {
        dbg_print(DBG_PARSER, "Inside : occurance clause - multi \n"); 
        (yyval.occuranceclause) = construct_occurance((yyvsp[(1) - (6)].ival), (yyvsp[(2) - (6)].ival), (yyvsp[(4) - (6)].sval));
    }
    break;

  case 364:
#line 1795 "token.y"
    { (yyval.sval) = NULL; }
    break;

  case 365:
#line 1796 "token.y"
    {
        (yyval.sval) = (yyvsp[(3) - (3)].sval);
    }
    break;

  case 380:
#line 1828 "token.y"
    { (yyval.ival) = CB_SY_LEFT; }
    break;

  case 381:
#line 1829 "token.y"
    { (yyval.ival) = CB_SY_RIGHT; }
    break;

  case 382:
#line 1832 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 383:
#line 1835 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 384:
#line 1842 "token.y"
    {
        (yyval.object) = cons_working_storage_section((yyvsp[(4) - (4)].object));
    }
    break;

  case 385:
#line 1845 "token.y"
    { dbg_print(DBG_TRACE, "Error in Working storage section ...\n"); }
    break;

  case 386:
#line 1848 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 387:
#line 1849 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 388:
#line 1852 "token.y"
    {
        /* addFieldDiscriptionList(NULL, CB_WS_SECTION); */
        (yyval.object) = (yyvsp[(1) - (1)].object);
    }
    break;

  case 389:
#line 1863 "token.y"
    {
        (yyval.object) = cons_local_storage_section((yyvsp[(4) - (4)].object));
    }
    break;

  case 390:
#line 1872 "token.y"
    { (yyval.object) = cons_linkage_section((yyvsp[(4) - (4)].object)); }
    break;

  case 391:
#line 1875 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 392:
#line 1882 "token.y"
    {
        (yyval.object) = cons_communication_section((yyvsp[(4) - (4)].object));
    }
    break;

  case 393:
#line 1887 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].commsecitem)); }
    break;

  case 394:
#line 1888 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].commsecitem));
    }
    break;

  case 395:
#line 1896 "token.y"
    {
        (yyval.commsecitem) = cons_comm_section_item((yyvsp[(2) - (6)].sval), (yyvsp[(4) - (6)].comsecdetail), (yyvsp[(5) - (6)].object));
    }
    break;

  case 396:
#line 1901 "token.y"
    { (yyval.comsecdetail) = cons_comm_sec_details_opt( CB_FT_INPUT, (yyvsp[(1) - (1)].object)); }
    break;

  case 397:
#line 1902 "token.y"
    { (yyval.comsecdetail) = cons_comm_sec_details_opt( CB_FT_OUTPUT, (yyvsp[(1) - (1)].object)); }
    break;

  case 398:
#line 1903 "token.y"
    { (yyval.comsecdetail) = cons_comm_sec_details_opt( CB_FT_I_O, (yyvsp[(1) - (1)].object)); }
    break;

  case 399:
#line 1906 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].comminp)); }
    break;

  case 400:
#line 1907 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].comminp));
    }
    break;

  case 401:
#line 1913 "token.y"
    {
        (yyvsp[(3) - (3)].comminp)->initialflag = (yyvsp[(1) - (3)].ival);
        (yyval.comminp) = (yyvsp[(3) - (3)].comminp);
    }
    break;

  case 402:
#line 1919 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 403:
#line 1920 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 404:
#line 1924 "token.y"
    {
        (yyvsp[(1) - (2)].comminp)->idlist = (yyvsp[(2) - (2)].object);
        (yyval.comminp) = (yyvsp[(1) - (2)].comminp);
    }
    break;

  case 405:
#line 1930 "token.y"
    {
        (yyval.comminp) = construct_comm_inp((yyvsp[(1) - (3)].ival), (yyvsp[(3) - (3)].varVal));
    }
    break;

  case 406:
#line 1935 "token.y"
    { (yyval.ival) = CB_SYM_QUEUE; }
    break;

  case 407:
#line 1936 "token.y"
    { (yyval.ival) = CB_SYM_SUBQ1; }
    break;

  case 408:
#line 1937 "token.y"
    { (yyval.ival) = CB_SYM_SUBQ2; }
    break;

  case 409:
#line 1938 "token.y"
    { (yyval.ival) = CB_SYM_SUBQ3; }
    break;

  case 410:
#line 1939 "token.y"
    { (yyval.ival) = CB_SYM_MSG_DATE; }
    break;

  case 411:
#line 1940 "token.y"
    { (yyval.ival) = CB_SYM_MSG_TIME; }
    break;

  case 412:
#line 1941 "token.y"
    { (yyval.ival) = CB_SYM_SOURCE; }
    break;

  case 413:
#line 1942 "token.y"
    { (yyval.ival) = CB_TXT_LENGTH; }
    break;

  case 414:
#line 1943 "token.y"
    { (yyval.ival) = CB_END_KEY; }
    break;

  case 415:
#line 1944 "token.y"
    { (yyval.ival) = CB_STATUS_KEY; }
    break;

  case 416:
#line 1945 "token.y"
    { (yyval.ival) = CB_MSG_COUNT; }
    break;

  case 417:
#line 1946 "token.y"
    { (yyval.ival) = CB_SYM_TERM; }
    break;

  case 418:
#line 1949 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 419:
#line 1950 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].itemList); }
    break;

  case 420:
#line 1954 "token.y"
    { (yyval.object) = (yyvsp[(2) - (2)].object); }
    break;

  case 421:
#line 1957 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 422:
#line 1958 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 423:
#line 1961 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].commout)); }
    break;

  case 424:
#line 1962 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].commout));
    }
    break;

  case 425:
#line 1967 "token.y"
    { 
        (yyval.commout) = cons_comm_outitem_val(CB_COMOUT_DEST, (yyvsp[(4) - (4)].varVal));
    }
    break;

  case 426:
#line 1970 "token.y"
    {
        (yyval.commout) = cons_comm_outitem_val(CB_COMOUT_TXTLEN, (yyvsp[(4) - (4)].varVal));
    }
    break;

  case 427:
#line 1973 "token.y"
    {
        (yyval.commout) = cons_comm_outitem_val(CB_COMOUT_STAKEY, (yyvsp[(4) - (4)].varVal));
    }
    break;

  case 428:
#line 1976 "token.y"
    {
        (yyval.commout) = cons_comm_outitem_dest(CB_COMOUT_DEST_TAB, (yyvsp[(4) - (5)].ival), (yyvsp[(5) - (5)].object));
    }
    break;

  case 429:
#line 1979 "token.y"
    {
        (yyval.commout) = cons_comm_outitem_val(CB_COMOUT_ERRKEY, (yyvsp[(4) - (4)].varVal));
    }
    break;

  case 430:
#line 1982 "token.y"
    {
        (yyval.commout) = cons_comm_outitem_val(CB_COMOUT_SYMDEST, (yyvsp[(4) - (4)].varVal));
    }
    break;

  case 431:
#line 1986 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 432:
#line 1987 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 433:
#line 1990 "token.y"
    { (yyval.object) = (yyvsp[(3) - (3)].itemList); }
    break;

  case 434:
#line 1994 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].comminp)); }
    break;

  case 435:
#line 1995 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].comminp));
    }
    break;

  case 436:
#line 2001 "token.y"
    {
        (yyvsp[(3) - (3)].comminp)->initialflag = (yyvsp[(1) - (3)].ival);
        (yyval.comminp) = (yyvsp[(3) - (3)].comminp);
    }
    break;

  case 437:
#line 2008 "token.y"
    { (yyval.comminp) = (yyvsp[(1) - (1)].comminp); }
    break;

  case 438:
#line 2025 "token.y"
    {
        (yyval.object) = cons_screen_section((yyvsp[(4) - (4)].object));
    }
    break;

  case 439:
#line 2030 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].scrdescrentry)); }
    break;

  case 440:
#line 2031 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].scrdescrentry));
    }
    break;

  case 441:
#line 2038 "token.y"
    {
        (yyval.scrdescrentry) = cons_screen_descr_entry((yyvsp[(1) - (4)].ival), (yyvsp[(2) - (4)].sval), (yyvsp[(3) - (4)].object));
    }
    break;

  case 442:
#line 2043 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].scrdescropt)); }
    break;

  case 443:
#line 2044 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].scrdescropt));
    }
    break;

  case 444:
#line 2049 "token.y"
    {
        (yyval.scrdescropt) = cons_scr_descr_options( (yyvsp[(1) - (4)].ival), (yyvsp[(3) - (4)].idValWithOpt), (yyvsp[(4) - (4)].numberoption), NULL, NULL, NULL);
    }
    break;

  case 445:
#line 2052 "token.y"
    {
        (yyval.scrdescropt) = cons_scr_descr_options(CB_SCRDSC_VALUE, NULL, NULL, (yyvsp[(2) - (2)].varVal), NULL, NULL);
    }
    break;

  case 446:
#line 2055 "token.y"
    {
        (yyval.scrdescropt) = cons_scr_descr_options(CB_SCRDSC_PICTURE, NULL, NULL, NULL, (yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].locdetails));
    }
    break;

  case 447:
#line 2060 "token.y"
    { (yyval.numberoption) = NULL; }
    break;

  case 448:
#line 2061 "token.y"
    { (yyval.numberoption) = (yyvsp[(1) - (1)].numberoption); }
    break;

  case 449:
#line 2064 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BACKGROUND; }
    break;

  case 450:
#line 2065 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BACKGROUNDCOLOR; }
    break;

  case 451:
#line 2066 "token.y"
    { (yyval.ival) =  CB_SCRDSC_FOREGROUND; }
    break;

  case 452:
#line 2067 "token.y"
    { (yyval.ival) =  CB_SCRDSC_FOREGROUNDCOLOR; }
    break;

  case 453:
#line 2068 "token.y"
    { (yyval.ival) =  CB_SCRDSC_USAGEDISPLAY; }
    break;

  case 454:
#line 2069 "token.y"
    { (yyval.ival) =  (yyvsp[(1) - (1)].ival); }
    break;

  case 455:
#line 2070 "token.y"
    { (yyval.ival) =  CB_SCRDSC_AUTO; }
    break;

  case 456:
#line 2071 "token.y"
    { (yyval.ival) =  CB_SCRDSC_AUTO_SKIP; }
    break;

  case 457:
#line 2072 "token.y"
    { (yyval.ival) =  CB_SCRDSC_SECURE; }
    break;

  case 458:
#line 2073 "token.y"
    { (yyval.ival) =  CB_SCRDSC_REQUIRED; }
    break;

  case 459:
#line 2074 "token.y"
    { (yyval.ival) =  CB_SCRDSC_FULL; }
    break;

  case 460:
#line 2075 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BELL; }
    break;

  case 461:
#line 2076 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BEEP; }
    break;

  case 462:
#line 2077 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BLANK_SCREEN; }
    break;

  case 463:
#line 2078 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BLANK_LINE; }
    break;

  case 464:
#line 2079 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BLANK_REMAINDER; }
    break;

  case 465:
#line 2080 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BLINK; }
    break;

  case 466:
#line 2081 "token.y"
    { (yyval.ival) =  CB_SCRDSC_ERASE_EOS; }
    break;

  case 467:
#line 2082 "token.y"
    { (yyval.ival) =  CB_SCRDSC_ERASE_EOL; }
    break;

  case 468:
#line 2083 "token.y"
    { (yyval.ival) =  CB_SCRDSC_ERASE_SCREEN; }
    break;

  case 469:
#line 2084 "token.y"
    { (yyval.ival) =  CB_SCRDSC_HIGHLIGHT; }
    break;

  case 470:
#line 2085 "token.y"
    { (yyval.ival) =  CB_SCRDSC_NO_HIGHLIGHT; }
    break;

  case 471:
#line 2086 "token.y"
    { (yyval.ival) =  CB_SCRDSC_LOWLIGHT; }
    break;

  case 472:
#line 2087 "token.y"
    { (yyval.ival) =  CB_SCRDSC_REVERSE; }
    break;

  case 473:
#line 2088 "token.y"
    { (yyval.ival) =  CB_SCRDSC_REVERSEVIDEO; }
    break;

  case 474:
#line 2089 "token.y"
    { (yyval.ival) =  CB_SCRDSC_UNDERLINE; }
    break;

  case 475:
#line 2090 "token.y"
    { (yyval.ival) =  CB_SCRDSC_LINE; }
    break;

  case 476:
#line 2091 "token.y"
    { (yyval.ival) =  CB_SCRDSC_COLUMN; }
    break;

  case 477:
#line 2092 "token.y"
    { (yyval.ival) =  CB_SCRDSC_BLANK_WHEN_ZERO; }
    break;

  case 478:
#line 2095 "token.y"
    {
        (yyval.numberoption) = (yyvsp[(3) - (3)].numberoption);
    }
    break;

  case 479:
#line 2100 "token.y"
    { (yyval.numberoption) = cons_number_option(CB_INT, (yyvsp[(2) - (2)].ival), NULL); }
    break;

  case 480:
#line 2101 "token.y"
    { (yyval.numberoption) = cons_number_option(CB_CHARPTR, 0, (yyvsp[(1) - (1)].sval)); }
    break;

  case 483:
#line 2107 "token.y"
    { (yyval.locdetails) = cons_location_details(CB_LOC_FROM, (yyvsp[(2) - (2)].varVal)); }
    break;

  case 484:
#line 2108 "token.y"
    { (yyval.locdetails) = cons_location_details(CB_LOC_TO, (yyvsp[(2) - (2)].varVal)); }
    break;

  case 485:
#line 2109 "token.y"
    { (yyval.locdetails) = cons_location_details(CB_LOC_USING, (yyvsp[(2) - (2)].varVal)); }
    break;

  case 503:
#line 2154 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].varVal)); }
    break;

  case 504:
#line 2155 "token.y"
    {
            (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].varVal)); 
    }
    break;

  case 505:
#line 2158 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *)(yyvsp[(3) - (3)].varVal)); 
    }
    break;

  case 564:
#line 2268 "token.y"
    { (yyval.varVal) = NULL; }
    break;

  case 565:
#line 2269 "token.y"
    { (yyval.varVal) = (yyvsp[(1) - (1)].varVal); }
    break;

  case 587:
#line 2325 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 588:
#line 2331 "token.y"
    {
        (yyval.object) = construct_procedure_division((yyvsp[(3) - (6)].usechainret), (yyvsp[(5) - (6)].object), (yyvsp[(6) - (6)].object) );
    }
    break;

  case 589:
#line 2334 "token.y"
    { dbg_print(DBG_ERROR, "Error in Procedure Division ...\n"); 
        (yyval.object) = NULL; yyerrok;
    }
    break;

  case 590:
#line 2341 "token.y"
    {
        (yyval.usechainret) = construct_use_chain_retur_clause((yyvsp[(1) - (3)].object), (yyvsp[(2) - (3)].object), (yyvsp[(3) - (3)].sval));
    }
    break;

  case 591:
#line 2346 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 592:
#line 2347 "token.y"
    { (yyval.object) = (yyvsp[(2) - (2)].object); }
    break;

  case 593:
#line 2350 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 594:
#line 2351 "token.y"
    { (yyval.object) = (yyvsp[(2) - (2)].object); }
    break;

  case 595:
#line 2354 "token.y"
    { (yyval.sval) = NULL; }
    break;

  case 596:
#line 2355 "token.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 597:
#line 2358 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].procitem)); }
    break;

  case 598:
#line 2359 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].procitem)); 
    }
    break;

  case 599:
#line 2362 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *)(yyvsp[(3) - (3)].procitem)); 
    }
    break;

  case 600:
#line 2367 "token.y"
    {
        (yyval.procitem) = construct_proc_param((yyvsp[(1) - (5)].ival), (yyvsp[(2) - (5)].ival), (yyvsp[(3) - (5)].ival), (yyvsp[(4) - (5)].ival), (yyvsp[(5) - (5)].sval));
    }
    break;

  case 601:
#line 2372 "token.y"
    { (yyval.ival) = CB_CALL_BY_DEFAULT; }
    break;

  case 602:
#line 2373 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 603:
#line 2376 "token.y"
    { (yyval.ival) = CB_CALL_BY_REF; }
    break;

  case 604:
#line 2377 "token.y"
    { (yyval.ival) = CB_CALL_BY_CONTENT; }
    break;

  case 605:
#line 2380 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 607:
#line 2384 "token.y"
    { (yyval.ival) = CB_SIZE_AUTO; }
    break;

  case 608:
#line 2385 "token.y"
    { (yyval.ival) = CB_SIZE_DEFAULT; }
    break;

  case 609:
#line 2386 "token.y"
    { (yyval.ival) = CB_SIZE_UNSIGNED; }
    break;

  case 610:
#line 2387 "token.y"
    { (yyval.ival) = CB_SIZE_NONE; }
    break;

  case 611:
#line 2390 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 612:
#line 2391 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 613:
#line 2394 "token.y"
    { (yyval.ival) = -1; }
    break;

  case 614:
#line 2395 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 615:
#line 2398 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 616:
#line 2399 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 617:
#line 2404 "token.y"
    {
        (yyval.object) = construct_declaratives((yyvsp[(3) - (6)].object));
    }
    break;

  case 618:
#line 2409 "token.y"
    { (yyval.object) = start_top_level_item((void *)(yyvsp[(1) - (1)].object)); }
    break;

  case 619:
#line 2410 "token.y"
    {
        (yyval.object) = addto_top_level_item((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].object)); 
    }
    break;

  case 620:
#line 2421 "token.y"
    { 
        (yyval.object) = (yyvsp[(1) - (1)].object);
    }
    break;

  case 621:
#line 2424 "token.y"
    { 
        (yyval.object) = (yyvsp[(1) - (1)].object);
    }
    break;

  case 622:
#line 2427 "token.y"
    { /* returns sentence */
        dbg_print(DBG_TRACE, "    proc_item: Proc statements\n"); 
        (yyval.object) = construct_proc_statements((yyvsp[(1) - (2)].object));
    }
    break;

  case 623:
#line 2439 "token.y"
    { 
        (yyval.object) = NULL; 
    }
    break;

  case 624:
#line 2444 "token.y"
    {
        (yyval.object) = construct_section_header((yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].varVal));
        dbg_print(DBG_PARSER, "Section - %s\n", (yyvsp[(1) - (4)].sval)); 
    }
    break;

  case 625:
#line 2450 "token.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 626:
#line 2453 "token.y"
    { (yyval.varVal) = NULL; }
    break;

  case 627:
#line 2454 "token.y"
    { (yyval.varVal) = (yyvsp[(1) - (1)].varVal); }
    break;

  case 628:
#line 2457 "token.y"
    { 
        (yyval.object) = construct_paragraph_header((yyvsp[(1) - (2)].sval)); 
        dbg_print(DBG_PARSER, "Paragraph - %s\n",(yyvsp[(1) - (2)].sval) ); 
    }
    break;

  case 629:
#line 2473 "token.y"
    { 
        dbg_print(DBG_TRACE, "statement_list: proc statements\n"); 
        (yyval.object) = (yyvsp[(1) - (1)].object);
    }
    break;

  case 630:
#line 2479 "token.y"
    { (yyval.object) = start_sentence((yyvsp[(1) - (1)].object)); }
    break;

  case 631:
#line 2480 "token.y"
    {
        (yyval.object) = addto_sentence((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object));
    }
    break;

  case 632:
#line 2491 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: perform\n"); }
    break;

  case 633:
#line 2492 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: move\n"); }
    break;

  case 634:
#line 2493 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: open\n"); }
    break;

  case 635:
#line 2494 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: close\n"); }
    break;

  case 636:
#line 2495 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: write\n"); }
    break;

  case 637:
#line 2496 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: read\n"); }
    break;

  case 638:
#line 2497 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: release\n"); }
    break;

  case 639:
#line 2498 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: return\n"); }
    break;

  case 640:
#line 2499 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: set\n"); }
    break;

  case 641:
#line 2500 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: sort\n"); }
    break;

  case 642:
#line 2501 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: display\n"); }
    break;

  case 643:
#line 2502 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: ifelse\n"); }
    break;

  case 644:
#line 2503 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: accept\n"); }
    break;

  case 645:
#line 2504 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: add\n"); }
    break;

  case 646:
#line 2505 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: subtract\n"); }
    break;

  case 647:
#line 2506 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: multiply\n"); }
    break;

  case 648:
#line 2507 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: divide\n"); }
    break;

  case 649:
#line 2508 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: compute\n"); }
    break;

  case 650:
#line 2509 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: stop\n"); }
    break;

  case 651:
#line 2510 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: use\n"); }
    break;

  case 652:
#line 2511 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: go to\n"); }
    break;

  case 653:
#line 2512 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: alter\n"); }
    break;

  case 654:
#line 2513 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: exit\n"); }
    break;

  case 655:
#line 2514 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: call\n"); }
    break;

  case 656:
#line 2515 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: enter\n"); }
    break;

  case 657:
#line 2516 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: merge\n"); }
    break;

  case 658:
#line 2517 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: evaluate\n"); }
    break;

  case 659:
#line 2518 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: rewrite\n"); }
    break;

  case 660:
#line 2519 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: goback\n"); }
    break;

  case 661:
#line 2520 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: purge\n"); }
    break;

  case 662:
#line 2521 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: unlock\n"); }
    break;

  case 663:
#line 2522 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: cancel\n"); }
    break;

  case 664:
#line 2523 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: delete\n"); }
    break;

  case 665:
#line 2524 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: string\n"); }
    break;

  case 666:
#line 2525 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: unstring\n"); }
    break;

  case 667:
#line 2526 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: continue\n"); }
    break;

  case 668:
#line 2527 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: search\n"); }
    break;

  case 669:
#line 2528 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: initialize\n"); }
    break;

  case 670:
#line 2529 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: inspect\n"); }
    break;

  case 671:
#line 2530 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: start\n"); }
    break;

  case 672:
#line 2531 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: initiate\n"); }
    break;

  case 673:
#line 2532 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: terminate\n"); }
    break;

  case 674:
#line 2533 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); dbg_print(DBG_PARSER, "STMT: generate\n"); }
    break;

  case 675:
#line 2536 "token.y"
    { dbg_print(DBG_ERROR, "Error in Procedure statement ...\n"); 
        (yyval.object) = NULL; yyerrok;
    }
    break;

  case 676:
#line 2550 "token.y"
    {
        (yyval.object) = construct_initialize_stmt((yyvsp[(2) - (6)].itemList), (yyvsp[(3) - (6)].ival), (yyvsp[(4) - (6)].ival), (yyvsp[(5) - (6)].object), (yyvsp[(6) - (6)].ival));
    }
    break;

  case 677:
#line 2555 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 678:
#line 2556 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 679:
#line 2559 "token.y"
    { (yyval.ival) = CB_CAT_NONE; }
    break;

  case 680:
#line 2560 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (3)].ival); }
    break;

  case 681:
#line 2563 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 682:
#line 2564 "token.y"
    {
        (yyval.object) = (yyvsp[(3) - (3)].object);
    }
    break;

  case 683:
#line 2569 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].init_rep_item)); }
    break;

  case 684:
#line 2570 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].init_rep_item));
    }
    break;

  case 685:
#line 2575 "token.y"
    {
        (yyval.init_rep_item) = construct_init_replacing_item((yyvsp[(1) - (4)].ival), (yyvsp[(4) - (4)].xvaldatatype));
    }
    break;

  case 686:
#line 2580 "token.y"
    { (yyval.ival) = CB_CAT_ALL; }
    break;

  case 687:
#line 2581 "token.y"
    { (yyval.ival) = CB_CAT_ALPHABETIC; }
    break;

  case 688:
#line 2582 "token.y"
    { (yyval.ival) = CB_CAT_ALPHANUMERIC; }
    break;

  case 689:
#line 2583 "token.y"
    { (yyval.ival) = CB_CAT_ALPHANUMERIC_EDITED; }
    break;

  case 690:
#line 2584 "token.y"
    { (yyval.ival) = CB_CAT_DATA_POINTER; }
    break;

  case 691:
#line 2585 "token.y"
    { (yyval.ival) = CB_CAT_NUMERIC; }
    break;

  case 692:
#line 2586 "token.y"
    { (yyval.ival) = CB_CAT_NUMERIC_EDITED; }
    break;

  case 693:
#line 2589 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 694:
#line 2590 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 695:
#line 2600 "token.y"
    {
        (yyval.object) = construct_inspect_stmt((yyvsp[(2) - (5)].varVal), (yyvsp[(3) - (5)].object), (yyvsp[(4) - (5)].object), (yyvsp[(5) - (5)].convclause));
    }
    break;

  case 696:
#line 2605 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 697:
#line 2606 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 698:
#line 2609 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].tallyingitem)); }
    break;

  case 699:
#line 2610 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].tallyingitem)); 
    }
    break;

  case 700:
#line 2615 "token.y"
    {
        (yyval.tallyingitem) = construct_tallying_item((yyvsp[(2) - (6)].idValWithOpt), (yyvsp[(4) - (6)].ival), (yyvsp[(5) - (6)].varVal), (yyvsp[(6) - (6)].object));
    }
    break;

  case 701:
#line 2620 "token.y"
    { (yyval.ival) = CB_ITEM_CHAR; }
    break;

  case 702:
#line 2621 "token.y"
    { (yyval.ival) = CB_ITEM_ALL; }
    break;

  case 703:
#line 2622 "token.y"
    { (yyval.ival) = CB_ITEM_LEADING; }
    break;

  case 704:
#line 2623 "token.y"
    { (yyval.ival) = CB_ITEM_FIRST; }
    break;

  case 705:
#line 2626 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 706:
#line 2627 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 707:
#line 2630 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].befaftitem)); }
    break;

  case 708:
#line 2631 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].befaftitem)); 
    }
    break;

  case 709:
#line 2636 "token.y"
    {
        (yyval.befaftitem) = construct_bef_aft_item((yyvsp[(1) - (3)].ival), (yyvsp[(3) - (3)].varVal));
    }
    break;

  case 710:
#line 2641 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 711:
#line 2642 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 712:
#line 2645 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].object)); }
    break;

  case 713:
#line 2646 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].object)); 
    }
    break;

  case 714:
#line 2651 "token.y"
    { 
        (yyval.object) = construct_replacing_item((yyvsp[(2) - (6)].ival), (yyvsp[(3) - (6)].varVal), (yyvsp[(5) - (6)].varVal), (yyvsp[(6) - (6)].object));
    }
    break;

  case 715:
#line 2656 "token.y"
    { (yyval.convclause) = NULL; }
    break;

  case 716:
#line 2657 "token.y"
    { (yyval.convclause) = (yyvsp[(1) - (1)].object); }
    break;

  case 717:
#line 2660 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].convclause)); }
    break;

  case 718:
#line 2661 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].convclause)); 
    }
    break;

  case 719:
#line 2667 "token.y"
    {
        (yyval.convclause) = construct_converting_clause( (yyvsp[(2) - (5)].varVal), (yyvsp[(4) - (5)].varVal), (yyvsp[(5) - (5)].object) );
    }
    break;

  case 720:
#line 2677 "token.y"
    {
        (yyval.object) = (yyvsp[(2) - (3)].object);
    }
    break;

  case 723:
#line 2685 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 724:
#line 2686 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 725:
#line 2691 "token.y"
    {
        (yyval.object) = construct_search_stmt((yyvsp[(1) - (4)].idValWithOpt), (yyvsp[(2) - (4)].idValWithOpt), (yyvsp[(3) - (4)].object), (yyvsp[(4) - (4)].object));
    }
    break;

  case 726:
#line 2696 "token.y"
    { (yyval.idValWithOpt) = NULL; }
    break;

  case 727:
#line 2697 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(2) - (2)].idValWithOpt); }
    break;

  case 728:
#line 2700 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 729:
#line 2701 "token.y"
    { (yyval.object) = (yyvsp[(3) - (3)].object); }
    break;

  case 730:
#line 2704 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].simpwhen)); }
    break;

  case 731:
#line 2705 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].simpwhen)); 
    }
    break;

  case 732:
#line 2710 "token.y"
    {
        (yyval.simpwhen) = construct_simple_when_clause((yyvsp[(2) - (3)].cond), (yyvsp[(3) - (3)].object));
    }
    break;

  case 733:
#line 2717 "token.y"
    {
        (yyval.object) = construct_search_all_stmt( (yyvsp[(2) - (4)].idValWithOpt), (yyvsp[(3) - (4)].object), (yyvsp[(4) - (4)].multiwhen) );
    }
    break;

  case 734:
#line 2724 "token.y"
    {
        (yyval.multiwhen) = construct_multi_when_clause((yyvsp[(2) - (4)].evalitem), (yyvsp[(3) - (4)].object), (yyvsp[(4) - (4)].object));
    }
    break;

  case 735:
#line 2729 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 736:
#line 2730 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 737:
#line 2733 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 738:
#line 2734 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (1)].object);
    }
    break;

  case 739:
#line 2739 "token.y"
    { (yyval.object) = start_generic_list((void *)(yyvsp[(1) - (1)].evalitem)); }
    break;

  case 740:
#line 2740 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].evalitem)); 
    }
    break;

  case 741:
#line 2745 "token.y"
    { (yyval.evalitem) = (yyvsp[(2) - (2)].evalitem); }
    break;

  case 742:
#line 2752 "token.y"
    {
        (yyval.evalitem) = construct_eval_item(CB_EI_COND, (void *)(yyvsp[(1) - (1)].cond), NULL);
    }
    break;

  case 743:
#line 2764 "token.y"
    {
        printf("ENTER is obsolate and is not implemented...");
        (yyval.object) = construct_enter_stmt((yyvsp[(2) - (3)].sval), (yyvsp[(3) - (3)].sval));
    }
    break;

  case 744:
#line 2770 "token.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 745:
#line 2773 "token.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 746:
#line 2782 "token.y"
    {
        (yyval.object) = construct_merge_stmt((yyvsp[(2) - (6)].idValWithOpt), (yyvsp[(3) - (6)].object), (yyvsp[(4) - (6)].idValWithOpt), (yyvsp[(5) - (6)].object), (yyvsp[(6) - (6)].fileIOclause));
    }
    break;

  case 747:
#line 2787 "token.y"
    {
        (yyval.object) = (yyvsp[(2) - (2)].object);
    }
    break;

  case 748:
#line 2798 "token.y"
    {
        (yyval.object) = construct_evaluate_stmt((yyvsp[(2) - (6)].evalitem), (yyvsp[(3) - (6)].object), (yyvsp[(4) - (6)].object), (yyvsp[(5) - (6)].object));
    }
    break;

  case 750:
#line 2806 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 751:
#line 2807 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 752:
#line 2810 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(2) - (2)].evalitem)); }
    break;

  case 753:
#line 2811 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *) (yyvsp[(3) - (3)].evalitem));
    }
    break;

  case 754:
#line 2816 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].whenclauseitem)); }
    break;

  case 755:
#line 2817 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].whenclauseitem));
    }
    break;

  case 756:
#line 2824 "token.y"
    {
        (yyval.whenclauseitem) = construct_when_clause_item((yyvsp[(2) - (4)].evalitem), (yyvsp[(3) - (4)].object), (yyvsp[(4) - (4)].object));
    }
    break;

  case 757:
#line 2829 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_ANY, NULL, NULL); }
    break;

  case 758:
#line 2830 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_TRUE, NULL, NULL); }
    break;

  case 759:
#line 2831 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_FALSE, NULL, NULL); }
    break;

  case 760:
#line 2832 "token.y"
    {                 
        ((yyvsp[(2) - (2)].evalitem))->notflag = (yyvsp[(1) - (2)].ival);
        (yyval.evalitem) = construct_eval_item(CB_EI_EVAL, (yyvsp[(2) - (2)].evalitem), NULL); 
    }
    break;

  case 761:
#line 2839 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 762:
#line 2840 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 763:
#line 2843 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].evalitem)); }
    break;

  case 764:
#line 2844 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].evalitem));
    }
    break;

  case 765:
#line 2849 "token.y"
    { (yyval.evalitem) = (yyvsp[(2) - (2)].evalitem); }
    break;

  case 766:
#line 2858 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_GNAME, (void *) (yyvsp[(1) - (1)].varVal), NULL); }
    break;

  case 767:
#line 2861 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_ARITHM_EXP, (void *) (yyvsp[(1) - (1)].arithm_expr), NULL); }
    break;

  case 768:
#line 2862 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_TRUE, NULL, NULL); }
    break;

  case 769:
#line 2863 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_FALSE, NULL, NULL); }
    break;

  case 770:
#line 2865 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_EVAL_ITEMS, (yyvsp[(1) - (3)].evalitem), (yyvsp[(3) - (3)].evalitem)); }
    break;

  case 771:
#line 2866 "token.y"
    { (yyval.evalitem) = construct_eval_item(CB_EI_COND, (yyvsp[(1) - (1)].cond), NULL); }
    break;

  case 772:
#line 2869 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 773:
#line 2870 "token.y"
    { (yyval.object) = (yyvsp[(3) - (3)].object); }
    break;

  case 774:
#line 2878 "token.y"
    {
        (yyval.object) = construct_rewrite_stmt( (yyvsp[(2) - (5)].idValWithOpt), (yyvsp[(3) - (5)].varVal), (yyvsp[(4) - (5)].invalid_action) );
    }
    break;

  case 776:
#line 2889 "token.y"
    { (yyval.object) = construct_goback_stmt(); }
    break;

  case 777:
#line 2895 "token.y"
    { (yyval.object) = construct_purge_stmt((yyvsp[(2) - (2)].idValWithOpt)); }
    break;

  case 778:
#line 2901 "token.y"
    {
        (yyval.object) = construct_release_stmt((yyvsp[(2) - (3)].idValWithOpt), (yyvsp[(3) - (3)].xvaldatatype));
    }
    break;

  case 779:
#line 2906 "token.y"
    { (yyval.xvaldatatype) = NULL; }
    break;

  case 780:
#line 2907 "token.y"
    {
        (yyval.xvaldatatype) = (yyvsp[(2) - (2)].xvaldatatype);
    }
    break;

  case 781:
#line 2915 "token.y"
    {
        (yyval.object) = construct_unlock_stmt((yyvsp[(2) - (3)].idValWithOpt));
    }
    break;

  case 784:
#line 2927 "token.y"
    { (yyval.object) = construct_cancel_stmt((yyvsp[(2) - (2)].itemList)); }
    break;

  case 785:
#line 2933 "token.y"
    { (yyval.object) = construct_continue_stmt(); }
    break;

  case 786:
#line 2939 "token.y"
    {
        (yyval.object) = construct_delete_stmt((yyvsp[(2) - (3)].del_simple));
    }
    break;

  case 787:
#line 2942 "token.y"
    {
        (yyval.object) = construct_delete_multi_stmt((yyvsp[(2) - (3)].object));
    }
    break;

  case 788:
#line 2948 "token.y"
    {
        (yyval.del_simple) = construct_del_simple((yyvsp[(1) - (3)].idValWithOpt), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].invalid_action));
    }
    break;

  case 789:
#line 2953 "token.y"
    {
        (yyval.object) = (yyvsp[(2) - (2)].itemList);
    }
    break;

  case 792:
#line 2969 "token.y"
    {
        (yyval.object) = construct_call_stmt((yyvsp[(3) - (7)].xvaldatatype), (yyvsp[(4) - (7)].calldetails), (yyvsp[(5) - (7)].object), (yyvsp[(6) - (7)].esc_excp));
    }
    break;

  case 793:
#line 2975 "token.y"
    { (yyval.calldetails) = NULL; }
    break;

  case 794:
#line 2978 "token.y"
    {
        (yyval.calldetails) = construct_call_details((yyvsp[(2) - (4)].object), (yyvsp[(3) - (4)].idValWithOpt), (yyvsp[(4) - (4)].idValWithOpt));
    }
    break;

  case 795:
#line 2983 "token.y"
    { (yyval.idValWithOpt) = NULL; }
    break;

  case 796:
#line 2984 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(2) - (2)].idValWithOpt); }
    break;

  case 797:
#line 2987 "token.y"
    { (yyval.idValWithOpt) = NULL; }
    break;

  case 798:
#line 2988 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(2) - (2)].idValWithOpt); }
    break;

  case 799:
#line 2991 "token.y"
    {
        (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].callusingitem));
    }
    break;

  case 800:
#line 2994 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *)(yyvsp[(3) - (3)].callusingitem));
    }
    break;

  case 801:
#line 2997 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].callusingitem));
    }
    break;

  case 802:
#line 3003 "token.y"
    { (yyval.callusingitem) = (yyvsp[(1) - (1)].callusingitem); }
    break;

  case 803:
#line 3004 "token.y"
    { (yyval.callusingitem) = (yyvsp[(1) - (1)].callusingitem); }
    break;

  case 804:
#line 3005 "token.y"
    { (yyval.callusingitem) = cons_call_using_item(CB_CALL_BY_DEFAULT, (yyvsp[(1) - (1)].object)); }
    break;

  case 805:
#line 3009 "token.y"
    {
        (yyval.callusingitem) = cons_call_using_item(CB_CALL_BY_REF, (yyvsp[(3) - (3)].object));
    }
    break;

  case 806:
#line 3014 "token.y"
    {
        (yyval.callusingitem) = cons_call_using_item(CB_CALL_BY_CONTENT, (yyvsp[(3) - (3)].object));
    }
    break;

  case 807:
#line 3019 "token.y"
    {
        (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].callitem));
    }
    break;

  case 808:
#line 3022 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *)(yyvsp[(3) - (3)].callitem));
    }
    break;

  case 809:
#line 3025 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].callitem));
    }
    break;

  case 810:
#line 3030 "token.y"
    { (yyval.callitem) = construct_call_item(1, (yyvsp[(1) - (1)].varVal)); }
    break;

  case 811:
#line 3031 "token.y"
    { (yyval.callitem) = construct_call_item(2, NULL); }
    break;

  case 814:
#line 3039 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (1)].object);
    }
    break;

  case 815:
#line 3045 "token.y"
    {
        (yyval.object) = construct_action_pair((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object));
    }
    break;

  case 816:
#line 3050 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 817:
#line 3051 "token.y"
    {
        (yyval.object) = (yyvsp[(3) - (3)].object);
    }
    break;

  case 818:
#line 3056 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 819:
#line 3057 "token.y"
    {
        (yyval.object) = (yyvsp[(4) - (4)].object);
    }
    break;

  case 820:
#line 3070 "token.y"
    {
        (yyval.object) = construct_string_stmt((yyvsp[(2) - (7)].object), (yyvsp[(4) - (7)].idValWithOpt), (yyvsp[(5) - (7)].idValWithOpt), (yyvsp[(6) - (7)].object));
    }
    break;

  case 821:
#line 3075 "token.y"
    {
        (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].str_arg));
    }
    break;

  case 822:
#line 3078 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].str_arg));
    }
    break;

  case 823:
#line 3083 "token.y"
    {
        (yyval.str_arg) = construct_str_argument((yyvsp[(1) - (4)].itemList), (yyvsp[(4) - (4)].xvaldatatype));
    }
    break;

  case 824:
#line 3087 "token.y"
    { (yyval.xvaldatatype) = getXval(CB_IDENTIFIER, (yyvsp[(1) - (1)].idValWithOpt), NULL); }
    break;

  case 825:
#line 3088 "token.y"
    { (yyval.xvaldatatype) = getXval(CB_LITERAL, NULL, (yyvsp[(1) - (1)].literalval)); }
    break;

  case 826:
#line 3089 "token.y"
    { (yyval.xvaldatatype) = getXval(CB_SIZE, NULL, NULL); }
    break;

  case 827:
#line 3092 "token.y"
    { (yyval.idValWithOpt) = NULL; }
    break;

  case 828:
#line 3093 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(3) - (3)].idValWithOpt); }
    break;

  case 831:
#line 3108 "token.y"
    {
        (yyval.object) = construct_unstring_stmt((yyvsp[(2) - (8)].idValWithOpt), (yyvsp[(3) - (8)].delimclause), (yyvsp[(4) - (8)].object), (yyvsp[(5) - (8)].idValWithOpt), (yyvsp[(6) - (8)].idValWithOpt), (yyvsp[(7) - (8)].object));
    }
    break;

  case 832:
#line 3113 "token.y"
    {
        (yyval.delimclause) = construct_delim_clause((yyvsp[(3) - (5)].ival), (yyvsp[(4) - (5)].varVal), (yyvsp[(5) - (5)].object));
    }
    break;

  case 833:
#line 3118 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 834:
#line 3119 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (1)].object);
    }
    break;

  case 835:
#line 3124 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].oritem)); }
    break;

  case 836:
#line 3125 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].oritem));
    }
    break;

  case 837:
#line 3131 "token.y"
    {
        (yyval.oritem) = construct_or_item((yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].varVal));
    }
    break;

  case 838:
#line 3136 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 839:
#line 3137 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 840:
#line 3140 "token.y"
    { (yyval.object) = (yyvsp[(2) - (2)].object); }
    break;

  case 841:
#line 3143 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].intoclause)); }
    break;

  case 842:
#line 3144 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].intoclause));
    }
    break;

  case 843:
#line 3147 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (3)].object), (void *) (yyvsp[(3) - (3)].intoclause));
    }
    break;

  case 844:
#line 3154 "token.y"
    {
        (yyval.intoclause) = construct_into_clause((yyvsp[(1) - (3)].idValWithOpt), (yyvsp[(2) - (3)].idValWithOpt), (yyvsp[(3) - (3)].idValWithOpt)); 
    }
    break;

  case 845:
#line 3159 "token.y"
    { (yyval.idValWithOpt) = NULL; }
    break;

  case 846:
#line 3160 "token.y"
    {
        (yyval.idValWithOpt) = (yyvsp[(3) - (3)].idValWithOpt);
    }
    break;

  case 847:
#line 3165 "token.y"
    { (yyval.idValWithOpt) = NULL; }
    break;

  case 848:
#line 3166 "token.y"
    {
        (yyval.idValWithOpt) = (yyvsp[(3) - (3)].idValWithOpt); 
    }
    break;

  case 849:
#line 3171 "token.y"
    { (yyval.idValWithOpt) = NULL; }
    break;

  case 850:
#line 3172 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(3) - (3)].idValWithOpt); }
    break;

  case 853:
#line 3185 "token.y"
    {
        (yyval.object) = cons_use_stmt((yyvsp[(2) - (8)].ival), (yyvsp[(5) - (8)].ival), (yyvsp[(8) - (8)].useprocopt));
    }
    break;

  case 854:
#line 3189 "token.y"
    {
        (yyval.object) = cons_use_DBG_stmt((yyvsp[(5) - (5)].object));
    }
    break;

  case 855:
#line 3195 "token.y"
    {
        (yyval.object) = cons_use_after((yyvsp[(2) - (10)].ival), (yyvsp[(5) - (10)].ival), (yyvsp[(6) - (10)].ival), (yyvsp[(10) - (10)].useprocopt));
    }
    break;

  case 856:
#line 3200 "token.y"
    {
        (yyval.object) = cons_use_bef_reporting((yyvsp[(5) - (5)].idValWithOpt));
    }
    break;

  case 857:
#line 3206 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 858:
#line 3207 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 859:
#line 3210 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 860:
#line 3211 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 861:
#line 3214 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 862:
#line 3215 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 863:
#line 3216 "token.y"
    { (yyval.ival) = 2; }
    break;

  case 864:
#line 3217 "token.y"
    { (yyval.ival) = 3; }
    break;

  case 865:
#line 3220 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].useonitem)); }
    break;

  case 866:
#line 3221 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].useonitem));
    }
    break;

  case 867:
#line 3226 "token.y"
    { (yyval.useonitem) = cons_on_item(CB_USEITEM_IDLIST, (yyvsp[(1) - (1)].idValWithOpt)); }
    break;

  case 868:
#line 3227 "token.y"
    { (yyval.useonitem) = cons_on_item(CB_USEITEM_ALLPROC, NULL); }
    break;

  case 869:
#line 3228 "token.y"
    { 
            (yyval.useonitem) = cons_on_item(CB_USEITEM_ALLREF_OFID, (yyvsp[(4) - (4)].idValWithOpt)); 
    }
    break;

  case 870:
#line 3233 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 871:
#line 3234 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 872:
#line 3237 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 873:
#line 3238 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 874:
#line 3241 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 875:
#line 3242 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 876:
#line 3243 "token.y"
    { (yyval.ival) = 2; }
    break;

  case 877:
#line 3246 "token.y"
    { (yyval.ival) = CB_ERROR; }
    break;

  case 878:
#line 3247 "token.y"
    { (yyval.ival) = CB_EXCEPTION; }
    break;

  case 879:
#line 3250 "token.y"
    { (yyval.useprocopt) = construct_use_proc_option(1, (yyvsp[(1) - (1)].idValWithOpt), 0); }
    break;

  case 880:
#line 3251 "token.y"
    { (yyval.useprocopt) = construct_use_proc_option(2, NULL, (yyvsp[(1) - (1)].ival)); }
    break;

  case 881:
#line 3257 "token.y"
    {
        /* simple and alterable */
        (yyval.object) = construct_goto_stmt1((yyvsp[(3) - (3)].sval));
    }
    break;

  case 882:
#line 3261 "token.y"
    {
        /* depending on */
        (yyval.object) = construct_goto_stmt2((yyvsp[(3) - (6)].object), (yyvsp[(6) - (6)].idValWithOpt));
    }
    break;

  case 883:
#line 3267 "token.y"
    { (yyval.sval) = NULL;  /* this is funny */ }
    break;

  case 884:
#line 3268 "token.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 885:
#line 3271 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].sval)); }
    break;

  case 886:
#line 3272 "token.y"
    {
        (yyval.object) = addto_generic_list( (yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].sval));
    }
    break;

  case 887:
#line 3280 "token.y"
    {
        (yyval.object) = construct_alter_stmt((yyvsp[(2) - (2)].object));
    }
    break;

  case 888:
#line 3285 "token.y"
    {
        (yyval.object) = start_generic_list((yyvsp[(1) - (1)].strpair));
    }
    break;

  case 889:
#line 3288 "token.y"
    {
        (yyval.object) = addto_generic_list( (yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].strpair));
    }
    break;

  case 890:
#line 3293 "token.y"
    {
        (yyval.strpair) = construct_strpair((yyvsp[(1) - (4)].sval), (yyvsp[(4) - (4)].sval));
    }
    break;

  case 893:
#line 3304 "token.y"
    { (yyval.object) = construct_exit_stmt(CB_EX_SIMPLE, 0); }
    break;

  case 894:
#line 3305 "token.y"
    { (yyval.object) = construct_exit_stmt(CB_EX_PROGRAM, 0); }
    break;

  case 895:
#line 3306 "token.y"
    { (yyval.object) = construct_exit_stmt(CB_EX_PERFORM, (yyvsp[(3) - (3)].ival)); }
    break;

  case 896:
#line 3307 "token.y"
    { (yyval.object) = construct_exit_stmt(CB_EX_PARAGRAPH, 0); }
    break;

  case 897:
#line 3308 "token.y"
    { (yyval.object) = construct_exit_stmt(CB_EX_SECTION, 0); }
    break;

  case 898:
#line 3311 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 899:
#line 3312 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 900:
#line 3319 "token.y"
    {
        (yyval.object) = construct_perform_stmt((yyvsp[(2) - (2)].object), NULL, NULL);
    }
    break;

  case 901:
#line 3326 "token.y"
    { 
        (yyval.object) = construct_perform_stmt((yyvsp[(2) - (4)].object), (yyvsp[(3) - (4)].itemList), NULL);
    }
    break;

  case 902:
#line 3334 "token.y"
    { 
        (yyval.object) = construct_perform_stmt(NULL, (yyvsp[(2) - (4)].itemList), (yyvsp[(3) - (4)].object));
    }
    break;

  case 903:
#line 3339 "token.y"
    { (yyval.itemList) = NULL; }
    break;

  case 904:
#line 3340 "token.y"
    {
        (yyval.itemList) = (yyvsp[(1) - (1)].itemList);
    }
    break;

  case 905:
#line 3345 "token.y"
    {
        (yyval.itemList) = start_perform_options_list((yyvsp[(1) - (1)].perf_opt));
    }
    break;

  case 906:
#line 3348 "token.y"
    {
        dbg_print(DBG_TRACE, "In the perform option with the statements...\n");
        (yyval.itemList) = addto_perform_options_list((yyvsp[(1) - (2)].itemList), (yyvsp[(2) - (2)].perf_opt));
    }
    break;

  case 907:
#line 3355 "token.y"
    {
        (yyval.object) = NULL;
    }
    break;

  case 908:
#line 3359 "token.y"
    { 
        (yyval.object) = (yyvsp[(1) - (1)].object);
    }
    break;

  case 911:
#line 3372 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].pnames); }
    break;

  case 912:
#line 3375 "token.y"
    {
        (yyval.pnames) = construct_pnames(0, (yyvsp[(1) - (1)].sval), NULL);
    }
    break;

  case 913:
#line 3378 "token.y"
    {
        (yyval.pnames) = construct_pnames(1, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
    }
    break;

  case 914:
#line 3383 "token.y"
    { (yyval.sval) = (yyvsp[(1) - (1)].sval); }
    break;

  case 915:
#line 3386 "token.y"
    {
        (yyval.perf_opt) = construct_perf_opt(CB_PO_FOREVER, 0, NULL, CB_ABSENT, NULL, NULL);
    }
    break;

  case 916:
#line 3389 "token.y"
    { /* This is the issue, you may get variable as well*/
        (yyval.perf_opt) = construct_perf_opt(CB_PO_NUMBER_TIMES, (yyvsp[(1) - (2)].ival), NULL, CB_ABSENT, NULL, NULL);
    }
    break;

  case 917:
#line 3392 "token.y"
    {
        (yyval.perf_opt) = construct_perf_opt(CB_PO_ID_TIMES, 0, (yyvsp[(1) - (2)].idValWithOpt), CB_ABSENT, NULL, NULL);
    }
    break;

  case 918:
#line 3395 "token.y"
    { 
        dbg_print(DBG_TRACE, "perform_options: until **********\n");
        dbg_print(DBG_TRACE, "DUMPING CONDITION *************uncomment the dump.\n");
        /* dump_condition($3); */
        dbg_print(DBG_TRACE, "\nDUMPING CONDITION *************\n");
        (yyval.perf_opt) = construct_perf_opt(CB_PO_UNTIL, 0, NULL, (yyvsp[(1) - (3)].ival), (yyvsp[(3) - (3)].cond), NULL);
    }
    break;

  case 919:
#line 3402 "token.y"
    {
        (yyval.perf_opt) = construct_perf_opt(CB_PO_VARYING_UNTIL, 0, NULL, (yyvsp[(1) - (3)].ival), NULL, (yyvsp[(3) - (3)].itemList));
    }
    break;

  case 920:
#line 3407 "token.y"
    { (yyval.ival) = CB_ABSENT; }
    break;

  case 921:
#line 3408 "token.y"
    {
        (yyval.ival) = (yyvsp[(3) - (3)].ival);
    }
    break;

  case 922:
#line 3413 "token.y"
    {
        (yyval.itemList) = start_perf_opt_varying_list( (yyvsp[(1) - (1)].perf_varying) );
    }
    break;

  case 923:
#line 3416 "token.y"
    {
        (yyval.itemList) = addto_perf_opt_varying_list( (yyvsp[(1) - (3)].itemList), (yyvsp[(3) - (3)].perf_varying));
    }
    break;

  case 924:
#line 3421 "token.y"
    {
        (yyval.perf_varying) = construct_perf_varying_item( (yyvsp[(1) - (7)].varVal), (yyvsp[(3) - (7)].varVal), (yyvsp[(5) - (7)].varVal), (yyvsp[(7) - (7)].cond));
    }
    break;

  case 925:
#line 3426 "token.y"
    {
        (yyval.ival) = CB_BEFORE;
    }
    break;

  case 926:
#line 3429 "token.y"
    { 
        dbg_print(DBG_TRACE, "before_after: AFTER\n");
        (yyval.ival) = CB_AFTER;
    }
    break;

  case 927:
#line 3439 "token.y"
    { (yyval.object) = (yyvsp[(2) - (2)].object); }
    break;

  case 928:
#line 3442 "token.y"
    { (yyval.object) = construct_stop_stmt(CB_SO_STOP_RUN, NULL); }
    break;

  case 929:
#line 3443 "token.y"
    { (yyval.object) = construct_stop_stmt(CB_SO_STOP_RETURNING, (yyvsp[(3) - (3)].xvaldatatype)); }
    break;

  case 930:
#line 3444 "token.y"
    { (yyval.object) = construct_stop_stmt(CB_SO_STOP_GIVING, (yyvsp[(3) - (3)].xvaldatatype)); }
    break;

  case 931:
#line 3445 "token.y"
    { (yyval.object) = construct_stop_stmt(CB_SO_STOP_VAL, (yyvsp[(1) - (1)].xvaldatatype)); }
    break;

  case 932:
#line 3465 "token.y"
    {
        (yyval.object) = construct_open_stmt((yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].object));
    }
    break;

  case 933:
#line 3470 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 934:
#line 3471 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 935:
#line 3474 "token.y"
    {
        (yyval.object) = create_open_file_list((yyvsp[(1) - (1)].open_file_type));
    }
    break;

  case 936:
#line 3477 "token.y"
    {
        (yyval.object) = addto_open_file_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].open_file_type));
    }
    break;

  case 937:
#line 3483 "token.y"
    {
        (yyval.open_file_type) = construct_open_file_type((yyvsp[(1) - (2)].ival), (yyvsp[(2) - (2)].object));
    }
    break;

  case 938:
#line 3488 "token.y"
    { (yyval.ival) = CB_FT_INPUT; }
    break;

  case 939:
#line 3489 "token.y"
    { (yyval.ival) = CB_FT_OUTPUT; }
    break;

  case 940:
#line 3490 "token.y"
    { (yyval.ival) = CB_FT_I_O; }
    break;

  case 941:
#line 3491 "token.y"
    { (yyval.ival) = CB_FT_I_O; }
    break;

  case 942:
#line 3492 "token.y"
    { (yyval.ival) = CB_FT_EXTEND; }
    break;

  case 943:
#line 3495 "token.y"
    { (yyval.object) = create_file_name_list((yyvsp[(1) - (1)].file_name_item)) ; }
    break;

  case 944:
#line 3496 "token.y"
    {
        (yyval.object) = addto_file_name_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].file_name_item)); 
    }
    break;

  case 945:
#line 3502 "token.y"
    {
        (yyval.file_name_item) = construct_file_name((yyvsp[(1) - (2)].idValWithOpt), (yyvsp[(2) - (2)].object));
    }
    break;

  case 946:
#line 3507 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(1) - (1)].idValWithOpt); }
    break;

  case 947:
#line 3511 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 948:
#line 3512 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (1)].object);
    }
    break;

  case 949:
#line 3517 "token.y"
    { (yyval.object) = create_int_list((yyvsp[(1) - (1)].ival)); }
    break;

  case 950:
#line 3518 "token.y"
    {
        (yyval.object) = addto_int_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].ival));
    }
    break;

  case 951:
#line 3523 "token.y"
    { (yyval.ival) = CB_FO_WITH_LOCK; }
    break;

  case 952:
#line 3524 "token.y"
    { (yyval.ival) = CB_FO_WITH_NO_REWIND; }
    break;

  case 953:
#line 3525 "token.y"
    { (yyval.ival) = CV_FO_REVERSED; }
    break;

  case 954:
#line 3532 "token.y"
    {
        (yyval.object) = construct_close_stmt((yyvsp[(2) - (2)].object));
    }
    break;

  case 955:
#line 3537 "token.y"
    {
        (yyval.object) = start_close_file_list((yyvsp[(1) - (1)].close_file_item));
    }
    break;

  case 956:
#line 3540 "token.y"
    {
        (yyval.object) = addto_close_file_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].close_file_item));
    }
    break;

  case 957:
#line 3543 "token.y"
    {
        (yyval.object) = addto_close_file_list((yyvsp[(1) - (3)].object), (yyvsp[(3) - (3)].close_file_item));
    }
    break;

  case 958:
#line 3549 "token.y"
    {
        (yyval.close_file_item) = construct_close_file_item((yyvsp[(1) - (2)].idValWithOpt), (yyvsp[(2) - (2)].ival));
    }
    break;

  case 959:
#line 3554 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 960:
#line 3555 "token.y"
    { (yyval.ival) = CB_CFO_REEL_NOREWIND; }
    break;

  case 961:
#line 3556 "token.y"
    { (yyval.ival) = CB_CFO_UNIT_NOREWIND; }
    break;

  case 962:
#line 3558 "token.y"
    { (yyval.ival) = CB_CFO_REEL_REMOVAL; }
    break;

  case 963:
#line 3559 "token.y"
    { (yyval.ival) = CB_CFO_UNIT_REMOVAL; }
    break;

  case 964:
#line 3561 "token.y"
    { (yyval.ival) = CB_CFO_NOREWIND; }
    break;

  case 965:
#line 3562 "token.y"
    { (yyval.ival) = CB_CFO_LOCK; }
    break;

  case 966:
#line 3578 "token.y"
    {
         /* this is for sequential access files */
         (yyval.object) = construct_read_seq_stmt((yyvsp[(1) - (6)].idValWithOpt), (yyvsp[(2) - (6)].ival), (yyvsp[(3) - (6)].ival), (yyvsp[(4) - (6)].idValWithOpt), (yyvsp[(5) - (6)].atend_action));
    }
    break;

  case 967:
#line 3589 "token.y"
    {
        /* random access file */
        dbg_print(DBG_TRACE, "reached the random access read stmt...\n");
        (yyval.object) = construct_read_random_stmt((yyvsp[(1) - (7)].idValWithOpt), (yyvsp[(2) - (7)].ival), (yyvsp[(3) - (7)].ival), (yyvsp[(4) - (7)].idValWithOpt), (yyvsp[(5) - (7)].idValWithOpt), (yyvsp[(6) - (7)].invalid_action));
    }
    break;

  case 968:
#line 3596 "token.y"
    {  (yyval.idValWithOpt) = (yyvsp[(2) - (2)].idValWithOpt); }
    break;

  case 969:
#line 3599 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 970:
#line 3602 "token.y"
    { (yyval.ival) = CB_UNSPECIFIED;}
    break;

  case 971:
#line 3603 "token.y"
    { (yyval.ival) = CB_UNSPECIFIED; }
    break;

  case 972:
#line 3604 "token.y"
    { (yyval.ival) = CB_NEXT; }
    break;

  case 973:
#line 3605 "token.y"
    { (yyval.ival) = CB_PREVIOUS; }
    break;

  case 974:
#line 3608 "token.y"
    { (yyval.ival) = CB_UNSPECIFIED; }
    break;

  case 975:
#line 3609 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 976:
#line 3612 "token.y"
    { (yyval.ival) = CB_RR_LOCK; }
    break;

  case 977:
#line 3613 "token.y"
    { (yyval.ival) = CB_RR_NO_LOCK; }
    break;

  case 978:
#line 3616 "token.y"
    { (yyval.idValWithOpt) = NULL; }
    break;

  case 979:
#line 3617 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(2) - (2)].idValWithOpt); }
    break;

  case 980:
#line 3620 "token.y"
    { (yyval.idValWithOpt) = NULL; }
    break;

  case 981:
#line 3621 "token.y"
    {
        (yyval.idValWithOpt) = (yyvsp[(3) - (3)].idValWithOpt); 
    }
    break;

  case 982:
#line 3626 "token.y"
    {
        (yyval.atend_action) = (yyvsp[(1) - (1)].atend_action);
    }
    break;

  case 983:
#line 3632 "token.y"
    {
        (yyval.atend_action) = construct_at_end_clause((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object));
    }
    break;

  case 984:
#line 3637 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 985:
#line 3638 "token.y"
    { 
        dbg_print(DBG_TRACE, "reached here ...\n"); 
        (yyval.object) = (yyvsp[(3) - (3)].object); 
    }
    break;

  case 986:
#line 3644 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 987:
#line 3645 "token.y"
    { (yyval.object) = (yyvsp[(4) - (4)].object); }
    break;

  case 990:
#line 3654 "token.y"
    {   
        /* sequential */
        dbg_print(DBG_TRACE, "write-sequential ...\n"); 
        (yyval.object) = construct_write_stmt((yyvsp[(1) - (3)].idgname), (yyvsp[(2) - (3)].advn_clause));
    }
    break;

  case 991:
#line 3659 "token.y"
    { 
        /* relative and indexed */
        dbg_print(DBG_TRACE, "write-relative and indexed ...\n"); 
        (yyval.object) = construct_write_stmt2((yyvsp[(1) - (3)].idgname), (yyvsp[(2) - (3)].invalid_action));
    }
    break;

  case 992:
#line 3667 "token.y"
    {
        (yyval.idgname) = gen_id_gname((yyvsp[(2) - (3)].idValWithOpt), (yyvsp[(3) - (3)].varVal));
    }
    break;

  case 993:
#line 3672 "token.y"
    { (yyval.varVal) = NULL; }
    break;

  case 994:
#line 3673 "token.y"
    { (yyval.varVal) = (yyvsp[(2) - (2)].varVal); }
    break;

  case 997:
#line 3679 "token.y"
    { (yyval.invalid_action) = NULL; }
    break;

  case 998:
#line 3680 "token.y"
    { (yyval.invalid_action) = (yyvsp[(1) - (1)].invalid_action); }
    break;

  case 999:
#line 3684 "token.y"
    {
        (yyval.invalid_action) = construct_invalid_key_clause((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object));
    }
    break;

  case 1000:
#line 3689 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 1001:
#line 3690 "token.y"
    {
        (yyval.object) = (yyvsp[(3) - (3)].object); 
    }
    break;

  case 1002:
#line 3695 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 1003:
#line 3696 "token.y"
    {
        (yyval.object) = (yyvsp[(4) - (4)].object);
    }
    break;

  case 1004:
#line 3702 "token.y"
    {
        (yyval.advn_clause)->end_of_page = (yyvsp[(2) - (2)].object);   /* this is in the struct _advaicing_clause */
    }
    break;

  case 1005:
#line 3707 "token.y"
    { (yyval.advn_clause) = conemp_advancing_clause(); }
    break;

  case 1006:
#line 3709 "token.y"
    { 
            dbg_print(DBG_TRACE, "found before after advancing.\n");
            (yyval.advn_clause) = construct_advancing_clause((yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].xvaldatatype));
      }
    break;

  case 1007:
#line 3715 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 1008:
#line 3716 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 1009:
#line 3720 "token.y"
    {              /* line_clause */ /* xval should retuen either INTEGER or identifier */
        (yyval.xvaldatatype) = (yyvsp[(1) - (2)].xvaldatatype);
        (yyval.xvaldatatype)->usetype = CB_LINES;
    }
    break;

  case 1010:
#line 3724 "token.y"
    { /* line_on_next_page */
        (yyval.xvaldatatype) = (yyvsp[(3) - (6)].xvaldatatype); (yyval.xvaldatatype)->usetype = CB_LINE_NEXTPAGE;
    }
    break;

  case 1011:
#line 3727 "token.y"
    {              /* page_clause */ 
        /* check this. This may fail if not implemented correctly... */
        (yyval.xvaldatatype) = getXval2(CB_IDENTIFIER, (yyvsp[(1) - (1)].idValWithOpt), 0);
        (yyval.xvaldatatype)->usetype = CB_IDENTIFIER;
    }
    break;

  case 1012:
#line 3732 "token.y"
    {                     /* page_clause */
        (yyval.xvaldatatype) = getXval2(CB_PAGES, NULL, 0);
    }
    break;

  case 1016:
#line 3742 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 1017:
#line 3746 "token.y"
    {
        (yyval.object) = construct_action_pair((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object));
    }
    break;

  case 1018:
#line 3751 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 1019:
#line 3752 "token.y"
    {
        (yyval.object) = (yyvsp[(3) - (3)].object); 
    }
    break;

  case 1020:
#line 3757 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 1021:
#line 3758 "token.y"
    {
        (yyval.object) = (yyvsp[(4) - (4)].object); 
    }
    break;

  case 1022:
#line 3771 "token.y"
    {
        (yyval.object) = construct_sort_stmt( (yyvsp[(2) - (7)].idValWithOpt), (yyvsp[(3) - (7)].object), (yyvsp[(4) - (7)].ival), (yyvsp[(5) - (7)].idValWithOpt), (yyvsp[(6) - (7)].fileIOclause), (yyvsp[(7) - (7)].fileIOclause));
    }
    break;

  case 1023:
#line 3776 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].onkey_clause)); }
    break;

  case 1024:
#line 3777 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *) (yyvsp[(2) - (2)].onkey_clause));
    }
    break;

  case 1025:
#line 3782 "token.y"
    {
        (yyval.onkey_clause) = construct_on_key_clause(1, (yyvsp[(4) - (4)].itemList));
    }
    break;

  case 1026:
#line 3785 "token.y"
    {
        (yyval.onkey_clause) = construct_on_key_clause(2, (yyvsp[(4) - (4)].itemList));
    }
    break;

  case 1027:
#line 3790 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 1028:
#line 3791 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 1029:
#line 3794 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 1030:
#line 3795 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 1031:
#line 3798 "token.y"
    { (yyval.idValWithOpt) = NULL; }
    break;

  case 1032:
#line 3799 "token.y"
    {
        (yyval.idValWithOpt) = (yyvsp[(4) - (4)].idValWithOpt); 
    }
    break;

  case 1033:
#line 3804 "token.y"
    {
        (yyval.fileIOclause) = construct_file_io_clause(CB_FT_INPUT, (yyvsp[(4) - (5)].sval), (yyvsp[(5) - (5)].sval), NULL);
    }
    break;

  case 1034:
#line 3807 "token.y"
    {
        (yyval.fileIOclause) = construct_file_io_clause(CB_FT_INPUT, NULL, NULL, (yyvsp[(2) - (2)].itemList));
    }
    break;

  case 1035:
#line 3812 "token.y"
    { (yyval.sval) = NULL; }
    break;

  case 1036:
#line 3813 "token.y"
    {
        (yyval.sval) = (yyvsp[(2) - (2)].sval);
    }
    break;

  case 1037:
#line 3818 "token.y"
    {
        (yyval.fileIOclause) = construct_file_io_clause(CB_FT_OUTPUT, (yyvsp[(4) - (5)].sval), (yyvsp[(5) - (5)].sval), NULL);
    }
    break;

  case 1038:
#line 3821 "token.y"
    {
        (yyval.fileIOclause) = construct_file_io_clause(CB_FT_OUTPUT, NULL, NULL, (yyvsp[(2) - (2)].itemList));
    }
    break;

  case 1039:
#line 3831 "token.y"
    {
        (yyval.object) = construct_return_stmt((yyvsp[(2) - (6)].idValWithOpt), (yyvsp[(3) - (6)].ival), (yyvsp[(4) - (6)].xvaldatatype), (yyvsp[(5) - (6)].atend_action));
    }
    break;

  case 1040:
#line 3836 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 1041:
#line 3837 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 1042:
#line 3840 "token.y"
    { (yyval.xvaldatatype) = NULL; }
    break;

  case 1043:
#line 3841 "token.y"
    {    /* identifier or literal */
        (yyval.xvaldatatype) = (yyvsp[(2) - (2)].xvaldatatype);
    }
    break;

  case 1046:
#line 3861 "token.y"
    {
        (yyval.object) = cons_set_stmt((yyvsp[(2) - (2)].object));
    }
    break;

  case 1047:
#line 3866 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].setclause)); }
    break;

  case 1048:
#line 3867 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].setclause));
    }
    break;

  case 1049:
#line 3872 "token.y"
    {
        (yyval.setclause) = cons_set_clause((yyvsp[(1) - (3)].object), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].setitem));
    }
    break;

  case 1050:
#line 3877 "token.y"
    { (yyval.ival) = CB_SET_TO; }
    break;

  case 1051:
#line 3878 "token.y"
    { (yyval.ival) = CB_SET_UPBY; }
    break;

  case 1052:
#line 3879 "token.y"
    { (yyval.ival) = CB_SET_DOWNBY; }
    break;

  case 1053:
#line 3882 "token.y"
    { (yyval.object) = start_generic_list((void *) (yyvsp[(1) - (1)].setitem)); }
    break;

  case 1054:
#line 3883 "token.y"
    {
        (yyval.object) = addto_generic_list((yyvsp[(1) - (2)].object), (void *)(yyvsp[(2) - (2)].setitem));
    }
    break;

  case 1055:
#line 3888 "token.y"
    { (yyval.setitem) = cons_set_item(CB_SET_XVAL, (yyvsp[(1) - (1)].xvaldatatype)); }
    break;

  case 1056:
#line 3889 "token.y"
    { (yyval.setitem) = cons_set_item(CB_SET_ON, NULL); }
    break;

  case 1057:
#line 3890 "token.y"
    { (yyval.setitem) = cons_set_item(CB_SET_OFF, NULL); }
    break;

  case 1058:
#line 3891 "token.y"
    { (yyval.setitem) = cons_set_item(CB_SET_TRUE, NULL); }
    break;

  case 1059:
#line 3892 "token.y"
    { (yyval.setitem) = cons_set_item(CB_SET_FALSE, NULL); }
    break;

  case 1060:
#line 3893 "token.y"
    { (yyval.setitem) = cons_set_item(CB_SET_NULL, NULL); }
    break;

  case 1061:
#line 3902 "token.y"
    { 
        dbg_print(DBG_TRACE, "display_statement: sysname\n"); 
        (yyval.object) = (yyvsp[(1) - (1)].object);
    }
    break;

  case 1062:
#line 3906 "token.y"
    { 
        dbg_print(DBG_TRACE, "display_statement: termio\n"); 
        (yyval.object) = (yyvsp[(1) - (1)].object);
    }
    break;

  case 1063:
#line 3910 "token.y"
    { 
        dbg_print(DBG_TRACE, "display_statement: screen name\n"); 
        (yyval.object) = (yyvsp[(1) - (1)].object);
    }
    break;

  case 1064:
#line 3921 "token.y"
    {
        (yyval.object) = construct_display_stmt_sysname( (yyvsp[(2) - (4)].object), (yyvsp[(3) - (4)].xvaldatatype), (yyvsp[(4) - (4)].ival) );
    }
    break;

  case 1065:
#line 3926 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (1)].itemList);
    }
    break;

  case 1066:
#line 3942 "token.y"
    { (yyval.xvaldatatype) = NULL; }
    break;

  case 1067:
#line 3943 "token.y"
    {   /* this is either mnemonic name or low-volume-io name */
        (yyval.xvaldatatype) = (yyvsp[(2) - (2)].xvaldatatype); 
    }
    break;

  case 1068:
#line 3948 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 1069:
#line 3949 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 1070:
#line 3954 "token.y"
    {
        (yyval.object) = construct_display_stmt_term((yyvsp[(2) - (2)].object));
    }
    break;

  case 1071:
#line 3959 "token.y"
    {
        (yyval.object) = start_disp_item_list((yyvsp[(1) - (1)].disp_item));
    }
    break;

  case 1072:
#line 3962 "token.y"
    {
        (yyval.object) = addto_disp_item_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].disp_item));
    }
    break;

  case 1073:
#line 3968 "token.y"
    { /* void ptr */ 
        (yyval.disp_item) = construct_disp_item((yyvsp[(1) - (2)].xvaldatatype), (yyvsp[(2) - (2)].object));
    }
    break;

  case 1074:
#line 3973 "token.y"
    {  /* this is xval */
        (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype);
    }
    break;

  case 1075:
#line 3978 "token.y"
    { (yyval.object) = NULL; }
    break;

  case 1076:
#line 3979 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (1)].object);
    }
    break;

  case 1077:
#line 3984 "token.y"
    {
        (yyval.object) = start_with_cl_item_list((yyvsp[(1) - (1)].withclause));
    }
    break;

  case 1078:
#line 3987 "token.y"
    {
        (yyval.object) = addto_with_cl_item_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].withclause));
    }
    break;

  case 1079:
#line 3992 "token.y"
    {
        (yyval.withclause) = construct_with_clause((yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].xvaldatatype));
    }
    break;

  case 1080:
#line 3997 "token.y"
    { (yyval.xvaldatatype) = NULL; }
    break;

  case 1081:
#line 3998 "token.y"
    { (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype); }
    break;

  case 1082:
#line 4001 "token.y"
    { (yyval.ival) = (yyvsp[(2) - (2)].ival); }
    break;

  case 1083:
#line 4002 "token.y"
    { (yyval.ival) = CB_WC_BEEP; }
    break;

  case 1084:
#line 4003 "token.y"
    { (yyval.ival) = CB_WC_BELL; }
    break;

  case 1085:
#line 4004 "token.y"
    { (yyval.ival) = CB_WC_BLINK; }
    break;

  case 1086:
#line 4005 "token.y"
    { (yyval.ival) = CB_WC_CONTROL; }
    break;

  case 1087:
#line 4006 "token.y"
    { (yyval.ival) = CB_WC_CONVERT; }
    break;

  case 1088:
#line 4007 "token.y"
    { (yyval.ival) = CB_WC_ERASE_EOL; }
    break;

  case 1089:
#line 4008 "token.y"
    { (yyval.ival) = CB_WC_ERASE_EOS; }
    break;

  case 1090:
#line 4009 "token.y"
    { (yyval.ival) = CB_WC_HIGH; }
    break;

  case 1091:
#line 4010 "token.y"
    { (yyval.ival) = CB_WC_HIGHLIGHT; }
    break;

  case 1092:
#line 4011 "token.y"
    { (yyval.ival) = CB_WC_LOW; }
    break;

  case 1093:
#line 4012 "token.y"
    { (yyval.ival) = CB_WC_LOWLIGHT; }
    break;

  case 1094:
#line 4013 "token.y"
    { (yyval.ival) = CB_WC_MODE_IS_BLOCK; }
    break;

  case 1095:
#line 4014 "token.y"
    { (yyval.ival) = CB_WC_REVERSE; }
    break;

  case 1096:
#line 4015 "token.y"
    { (yyval.ival) = CB_WC_SIZE; }
    break;

  case 1097:
#line 4018 "token.y"
    { (yyval.ival) = CB_WC_AT_LINE; }
    break;

  case 1098:
#line 4019 "token.y"
    { (yyval.ival) = CB_WC_AT_COLUMN; }
    break;

  case 1099:
#line 4020 "token.y"
    { (yyval.ival) = CB_WC_AT_POSITION; }
    break;

  case 1100:
#line 4025 "token.y"
    {
        (yyval.object) = construct_display_stmt_screen((yyvsp[(2) - (2)].object));
    }
    break;

  case 1101:
#line 4030 "token.y"
    {
        (yyval.object) = create_create_screen_item_lst((yyvsp[(1) - (1)].disp_screen_item));
    }
    break;

  case 1102:
#line 4033 "token.y"
    {
        (yyval.object) = addto_create_screen_item_lst((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].disp_screen_item));
    }
    break;

  case 1103:
#line 4039 "token.y"
    {
        (yyval.disp_screen_item) = construct_disp_screen_item((yyvsp[(1) - (2)].idValWithOpt), (yyvsp[(2) - (2)].at_cl_accept));
    }
    break;

  case 1104:
#line 4061 "token.y"
    {
        (yyval.object) = construct_move_stmt( 1, (yyvsp[(3) - (5)].varVal), (yyvsp[(5) - (5)].itemList) );
    }
    break;

  case 1105:
#line 4064 "token.y"
    {
        (yyval.object) = construct_move_stmt( 0, (yyvsp[(2) - (4)].varVal), (yyvsp[(4) - (4)].itemList) );
    }
    break;

  case 1106:
#line 4069 "token.y"
    { (yyval.itemList) = (yyvsp[(1) - (1)].itemList); }
    break;

  case 1107:
#line 4086 "token.y"
    {
        (yyval.object) = construct_ifelse_stmt( (yyvsp[(2) - (5)].cond), (yyvsp[(3) - (5)].stmts), (yyvsp[(4) - (5)].stmts) );
    }
    break;

  case 1108:
#line 4091 "token.y"
    { (yyval.stmts) = (yyvsp[(1) - (1)].stmts); }
    break;

  case 1109:
#line 4092 "token.y"
    { (yyval.stmts) = (yyvsp[(1) - (1)].stmts); }
    break;

  case 1110:
#line 4095 "token.y"
    { (yyval.stmts) = (yyvsp[(2) - (2)].stmts); }
    break;

  case 1111:
#line 4098 "token.y"
    { (yyval.stmts) = NULL; }
    break;

  case 1112:
#line 4099 "token.y"
    { (yyval.stmts) = (yyvsp[(1) - (1)].stmts); }
    break;

  case 1113:
#line 4102 "token.y"
    { 
        dbg_print(DBG_TRACE, "Else clause found\n"); 
                            { (yyval.stmts) = (yyvsp[(2) - (2)].stmts); }
    }
    break;

  case 1114:
#line 4108 "token.y"
    { (yyval.stmts) = construct_stmts_list( (yyvsp[(1) - (1)].object), 1 ); }
    break;

  case 1115:
#line 4109 "token.y"
    { (yyval.stmts) = construct_stmts_list( NULL, 2 ); }
    break;

  case 1118:
#line 4125 "token.y"
    { 
            /* sysname or implicit def */
        (yyval.object) = construct_accept_stmt(1, (yyvsp[(2) - (4)].idValWithOpt), (yyvsp[(3) - (4)].xvaldatatype), NULL, NULL, 0, NULL);
    }
    break;

  case 1119:
#line 4129 "token.y"
    {
            /* term i-o type */
        (yyval.object) = construct_accept_stmt(2, NULL, NULL, (yyvsp[(2) - (4)].object), (yyvsp[(3) - (4)].esc_excp), 0, NULL);
    }
    break;

  case 1120:
#line 4133 "token.y"
    {
            /* input CD */
        (yyval.object) = construct_accept_stmt(3, (yyvsp[(2) - (5)].idValWithOpt), NULL, NULL, NULL, 1, NULL);
    }
    break;

  case 1121:
#line 4137 "token.y"
    {
            /* screen name type */
       (yyval.object) = construct_accept_stmt(4, (yyvsp[(2) - (5)].idValWithOpt), NULL, NULL, (yyvsp[(4) - (5)].esc_excp), 0, (yyvsp[(3) - (5)].at_cl_accept));
    }
    break;

  case 1122:
#line 4143 "token.y"
    {  /* check if xval is needed here...*/
        (yyval.xvaldatatype) = get_from_clause(CB_IDENTIFIER, (yyvsp[(2) - (2)].idValWithOpt), 0);
    }
    break;

  case 1123:
#line 4146 "token.y"
    {
        (yyval.xvaldatatype) = get_from_clause(CB_IMPLICIT, NULL, (yyvsp[(2) - (2)].ival));
    }
    break;

  case 1126:
#line 4154 "token.y"
    { (yyval.at_cl_accept) = (yyvsp[(2) - (2)].at_cl_accept); }
    break;

  case 1127:
#line 4169 "token.y"
    {
        (yyval.at_cl_accept) = construct_at_clause_acc( (yyvsp[(3) - (4)].varVal), (yyvsp[(4) - (4)].varVal) );
    }
    break;

  case 1128:
#line 4174 "token.y"
    { (yyval.varVal) = NULL; }
    break;

  case 1129:
#line 4175 "token.y"
    {
        (yyval.varVal) = (yyvsp[(3) - (3)].varVal);
    }
    break;

  case 1130:
#line 4180 "token.y"
    { (yyval.ival) = CB_ID_CENTURY_DATE; }
    break;

  case 1131:
#line 4181 "token.y"
    { (yyval.ival) = CB_ID_CENTURY_DAY; }
    break;

  case 1132:
#line 4182 "token.y"
    { (yyval.ival) = CB_ID_DATE; }
    break;

  case 1133:
#line 4183 "token.y"
    { (yyval.ival) = CB_ID_DATE_YYYYMMDD; }
    break;

  case 1134:
#line 4184 "token.y"
    { (yyval.ival) = CB_ID_DATE_TIME; }
    break;

  case 1135:
#line 4185 "token.y"
    { (yyval.ival) = CB_ID_DATE_COMPILED; }
    break;

  case 1136:
#line 4186 "token.y"
    { (yyval.ival) = CB_ID_DAY; }
    break;

  case 1137:
#line 4187 "token.y"
    { (yyval.ival) = CB_ID_DAY_YYYYDDD; }
    break;

  case 1138:
#line 4188 "token.y"
    { (yyval.ival) = CB_ID_DAY_TIME; }
    break;

  case 1139:
#line 4189 "token.y"
    { (yyval.ival) = CB_ID_DAY_WEEK; }
    break;

  case 1140:
#line 4190 "token.y"
    { (yyval.ival) = CB_ID_TIME; }
    break;

  case 1141:
#line 4191 "token.y"
    { (yyval.ival) = CB_ID_ESCAPE; }
    break;

  case 1142:
#line 4192 "token.y"
    { (yyval.ival) = CB_ID_EXCEPTION; }
    break;

  case 1143:
#line 4195 "token.y"
    {
        (yyval.object) = create_accept_item_list( (yyvsp[(1) - (1)].accitem) );
    }
    break;

  case 1144:
#line 4198 "token.y"
    {
        (yyval.object) = addto_accept_item_list( (yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].accitem) );
    }
    break;

  case 1145:
#line 4204 "token.y"
    {
        (yyval.accitem) = construct_accept_item( (yyvsp[(1) - (2)].xvaldatatype), (yyvsp[(2) - (2)].object) );
    }
    break;

  case 1146:
#line 4209 "token.y"
    { 
        (yyval.xvaldatatype) = getXval(CB_IDENTIFIER, (yyvsp[(1) - (1)].idValWithOpt), NULL);
    }
    break;

  case 1147:
#line 4212 "token.y"
    {
        (yyval.xvaldatatype) = getXval(CB_ID_UNITVAL, (yyvsp[(1) - (3)].idValWithOpt), (yyvsp[(3) - (3)].varVal));
    }
    break;

  case 1148:
#line 4216 "token.y"
    {
        (yyval.object) = NULL;
    }
    break;

  case 1149:
#line 4219 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (1)].object);
    }
    break;

  case 1150:
#line 4224 "token.y"
    {
        (yyval.object) = create_with2_list((yyvsp[(1) - (1)].with2));
    }
    break;

  case 1151:
#line 4227 "token.y"
    {
        (yyval.object) = addto_with2_list((yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].with2));
    }
    break;

  case 1152:
#line 4232 "token.y"
    {
        (yyval.with2) = construct_with_clause2((yyvsp[(2) - (3)].ival), NULL, (yyvsp[(3) - (3)].varVal));
    }
    break;

  case 1153:
#line 4235 "token.y"
    { /* moved here from with clause2 for simplicity */
        (yyval.with2) = construct_with_clause2(0, (yyvsp[(2) - (2)].pos_clause), NULL);
    }
    break;

  case 1154:
#line 4240 "token.y"
    { (yyval.ival) = CB_WC_AUTO; }
    break;

  case 1155:
#line 4241 "token.y"
    { (yyval.ival) = CB_WC_AUTO_SKIP; }
    break;

  case 1156:
#line 4242 "token.y"
    { (yyval.ival) = CB_WC_NO_BEEP; }
    break;

  case 1157:
#line 4243 "token.y"
    { (yyval.ival) = CB_WC_BEFORE_TIME; }
    break;

  case 1158:
#line 4244 "token.y"
    { (yyval.ival) = CB_WC_NO_BELL; }
    break;

  case 1159:
#line 4245 "token.y"
    { (yyval.ival) = CB_WC_BLANK; }
    break;

  case 1160:
#line 4246 "token.y"
    { (yyval.ival) = CB_WC_CONTROL; }
    break;

  case 1161:
#line 4247 "token.y"
    { (yyval.ival) = CB_WC_CONVERT; }
    break;

  case 1162:
#line 4248 "token.y"
    { (yyval.ival) = CB_WC_CURSER; }
    break;

  case 1163:
#line 4249 "token.y"
    { (yyval.ival) = CB_WC_ECHO; }
    break;

  case 1164:
#line 4250 "token.y"
    { (yyval.ival) = CB_WC_ERASE_EOL; }
    break;

  case 1165:
#line 4251 "token.y"
    { (yyval.ival) = CB_WC_ERASE_EOS; }
    break;

  case 1166:
#line 4252 "token.y"
    { (yyval.ival) = CB_WC_HIGH; }
    break;

  case 1167:
#line 4253 "token.y"
    { (yyval.ival) = CB_WC_HIGHLIGHT; }
    break;

  case 1168:
#line 4254 "token.y"
    { (yyval.ival) = CB_WC_LOW; }
    break;

  case 1169:
#line 4255 "token.y"
    { (yyval.ival) = CB_WC_LOWLIGHT; }
    break;

  case 1170:
#line 4256 "token.y"
    { (yyval.ival) = CB_WC_MODE_IS_BLOCK; }
    break;

  case 1171:
#line 4257 "token.y"
    { (yyval.ival) = CB_WC_OFF; }
    break;

  case 1172:
#line 4258 "token.y"
    { (yyval.ival) = CB_WC_PROMPT_CHAR; }
    break;

  case 1173:
#line 4259 "token.y"
    { (yyval.ival) = CB_WC_REVERSE; }
    break;

  case 1174:
#line 4260 "token.y"
    { (yyval.ival) = CB_WC_SECURE; }
    break;

  case 1175:
#line 4261 "token.y"
    { (yyval.ival) = CB_WC_SIZE; }
    break;

  case 1176:
#line 4262 "token.y"
    { (yyval.ival) = CB_WC_TAB; }
    break;

  case 1177:
#line 4263 "token.y"
    { (yyval.ival) = CB_WC_UPDATE; }
    break;

  case 1181:
#line 4269 "token.y"
    {
        (yyval.pos_clause) = update_pos((yyvsp[(5) - (5)].pos_clause), (yyvsp[(4) - (5)].varVal));
    }
    break;

  case 1182:
#line 4274 "token.y"
    {
        (yyval.pos_clause) = construct_pos(1, (yyvsp[(3) - (3)].varVal)); 
    }
    break;

  case 1183:
#line 4277 "token.y"
    {
        (yyval.pos_clause) = construct_pos(2, (yyvsp[(3) - (3)].varVal));
    }
    break;

  case 1184:
#line 4282 "token.y"
    {   (yyval.esc_excp) = NULL; }
    break;

  case 1185:
#line 4283 "token.y"
    {
        (yyval.esc_excp) = update_esc_excp_item((yyvsp[(2) - (5)].ival), (yyvsp[(3) - (5)].idValWithOpt), (yyvsp[(4) - (5)].object), (yyvsp[(5) - (5)].esc_excp));
    }
    break;

  case 1186:
#line 4288 "token.y"
    { (yyval.esc_excp) = NULL; }
    break;

  case 1187:
#line 4289 "token.y"
    {
        (yyval.esc_excp) = construct_esc_excp_item( (yyvsp[(3) - (4)].ival), (yyvsp[(4) - (4)].object) );
    }
    break;

  case 1188:
#line 4294 "token.y"
    { (yyval.ival) = CB_ESCAPE; }
    break;

  case 1189:
#line 4295 "token.y"
    { (yyval.ival) = CB_EXCEPTION; }
    break;

  case 1190:
#line 4298 "token.y"
    { (yyval.idValWithOpt) = NULL; }
    break;

  case 1191:
#line 4299 "token.y"
    { (yyval.idValWithOpt) = (yyvsp[(1) - (1)].idValWithOpt); }
    break;

  case 1192:
#line 4302 "token.y"
    { (yyval.object) = (yyvsp[(1) - (1)].object); }
    break;

  case 1193:
#line 4316 "token.y"
    {
        (yyval.object) = (yyvsp[(1) - (2)].object);
    }
    break;

  case 1194:
#line 4321 "token.y"
    {
         dbg_print(DBG_TRACE, "add_clause: add option 1 \n"); 
         (yyval.object) = construct_add_stmt( CB_MS_SIMPLE, (yyvsp[(2) - (5)].itemList), (yyvsp[(4) - (5)].itemList), NULL, (yyvsp[(5) - (5)].object));
    }
    break;

  case 1195:
#line 4325 "token.y"
    {
         dbg_print(DBG_TRACE, "add_clause: add option 2 \n"); 
         (yyval.object) = construct_add_stmt( CB_MS_GIVING, (yyvsp[(2) - (6)].itemList), (yyvsp[(3) - (6)].itemList), (yyvsp[(5) - (6)].itemList), (yyvsp[(6) - (6)].object) );    
    }
    break;

  case 1196:
#line 4329 "token.y"
    {
         dbg_print(DBG_TRACE, "add_clause: add option 3 \n"); 
         (yyval.object) = construct_add_stmt( CB_MS_CORR, (yyvsp[(3) - (7)].xvaldatatype), (yyvsp[(5) - (7)].xvaldatatype), NULL, (yyvsp[(7) - (7)].object));             
    }
    break;

  case 1197:
#line 4335 "token.y"
    { (yyval.itemList) = NULL; }
    break;

  case 1198:
#line 4336 "token.y"
    {
        (yyval.itemList) = (yyvsp[(2) - (2)].itemList);
    }
    break;

  case 1199:
#line 4360 "token.y"
    { 
        dbg_print(DBG_TRACE, "from_arg_list: gname \n"); 
        (yyval.itemList) = startGnameList( (yyvsp[(1) - (1)].varVal) );
    }
    break;

  case 1200:
#line 4364 "token.y"
    {
        dbg_print(DBG_TRACE, "from_arg_clause: adding item no comma... \n");         
        (yyval.itemList) = addGnameListItem( (yyvsp[(1) - (2)].itemList), (yyvsp[(2) - (2)].varVal) );
    }
    break;

  case 1201:
#line 4368 "token.y"
    {
        dbg_print(DBG_TRACE, "from_arg_clause: adding item comma... \n");         
        (yyval.itemList) = addGnameListItem( (yyvsp[(1) - (3)].itemList), (yyvsp[(3) - (3)].varVal) );
    }
    break;

  case 1202:
#line 4374 "token.y"
    { 
        dbg_print(DBG_TRACE, "to_arg_list: to_arg\n"); 
        (yyval.itemList) = startGnameList( (yyvsp[(1) - (1)].varVal) );
    }
    break;

  case 1203:
#line 4378 "token.y"
    { 
        dbg_print(DBG_TRACE, "to_arg_list: list \n"); 
        (yyval.itemList) = addGnameListItem( (yyvsp[(1) - (2)].itemList), (yyvsp[(2) - (2)].varVal) );
    }
    break;

  case 1204:
#line 4382 "token.y"
    { 
        dbg_print(DBG_TRACE, "to_arg_list: list \n"); 
        (yyval.itemList) = addGnameListItem( (yyvsp[(1) - (3)].itemList), (yyvsp[(3) - (3)].varVal) );
    }
    break;

  case 1205:
#line 4388 "token.y"
    {          /* xval opt_rounded */
        (yyvsp[(1) - (2)].varVal)->rounded = (yyvsp[(2) - (2)].ival);
        (yyval.varVal) = (yyvsp[(1) - (2)].varVal);
    }
    break;

  case 1206:
#line 4394 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 1207:
#line 4395 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 1208:
#line 4398 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 1209:
#line 4399 "token.y"
    { (yyval.ival) = 1; }
    break;

  case 1211:
#line 4410 "token.y"
    {
        (yyval.object) = construct_on_error_data( (yyvsp[(1) - (2)].object), (yyvsp[(2) - (2)].object) );
    }
    break;

  case 1212:
#line 4414 "token.y"
    {
        (yyval.object) = NULL;
    }
    break;

  case 1213:
#line 4417 "token.y"
    {
        (yyval.object) = (yyvsp[(4) - (4)].object);
    }
    break;

  case 1214:
#line 4421 "token.y"
    {
        (yyval.object) = NULL;
    }
    break;

  case 1215:
#line 4424 "token.y"
    {
        (yyval.object) = (yyvsp[(5) - (5)].object);
    }
    break;

  case 1218:
#line 4440 "token.y"
    {
        (yyval.object) = construct_subtract_stmt( CB_MS_SIMPLE, (yyvsp[(2) - (6)].itemList), (yyvsp[(4) - (6)].itemList), NULL, (yyvsp[(5) - (6)].object), 0 ); 
    }
    break;

  case 1219:
#line 4444 "token.y"
    {
        (yyval.object) = construct_subtract_stmt( CB_MS_GIVING, (yyvsp[(2) - (8)].itemList), (yyvsp[(4) - (8)].xvaldatatype), (yyvsp[(6) - (8)].itemList), (yyvsp[(7) - (8)].object), 0 ); 
    }
    break;

  case 1220:
#line 4448 "token.y"
    {
        (yyval.object) = construct_subtract_stmt( CB_MS_CORR, (yyvsp[(3) - (8)].idValWithOpt), (yyvsp[(5) - (8)].idValWithOpt), NULL, (yyvsp[(7) - (8)].object), (yyvsp[(6) - (8)].ival) ); 
    }
    break;

  case 1221:
#line 4453 "token.y"
    {
        (yyval.itemList) = startXvalList( (yyvsp[(1) - (1)].xvaldatatype) );
    }
    break;

  case 1222:
#line 4456 "token.y"
    {
        (yyval.itemList) = addXvalListItem( (yyvsp[(1) - (2)].itemList), (yyvsp[(2) - (2)].xvaldatatype) );
    }
    break;

  case 1223:
#line 4459 "token.y"
    {
        (yyval.itemList) = addXvalListItem( (yyvsp[(1) - (3)].itemList), (yyvsp[(3) - (3)].xvaldatatype) );
    }
    break;

  case 1224:
#line 4464 "token.y"
    {
        (yyval.itemList) = startXvalList( (yyvsp[(1) - (1)].xvaldatatype) );
    }
    break;

  case 1225:
#line 4467 "token.y"
    {
        (yyval.itemList) = addXvalListItem( (yyvsp[(1) - (2)].itemList), (yyvsp[(2) - (2)].xvaldatatype) );
    }
    break;

  case 1226:
#line 4470 "token.y"
    {
        (yyval.itemList) = addXvalListItem( (yyvsp[(1) - (3)].itemList), (yyvsp[(3) - (3)].xvaldatatype) );
    }
    break;

  case 1227:
#line 4475 "token.y"
    {
        (yyvsp[(1) - (1)].xvaldatatype)->rounded = 0;
        (yyval.xvaldatatype) = (yyvsp[(1) - (1)].xvaldatatype);
    }
    break;

  case 1228:
#line 4479 "token.y"
    {
        (yyvsp[(1) - (2)].xvaldatatype)->rounded = 1;
        (yyval.xvaldatatype) = (yyvsp[(1) - (2)].xvaldatatype);
    }
    break;

  case 1231:
#line 4495 "token.y"
    {
        (yyval.object) = construct_multiply_stmt( CB_MS_SIMPLE, (yyvsp[(2) - (6)].xvaldatatype), (yyvsp[(4) - (6)].itemList), NULL, (yyvsp[(5) - (6)].object)); 
    }
    break;

  case 1232:
#line 4499 "token.y"
    {
        (yyval.object) = construct_multiply_stmt( CB_MS_GIVING, (yyvsp[(2) - (8)].xvaldatatype), (yyvsp[(4) - (8)].xvaldatatype), (yyvsp[(6) - (8)].itemList), (yyvsp[(7) - (8)].object));
    }
    break;

  case 1235:
#line 4511 "token.y"
    {
        (yyval.object) = construct_divide_stmt( CB_DIV_INTO, (yyvsp[(2) - (6)].xvaldatatype), (yyvsp[(4) - (6)].itemList), NULL, NULL, (yyvsp[(5) - (6)].object));
    }
    break;

  case 1236:
#line 4514 "token.y"
    {
        (yyval.object) = construct_divide_stmt( CB_DIV_INTO_GIVING, (yyvsp[(2) - (8)].xvaldatatype), (yyvsp[(4) - (8)].xvaldatatype), (yyvsp[(6) - (8)].itemList), NULL, (yyvsp[(7) - (8)].object));
    }
    break;

  case 1237:
#line 4517 "token.y"
    {
        (yyval.object) = construct_divide_stmt( CB_DIV_BY_GIVING, (yyvsp[(2) - (8)].xvaldatatype), (yyvsp[(4) - (8)].xvaldatatype), (yyvsp[(6) - (8)].itemList), NULL, (yyvsp[(7) - (8)].object));
    }
    break;

  case 1238:
#line 4521 "token.y"
    {
        (yyval.object) = construct_divide_stmt( CB_DIV_INTO_GIVING_REM, (yyvsp[(2) - (10)].xvaldatatype), (yyvsp[(4) - (10)].xvaldatatype), (yyvsp[(6) - (10)].itemList), (yyvsp[(8) - (10)].xvaldatatype), (yyvsp[(9) - (10)].object));
    }
    break;

  case 1239:
#line 4525 "token.y"
    {
        (yyval.object) = construct_divide_stmt( CB_DIV_BY_GIVING_REM, (yyvsp[(2) - (10)].xvaldatatype), (yyvsp[(4) - (10)].xvaldatatype), (yyvsp[(6) - (10)].itemList), (yyvsp[(8) - (10)].xvaldatatype), (yyvsp[(9) - (10)].object));
    }
    break;

  case 1242:
#line 4539 "token.y"
    {
        (yyval.object) = construct_compute_stmt((yyvsp[(2) - (8)].itemList), (yyvsp[(3) - (8)].ival), (yyvsp[(5) - (8)].arithm_expr), (yyvsp[(6) - (8)].ival), (yyvsp[(7) - (8)].object));                                
    }
    break;

  case 1245:
#line 4558 "token.y"
    {
        (yyval.object) = cons_start_statement((yyvsp[(2) - (6)].idValWithOpt), (yyvsp[(3) - (6)].startbody), (yyvsp[(4) - (6)].ival), (yyvsp[(5) - (6)].invalid_action));
    }
    break;

  case 1246:
#line 4564 "token.y"
    {        /* found only in RM Cobol */
        (yyval.startbody) = cons_start_body(1, (yyvsp[(2) - (4)].ival), (yyvsp[(3) - (4)].varVal), 1, (yyvsp[(4) - (4)].varVal), NULL);
    }
    break;

  case 1247:
#line 4569 "token.y"
    {
        (yyval.startbody) = cons_start_body(2, 0, NULL, 0, NULL, (yyvsp[(5) - (5)].itemList));
    }
    break;

  case 1250:
#line 4577 "token.y"
    { (yyval.varVal) = NULL; }
    break;

  case 1251:
#line 4578 "token.y"
    {
        (yyval.varVal) = (yyvsp[(3) - (3)].varVal); 
    }
    break;

  case 1252:
#line 4583 "token.y"
    { (yyval.ival) = 0; }
    break;

  case 1253:
#line 4584 "token.y"
    {
        (yyval.ival) = 1;
    }
    break;

  case 1254:
#line 4589 "token.y"
    { (yyval.ival) = (yyvsp[(1) - (1)].ival); }
    break;

  case 1255:
#line 4590 "token.y"
    { (yyval.ival) = CB_FIRST; }
    break;

  case 1256:
#line 4591 "token.y"
    { (yyval.ival) = CB_LAST; }
    break;

  case 1257:
#line 4599 "token.y"
    {
        (yyval.object) = cons_initiate_statement((yyvsp[(2) - (2)].sval));
    }
    break;

  case 1258:
#line 4609 "token.y"
    {
        (yyval.object) = cons_terminate_statement((yyvsp[(2) - (2)].sval));
    }
    break;

  case 1259:
#line 4618 "token.y"
    {
        (yyval.object) = cons_generate_statement((yyvsp[(2) - (2)].sval));
    }
    break;

  case 1260:
#line 4628 "token.y"
    {
        (yyval.xvaldatatype) = construct_xval( CB_IDENTIFIER, (void *)(yyvsp[(1) - (1)].idValWithOpt));
    }
    break;

  case 1261:
#line 4631 "token.y"
    {
        (yyval.xvaldatatype) = construct_xval( CB_N_LITERAL, (void *)(yyvsp[(1) - (1)].literalval));
    }
    break;

  case 1262:
#line 4634 "token.y"
    {
        (yyval.xvaldatatype) = construct_xval( CB_C_LITERAL, (void *)(yyvsp[(1) - (1)].literalval));
    }
    break;

  case 1263:
#line 4637 "token.y"
    {
        (yyval.xvaldatatype) = construct_xval( CB_LENGTH, (void *)(yyvsp[(3) - (3)].idValWithOpt));
    }
    break;

  case 1264:
#line 4640 "token.y"
    {
        (yyval.xvaldatatype) = construct_xval( CB_ADDRESS, (void *)(yyvsp[(3) - (3)].idValWithOpt));
    }
    break;

  case 1265:
#line 4643 "token.y"
    {
        (yyval.xvaldatatype) = construct_xval( CB_ADDRESS, (void *)(yyvsp[(3) - (3)].idValWithOpt));
    }
    break;

  case 1266:
#line 4648 "token.y"
    {
        (yyval.literalval) = (yyvsp[(1) - (1)].literalval);
    }
    break;

  case 1267:
#line 4651 "token.y"
    {
        (yyval.literalval) = (yyvsp[(2) - (2)].literalval);
    }
    break;

  case 1268:
#line 4654 "token.y"
    {
        (yyval.literalval) = negate_numeric((yyvsp[(2) - (2)].literalval));
    }
    break;

  case 1269:
#line 4659 "token.y"
    { 
        (yyval.literalval) = get_numliteral( (yyvsp[(1) - (1)].ival), CB_INT );
    }
    break;

  case 1270:
#line 4662 "token.y"
    { 
        (yyval.literalval) = get_numliteral( (yyvsp[(1) - (1)].fval), CB_FLOAT);
    }
    break;

  case 1271:
#line 4665 "token.y"
    { 
        (yyval.literalval) = get_numliteral( (yyvsp[(1) - (1)].longVal), CB_HEX_NO);
    }
    break;

  case 1272:
#line 4670 "token.y"
    { 
        dbg_print(DBG_TRACE, "char_literal: Squote literal\n");
        (yyval.literalval) = get_charliteral( strdup((yyvsp[(1) - (1)].sval)), CB_CHARPTR );
    }
    break;

  case 1273:
#line 4674 "token.y"
    {         
        dbg_print(DBG_TRACE, "char_literal: Dquote literal\n");
        (yyval.literalval) = get_charliteral( strdup((yyvsp[(1) - (1)].sval)), CB_CHARPTR );
    }
    break;

  case 1274:
#line 4678 "token.y"
    { 
        dbg_print(DBG_TRACE, "char_literal: Hex literal\n");
        (yyval.literalval) = get_charliteral( strdup((yyvsp[(1) - (1)].sval)), CB_CHARPTR );
    }
    break;

  case 1275:
#line 4685 "token.y"
    { dbg_print(DBG_TRACE, "comma_opt: Found comma\n"); }
    break;

  case 1276:
#line 4693 "token.y"
    {
        /* $$ = construct_identifier_1( $1, $2, $3, $4); */
        (yyval.idValWithOpt) = construct_identifier_1( (yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].itemList), (yyvsp[(3) - (3)].subscrlst));
    }
    break;

  case 1277:
#line 4699 "token.y"
    {
        (yyval.sval) = strdup((yyvsp[(1) - (1)].sval));
    }
    break;

  case 1278:
#line 4704 "token.y"
    { (yyval.itemList) = NULL; }
    break;

  case 1279:
#line 4705 "token.y"
    { (yyval.itemList) = (yyvsp[(1) - (1)].itemList); }
    break;

  case 1280:
#line 4708 "token.y"
    { (yyval.subscrlst) = NULL; }
    break;

  case 1281:
#line 4709 "token.y"
    { 
        dbg_print(DBG_TRACE, "opt_subscripts: Subscripts found\n");
        (yyval.subscrlst) = (yyvsp[(2) - (3)].subscrlst);
    }
    break;

  case 1282:
#line 4715 "token.y"
    { (yyval.itemList) = startList((yyvsp[(1) - (1)].sval)); }
    break;

  case 1283:
#line 4716 "token.y"
    { (yyval.itemList) = addListItem((yyvsp[(1) - (2)].itemList), (yyvsp[(2) - (2)].sval));}
    break;

  case 1284:
#line 4719 "token.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1285:
#line 4720 "token.y"
    { (yyval.sval) = (yyvsp[(2) - (2)].sval); }
    break;

  case 1286:
#line 4724 "token.y"
    { 
        (yyval.subscrlst) = start_subscript_list((yyvsp[(1) - (1)].subscritem)); 
    }
    break;

  case 1287:
#line 4728 "token.y"
    { 
        (yyval.subscrlst) = add_subscriptlist_item((yyvsp[(1) - (2)].subscrlst), (yyvsp[(2) - (2)].subscritem)); 
    }
    break;

  case 1288:
#line 4732 "token.y"
    { 
        (yyval.subscrlst) = add_subscriptlist_item((yyvsp[(1) - (3)].subscrlst), (yyvsp[(3) - (3)].subscritem)); 
    }
    break;

  case 1289:
#line 4739 "token.y"
    { (yyval.subscritem) = (yyvsp[(1) - (1)].subscritem); }
    break;

  case 1290:
#line 4743 "token.y"
    {
        (yyval.subscritem) = cons_subscript_item(CB_SUBITEM_ID, (yyvsp[(1) - (1)].sval), NULL, NULL, 0, NULL);
    }
    break;

  case 1291:
#line 4746 "token.y"
    {
        (yyval.subscritem) = cons_subscript_item(CB_SUBITEM_LIT, NULL, (yyvsp[(1) - (1)].literalval), NULL, 0, NULL);        
    }
    break;

  case 1292:
#line 4749 "token.y"
    {
        (yyval.subscritem) = cons_subscript_item(CB_SUBITEM_SUBITEM, NULL, NULL, (yyvsp[(2) - (3)].subscritem), 0, NULL);        
    }
    break;

  case 1293:
#line 4752 "token.y"
    {
        (yyval.subscritem) = cons_subscript_item(CB_SUBITEM_SUBITEM, NULL, NULL, (yyvsp[(1) - (3)].subscritem), CB_AO_PLUS, (yyvsp[(3) - (3)].subscritem));        
    }
    break;

  case 1294:
#line 4755 "token.y"
    {
        (yyval.subscritem) = cons_subscript_item(CB_SUBITEM_SUBITEM, NULL, NULL, (yyvsp[(1) - (3)].subscritem), CB_AO_MINUS, (yyvsp[(3) - (3)].subscritem));        
    }
    break;

  case 1295:
#line 4758 "token.y"
    {
        (yyval.subscritem) = cons_subscript_item(CB_SUBITEM_SUBITEM, NULL, NULL, (yyvsp[(1) - (3)].subscritem), CB_AO_COLON, (yyvsp[(3) - (3)].subscritem));        
    }
    break;

  case 1296:
#line 4778 "token.y"
    { 
        dbg_print(DBG_TRACE, "GNAME:identifier_1 \n"); 
        (yyval.varVal) = construct_gname_id((yyvsp[(1) - (1)].idValWithOpt));
    }
    break;

  case 1297:
#line 4782 "token.y"
    { 
        dbg_print(DBG_TRACE, "GNAME:gliteral\n"); 
        (yyval.varVal) = (yyvsp[(1) - (1)].literalval);
    }
    break;

  case 1298:
#line 4787 "token.y"
    { 
        dbg_print(DBG_TRACE, "GNAME:FUNCTION\n"); 
        (yyval.varVal) = construct_gname_function((yyvsp[(2) - (2)].idValWithOpt), CB_FUNCTION);
    }
    break;

  case 1299:
#line 4793 "token.y"
    { (yyval.literalval) = (yyvsp[(1) - (1)].literalval); }
    break;

  case 1300:
#line 4794 "token.y"
    { (yyval.literalval) = (yyvsp[(1) - (1)].literalval); }
    break;

  case 1301:
#line 4797 "token.y"
    { 
        dbg_print(DBG_TRACE, "WithoutAllLiteral: Literal\n"); 
        (yyval.literalval) = (yyvsp[(1) - (1)].literalval);
    }
    break;

  case 1302:
#line 4801 "token.y"
    { 
        dbg_print(DBG_TRACE, "WithoutAllLiteral: Special literal\n"); 
        (yyval.literalval) = get_specialliteral( (yyvsp[(1) - (1)].ival), CB_SPECIAL);
    }
    break;

  case 1303:
#line 4807 "token.y"
    { 
            dbg_print(DBG_TRACE, "literal: Signed n literal\n"); 
            (yyval.literalval) = (yyvsp[(1) - (1)].literalval);
        }
    break;

  case 1304:
#line 4811 "token.y"
    { 
            dbg_print(DBG_TRACE, "literal: Char literal\n"); 
            (yyval.literalval) = (yyvsp[(1) - (1)].literalval);
        }
    break;

  case 1305:
#line 4817 "token.y"
    {
            (yyvsp[(2) - (2)].literalval)->allflag = 1;
            (yyval.literalval) = (yyvsp[(2) - (2)].literalval);
        }
    break;

  case 1306:
#line 4821 "token.y"
    {
        (yyval.literalval) = get_specialliteral( (yyvsp[(2) - (2)].ival), CB_SPECIAL);
        (yyval.literalval)->allflag = 1;
    }
    break;

  case 1307:
#line 4827 "token.y"
    { (yyval.ival) = CB_SL_SPACES; }
    break;

  case 1308:
#line 4828 "token.y"
    { (yyval.ival) = CB_SL_ZERO; }
    break;

  case 1309:
#line 4829 "token.y"
    { (yyval.ival) = CB_SL_QUOTES; }
    break;

  case 1310:
#line 4830 "token.y"
    { (yyval.ival) = CB_SL_HIGHVALUES; }
    break;

  case 1311:
#line 4831 "token.y"
    { (yyval.ival) = CB_SL_LOWVALUES; }
    break;

  case 1312:
#line 4832 "token.y"
    { (yyval.ival) = CB_SL_NULL; }
    break;

  case 1313:
#line 4833 "token.y"
    { (yyval.ival) = CB_SL_TRUE; }
    break;

  case 1314:
#line 4834 "token.y"
    { (yyval.ival) = CB_SL_FALSE; }
    break;

  case 1315:
#line 4841 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside the cond feb14 -1 ..\n");
        (yyval.cond) = construct_condition( (yyvsp[(1) - (2)].comb_cond), (yyvsp[(2) - (2)].comb_abri_cond_list) );
        /* need a change here...
        When the opt_comb_abri_condition is not null the procession should be
        different. */
       
    }
    break;

  case 1316:
#line 4852 "token.y"
    {   (yyval.comb_abri_cond_list) = NULL; }
    break;

  case 1317:
#line 4853 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside opt_comb_abri_condition...\n");
        (yyval.comb_abri_cond_list) = (yyvsp[(1) - (1)].comb_abri_cond_list);
    }
    break;

  case 1318:
#line 4859 "token.y"
    {
        (yyval.comb_abri_cond_list) = start_comb_abri_list((yyvsp[(1) - (1)].comb_abri_cond_item));
    }
    break;

  case 1319:
#line 4862 "token.y"
    {
        (yyval.comb_abri_cond_list) = add_comb_abri_list((yyvsp[(1) - (2)].comb_abri_cond_list), (yyvsp[(2) - (2)].comb_abri_cond_item));
    }
    break;

  case 1320:
#line 4868 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside comb_abri_cond...\n");

        (yyval.comb_abri_cond_item) = update_comb_abri_cond((yyvsp[(1) - (2)].ival), (yyvsp[(2) - (2)].comb_abri_cond_item));
    }
    break;

  case 1321:
#line 4875 "token.y"
    { (yyval.ival) = CB_LO_AND; }
    break;

  case 1322:
#line 4876 "token.y"
    { (yyval.ival) = CB_LO_OR;  }
    break;

  case 1323:
#line 4879 "token.y"
    {
        (yyval.comb_abri_cond_item) = construct_comb_abri_cond( (yyvsp[(1) - (1)].comb_cond), NULL);
    }
    break;

  case 1324:
#line 4882 "token.y"
    {
        (yyval.comb_abri_cond_item) = construct_comb_abri_cond( NULL, (yyvsp[(1) - (1)].abbr_rest));
    }
    break;

  case 1325:
#line 4887 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside the comb cond feb14 -1 ..\n");
        (yyval.comb_cond) = construct_comb_cond(0, (yyvsp[(1) - (1)].simp_cond));
    }
    break;

  case 1326:
#line 4891 "token.y"
    {
        (yyval.comb_cond) = construct_comb_cond(1, (yyvsp[(2) - (2)].simp_cond));
    }
    break;

  case 1327:
#line 4897 "token.y"
    {
        (yyval.abbr_rest) = (yyvsp[(1) - (1)].abbr_rest);
    }
    break;

  case 1328:
#line 4902 "token.y"
    {
        (yyval.abbr_rest) = start_abri_item_list((yyvsp[(1) - (1)].abbr_item));
    }
    break;

  case 1329:
#line 4905 "token.y"
    {
        (yyval.abbr_rest) = add_abri_item_list((yyvsp[(1) - (2)].abbr_rest), (yyvsp[(2) - (2)].abbr_item));
    }
    break;

  case 1330:
#line 4910 "token.y"
    {
        (yyval.abbr_item) = update_abbr_item((yyvsp[(1) - (3)].ival), (yyvsp[(2) - (3)].ival), (yyvsp[(3) - (3)].abbr_item));
    }
    break;

  case 1331:
#line 4915 "token.y"
    {
        construct_Abbr_item((yyvsp[(1) - (1)].arithm_expr), NULL);
    }
    break;

  case 1332:
#line 4918 "token.y"
    {
        construct_Abbr_item((yyvsp[(2) - (4)].arithm_expr), (yyvsp[(3) - (4)].abbr_rest));
    }
    break;

  case 1333:
#line 4923 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside the simple cond feb14 -1 ..\n");
        (yyval.simp_cond) = construct_simp_cond(CB_SC_REL, (yyvsp[(1) - (1)].rel_cond));
    }
    break;

  case 1334:
#line 4937 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside simple_condition \n");
        (yyval.simp_cond) = construct_simp_cond_cond(CB_SC_COND, (yyvsp[(2) - (3)].cond));
    }
    break;

  case 1335:
#line 4947 "token.y"
    { (yyval.ival) = (yyvsp[(2) - (2)].ival); }
    break;

  case 1336:
#line 4950 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside the rel cond feb14 -1 ..\n");
        (yyval.rel_cond) = construct_rel_cond(CB_RC_SINGLE, 0, 0, (yyvsp[(1) - (1)].arithm_expr), NULL);        
    }
    break;

  case 1337:
#line 4954 "token.y"
    {
        dbg_print(DBG_TRACE, "Inside the rel cond feb14 ..\n");
        (yyval.rel_cond) = construct_rel_cond(CB_RC_SIMPLE, 0, (yyvsp[(3) - (4)].ival), (yyvsp[(1) - (4)].arithm_expr), (yyvsp[(4) - (4)].arithm_expr));
    }
    break;

  case 1338:
#line 4958 "token.y"
    {
        (yyval.rel_cond) = construct_rel_cond(CB_RC_SIMPLE, 1, (yyvsp[(4) - (5)].ival), (yyvsp[(1) - (5)].arithm_expr), (yyvsp[(5) - (5)].arithm_expr));
    }
    break;

  case 1339:
#line 4961 "token.y"
    {
        (yyval.rel_cond) = construct_rel_cond_sign(CB_RC_SIGN, (yyvsp[(1) - (1)].ival));
    }
    break;

  case 1340:
#line 4964 "token.y"
    {
        (yyval.rel_cond) = construct_rel_cond_class(CB_RC_CLASS, (yyvsp[(2) - (3)].ival), (yyvsp[(1) - (3)].arithm_expr), (yyvsp[(3) - (3)].ival));
    }
    break;

  case 1341:
#line 4967 "token.y"
    {
        (yyval.rel_cond) = construct_rel_cond_class(CB_RC_CLASS, 0, (yyvsp[(1) - (3)].arithm_expr), (yyvsp[(3) - (3)].ival));
    }
    break;

  case 1342:
#line 4973 "token.y"
    { (yyval.ival) = CB_CI_NUMERIC; }
    break;

  case 1343:
#line 4974 "token.y"
    { (yyval.ival) = CB_CI_ALPHABETIC; }
    break;

  case 1344:
#line 4975 "token.y"
    { (yyval.ival) = CB_CI_ALPHA_UPPER; }
    break;

  case 1345:
#line 4976 "token.y"
    { (yyval.ival) = CB_CI_ALPHA_LOWER; }
    break;

  case 1346:
#line 4980 "token.y"
    {
        if((yyvsp[(1) - (2)].ival) == 1) {
            (yyval.ival) = reverse_sign((yyvsp[(1) - (2)].ival));
        }
        else {
            (yyval.ival) = (yyvsp[(2) - (2)].ival);
        }
    }
    break;

  case 1347:
#line 4990 "token.y"
    { (yyval.ival) = CB_SI_POSITIVE; }
    break;

  case 1348:
#line 4991 "token.y"
    { (yyval.ival) = CB_SI_NEGATIVE; }
    break;

  case 1349:
#line 4992 "token.y"
    { (yyval.ival) = CB_SI_ZERO;     }
    break;

  case 1350:
#line 4996 "token.y"
    {
        if( (yyvsp[(1) - (2)].ival) == 0 ) {
            (yyval.ival) = (yyvsp[(2) - (2)].ival);
        } else {
            (yyval.ival) = reverse_logical_op( (yyvsp[(2) - (2)].ival) );
        }
        dbg_print(DBG_TRACE, "Inside relational_operator...\n");
    }
    break;

  case 1351:
#line 5006 "token.y"
    { (yyval.ival) = CB_GT; }
    break;

  case 1352:
#line 5007 "token.y"
    { (yyval.ival) = CB_GE; }
    break;

  case 1353:
#line 5008 "token.y"
    { (yyval.ival) = CB_LT; }
    break;

  case 1354:
#line 5009 "token.y"
    { (yyval.ival) = CB_LE; }
    break;

  case 1355:
#line 5010 "token.y"
    { (yyval.ival) = CB_EQ; }
    break;

  case 1356:
#line 5011 "token.y"
    { (yyval.ival) = CB_NE; }
    break;

  case 1365:
#line 5027 "token.y"
    { dbg_print(DBG_TRACE, "_eq: EQUAL opt_to \n"); }
    break;

  case 1373:
#line 5039 "token.y"
    {
                dbg_print(DBG_TRACE, "parser found LPARAN ( \n");
    }
    break;

  case 1374:
#line 5042 "token.y"
    {
                dbg_print(DBG_TRACE, "parser found LPARAN_SUB \n");
    }
    break;

  case 1375:
#line 5047 "token.y"
    {
                dbg_print(DBG_TRACE, "parser found RPARAN ) \n");
    }
    break;

  case 1376:
#line 5050 "token.y"
    {
                dbg_print(DBG_TRACE, "parser found RPARAN_SUB \n");
    }
    break;

  case 1377:
#line 5055 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_gname( CB_AE_GNAME, (yyvsp[(1) - (1)].varVal));
    }
    break;

  case 1378:
#line 5058 "token.y"
    {
        dbg_print(DBG_TRACE, "inside arithmetic_expression (gname) \n");        
        (yyval.arithm_expr) = construct_arithm_expr_gname( CB_AE_GNAME, (yyvsp[(2) - (3)].varVal));
    }
    break;

  case 1379:
#line 5062 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_class( CB_AE_CLASS, (yyvsp[(1) - (1)].ival));
    }
    break;

  case 1380:
#line 5065 "token.y"
    { 
        dbg_print(DBG_TRACE, "Arithmetic_expression: _multiply\n");
        (yyval.arithm_expr) = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_MULTIPLY, (yyvsp[(1) - (3)].arithm_expr), (yyvsp[(3) - (3)].arithm_expr));
     }
    break;

  case 1381:
#line 5069 "token.y"
    { 
        dbg_print(DBG_TRACE, "Arithmetic_expression: _plus\n");
        (yyval.arithm_expr) = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_DIVIDE, (yyvsp[(1) - (3)].arithm_expr), (yyvsp[(3) - (3)].arithm_expr) );
      }
    break;

  case 1382:
#line 5073 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_PLUS, (yyvsp[(1) - (3)].arithm_expr), (yyvsp[(3) - (3)].arithm_expr) );
    }
    break;

  case 1383:
#line 5076 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_MINUS, (yyvsp[(1) - (3)].arithm_expr), (yyvsp[(3) - (3)].arithm_expr) );
    }
    break;

  case 1384:
#line 5079 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_simple( CB_AE_SIMPLE, CB_AO_POWER, (yyvsp[(1) - (3)].arithm_expr), (yyvsp[(3) - (3)].arithm_expr) );
    }
    break;

  case 1385:
#line 5082 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_bracket( CB_AE_QUOTE_EXP, (yyvsp[(2) - (3)].arithm_expr) );
    }
    break;

  case 1386:
#line 5085 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_unary( CB_AE_UNRY, CB_AO_PLUS, (yyvsp[(2) - (2)].arithm_expr) );
    }
    break;

  case 1387:
#line 5088 "token.y"
    {
        (yyval.arithm_expr) = construct_arithm_expr_unary( CB_AE_UNRY, CB_AO_MINUS, (yyvsp[(2) - (2)].arithm_expr) );
    }
    break;


/* Line 1267 of yacc.c.  */
#line 13299 "y.tab.c"
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


#line 5096 "token.y"


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

