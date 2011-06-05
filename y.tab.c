
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "logo.y"

	#include <stdlib.h>
	#include <stdio.h>
	#include <ctype.h>
	#include <string.h>
	#include "structures.h"
	#include "hashFunctions.h"

	int addressG = 0;
	int height, width, xpos, ypos, raio;
	Direccao direccao;
	int mode; // PEN UP

	extern char* yytext;
	extern int yylineno;	

	extern ListaVars *nodo;
	extern VarHashTable varHashTable;



/* Line 189 of yacc.c  */
#line 95 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     DECLARATIONS = 259,
     STATEMENTS = 260,
     ARROW = 261,
     INTEGER = 262,
     BOOLEAN = 263,
     STRING = 264,
     FORWARD = 265,
     BACKWARD = 266,
     RRIGHT = 267,
     RLEFT = 268,
     PEN = 269,
     UP = 270,
     DOWN = 271,
     GOTO = 272,
     WHERE = 273,
     OR = 274,
     AND = 275,
     POW = 276,
     EQUAL = 277,
     DIF = 278,
     MINOREQUAL = 279,
     MAJOREQUAL = 280,
     IN = 281,
     SAY = 282,
     ASK = 283,
     IF = 284,
     THEN = 285,
     ELSE = 286,
     WHILE = 287,
     TRUE = 288,
     FALSE = 289,
     IDENTIFIER = 290,
     NUMBER = 291,
     STR = 292,
     SUCC = 293,
     PRED = 294,
     MAJOR = 295,
     MINOR = 296
   };
#endif
/* Tokens.  */
#define PROGRAM 258
#define DECLARATIONS 259
#define STATEMENTS 260
#define ARROW 261
#define INTEGER 262
#define BOOLEAN 263
#define STRING 264
#define FORWARD 265
#define BACKWARD 266
#define RRIGHT 267
#define RLEFT 268
#define PEN 269
#define UP 270
#define DOWN 271
#define GOTO 272
#define WHERE 273
#define OR 274
#define AND 275
#define POW 276
#define EQUAL 277
#define DIF 278
#define MINOREQUAL 279
#define MAJOREQUAL 280
#define IN 281
#define SAY 282
#define ASK 283
#define IF 284
#define THEN 285
#define ELSE 286
#define WHILE 287
#define TRUE 288
#define FALSE 289
#define IDENTIFIER 290
#define NUMBER 291
#define STR 292
#define SUCC 293
#define PRED 294
#define MAJOR 295
#define MINOR 296




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 38 "logo.y"

	int intvalue;
	char* stringvalue;
	VarTipo varTipo;
	ConstTipo constTipo;



/* Line 214 of yacc.c  */
#line 222 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 234 "y.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   182

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNRULES -- Number of states.  */
#define YYNSTATES  135

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      51,    52,    44,    42,    49,    43,     2,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
       2,    50,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    10,    11,    18,    20,    23,    25,
      30,    32,    36,    39,    40,    43,    45,    47,    49,    51,
      55,    57,    59,    61,    63,    66,    70,    72,    74,    76,
      78,    80,    82,    84,    86,    88,    91,    94,    96,    98,
     101,   104,   106,   108,   113,   116,   120,   122,   124,   128,
     130,   134,   136,   140,   142,   144,   146,   150,   152,   154,
     156,   158,   160,   162,   164,   166,   168,   170,   172,   174,
     176,   179,   181,   183,   188,   195,   197,   199,   207,   208,
     213
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,     3,    35,    46,    56,    47,    -1,    -1,
      -1,     4,    57,    59,     5,    58,    68,    -1,    60,    -1,
      59,    60,    -1,    61,    -1,    62,     6,    65,    48,    -1,
      63,    -1,    62,    49,    63,    -1,    35,    64,    -1,    -1,
      50,    66,    -1,     7,    -1,     8,    -1,     9,    -1,    67,
      -1,    51,    67,    52,    -1,    36,    -1,    37,    -1,    33,
      -1,    34,    -1,    69,    48,    -1,    68,    69,    48,    -1,
      70,    -1,    76,    -1,    89,    -1,    90,    -1,    71,    -1,
      72,    -1,    73,    -1,    74,    -1,    75,    -1,    10,    78,
      -1,    11,    78,    -1,    12,    -1,    13,    -1,    14,    15,
      -1,    14,    16,    -1,    87,    -1,    88,    -1,    17,    36,
      49,    36,    -1,    18,    53,    -1,    77,    50,    78,    -1,
      35,    -1,    79,    -1,    78,    84,    79,    -1,    80,    -1,
      79,    82,    80,    -1,    81,    -1,    80,    83,    81,    -1,
      67,    -1,    77,    -1,    85,    -1,    51,    78,    52,    -1,
      42,    -1,    43,    -1,    19,    -1,    44,    -1,    45,    -1,
      20,    -1,    21,    -1,    22,    -1,    23,    -1,    40,    -1,
      41,    -1,    25,    -1,    24,    -1,    86,    35,    -1,    38,
      -1,    39,    -1,    27,    51,    78,    52,    -1,    28,    51,
      37,    49,    77,    52,    -1,    91,    -1,    93,    -1,    29,
      78,    30,    46,    68,    47,    92,    -1,    -1,    31,    46,
      68,    47,    -1,    32,    51,    78,    52,    46,    68,    47,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    56,    67,    56,    73,    74,    77,    83,
      86,    88,    92,   101,   102,   105,   106,   107,   111,   112,
     116,   117,   118,   119,   141,   142,   145,   146,   147,   148,
     155,   156,   157,   158,   159,   162,   197,   233,   249,   267,
     268,   271,   272,   275,   276,   283,   290,   306,   307,   352,
     353,   378,   379,   414,   415,   421,   422,   428,   429,   430,
     433,   434,   435,   436,   439,   440,   441,   442,   443,   444,
     451,   461,   462,   468,   483,   514,   517,   523,   526,   527,
     533
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "DECLARATIONS", "STATEMENTS",
  "ARROW", "INTEGER", "BOOLEAN", "STRING", "FORWARD", "BACKWARD", "RRIGHT",
  "RLEFT", "PEN", "UP", "DOWN", "GOTO", "WHERE", "OR", "AND", "POW",
  "EQUAL", "DIF", "MINOREQUAL", "MAJOREQUAL", "IN", "SAY", "ASK", "IF",
  "THEN", "ELSE", "WHILE", "TRUE", "FALSE", "IDENTIFIER", "NUMBER", "STR",
  "SUCC", "PRED", "MAJOR", "MINOR", "'+'", "'-'", "'*'", "'/'", "'{'",
  "'}'", "';'", "','", "'='", "'('", "')'", "'?'", "$accept", "Liss",
  "Body", "$@1", "$@2", "Declarations", "Declaration",
  "Variable_Declaration", "Vars", "Var", "Value_Var", "Type", "Inic_Var",
  "Constant", "Statements", "Statement", "Turtle_Commands", "Step",
  "Rotate", "Mode", "Dialogue", "Location", "Assignment", "Variable",
  "Expression", "Single_Expression", "Term", "Factor", "Add_Op", "Mul_Op",
  "Rel_Op", "SuccOrPred", "SuccPred", "Say_Statement", "Ask_Statement",
  "Conditional_Statement", "Iterative_Statement", "IfThenElse_Stat",
  "Else_Expression", "While_Stat", 0
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
     295,   296,    43,    45,    42,    47,   123,   125,    59,    44,
      61,    40,    41,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    57,    58,    56,    59,    59,    60,    61,
      62,    62,    63,    64,    64,    65,    65,    65,    66,    66,
      67,    67,    67,    67,    68,    68,    69,    69,    69,    69,
      70,    70,    70,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    75,    76,    77,    78,    78,    79,
      79,    80,    80,    81,    81,    81,    81,    82,    82,    82,
      83,    83,    83,    83,    84,    84,    84,    84,    84,    84,
      85,    86,    86,    87,    88,    89,    90,    91,    92,    92,
      93
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     0,     6,     1,     2,     1,     4,
       1,     3,     2,     0,     2,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     2,
       2,     1,     1,     4,     2,     3,     1,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     4,     6,     1,     1,     7,     0,     4,
       7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,     0,     2,
      13,     0,     6,     8,     0,    10,     0,    12,     4,     7,
       0,     0,    22,    23,    20,    21,     0,    14,    18,     0,
      15,    16,    17,     0,    11,     0,     0,     0,    37,    38,
       0,     0,     0,     0,     0,     0,     0,    46,     5,     0,
      26,    30,    31,    32,    33,    34,    27,     0,    41,    42,
      28,    29,    75,    76,     9,    19,    71,    72,     0,    53,
      54,    35,    47,    49,    51,    55,     0,    36,    39,    40,
       0,    44,     0,     0,     0,     0,     0,    24,     0,     0,
      64,    65,    69,    68,    66,    67,     0,    59,    57,    58,
       0,    62,    63,    60,    61,     0,    70,     0,     0,     0,
       0,     0,    25,    45,    56,    48,    50,    52,    43,    73,
       0,     0,     0,     0,     0,     0,    74,    78,     0,     0,
      77,    80,     0,     0,    79
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     7,     8,    29,    11,    12,    13,    14,    15,
      17,    33,    27,    69,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    70,    71,    72,    73,    74,   100,   105,
      96,    75,    76,    58,    59,    60,    61,    62,   130,    63
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -77
static const yytype_int16 yypact[] =
{
       6,   -18,    34,   -11,   -77,    36,   -77,    -5,    27,   -77,
      19,    13,   -77,   -77,    -3,   -77,   124,   -77,   -77,   -77,
      76,    27,   -77,   -77,   -77,   -77,   118,   -77,   -77,   121,
     -77,   -77,   -77,    15,   -77,    26,   131,   131,   -77,   -77,
       9,    44,    37,    42,    46,   131,    50,   -77,   121,    39,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,    52,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   131,   -77,
     -77,   122,    25,     7,   -77,   -77,    63,   122,   -77,   -77,
      61,   -77,   131,    74,    96,   131,    66,   -77,   131,    -9,
     -77,   -77,   -77,   -77,   -77,   -77,   131,   -77,   -77,   -77,
     131,   -77,   -77,   -77,   -77,   131,   -77,    79,    14,    67,
      71,    48,   -77,   122,   -77,    25,     7,   -77,   -77,   -77,
      90,   121,    82,    77,    -6,   121,   -77,   109,    47,    97,
     -77,   -77,   121,    95,   -77
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,   -77,   -77,   -77,   -77,   -77,   130,   -77,   -77,   138,
     -77,   -77,   -77,     4,   -76,   -47,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -29,   -35,    75,    72,    68,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      57,    86,    77,    20,    36,    37,    38,    39,    40,     1,
      84,    41,    42,    90,    91,    92,    93,     3,    18,    57,
      28,    43,    44,    45,    78,    79,    46,   101,   102,    47,
      35,    94,    95,    89,     4,     5,    90,    91,    92,    93,
       6,   127,     9,   114,    97,   124,    21,   108,    10,   128,
     111,   103,   104,   113,    94,    95,   133,    36,    37,    38,
      39,    40,    10,    64,    41,    42,   119,    98,    99,    16,
      90,    91,    92,    93,    43,    44,    45,    86,    65,    46,
      80,    86,    47,    30,    31,    32,    86,    87,    94,    95,
      81,   123,    57,    82,   131,    57,    57,    83,   106,    57,
     122,    85,    88,    57,    57,    36,    37,    38,    39,    40,
     107,   109,    41,    42,   112,   118,   120,   121,    90,    91,
      92,    93,    43,    44,    45,    47,   110,    46,   125,   126,
      47,    36,    37,    38,    39,    40,    94,    95,    41,    42,
     129,    19,   134,   132,    90,    91,    92,    93,    43,    44,
      45,    22,    23,    46,    24,    25,    47,    22,    23,    34,
      24,    25,    94,    95,    22,    23,    47,    24,    25,    66,
      67,   115,   116,   117,     0,    26,     0,     0,     0,     0,
       0,     0,    68
};

static const yytype_int16 yycheck[] =
{
      29,    48,    37,     6,    10,    11,    12,    13,    14,     3,
      45,    17,    18,    22,    23,    24,    25,    35,     5,    48,
      16,    27,    28,    29,    15,    16,    32,    20,    21,    35,
      26,    40,    41,    68,     0,    46,    22,    23,    24,    25,
       4,    47,    47,    52,    19,   121,    49,    82,    35,   125,
      85,    44,    45,    88,    40,    41,   132,    10,    11,    12,
      13,    14,    35,    48,    17,    18,    52,    42,    43,    50,
      22,    23,    24,    25,    27,    28,    29,   124,    52,    32,
      36,   128,    35,     7,     8,     9,   133,    48,    40,    41,
      53,   120,   121,    51,    47,   124,   125,    51,    35,   128,
      52,    51,    50,   132,   133,    10,    11,    12,    13,    14,
      49,    37,    17,    18,    48,    36,    49,    46,    22,    23,
      24,    25,    27,    28,    29,    35,    30,    32,    46,    52,
      35,    10,    11,    12,    13,    14,    40,    41,    17,    18,
      31,    11,    47,    46,    22,    23,    24,    25,    27,    28,
      29,    33,    34,    32,    36,    37,    35,    33,    34,    21,
      36,    37,    40,    41,    33,    34,    35,    36,    37,    38,
      39,    96,   100,   105,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    55,    35,     0,    46,     4,    56,    57,    47,
      35,    59,    60,    61,    62,    63,    50,    64,     5,    60,
       6,    49,    33,    34,    36,    37,    51,    66,    67,    58,
       7,     8,     9,    65,    63,    67,    10,    11,    12,    13,
      14,    17,    18,    27,    28,    29,    32,    35,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    87,    88,
      89,    90,    91,    93,    48,    52,    38,    39,    51,    67,
      77,    78,    79,    80,    81,    85,    86,    78,    15,    16,
      36,    53,    51,    51,    78,    51,    69,    48,    50,    78,
      22,    23,    24,    25,    40,    41,    84,    19,    42,    43,
      82,    20,    21,    44,    45,    83,    35,    49,    78,    37,
      30,    78,    48,    78,    52,    79,    80,    81,    36,    52,
      49,    46,    52,    77,    68,    46,    52,    47,    68,    31,
      92,    47,    46,    68,    47
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 53 "logo.y"
    {printf("STOP\n");}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 56 "logo.y"
    {
							height = 100;
							width = 100;
							xpos = 300;
							ypos = 200;
							raio = 25;
							mode = 0;
							direccao = up;
							init();
							}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 67 "logo.y"
    {/*printHash();*/}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 83 "logo.y"
    {saveVars((yyvsp[(3) - (4)].intvalue));}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 86 "logo.y"
    {insertInListaVars((yyvsp[(1) - (1)].varTipo), 1);
				}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 88 "logo.y"
    {insertInListaVars((yyvsp[(3) - (3)].varTipo), 0);
					}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 92 "logo.y"
    { 
							(yyval.varTipo).id=(yyvsp[(1) - (2)].stringvalue);
							(yyval.varTipo).type=(yyvsp[(2) - (2)].constTipo).type;
							if ((yyvsp[(2) - (2)].constTipo).type != -1) {
								(yyval.varTipo).value=(yyvsp[(2) - (2)].constTipo).value;
							}
					       }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 101 "logo.y"
    {(yyval.constTipo).type=-1;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 102 "logo.y"
    {(yyval.constTipo)=(yyvsp[(2) - (2)].constTipo);}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 105 "logo.y"
    {(yyval.intvalue) = 0;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 106 "logo.y"
    {(yyval.intvalue) = 1;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 107 "logo.y"
    {(yyval.intvalue) = 2;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 111 "logo.y"
    {(yyval.constTipo) = (yyvsp[(1) - (1)].constTipo);}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 112 "logo.y"
    {(yyval.constTipo) = (yyvsp[(2) - (3)].constTipo);}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 116 "logo.y"
    {(yyval.constTipo).value = (yyvsp[(1) - (1)].stringvalue); (yyval.constTipo).type=0;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 117 "logo.y"
    {(yyval.constTipo).value = (yyvsp[(1) - (1)].stringvalue); (yyval.constTipo).type=2;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 118 "logo.y"
    {(yyval.constTipo).value = (yyvsp[(1) - (1)].stringvalue); (yyval.constTipo).type=1;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 119 "logo.y"
    {(yyval.constTipo).value = (yyvsp[(1) - (1)].stringvalue); (yyval.constTipo).type=1;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 142 "logo.y"
    {/*printf(">>>>>>>>>>>>>>>>>Fim de uma Statement\n");*/}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 162 "logo.y"
    {
								VarData aux = searchVar("xpos"), aux2 = searchVar("ypos");
								printf("PUSHG %d\n", aux2->address);	//para o drawline
								printf("PUSHG %d\n", aux->address);     //para o drawline
								switch(direccao){
									case(up):
										aux = searchVar("ypos");
										printf("PUSHG %d\n", aux->address);
										printf("ADD\n");
										printf("STOREG %d\n", aux->address);
										break;
									case(down):
										aux = searchVar("ypos");
										printf("PUSHG %d\n", aux->address);
										printf("SUB\n");
										printf("STOREG %d\n", aux->address);
										break;
									case(right):
										aux = searchVar("xpos");
										printf("PUSHG %d\n", aux->address);
										printf("ADD\n");
										printf("STOREG %d\n", aux->address);
										break;
									case(left):
										aux = searchVar("xpos");
										printf("PUSHG %d\n", aux->address);
										printf("SUB\n");
										printf("STOREG %d\n", aux->address);
										break;
									default:
										break;
								}
								drawTurtle();						
								}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 197 "logo.y"
    {
								VarData aux = searchVar("xpos"), aux2 = searchVar("ypos");
								printf("PUSHG %d\n", aux2->address);	//para o drawline
								printf("PUSHG %d\n", aux->address);     //para o drawline
                                                                switch(direccao){
                                                                        case(up):
                                                                                aux = searchVar("ypos");
                                                                                printf("PUSHG %d\n", aux->address);
                                                                                printf("SUB\n");
                                                                                printf("STOREG %d\n", aux->address);
                                                                                break;
                                                                        case(down):
                                                                                aux = searchVar("ypos");
                                                                                printf("PUSHG %d\n", aux->address);
                                                                                printf("ADD\n");
                                                                                printf("STOREG %d\n", aux->address);
                                                                                break;
                                                                        case(right):
                                                                                aux = searchVar("xpos");
                                                                                printf("PUSHG %d\n", aux->address);
                                                                                printf("SUB\n");
                                                                                printf("STOREG %d\n", aux->address);
                                                                                break;
                                                                        case(left):
                                                                                aux = searchVar("xpos");
                                                                                printf("PUSHG %d\n", aux->address);
                                                                                printf("ADD\n");
                                                                                printf("STOREG %d\n", aux->address);
                                                                                break;
                                                                        default:
                                                                                break;
								}
								drawTurtle();
								}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 233 "logo.y"
    {
								switch(direccao){
									case(up):
										direccao = right;
										break;
									case(right):
										direccao = down;
										break;
									case(down):
										direccao = left;
										break;
									default:
										direccao = up;
										break;
								}
								}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 249 "logo.y"
    {
								switch(direccao){
									case(up):
										direccao = left;
										break;
									case(left):
										direccao = down;
										break;
									case(down):
										direccao = right;
										break;
									default:
										direccao = up;
										break;
								}
								}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 267 "logo.y"
    { mode = 0; }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 268 "logo.y"
    { mode = 1; }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 283 "logo.y"
    {
								VarData var =  searchVar((yyvsp[(1) - (3)].varTipo).id);
								if (var) printf("STOREG %d\n",var->address);
								else yyerror("Variable undeclared!\n");
							}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 290 "logo.y"
    { 	VarData var = searchVar((yyvsp[(1) - (1)].stringvalue));
								if(var){
									(yyval.varTipo).id=(yyvsp[(1) - (1)].stringvalue);
									(yyval.varTipo).type=var->type;
								}
								else (yyval.varTipo).type = -1;	
					       		}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 306 "logo.y"
    { (yyval.intvalue) = (yyvsp[(1) - (1)].intvalue); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 307 "logo.y"
    {/* TA MAL
								switch($2){
									case(1):
										printf("PUSHI %d\n", ($1 == $3));
										$$ = ($1 == $3);
										break;
									case(2):
										printf("PUSHI %d\n", ($1 != $3));
										$$ = ($1 != $3);
										break;
									case(3):
										printf("PUSHI %d\n", $1);
										printf("PUSHI %d\n", $3);
										printf("SUP\n");
										$$ = ($1 > $3);
										break;
									case(4):
										printf("PUSHI %d\n", $1);
										printf("PUSHI %d\n", $3);
										printf("INF\n");
										$$ = ($1 < $3);
										break;
									case(5):
										printf("PUSHI %d\n", $1);
										printf("PUSHI %d\n", $3);
										printf("SUPEQ\n");
										$$ = ($1 >= $3);
										break;
									case(6):
										printf("PUSHI %d\n", $1);
										printf("PUSHI %d\n", $3);
										printf("INFEQ\n");
										$$ = ($1 <= $3);
										break;
									default:				//TODO ver o que faz o in, que acho que e para arrays...
										yyerror("Unknown operation\n");
										break;
									
								}*/
								}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 352 "logo.y"
    { (yyval.intvalue) = (yyvsp[(1) - (1)].intvalue); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 353 "logo.y"
    {
								//printf("PUSHI %d\n", $1);
								//printf("PUSHI %d\n", $3);
								switch((yyvsp[(2) - (3)].intvalue)){
									case(1):
										printf("add\n");
										break;
									case(2):
										printf("sub\n");
										break;
									case(3):/*TA MAL
										printf("pop 2\n");
										if($1 > 0 || $3 > 0) printf("PUSHI 1\n");
										else printf("PUSHI 0\n");*/
										break;
									default:
										yyerror("Unknown operation\n");
										break;
								}
								}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 378 "logo.y"
    { (yyval.intvalue) = (yyvsp[(1) - (1)].intvalue); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 379 "logo.y"
    {
								//printf("PUSHI %d\n", $1);
								//printf("PUSHI %d\n", $3); 
								switch((yyvsp[(2) - (3)].intvalue)){
									case(1):
										printf("mul\n");
										break;
									case(2):
										if((yyvsp[(3) - (3)].intvalue) == 0){
											yyerror("Divide by 0\n");
											exit(0);
										}
										printf("div \n");
										break;
									/*case(3): TA MAL
										printf("pop 2\n");
										if($1 > 0 && $3 > 0) printf("PUSHI 1\n");    //Maior que 0 ou diferente de 0???
										else printf("PUSHI 0\n");
									case(4):
										printf("pop 1\n");  //Para retirar o $3
										while($3 > 1){
											printf("PUSHI %d\n", $1);
											printf("mul\n");
											$3--;
										}*/
									default:
										yyerror("Unknown operation\n");
										break;
									}
								}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 414 "logo.y"
    {pushValues((yyvsp[(1) - (1)].constTipo).type,0,(yyvsp[(1) - (1)].constTipo).value); (yyval.intvalue) = (yyvsp[(1) - (1)].constTipo).type;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 415 "logo.y"
    {
								  VarData var = searchVar ((yyvsp[(1) - (1)].varTipo).id);
								  if(var)printf("PUSHG %d\n", var->address);
								  else yyerror("Variable undeclared!\n");
								  (yyval.intvalue) = var->type;
								}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 421 "logo.y"
    { (yyval.intvalue) = (yyvsp[(1) - (1)].intvalue); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 422 "logo.y"
    { (yyval.intvalue) = (yyvsp[(2) - (3)].intvalue); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 428 "logo.y"
    { (yyval.intvalue) = 1; }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 429 "logo.y"
    { (yyval.intvalue) = 2; }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 430 "logo.y"
    { (yyval.intvalue) = 3; }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 433 "logo.y"
    { (yyval.intvalue) = 1; }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 434 "logo.y"
    { (yyval.intvalue) = 2; }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 435 "logo.y"
    { (yyval.intvalue) = 3; }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 436 "logo.y"
    { (yyval.intvalue) = 4; }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 439 "logo.y"
    { (yyval.intvalue) = 1; }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 440 "logo.y"
    { (yyval.intvalue) = 2; }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 441 "logo.y"
    { (yyval.intvalue) = 3; }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 442 "logo.y"
    { (yyval.intvalue) = 4; }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 443 "logo.y"
    { (yyval.intvalue) = 5; }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 444 "logo.y"
    { (yyval.intvalue) = 6; }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 451 "logo.y"
    { VarData var = searchVar((yyvsp[(2) - (2)].stringvalue));
							  if (var) {
							  	printf("store %d\n", var->address);
								  printf("PUSHI %d\n", (yyvsp[(1) - (2)].intvalue));
								  printf("add\n");
							  }
							  else yyerror("Variable undeclared!\n");
							}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 461 "logo.y"
    { (yyval.intvalue) = 1; }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 462 "logo.y"
    { (yyval.intvalue) = -1; }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 468 "logo.y"
    { switch ((yyvsp[(3) - (4)].intvalue)){ // Expression Type 
									case 0:	// INTEGER							
										printf("writei\n"); 
										break;
									case 1: // BOOLEAN
										printf("writei\n");
										break;
									case 2: // STRING
										printf("writes\n");
										break;
									}
								}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 483 "logo.y"
    { 
								  if((yyvsp[(5) - (6)].varTipo).type == -1) yyerror("Variable undeclared!\n");
								  else{
									printf("pushs %s\n",(yyvsp[(3) - (6)].stringvalue)); 	// guardar na stack a STR a perguntar
								  	printf("writes\n"); 		// escrever a STR a perguntar
									printf("read\n"); 	/* lê uma string do teclado (concluída por um "\n") 
										       		   e arquiva esta string (sem o "\n") na heap e coloca
                                                                                       		   (empilha) o endereço na pilha..
									            		*/
									switch ((yyvsp[(5) - (6)].varTipo).type){ // Expression Type
										case 0:	// INTEGER							
											printf("atoi\n"); 
											break;
										case 1: // BOOLEAN
											printf("atoi\n");
											break;
										case 2: // STRING
											break;
										default :
											yyerror("Variable undeclared!\n");
											break;
									  }
									  VarData var = searchVar((yyvsp[(5) - (6)].varTipo).id);
									  printf("storeg %d\n",var->address);
									}
								  }
    break;



/* Line 1455 of yacc.c  */
#line 2211 "y.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 536 "logo.y"


void insertInListaVars(VarTipo var, int first){
	ListaVars *aux = (ListaVars*)malloc(sizeof(ListaVars));
	aux->id = var.id;
	aux->value = var.value;
	aux->type = var.type;
	if(first == 1){aux->next = NULL;}
	else {aux->next = nodo;}
	nodo = aux;
	
}

void saveVars(int type){
//	printListaVars();

	ListaVars *aux = nodo;
	while(aux) {
		if(!searchVar(aux->id)){//printf("AQUI\t%s\thash:%d\n",aux->id,hash(aux->id));
			// insere nome, tipo e address na hashtable
			insertVar(aux->id, type, addressG);
			pushValues(type,aux->type, aux->value);
			//printf("STOREG %d\n",addressG);
			addressG++;
		}
		aux=aux->next;
	}
	nodo = NULL;

}

void pushValues(int varType, int nullType, char* value){
	switch(varType) {
		case 0://INTEGER
			if (nullType == -1) {//VAZIO
				printf("PUSHI 0\n");
			}
			else {
				printf("PUSHI %d\n",atoi(value));
			}
		break;
		case 1://BOOLEAN
			if (nullType==-1 || strcmp(value,"TRUE")==0) {
				printf("PUSHI 1\n");

			}
			else if (strcmp(value, "FALSE")==0) {
				printf("PUSHI 0\n");
			}
		break;
		case 2://STRING
			if (nullType == -1) {
				printf("pushs \"\"\n");
			}
			else {
				printf("pushs %s\n",value);
			}
		break;
		// nao estamos a fazer arrays para ja
	}
}

/*char *stringToUpper(char* string){
	int i;
	char* new;
	for (i=0; i<strlen(string); i++)
		new[i]=toupper(string[i]);
	return new;
}*/

void drawTurtle(){
	VarData aux, aux2, aux3;
	drawLine();
	aux3 = searchVar("xpos");
        printf("PUSHG %d\n", aux3->address);
	aux2 = searchVar("ypos");
        printf("PUSHG %d\n", aux2->address);
	aux = searchVar("raio");
	printf("PUSHG %d\n", aux->address);
	printf("DRAWCIRCLE\n");
	printf("REFRESH\n");
}

void drawLine(){
	if(mode == 1){ // PEN DOWN
		VarData aux1, aux2;
		aux1 = searchVar("xpos");
        	printf("PUSHG %d\n", aux1->address);
		aux2 = searchVar("ypos");
        	printf("PUSHG %d\n", aux2->address);
		printf("DRAWLINE\n");
	}
}

void init() {
	varHashTable = initHash();
	VarTipo var;
/*	
	var.id = "height";
	var.value = (char*)malloc(sizeof(10));
	sprintf(var.value, "%d", height);
	insertInListaVars(var, 1);
	
	var.id = "width";
	var.value = (char*)malloc(sizeof(10));
	sprintf(var.value, "%d", width);
	insertInListaVars(var, 0);
*/	


	var.id = "xpos";
	var.value = (char*)malloc(sizeof(10));
	sprintf(var.value, "%d", xpos);
	insertInListaVars(var, 1);

	var.id = "ypos";
	var.value = (char*)malloc(sizeof(10));
	sprintf(var.value, "%d", ypos);
	insertInListaVars(var, 0);

	var.id = "raio";
	var.value = (char*)malloc(sizeof(10));
	sprintf(var.value, "%d", raio);
	insertInListaVars(var, 0);
	
	saveVars(0);
	printf("START\n");
	initWindow();
	drawTurtle();
}

void initWindow(){
	printf("PUSHI %d\n",800);
        printf("PUSHI %d\n",600);
        printf("opendrawingarea\n");
}

void printListaVars(){
	ListaVars *aux = nodo;
	while(aux){
		printf("NODO: id=%s\tvalue=%s\ttype=%d\n",aux->id,aux->value,aux->type);
		aux = aux->next;
	}
	printf("ACABOU\n");
}

int yyerror(char *s){
       fprintf(stderr,"ERRO: %s na linha:%d antes de:%s\n",s,yylineno,yytext);
       return 0;
}

int main() {
	yyparse();
	return 0;
}	

