/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

/* Line 371 of yacc.c  */
#line 68 "brew-1.3.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MINUS = 258,
     MINUSMINUS = 259,
     EXCLAM = 260,
     EXCLAMEQ = 261,
     EXCLAMEQEQ = 262,
     PERCENT = 263,
     PERCENTEQ = 264,
     AMP = 265,
     AMPAMP = 266,
     AMPEQ = 267,
     LPAREN = 268,
     RPAREN = 269,
     TIMES = 270,
     TIMESEQ = 271,
     COMMA = 272,
     DOT = 273,
     DIV = 274,
     DIVEQ = 275,
     COLON = 276,
     SEMI = 277,
     QUESTION = 278,
     LBRACKET = 279,
     RBRACKET = 280,
     CARET = 281,
     CARETEQ = 282,
     LBRACE = 283,
     PIPE = 284,
     PIPEPIPE = 285,
     PIPEEQ = 286,
     RBRACE = 287,
     TILDE = 288,
     PLUS = 289,
     PLUSPLUS = 290,
     PLUSEQ = 291,
     LT = 292,
     LTLT = 293,
     LTLTEQ = 294,
     LTEQ = 295,
     EQ = 296,
     MINUSEQ = 297,
     EQEQ = 298,
     EQEQEQ = 299,
     GT = 300,
     GTEQ = 301,
     GTGT = 302,
     GTGTEQ = 303,
     GTGTGT = 304,
     GTGTGTEQ = 305,
     BREAK = 306,
     CASE = 307,
     CATCH = 308,
     CONTINUE = 309,
     DECIMALLITERAL = 310,
     DEFAULT = 311,
     DELETE = 312,
     DO = 313,
     ELSE = 314,
     FALSE = 315,
     FINALLY = 316,
     FOR = 317,
     FUNCTION = 318,
     HEXINTEGERLITERAL = 319,
     IDENTIFIER = 320,
     IF = 321,
     IN = 322,
     INSTANCEOF = 323,
     NEW = 324,
     NULL = 325,
     REGEXP = 326,
     RETURN = 327,
     STRINGLITERAL = 328,
     SWITCH = 329,
     THIS = 330,
     THROW = 331,
     TRUE = 332,
     TRY = 333,
     TYPEOF = 334,
     VAR = 335,
     VOID = 336,
     WHILE = 337,
     WITH = 338,
     AUTO = 339,
     INTERFACE = 340,
     COMPONENT = 341
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 217 "brew-1.3.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  180
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1237

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  188
/* YYNRULES -- Number of states.  */
#define YYNSTATES  353

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      85,    86
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    37,    39,
      42,    46,    50,    56,    58,    61,    64,    69,    73,    75,
      79,    83,    89,    91,    93,    95,    97,    99,   104,   108,
     112,   114,   117,   120,   123,   128,   132,   135,   139,   141,
     145,   147,   149,   151,   154,   157,   159,   162,   165,   168,
     171,   174,   177,   180,   183,   186,   188,   192,   196,   200,
     204,   208,   210,   214,   218,   222,   224,   226,   230,   234,
     238,   242,   246,   248,   252,   256,   260,   264,   266,   270,
     272,   276,   278,   282,   284,   288,   290,   294,   296,   302,
     304,   308,   310,   312,   314,   316,   318,   320,   322,   324,
     326,   328,   330,   332,   334,   338,   340,   342,   344,   346,
     348,   350,   352,   354,   356,   358,   360,   362,   364,   366,
     368,   371,   375,   377,   380,   384,   386,   390,   392,   395,
     398,   400,   406,   414,   422,   428,   438,   449,   457,   466,
     469,   473,   476,   480,   483,   487,   494,   500,   503,   507,
     512,   518,   523,   527,   529,   532,   537,   541,   544,   548,
     552,   555,   559,   563,   568,   574,   577,   586,   594,   601,
     609,   611,   615,   617,   618,   620,   622,   625,   627
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     151,     0,    -1,    89,    -1,    90,    -1,    91,    -1,    73,
      -1,    70,    -1,    77,    -1,    60,    -1,    55,    -1,    64,
      -1,    71,    -1,    75,    -1,    65,    -1,    88,    -1,    94,
      -1,    97,    -1,    13,   121,    14,    -1,    92,    -1,    24,
      25,    -1,    24,    95,    25,    -1,    24,    96,    25,    -1,
      24,    96,    17,    95,    25,    -1,    17,    -1,    95,    17,
      -1,    95,   119,    -1,    96,    17,    95,   119,    -1,    96,
      17,   119,    -1,   119,    -1,    28,    98,    32,    -1,    99,
      21,   119,    -1,    98,    17,    99,    21,   119,    -1,    65,
      -1,    73,    -1,    91,    -1,    93,    -1,   148,    -1,   100,
      24,   121,    25,    -1,   100,    18,    65,    -1,    69,   100,
     103,    -1,   100,    -1,    69,   101,    -1,   100,   103,    -1,
     102,   103,    -1,   102,    24,   121,    25,    -1,   102,    18,
      65,    -1,    13,    14,    -1,    13,   104,    14,    -1,   119,
      -1,   104,    17,   119,    -1,   101,    -1,   102,    -1,   105,
      -1,   106,    35,    -1,   106,     4,    -1,   106,    -1,    57,
     107,    -1,    81,   107,    -1,    79,   107,    -1,    35,   107,
      -1,     4,   107,    -1,    34,   107,    -1,     3,   107,    -1,
      33,   107,    -1,     5,   107,    -1,   107,    -1,   107,    15,
     108,    -1,   107,    19,   108,    -1,   107,     8,   108,    -1,
     109,    34,   108,    -1,   109,     3,   108,    -1,   108,    -1,
     110,    38,   109,    -1,   110,    47,   109,    -1,   110,    49,
     109,    -1,   109,    -1,   110,    -1,   111,    37,   110,    -1,
     111,    45,   110,    -1,   111,    40,   110,    -1,   111,    46,
     110,    -1,   111,    68,   110,    -1,   111,    -1,   112,    43,
     111,    -1,   112,     6,   111,    -1,   112,    44,   111,    -1,
     112,     7,   111,    -1,   112,    -1,   113,    10,   112,    -1,
     113,    -1,   114,    26,   113,    -1,   114,    -1,   115,    29,
     114,    -1,   115,    -1,   116,    11,   115,    -1,   116,    -1,
     117,    30,   116,    -1,   117,    -1,   117,    23,   119,    21,
     119,    -1,   118,    -1,   105,   120,   119,    -1,    41,    -1,
      16,    -1,    20,    -1,     9,    -1,    36,    -1,    42,    -1,
      39,    -1,    48,    -1,    50,    -1,    12,    -1,    27,    -1,
      31,    -1,   119,    -1,   121,    17,   119,    -1,   123,    -1,
     125,    -1,   129,    -1,   130,    -1,   131,    -1,   132,    -1,
     133,    -1,   134,    -1,   135,    -1,   136,    -1,   142,    -1,
     137,    -1,   143,    -1,   144,    -1,   121,    -1,    28,    32,
      -1,    28,   124,    32,    -1,   122,    -1,   124,   122,    -1,
      80,   126,    22,    -1,   127,    -1,   126,    17,   127,    -1,
      65,    -1,    65,   128,    -1,    41,   119,    -1,    22,    -1,
      66,    13,   121,    14,   122,    -1,    66,    13,   121,    14,
     122,    59,   122,    -1,    58,   122,    82,    13,   121,    14,
      22,    -1,    82,    13,   121,    14,   122,    -1,    62,    13,
     121,    22,   121,    22,   121,    14,   122,    -1,    62,    13,
      80,   126,    22,   121,    22,   121,    14,   122,    -1,    62,
      13,   105,    67,   121,    14,   122,    -1,    62,    13,    80,
     127,    67,   121,    14,   122,    -1,    54,    22,    -1,    54,
      65,    22,    -1,    51,    22,    -1,    51,    65,    22,    -1,
      72,    22,    -1,    72,   121,    22,    -1,    83,    13,   121,
      14,   122,    22,    -1,    74,    13,   121,    14,   138,    -1,
      28,    32,    -1,    28,   139,    32,    -1,    28,   139,   141,
      32,    -1,    28,   139,   141,   139,    32,    -1,    28,   141,
     139,    32,    -1,    28,   141,    32,    -1,   140,    -1,   139,
     140,    -1,    52,   121,    21,   124,    -1,    52,   121,    21,
      -1,    56,    21,    -1,    56,    21,   124,    -1,    65,    21,
     122,    -1,    76,   121,    -1,    78,   123,   145,    -1,    78,
     123,   146,    -1,    78,   123,   145,   146,    -1,    53,    13,
      65,    14,   123,    -1,    61,   123,    -1,    63,    65,    13,
     149,    14,    28,   150,    32,    -1,    63,    65,    13,    14,
      28,   150,    32,    -1,    63,    13,    14,    28,   150,    32,
      -1,    63,    13,   149,    14,    28,   150,    32,    -1,    65,
      -1,   149,    17,    65,    -1,   152,    -1,    -1,   152,    -1,
     153,    -1,   152,   153,    -1,   122,    -1,   147,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   102,   103,   104,   107,   110,   111,   114,
     115,   118,   121,   122,   123,   124,   125,   126,   127,   130,
     131,   132,   133,   136,   137,   140,   141,   142,   143,   146,
     149,   150,   153,   154,   155,   158,   159,   160,   161,   162,
     165,   166,   169,   170,   171,   172,   175,   176,   179,   180,
     183,   184,   187,   188,   189,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   204,   205,   206,   207,   210,
     211,   212,   215,   216,   217,   218,   221,   222,   223,   224,
     225,   226,   229,   230,   231,   232,   233,   236,   237,   240,
     241,   244,   245,   248,   249,   252,   253,   256,   257,   260,
     261,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   278,   279,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     299,   300,   303,   304,   307,   310,   311,   314,   315,   318,
     321,   324,   327,   330,   331,   332,   333,   334,   335,   338,
     339,   342,   343,   346,   347,   350,   353,   356,   357,   358,
     359,   360,   361,   364,   365,   368,   369,   372,   373,   376,
     379,   382,   383,   384,   387,   390,   393,   394,   397,   398,
     401,   402,   405,   406,   409,   412,   413,   416,   417
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MINUS", "MINUSMINUS", "EXCLAM",
  "EXCLAMEQ", "EXCLAMEQEQ", "PERCENT", "PERCENTEQ", "AMP", "AMPAMP",
  "AMPEQ", "LPAREN", "RPAREN", "TIMES", "TIMESEQ", "COMMA", "DOT", "DIV",
  "DIVEQ", "COLON", "SEMI", "QUESTION", "LBRACKET", "RBRACKET", "CARET",
  "CARETEQ", "LBRACE", "PIPE", "PIPEPIPE", "PIPEEQ", "RBRACE", "TILDE",
  "PLUS", "PLUSPLUS", "PLUSEQ", "LT", "LTLT", "LTLTEQ", "LTEQ", "EQ",
  "MINUSEQ", "EQEQ", "EQEQEQ", "GT", "GTEQ", "GTGT", "GTGTEQ", "GTGTGT",
  "GTGTGTEQ", "BREAK", "CASE", "CATCH", "CONTINUE", "DECIMALLITERAL",
  "DEFAULT", "DELETE", "DO", "ELSE", "FALSE", "FINALLY", "FOR", "FUNCTION",
  "HEXINTEGERLITERAL", "IDENTIFIER", "IF", "IN", "INSTANCEOF", "NEW",
  "NULL", "REGEXP", "RETURN", "STRINGLITERAL", "SWITCH", "THIS", "THROW",
  "TRUE", "TRY", "TYPEOF", "VAR", "VOID", "WHILE", "WITH", "AUTO",
  "INTERFACE", "COMPONENT", "$accept", "literal", "null_literal",
  "boolean_literal", "numeric_literal", "regular_expression_literal",
  "primary_expression", "array_literal", "elision", "element_list",
  "object_literal", "property_name_and_value_list", "property_name",
  "member_expression", "new_expression", "call_expression", "arguments",
  "argument_list", "left_hand_side_expression", "postfix_expression",
  "unary_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "bitwise_and_expression", "bitwise_xor_expression",
  "bitwise_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "statement", "block", "statement_list", "variable_statement",
  "variable_declaration_list", "variable_declaration", "initializer",
  "empty_statement", "if_statement", "if_else_statement",
  "iteration_statement", "continue_statement", "break_statement",
  "return_statement", "with_statement", "switch_statement", "case_block",
  "case_clauses", "case_clause", "default_clause", "labelled_statement",
  "throw_statement", "try_statement", "catch", "finally",
  "function_declaration", "function_expression", "formal_parameter_list",
  "function_body", "program", "source_elements", "source_element", YY_NULL
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
     335,   336,   337,   338,   339,   340,   341
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    89,    90,    90,    91,
      91,    92,    93,    93,    93,    93,    93,    93,    93,    94,
      94,    94,    94,    95,    95,    96,    96,    96,    96,    97,
      98,    98,    99,    99,    99,   100,   100,   100,   100,   100,
     101,   101,   102,   102,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   108,   108,   108,   108,   109,
     109,   109,   110,   110,   110,   110,   111,   111,   111,   111,
     111,   111,   112,   112,   112,   112,   112,   113,   113,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   118,   119,
     119,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   121,   121,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     123,   123,   124,   124,   125,   126,   126,   127,   127,   128,
     129,   130,   131,   132,   132,   132,   132,   132,   132,   133,
     133,   134,   134,   135,   135,   136,   137,   138,   138,   138,
     138,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     143,   144,   144,   144,   145,   146,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   152,   152,   153,   153
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       3,     3,     5,     1,     2,     2,     4,     3,     1,     3,
       3,     5,     1,     1,     1,     1,     1,     4,     3,     3,
       1,     2,     2,     2,     4,     3,     2,     3,     1,     3,
       1,     1,     1,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     1,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     1,     2,     3,     1,     3,     1,     2,     2,
       1,     5,     7,     7,     5,     9,    10,     7,     8,     2,
       3,     2,     3,     2,     3,     6,     5,     2,     3,     4,
       5,     4,     3,     1,     2,     4,     3,     2,     3,     3,
       2,     3,     3,     4,     5,     2,     8,     7,     6,     7,
       1,     3,     1,     0,     1,     1,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,   140,     0,     0,     0,     0,
       0,     0,     0,     9,     0,     0,     8,     0,     0,    10,
      13,     0,     0,     6,    11,     0,     5,     0,    12,     0,
       7,     0,     0,     0,     0,     0,     0,    14,     2,     3,
       4,    18,    35,    15,    16,    40,    50,    51,    52,    55,
      65,    71,    75,    76,    82,    87,    89,    91,    93,    95,
      97,    99,   113,   129,   187,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   126,   125,   127,   128,   188,
      36,     0,   184,   185,     0,     0,    13,    52,    62,    60,
      64,     0,    23,    19,     0,     0,    28,   130,    13,     5,
       4,     0,     0,   132,     0,    63,    61,    59,   151,     0,
     149,     0,    56,     0,     0,     0,     0,     0,     0,    40,
      41,   153,     0,     0,   170,     0,     0,    58,   137,     0,
     135,    57,     0,     0,     0,     0,     0,    42,     0,     0,
      43,   104,   110,   102,   103,   111,   112,   105,   107,   101,
     106,   108,   109,     0,    54,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   186,    32,    33,    34,    17,    24,    20,    25,     0,
      21,     0,    29,     0,   131,   133,   152,   150,     0,     0,
      52,     0,     0,   180,     0,     0,   169,     0,    39,   154,
       0,     0,     0,   171,   172,     0,   138,     0,   134,     0,
       0,    46,     0,    48,    38,     0,    45,     0,   100,    68,
      66,    67,    70,    69,    72,    73,    74,    77,    79,    78,
      80,    81,    84,    86,    83,    85,    88,    90,    92,    94,
       0,    96,   114,     0,    27,     0,    30,     0,     0,   135,
       0,     0,   183,     0,     0,     0,     0,     0,     0,     0,
     175,   173,   139,   136,     0,     0,    47,     0,    37,    44,
       0,    22,    26,     0,     0,     0,     0,     0,     0,     0,
     182,   183,   181,   183,     0,   141,     0,   156,     0,   144,
       0,    49,    98,    31,     0,     0,     0,     0,     0,   178,
       0,     0,   183,     0,   157,     0,     0,     0,   163,     0,
       0,   155,   143,     0,     0,   147,     0,   179,   177,     0,
     142,     0,   167,   158,   164,     0,   162,     0,   174,     0,
     148,     0,   176,   166,   168,   159,     0,   161,     0,   145,
     165,   160,   146
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    37,    38,    39,    40,    41,    42,    43,    94,    95,
      44,   101,   102,    45,    46,    47,   137,   222,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,   153,    63,    64,    65,   104,    66,   129,
     130,   216,    67,    68,    69,    70,    71,    72,    73,    74,
      75,   297,   317,   318,   319,    76,    77,    78,   213,   214,
      79,    80,   204,   289,    81,   290,    83
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -305
static const yytype_int16 yypact[] =
{
     537,  1156,  1156,  1156,  1156,  -305,   699,   294,  1156,  1156,
    1156,   -13,   -11,  -305,  1156,   618,  -305,     3,    -6,  -305,
      24,    87,    11,  -305,  -305,   888,  -305,    99,  -305,  1156,
    -305,    97,  1156,    66,  1156,   122,   127,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,   126,  -305,   129,   107,    16,
     109,  -305,    30,   118,    58,     6,   131,   138,   143,   201,
     148,  -305,  -305,   165,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,   214,   537,  -305,    41,   235,  -305,  -305,  -305,  -305,
    -305,   172,  -305,  -305,   762,    82,  -305,  -305,    24,   250,
     251,    31,   252,  -305,   375,  -305,  -305,  -305,  -305,   254,
    -305,   255,  -305,   187,   951,    13,   257,   618,  1156,   126,
    -305,  -305,   137,  1156,   165,   456,    84,  -305,   233,   159,
    -305,  -305,  1156,  1156,  1030,   215,  1156,  -305,   219,  1156,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  1156,  -305,  -305,  1156,  1156,  1156,  1156,
    1156,  1156,  1156,  1156,  1156,  1156,  1156,  1156,  1156,  1156,
    1156,  1156,  1156,  1156,  1156,  1156,  1156,  1156,  1156,  1156,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  1093,
    -305,    41,  -305,  1156,  -305,  -305,  -305,  -305,   266,    66,
       5,   162,   258,  -305,   222,    14,  -305,   224,  -305,  -305,
     226,   272,    97,   227,  -305,  1156,  -305,    66,  -305,   228,
     230,  -305,   232,  -305,  -305,   135,  -305,   141,  -305,  -305,
    -305,  -305,  -305,  -305,    30,    30,    30,   118,   118,   118,
     118,   118,    58,    58,    58,    58,     6,   131,   138,   143,
     268,   201,  -305,   825,  -305,   269,  -305,  1156,   163,   220,
    1156,  1156,   537,   264,   229,   265,   236,   618,   267,   231,
    -305,  -305,  -305,  -305,   618,   618,  -305,  1156,  -305,  -305,
    1156,  -305,  -305,  1156,   238,  1156,  1156,   242,   171,   270,
     537,   537,  -305,   537,   273,   244,   -22,  -305,   290,  -305,
     286,  -305,  -305,  -305,   287,   178,   247,   618,  1156,  -305,
     278,   279,   537,   618,  -305,  1156,   292,   -14,  -305,    -9,
      97,  -305,  -305,  1156,   618,  -305,   248,  -305,  -305,   282,
    -305,    92,   618,  -305,  -305,    38,  -305,    69,  -305,   249,
    -305,   618,  -305,   618,   618,  -305,    70,  -305,   618,  -305,
     618,  -305,  -305
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -305,  -305,  -305,  -305,    -1,  -305,  -305,  -305,   130,  -305,
    -305,  -305,   124,   299,   301,  -305,   -42,  -305,    59,  -305,
     160,    45,  -105,    42,    27,   151,   156,   157,   155,   161,
    -305,  -305,    -2,  -305,    -3,    -7,   -29,  -303,  -305,   134,
    -180,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -304,  -252,    18,  -305,  -305,  -305,  -305,   125,
    -305,  -305,   139,  -204,  -305,   340,   -79
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -35
static const yytype_int16 yytable[] =
{
     103,    91,   126,   181,    96,   140,   100,   115,   113,   108,
     314,   110,   169,   170,   141,   337,   114,   142,   333,   259,
     154,   143,   122,   336,     4,   144,   124,   202,   265,   344,
     315,   346,   145,   159,   316,     6,   146,   273,   315,    84,
     350,   147,   316,   315,   148,   117,   149,   150,   191,   171,
     172,   155,   109,   151,   111,   152,   234,   235,   236,   116,
      87,    87,    87,   192,   160,   334,    13,    87,    87,    87,
     345,    16,   260,    87,    85,    19,    86,   208,   203,   203,
      22,    23,    24,   184,    26,   334,    28,   310,    30,   311,
     315,    87,   188,    87,   334,   164,    13,   195,   165,   189,
     118,   347,   351,   166,   167,    19,   182,   190,   329,   179,
     206,   201,   123,   343,   183,   207,   141,   156,   103,   142,
     210,   315,   315,   143,   157,   125,   168,   144,   158,   219,
     220,   128,   223,   225,   145,   132,   227,   211,   146,   134,
     133,   173,   134,   147,   135,   212,   148,   138,   149,   150,
     136,   228,   179,   139,   179,   151,   161,   152,   179,   209,
     278,    88,    89,    90,   174,   162,   279,   163,   105,   106,
     107,   177,   175,   200,   112,   250,   217,   252,   178,   179,
     217,   218,   179,   270,   261,   285,   185,   254,   179,   179,
     184,   256,   127,   308,   131,   179,   242,   243,   244,   245,
     323,   229,   230,   231,   232,   233,   237,   238,   239,   240,
     241,   181,   176,   272,   180,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,   263,    87,   267,   264,
     268,   179,   274,   179,   275,   179,   276,   179,   115,   277,
     294,   282,   304,   264,   284,   179,   307,   287,   288,   179,
     295,   324,   341,   348,   179,   179,   179,   299,   300,   198,
     205,   -33,   -34,   193,   215,   301,   196,   197,   302,   257,
     224,   303,   305,   306,   226,   269,   262,   286,   212,   280,
     283,   338,   291,   293,   292,   296,   298,     1,     2,     3,
     325,   312,   309,   313,   320,   326,   330,     4,   321,   322,
     327,   328,   331,   332,   342,   255,     5,   340,     6,   253,
     339,   119,     7,   120,   246,   103,    97,     8,     9,    10,
     247,   249,   248,   258,   349,   335,   103,   195,   271,   251,
      82,   352,     0,   195,   266,    11,     0,     0,    12,    13,
       0,    14,    15,     0,    16,     0,    17,    85,    19,    98,
      21,     0,     0,    22,    23,    24,    25,    99,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,     1,     2,
       3,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     6,
       0,     0,     0,     7,     0,     0,     0,   194,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     0,     0,    12,
      13,     0,    14,    15,     0,    16,     0,    17,    85,    19,
      20,    21,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     1,
       2,     3,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     0,
       6,     0,     0,     0,     7,     0,     0,     0,    97,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,     0,     0,
      12,    13,     0,    14,    15,     0,    16,     0,    17,    85,
      19,    20,    21,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       1,     2,     3,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,     6,     0,     0,     0,     7,     0,     0,     0,     0,
       8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
       0,    12,    13,     0,    14,    15,     0,    16,     0,    17,
      18,    19,    20,    21,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     1,     2,     3,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     0,     6,     0,     0,     0,     7,     0,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,     0,    12,    13,     0,    14,    15,     0,    16,     0,
      17,    85,    19,    20,    21,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,     1,     2,     3,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     6,    93,     0,     0,    84,     0,     0,
       0,     0,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,    14,     0,     0,    16,
       0,     0,    85,    19,    86,     1,     2,     3,    22,    23,
      24,     0,    26,     0,    28,     4,    30,     0,    32,   186,
      34,     0,     0,     0,     0,     0,     6,   187,     0,     0,
      84,     0,     0,     0,     0,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,    14,
       0,     0,    16,     0,     0,    85,    19,    86,     1,     2,
       3,    22,    23,    24,     0,    26,     0,    28,     4,    30,
       0,    32,   186,    34,     0,     0,     0,     0,     0,     6,
     281,     0,     0,    84,     0,     0,     0,     0,     8,     9,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,    14,     0,     0,    16,     0,     0,    85,    19,
      86,     1,     2,     3,    22,    23,    24,     0,    26,     0,
      28,     4,    30,     0,    32,     0,    34,     0,     0,     0,
     121,     0,     6,     0,     0,     0,    84,     0,     0,     0,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,     0,    14,     0,     0,    16,     0,
       0,    85,    19,    86,     1,     2,     3,    22,    23,    24,
       0,    26,     0,    28,     4,    30,     0,    32,     0,    34,
       0,     0,     0,     0,     0,     6,     0,     0,     0,    84,
       0,     0,     0,     0,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,    14,     0,
       0,    16,     0,     0,    85,    19,    86,     0,     0,     0,
      22,    23,    24,     0,    26,     0,    28,     0,    30,     0,
      32,   199,    34,     1,     2,     3,     0,     0,     0,     0,
       0,     0,     0,     4,   221,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     0,     0,     0,    84,     0,
       0,     0,     0,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,    14,     0,     0,
      16,     0,     0,    85,    19,    86,     1,     2,     3,    22,
      23,    24,     0,    26,     0,    28,     4,    30,     0,    32,
      92,    34,     0,     0,     0,     0,     0,     6,     0,     0,
       0,    84,     0,     0,     0,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
      14,     0,     0,    16,     0,     0,    85,    19,    86,     1,
       2,     3,    22,    23,    24,     0,    26,     0,    28,     4,
      30,     0,    32,     0,    34,     0,     0,     0,     0,     0,
       6,     0,     0,     0,    84,     0,     0,     0,     0,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,    14,     0,     0,    16,     0,     0,    85,
      19,    86,     0,     0,     0,    22,    23,    24,     0,    26,
       0,    28,     0,    30,     0,    32,     0,    34
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-305)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,     4,    31,    82,     6,    47,     7,    13,    15,    22,
      32,    22,     6,     7,     9,   319,    13,    12,    32,   199,
       4,    16,    25,    32,    13,    20,    29,    14,    14,   332,
      52,   335,    27,     3,    56,    24,    31,   217,    52,    28,
     343,    36,    56,    52,    39,    21,    41,    42,    17,    43,
      44,    35,    65,    48,    65,    50,   161,   162,   163,    65,
       1,     2,     3,    32,    34,   317,    55,     8,     9,    10,
      32,    60,    67,    14,    63,    64,    65,   119,    65,    65,
      69,    70,    71,    84,    73,   337,    75,   291,    77,   293,
      52,    32,    94,    34,   346,    37,    55,   104,    40,    17,
      13,    32,    32,    45,    46,    64,    65,    25,   312,    17,
     117,   114,    13,    21,    73,   118,     9,     8,   125,    12,
     123,    52,    52,    16,    15,    28,    68,    20,    19,   132,
     133,    65,   134,   136,    27,    13,   139,    53,    31,    13,
      13,    10,    13,    36,    18,    61,    39,    18,    41,    42,
      24,   153,    17,    24,    17,    48,    38,    50,    17,    22,
      25,     1,     2,     3,    26,    47,    25,    49,     8,     9,
      10,    23,    29,   114,    14,   177,    17,   179,    30,    17,
      17,    22,    17,   212,    22,    22,    14,   189,    17,    17,
     191,   193,    32,    22,    34,    17,   169,   170,   171,   172,
      22,   156,   157,   158,   159,   160,   164,   165,   166,   167,
     168,   290,    11,   215,     0,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,    14,   178,    14,    17,
      14,    17,    14,    17,    14,    17,    14,    17,    13,    17,
      14,   253,    14,    17,   257,    17,    14,   260,   261,    17,
     267,    14,    14,    14,    17,    17,    17,   274,   275,    82,
      13,    21,    21,    21,    41,   277,    22,    22,   280,    13,
      65,   283,   285,   286,    65,    13,    28,    67,    61,    21,
      21,   320,    28,    28,    65,    28,    65,     3,     4,     5,
     307,    28,    32,    59,    14,   308,   313,    13,    22,    22,
      32,    32,   315,    21,    32,   191,    22,   324,    24,   189,
     323,    22,    28,    22,   173,   332,    32,    33,    34,    35,
     174,   176,   175,   199,   341,   317,   343,   344,   213,   178,
       0,   348,    -1,   350,   205,    51,    -1,    -1,    54,    55,
      -1,    57,    58,    -1,    60,    -1,    62,    63,    64,    65,
      66,    -1,    -1,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    24,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    54,
      55,    -1,    57,    58,    -1,    60,    -1,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      54,    55,    -1,    57,    58,    -1,    60,    -1,    62,    63,
      64,    65,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    54,    55,    -1,    57,    58,    -1,    60,    -1,    62,
      63,    64,    65,    66,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    54,    55,    -1,    57,    58,    -1,    60,    -1,
      62,    63,    64,    65,    66,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    60,
      -1,    -1,    63,    64,    65,     3,     4,     5,    69,    70,
      71,    -1,    73,    -1,    75,    13,    77,    -1,    79,    17,
      81,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,
      -1,    -1,    60,    -1,    -1,    63,    64,    65,     3,     4,
       5,    69,    70,    71,    -1,    73,    -1,    75,    13,    77,
      -1,    79,    17,    81,    -1,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,    64,
      65,     3,     4,     5,    69,    70,    71,    -1,    73,    -1,
      75,    13,    77,    -1,    79,    -1,    81,    -1,    -1,    -1,
      22,    -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,
      -1,    63,    64,    65,     3,     4,     5,    69,    70,    71,
      -1,    73,    -1,    75,    13,    77,    -1,    79,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    -1,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    -1,    73,    -1,    75,    -1,    77,    -1,
      79,    80,    81,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,    -1,
      60,    -1,    -1,    63,    64,    65,     3,     4,     5,    69,
      70,    71,    -1,    73,    -1,    75,    13,    77,    -1,    79,
      17,    81,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      57,    -1,    -1,    60,    -1,    -1,    63,    64,    65,     3,
       4,     5,    69,    70,    71,    -1,    73,    -1,    75,    13,
      77,    -1,    79,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    79,    -1,    81
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    13,    22,    24,    28,    33,    34,
      35,    51,    54,    55,    57,    58,    60,    62,    63,    64,
      65,    66,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    88,    89,    90,
      91,    92,    93,    94,    97,   100,   101,   102,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   121,   122,   123,   125,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   142,   143,   144,   147,
     148,   151,   152,   153,    28,    63,    65,   105,   107,   107,
     107,   121,    17,    25,    95,    96,   119,    32,    65,    73,
      91,    98,    99,   122,   124,   107,   107,   107,    22,    65,
      22,    65,   107,   122,    13,    13,    65,    21,    13,   100,
     101,    22,   121,    13,   121,    28,   123,   107,    65,   126,
     127,   107,    13,    13,    13,    18,    24,   103,    18,    24,
     103,     9,    12,    16,    20,    27,    31,    36,    39,    41,
      42,    48,    50,   120,     4,    35,     8,    15,    19,     3,
      34,    38,    47,    49,    37,    40,    45,    46,    68,     6,
       7,    43,    44,    10,    26,    29,    11,    23,    30,    17,
       0,   153,    65,    73,    91,    14,    17,    25,   119,    17,
      25,    17,    32,    21,    32,   122,    22,    22,    82,    80,
     105,   121,    14,    65,   149,    13,   122,   121,   103,    22,
     121,    53,    61,   145,   146,    41,   128,    17,    22,   121,
     121,    14,   104,   119,    65,   121,    65,   121,   119,   108,
     108,   108,   108,   108,   109,   109,   109,   110,   110,   110,
     110,   110,   111,   111,   111,   111,   112,   113,   114,   115,
     119,   116,   119,    95,   119,    99,   119,    13,   126,   127,
      67,    22,    28,    14,    17,    14,   149,    14,    14,    13,
     123,   146,   119,   127,    14,    14,    14,    17,    25,    25,
      21,    25,   119,    21,   121,    22,    67,   121,   121,   150,
     152,    28,    65,    28,    14,   122,    28,   138,    65,   122,
     122,   119,   119,   119,    14,   121,   121,    14,    22,    32,
     150,   150,    28,    59,    32,    52,    56,   139,   140,   141,
      14,    22,    22,    22,    14,   122,   121,    32,    32,   150,
     122,   121,    21,    32,   140,   141,    32,   139,   123,   121,
     122,    14,    32,    21,   124,    32,   139,    32,    14,   122,
     124,    32,   122
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
      
/* Line 1792 of yacc.c  */
#line 1937 "brew-1.3.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


