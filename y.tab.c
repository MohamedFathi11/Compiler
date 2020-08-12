/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "pro.y" /* yacc.c:337  */

    #include<stdio.h>
    #include<string.h>
    int check[26];
    int ivars[26];
    float fvars[26];
    char cvars[26];
    char svars[26][1000];
    int bvars[26];
    double funs[26];
    char cfuns[26];
    char sfuns[26][1000];
    int pot;
    double arr[1000];
    int par [26];
    int c=0;

#line 88 "y.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMI = 258,
    NUMF = 259,
    ID = 260,
    BOOLB = 261,
    CHARC = 262,
    STRINGS = 263,
    POWER = 264,
    PRINT = 265,
    NL = 266,
    INT = 267,
    FLOAT = 268,
    CHAR = 269,
    STRING = 270,
    BOOL = 271,
    EQ = 272,
    GE = 273,
    LE = 274,
    IF = 275,
    ELSE = 276,
    FOR = 277,
    INC = 278,
    DEC = 279,
    WHILE = 280,
    DO = 281,
    VOID = 282,
    RETURN = 283,
    SWITCH = 284,
    CASE = 285,
    DEFAULT = 286,
    NE = 287,
    PRO = 288,
    MUL = 289,
    REM = 290
  };
#endif
/* Tokens.  */
#define NUMI 258
#define NUMF 259
#define ID 260
#define BOOLB 261
#define CHARC 262
#define STRINGS 263
#define POWER 264
#define PRINT 265
#define NL 266
#define INT 267
#define FLOAT 268
#define CHAR 269
#define STRING 270
#define BOOL 271
#define EQ 272
#define GE 273
#define LE 274
#define IF 275
#define ELSE 276
#define FOR 277
#define INC 278
#define DEC 279
#define WHILE 280
#define DO 281
#define VOID 282
#define RETURN 283
#define SWITCH 284
#define CASE 285
#define DEFAULT 286
#define NE 287
#define PRO 288
#define MUL 289
#define REM 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 20 "pro.y" /* yacc.c:352  */

    int i;
    float f;
    char c;
    char s [1000];
    int b;

#line 209 "y.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1110

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  285

#define YYUNDEFTOK  2
#define YYMAXUTOK   290

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    42,     2,     2,
      44,    45,    40,    39,    47,    38,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    43,
      37,    48,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    84,    86,    88,    90,    92,    94,    96,
      97,   100,   119,   122,   128,   133,   134,   137,   152,   166,
     180,   194,   207,   210,   212,   213,   216,   233,   235,   236,
     239,   241,   243,   245,   247,   248,   251,   267,   283,   299,
     315,   331,   346,   349,   365,   381,   397,   413,   429,   444,
     447,   467,   473,   481,   483,   485,   487,   488,   491,   504,
     517,   530,   543,   552,   561,   579,   601,   603,   605,   607,
     609,   618,   619,   622,   631,   646,   656,   666,   683,   685,
     687,   689,   691,   693,   694,   697,   699,   701,   703,   710,
     720,   727,   731,   735,   739,   743,   747,   751,   753,   755,
     757,   759,   772,   784
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMI", "NUMF", "ID", "BOOLB", "CHARC",
  "STRINGS", "POWER", "PRINT", "NL", "INT", "FLOAT", "CHAR", "STRING",
  "BOOL", "EQ", "GE", "LE", "IF", "ELSE", "FOR", "INC", "DEC", "WHILE",
  "DO", "VOID", "RETURN", "SWITCH", "CASE", "DEFAULT", "NE", "PRO", "MUL",
  "REM", "'>'", "'<'", "'-'", "'+'", "'*'", "'/'", "'%'", "';'", "'('",
  "')'", "':'", "','", "'='", "'{'", "'}'", "$accept", "prog", "switch",
  "default", "case", "fun", "para", "call", "para2", "var2", "do", "while",
  "for", "if", "stat", "assi", "print", "var", "type", "exp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,    62,    60,    45,    43,
      42,    47,    37,    59,    40,    41,    58,    44,    61,   123,
     125
};
# endif

#define YYPACT_NINF -144

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-144)))

#define YYTABLE_NINF -85

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     192,  -144,  -144,    26,    10,  -144,  -144,  -144,  -144,  -144,
      11,    13,    18,    24,  -144,    32,   139,    77,   192,   192,
     192,   192,   192,   192,   192,    57,  -144,  -144,  -144,   102,
    1045,    61,    61,    61,    31,    15,    34,    61,   104,   121,
     124,   128,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,   123,    12,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,  -144,  1045,  1045,
    1045,    93,    88,   140,  -144,  -144,  -144,  1045,   101,   107,
     115,   118,   120,   129,   214,   225,   132,   162,   150,   133,
     192,  1083,    90,   145,  1034,  1034,  1034,  1045,  1034,  1034,
      39,    39,    43,    43,    43,   146,    31,   142,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,    61,    61,    61,    61,    61,
      61,    61,    61,    61,   180,  -144,   148,   153,   196,  -144,
    -144,  -144,  1045,   198,  -144,   113,   540,   575,   259,   270,
     304,   315,   349,   360,   587,   -22,    98,  1083,   155,  -144,
    -144,  -144,  -144,  1045,   116,    61,   205,   206,   208,   210,
     211,   215,    61,    61,   176,  -144,  -144,    82,   202,  -144,
    -144,    61,   622,   212,   224,   226,   235,   237,   246,   634,
     130,    61,    40,   669,    61,    61,    61,    61,    61,    61,
      61,   222,    61,   681,  -144,   233,   262,   394,   716,   728,
     763,   775,   810,   822,   223,   857,   263,   232,   238,   239,
     869,  -144,    98,    61,    61,    61,    61,    61,    61,   236,
     272,  -144,   273,   274,   275,   279,   249,   904,   916,   951,
     963,   998,  1010,   288,   -22,  -144,  -144,  -144,  -144,   283,
     292,   294,   303,   305,   306,   307,  1072,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,    61,    61,    61,    61,    61,
      61,   405,   439,   450,   484,   495,   529,   276,   277,   282,
     284,   285,   286,   319,   320,   324,   326,   327,   328,  -144,
    -144,  -144,  -144,  -144,  -144
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      12,    97,    99,   101,     0,    78,    79,    80,    81,    82,
       0,     0,     0,     0,    83,     0,     0,     0,    12,    12,
      12,    12,    12,    12,    12,     0,    56,    55,    54,     0,
      53,   103,   103,   103,    29,   103,   103,   103,     0,     0,
       0,     0,    98,   100,   102,     1,     9,     7,     8,     6,
       5,     4,     3,     0,    73,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   101,    59,    60,
      61,     0,    28,     0,    62,    63,    64,    58,    97,    99,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,    25,   103,    90,    93,    94,    95,    96,    91,    92,
      85,    86,    87,    88,    89,     0,    29,    30,    66,    67,
      65,    68,    69,    70,    71,   103,   103,   103,   103,   103,
     103,   103,   103,   103,     0,     2,     0,    24,     0,    75,
      76,    77,    74,     0,    27,   103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,   103,    25,    73,    26,
      32,    33,    34,    31,     0,   103,     0,     0,     0,     0,
       0,     0,   103,   103,     0,    15,    11,   101,     0,    23,
      51,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,     0,     0,   103,   103,   103,   103,   103,   103,
     103,     0,   103,     0,    21,   103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,   103,   103,   103,   103,   103,   103,   103,     0,
       0,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    18,    19,    20,    17,     0,
       0,     0,     0,     0,     0,     0,     0,    14,    50,    47,
      46,    45,    48,    44,    43,   103,   103,   103,   103,   103,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      38,    39,    41,    37,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,    -7,  -144,  -144,    92,  -144,   201,  -144,   244,  -144,
    -144,  -144,  -144,  -144,  -143,  -144,  -144,   -84,   -24,   -31
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,    18,   165,   166,    19,   126,    20,    71,    72,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    69,    70,   168,    77,    84,    85,   127,   163,   164,
      73,    46,    47,    48,    49,    50,    51,    52,     1,     2,
      67,    74,    75,    76,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   -84,    78,    79,    80,
      81,    82,    83,     5,     6,     7,     8,     9,    55,    31,
      32,   194,    55,    16,    36,    37,    91,    38,    14,    33,
      92,   132,    39,   127,     1,     2,    67,   128,   195,   226,
      34,    59,    16,    40,    35,    59,    41,    45,   -35,    64,
      65,    66,    73,   125,   136,   137,   138,   139,   140,   141,
     142,   143,   144,     1,     2,    67,   129,   130,   131,    16,
      53,     1,     2,   167,   153,    31,    32,    54,     4,    86,
       5,     6,     7,     8,     9,    33,     1,     2,    67,   150,
     151,   152,   128,   128,   172,    14,    87,   170,    16,    88,
      35,   179,   180,    89,    90,   106,    16,   171,   105,    55,
     183,   -57,    42,    43,    44,   107,   108,    56,    57,    58,
     193,    16,   109,   197,   198,   199,   200,   201,   202,   203,
     110,   205,    59,   111,   210,   112,    60,    61,    62,    63,
      64,    65,    66,   123,   113,   116,   192,    59,   124,   117,
     118,   119,   227,   228,   229,   230,   231,   232,   128,   133,
     135,   145,   -10,   146,   120,     1,     2,     3,   121,   122,
     147,   148,     4,    92,     5,     6,     7,     8,     9,   149,
     173,   174,    10,   175,    11,   176,   177,    12,    13,    14,
     178,    15,   181,    55,   261,   262,   263,   264,   265,   266,
      16,    56,    57,    58,    55,   185,     1,     2,    67,   207,
     208,   209,    56,    57,    58,   182,    59,   186,   219,   187,
      60,    61,    62,    63,    64,    65,    66,    59,   188,   114,
     189,    60,    61,    62,    63,    64,    65,    66,    55,   190,
     115,    16,   204,   211,   221,   222,    56,    57,    58,    55,
     233,   223,   224,   234,   235,   236,   237,    56,    57,    58,
     238,    59,   239,   246,   248,    60,    61,    62,    63,    64,
      65,    66,    59,   249,   156,   250,    60,    61,    62,    63,
      64,    65,    66,    55,   251,   157,   252,   253,   254,   273,
     274,    56,    57,    58,    55,   275,   247,   276,   277,   278,
     279,   280,    56,    57,    58,   281,    59,   282,   283,   284,
      60,    61,    62,    63,    64,    65,    66,    59,   169,   158,
     134,    60,    61,    62,    63,    64,    65,    66,    55,     0,
     159,     0,     0,     0,     0,     0,    56,    57,    58,    55,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    58,
       0,    59,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,    59,     0,   160,     0,    60,    61,    62,    63,
      64,    65,    66,    55,     0,   161,     0,     0,     0,     0,
       0,    56,    57,    58,    55,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    58,     0,    59,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,    59,     0,   212,
       0,    60,    61,    62,    63,    64,    65,    66,    55,     0,
     267,     0,     0,     0,     0,     0,    56,    57,    58,    55,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    58,
       0,    59,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,    59,     0,   268,     0,    60,    61,    62,    63,
      64,    65,    66,    55,     0,   269,     0,     0,     0,     0,
       0,    56,    57,    58,    55,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    58,     0,    59,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,    59,     0,   270,
       0,    60,    61,    62,    63,    64,    65,    66,    55,     0,
     271,     0,     0,     0,     0,     0,    56,    57,    58,    55,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    58,
       0,    59,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,    59,     0,   272,     0,    60,    61,    62,    63,
      64,    65,    66,   154,    55,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    58,     0,    55,     0,     0,     0,
       0,     0,     0,     0,    56,    57,    58,    59,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,   155,    59,
       0,     0,     0,    60,    61,    62,    63,    64,    65,    66,
     162,    55,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,     0,    55,     0,     0,     0,     0,     0,     0,
       0,    56,    57,    58,    59,     0,     0,     0,    60,    61,
      62,    63,    64,    65,    66,   184,    59,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,   191,    55,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    58,     0,
      55,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,    59,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,   196,    59,     0,     0,     0,    60,    61,    62,
      63,    64,    65,    66,   206,    55,     0,     0,     0,     0,
       0,     0,     0,    56,    57,    58,     0,    55,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    58,    59,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,   213,
      59,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,   214,    55,     0,     0,     0,     0,     0,     0,     0,
      56,    57,    58,     0,    55,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    58,    59,     0,     0,     0,    60,
      61,    62,    63,    64,    65,    66,   215,    59,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,   216,    55,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    58,
       0,    55,     0,     0,     0,     0,     0,     0,     0,    56,
      57,    58,    59,     0,     0,     0,    60,    61,    62,    63,
      64,    65,    66,   217,    59,     0,     0,     0,    60,    61,
      62,    63,    64,    65,    66,   218,    55,     0,     0,     0,
       0,     0,     0,     0,    56,    57,    58,     0,    55,     0,
       0,     0,     0,     0,     0,     0,    56,    57,    58,    59,
       0,     0,     0,    60,    61,    62,    63,    64,    65,    66,
     220,    59,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,   225,    55,     0,     0,     0,     0,     0,     0,
       0,    56,    57,    58,     0,    55,     0,     0,     0,     0,
       0,     0,     0,    56,    57,    58,    59,     0,     0,     0,
      60,    61,    62,    63,    64,    65,    66,   240,    59,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,   241,
      55,     0,     0,     0,     0,     0,     0,     0,    56,    57,
      58,     0,    55,     0,     0,     0,     0,     0,     0,     0,
      56,    57,    58,    59,     0,     0,     0,    60,    61,    62,
      63,    64,    65,    66,   242,    59,     0,     0,     0,    60,
      61,    62,    63,    64,    65,    66,   243,    55,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    58,     0,    55,
       0,     0,     0,     0,     0,     0,     0,    56,    57,    58,
      59,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,   244,    59,    55,     0,     0,    60,    61,    62,    63,
      64,    65,    66,   245,    55,     0,     0,     0,     0,     0,
       0,     0,    56,    57,    58,     0,    59,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    59,     0,     0,
       0,    60,    61,    62,    63,    64,    65,    66,   -84,   255,
     256,   257,     0,     0,     0,     5,     6,     7,     8,     9,
       0,     0,     0,     0,   258,     0,     0,     0,   259,   260,
      14
};

static const yytype_int16 yycheck[] =
{
      31,    32,    33,   146,    35,    36,    37,    91,    30,    31,
      34,    18,    19,    20,    21,    22,    23,    24,     3,     4,
       5,     6,     7,     8,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     5,     3,     4,     5,
       6,     7,     8,    12,    13,    14,    15,    16,     9,    23,
      24,    11,     9,    38,    44,    44,    44,    44,    27,    33,
      48,    92,    44,   147,     3,     4,     5,    91,    28,   212,
      44,    32,    38,    49,    48,    32,    44,     0,    47,    40,
      41,    42,   106,    90,   115,   116,   117,   118,   119,   120,
     121,   122,   123,     3,     4,     5,     6,     7,     8,    38,
      43,     3,     4,     5,   135,    23,    24,     5,    10,     5,
      12,    13,    14,    15,    16,    33,     3,     4,     5,     6,
       7,     8,   146,   147,   155,    27,     5,    11,    38,     5,
      48,   162,   163,     5,    11,    47,    38,    21,    45,     9,
     171,    43,     3,     4,     5,     5,    45,    17,    18,    19,
     181,    38,    45,   184,   185,   186,   187,   188,   189,   190,
      45,   192,    32,    45,   195,    45,    36,    37,    38,    39,
      40,    41,    42,    23,    45,    43,    46,    32,    45,    17,
      18,    19,   213,   214,   215,   216,   217,   218,   212,    43,
      48,    11,     0,    45,    32,     3,     4,     5,    36,    37,
      47,     5,    10,    48,    12,    13,    14,    15,    16,    11,
       5,     5,    20,     5,    22,     5,     5,    25,    26,    27,
       5,    29,    46,     9,   255,   256,   257,   258,   259,   260,
      38,    17,    18,    19,     9,    23,     3,     4,     5,     6,
       7,     8,    17,    18,    19,    43,    32,    23,    25,    23,
      36,    37,    38,    39,    40,    41,    42,    32,    23,    45,
      23,    36,    37,    38,    39,    40,    41,    42,     9,    23,
      45,    38,    50,    11,    11,    43,    17,    18,    19,     9,
      44,    43,    43,    11,    11,    11,    11,    17,    18,    19,
      11,    32,    43,     5,    11,    36,    37,    38,    39,    40,
      41,    42,    32,    11,    45,    11,    36,    37,    38,    39,
      40,    41,    42,     9,    11,    45,    11,    11,    11,    43,
      43,    17,    18,    19,     9,    43,   234,    43,    43,    43,
      11,    11,    17,    18,    19,    11,    32,    11,    11,    11,
      36,    37,    38,    39,    40,    41,    42,    32,   147,    45,
     106,    36,    37,    38,    39,    40,    41,    42,     9,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      -1,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    32,    -1,    45,    -1,    36,    37,    38,    39,
      40,    41,    42,     9,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    -1,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    32,    -1,    45,
      -1,    36,    37,    38,    39,    40,    41,    42,     9,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      -1,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    32,    -1,    45,    -1,    36,    37,    38,    39,
      40,    41,    42,     9,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    -1,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    32,    -1,    45,
      -1,    36,    37,    38,    39,    40,    41,    42,     9,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      -1,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    32,    -1,    45,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    32,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    32,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    32,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    32,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    32,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    32,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    32,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    32,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    32,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    32,    -1,    -1,    -1,
      36,    37,    38,    39,    40,    41,    42,    43,    32,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    32,    -1,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    32,    -1,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      32,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    32,     9,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    32,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,     5,    17,
      18,    19,    -1,    -1,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    36,    37,
      27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    10,    12,    13,    14,    15,    16,
      20,    22,    25,    26,    27,    29,    38,    52,    53,    56,
      58,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    23,    24,    33,    44,    48,    44,    44,    44,    44,
      49,    44,     3,     4,     5,     0,    52,    52,    52,    52,
      52,    52,    52,    43,     5,     9,    17,    18,    19,    32,
      36,    37,    38,    39,    40,    41,    42,     5,    70,    70,
      70,    59,    60,    69,     6,     7,     8,    70,     3,     4,
       5,     6,     7,     8,    70,    70,     5,     5,     5,     5,
      11,    44,    48,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    45,    47,     5,    45,    45,
      45,    45,    45,    45,    45,    45,    43,    17,    18,    19,
      32,    36,    37,    23,    45,    52,    57,    68,    69,     6,
       7,     8,    70,    43,    59,    48,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    11,    45,    47,     5,    11,
       6,     7,     8,    70,    43,    43,    45,    45,    45,    45,
      45,    45,    43,    30,    31,    54,    55,     5,    65,    57,
      11,    21,    70,     5,     5,     5,     5,     5,     5,    70,
      70,    46,    43,    70,    43,    23,    23,    23,    23,    23,
      23,    43,    46,    70,    11,    28,    43,    70,    70,    70,
      70,    70,    70,    70,    50,    70,    43,     6,     7,     8,
      70,    11,    45,    43,    43,    43,    43,    43,    43,    25,
      43,    11,    43,    43,    43,    43,    65,    70,    70,    70,
      70,    70,    70,    44,    11,    11,    11,    11,    11,    43,
      43,    43,    43,    43,    43,    43,     5,    55,    11,    11,
      11,    11,    11,    11,    11,    17,    18,    19,    32,    36,
      37,    70,    70,    70,    70,    70,    70,    45,    45,    45,
      45,    45,    45,    43,    43,    43,    43,    43,    43,    11,
      11,    11,    11,    11,    11
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    53,    53,    54,    55,    55,    55,    56,    56,    56,
      56,    56,    56,    57,    57,    57,    58,    59,    59,    59,
      60,    60,    60,    60,    60,    60,    61,    61,    61,    61,
      61,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      63,    64,    64,    65,    65,    65,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    68,    68,    69,    69,
      69,    69,    69,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     2,     2,     2,     2,     2,     2,
       0,     6,     0,     5,     7,     1,     0,    11,    11,    11,
      11,     8,     0,     3,     1,     0,     6,     3,     1,     0,
       2,     4,     4,     4,     4,     0,    17,    17,    17,    17,
      17,    17,     0,    13,    13,    13,    13,    13,    13,     0,
      13,     7,    10,     1,     1,     1,     1,     0,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
       4,     4,     0,     2,     4,     4,     4,     4,     1,     1,
       1,     1,     1,     1,     0,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     2,     1,
       2,     1,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex ();
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 11:
#line 101 "pro.y" /* yacc.c:1652  */
    {
            if(check[(yyvsp[-3].i)]==0||check[(yyvsp[-3].i)]==6||check[(yyvsp[-3].i)]==7||check[(yyvsp[-3].i)]==8){
                yyerror("Var Not Defined");
            }
            else{
                if(check[(yyvsp[-3].i)]==1||check[(yyvsp[-3].i)]==2||check[(yyvsp[-3].i)]==5){
                int e=0;
                for(int i=pot-1;i>=0;i--){
                    if(ivars[(yyvsp[-3].i)]==arr[i]){
                        e=1;
                        printf("Case %d execute\n",pot-i);
                    }
                }
                if(!e)
                    printf("Default execute\n");
                }
            }
        }
#line 1659 "y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 123 "pro.y" /* yacc.c:1652  */
    {
            pot=0;
        }
#line 1667 "y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 129 "pro.y" /* yacc.c:1652  */
    {
        arr[pot++]=(yyvsp[-5].f);
    }
#line 1675 "y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 138 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-9].i)]!=0)
            yyerror("Error Declared before");
        else{
            if((yyvsp[-10].i)!=1&&(yyvsp[-10].i)!=2&&(yyvsp[-10].i)!=5)
                yyerror("Error Invalid Opreation");
            else{
                check[(yyvsp[-9].i)]=6;
                par[(yyvsp[-9].i)]=(yyvsp[-7].i);
                funs[(yyvsp[-9].i)]=(yyvsp[-2].f);
            }
        }
    }
#line 1693 "y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 153 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-9].i)]!=0)
            yyerror("Error Declared before");
        else{
            if((yyvsp[-10].i)!=5)
                yyerror("Error Invalid Opreation");
            else{
                check[(yyvsp[-9].i)]=6;
                funs[(yyvsp[-9].i)]=(yyvsp[-2].b);
            }
        }
    }
#line 1710 "y.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 167 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-9].i)]!=0)
            yyerror("Error Declared before");
        else{
            if((yyvsp[-10].i)!=3)
                yyerror("Error Invalid Opreation");
            else{
                check[(yyvsp[-9].i)]=7;
                cfuns[(yyvsp[-9].i)]=(yyvsp[-2].c);
            }
        }
    }
#line 1727 "y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 181 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-9].i)]!=0)
            yyerror("Error Declared before");
        else{
            if((yyvsp[-10].i)!=4)
                yyerror("Error Invalid Opreation");
            else{
                check[(yyvsp[-9].i)]=8;
                strcpy(sfuns[(yyvsp[-9].i)],(yyvsp[-2].s));
            }
        }
    }
#line 1744 "y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 195 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-6].i)]!=0)
            yyerror("Error Declared before");
        else{
            if((yyvsp[-7].i)!=6)
                yyerror("Error Invalid Opreation");
            else{
                check[(yyvsp[-6].i)]=6;
                funs[(yyvsp[-6].i)]=-1;
            }
        }
    }
#line 1761 "y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 210 "pro.y" /* yacc.c:1652  */
    {(yyval.i)=(yyvsp[-2].i)+1;}
#line 1767 "y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 212 "pro.y" /* yacc.c:1652  */
    {(yyval.i)=1;}
#line 1773 "y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 216 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-5].i)]!=6&&check[(yyvsp[-5].i)]!=7&&check[(yyvsp[-5].i)]!=8)
            yyerror("Error Not Declared before");
        else if((yyvsp[-3].i)!=par[(yyvsp[-5].i)])
            yyerror("Error Not Same parameters");
        else
            {
                if(check[(yyvsp[-5].i)]==6)
                    printf("= %f\n",funs[(yyvsp[-5].i)]);
                else if (check[(yyvsp[-5].i)]==7)
                    printf("= %c\n",cfuns[(yyvsp[-5].i)]);
                else
                    printf("= %s\n",sfuns[(yyvsp[-5].i)]);
            }
    }
#line 1793 "y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 233 "pro.y" /* yacc.c:1652  */
    {(yyval.i)=(yyvsp[0].i)+1;}
#line 1799 "y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 235 "pro.y" /* yacc.c:1652  */
    {(yyval.i)=1;}
#line 1805 "y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 252 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-5].i)]!=1&&check[(yyvsp[-5].i)]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=(yyvsp[-12].f),c=0,en=(yyvsp[-3].f);
                check[(yyvsp[-5].i)]=1;
                do{
                    ivars[(yyvsp[-5].i)]+=step;
                    printf("%d execution: %f\n",++c,(yyvsp[-10].f));
                }while(ivars[(yyvsp[-5].i)]<en&&c<1000);
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
#line 1824 "y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 268 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-5].i)]!=1&&check[(yyvsp[-5].i)]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=(yyvsp[-12].f),c=0,en=(yyvsp[-3].f);
                check[(yyvsp[-5].i)]=1;
                do{
                    ivars[(yyvsp[-5].i)]+=step;
                    printf("%d execution: %f\n",++c,(yyvsp[-10].f));
                }while(ivars[(yyvsp[-5].i)]>en&&c<1000);
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
#line 1843 "y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 284 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-5].i)]!=1&&check[(yyvsp[-5].i)]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=(yyvsp[-12].f),c=0,en=(yyvsp[-3].f);
                check[(yyvsp[-5].i)]=1;
                do{
                    ivars[(yyvsp[-5].i)]+=step;
                    printf("%d execution: %f\n",++c,(yyvsp[-10].f));
                }while(ivars[(yyvsp[-5].i)]>=en&&c<1000);
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
#line 1862 "y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 300 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-5].i)]!=1&&check[(yyvsp[-5].i)]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=(yyvsp[-12].f),c=0,en=(yyvsp[-3].f);
                check[(yyvsp[-5].i)]=1;
                do{
                    ivars[(yyvsp[-5].i)]+=step;
                    printf("%d execution: %f\n",++c,(yyvsp[-10].f));
                }while(ivars[(yyvsp[-5].i)]<=en&&c<1000);
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
#line 1881 "y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 316 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-5].i)]!=1&&check[(yyvsp[-5].i)]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=(yyvsp[-12].f),c=0,en=(yyvsp[-3].f);
                check[(yyvsp[-5].i)]=1;
                do{
                    ivars[(yyvsp[-5].i)]+=step;
                    printf("%d execution: %f\n",++c,(yyvsp[-10].f));
                }while(ivars[(yyvsp[-5].i)]==en&&c<1000);
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
#line 1900 "y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 332 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-5].i)]!=1&&check[(yyvsp[-5].i)]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=(yyvsp[-12].f),c=0,en=(yyvsp[-3].f);
                check[(yyvsp[-5].i)]=1;
                do{
                    ivars[(yyvsp[-5].i)]+=step;
                    printf("%d execution: %f\n",++c,(yyvsp[-10].f));
                }while(ivars[(yyvsp[-5].i)]!=en&&c<1000);
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
#line 1919 "y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 350 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-10].i)]!=1&&check[(yyvsp[-10].i)]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=(yyvsp[-4].f),c=0,en=(yyvsp[-8].f);
                check[(yyvsp[-10].i)]=1;
                while(ivars[(yyvsp[-10].i)]<en&&c<1000){
                    ivars[(yyvsp[-10].i)]+=step;
                    printf("%d execution: %f\n",++c,(yyvsp[-2].f));
                }
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
#line 1938 "y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 366 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-10].i)]!=1&&check[(yyvsp[-10].i)]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=(yyvsp[-4].f),c=0,en=(yyvsp[-8].f);
                check[(yyvsp[-10].i)]=1;
                while(ivars[(yyvsp[-10].i)]>en&&c<1000){
                    ivars[(yyvsp[-10].i)]+=step;
                    printf("%d execution: %f\n",++c,(yyvsp[-2].f));
                }
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
#line 1957 "y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 382 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-10].i)]!=1&&check[(yyvsp[-10].i)]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=(yyvsp[-4].f),c=0,en=(yyvsp[-8].f);
                check[(yyvsp[-10].i)]=1;
                while(ivars[(yyvsp[-10].i)]<=en&&c<1000){
                    ivars[(yyvsp[-10].i)]+=step;
                    printf("%d execution: %f\n",++c,(yyvsp[-2].f));
                }
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
#line 1976 "y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 398 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-10].i)]!=1&&check[(yyvsp[-10].i)]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=(yyvsp[-4].f),c=0,en=(yyvsp[-8].f);
                check[(yyvsp[-10].i)]=1;
                while(ivars[(yyvsp[-10].i)]>=en&&c<1000){
                    ivars[(yyvsp[-10].i)]+=step;
                    printf("%d execution: %f\n",++c,(yyvsp[-2].f));
                }
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
#line 1995 "y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 414 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-10].i)]!=1&&check[(yyvsp[-10].i)]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=(yyvsp[-4].f),c=0,en=(yyvsp[-8].f);
                check[(yyvsp[-10].i)]=1;
                while(ivars[(yyvsp[-10].i)]==en&&c<1000){
                    ivars[(yyvsp[-10].i)]+=step;
                    printf("%d execution: %f\n",++c,(yyvsp[-2].f));
                }
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
#line 2014 "y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 430 "pro.y" /* yacc.c:1652  */
    {
        if(check[(yyvsp[-10].i)]!=1&&check[(yyvsp[-10].i)]!=0)
            yyerror("Error Invalid Opreation");
        else{
                int step=(yyvsp[-4].f),c=0,en=(yyvsp[-8].f);
                check[(yyvsp[-10].i)]=1;
                while(ivars[(yyvsp[-10].i)]!=en&&c<1000){
                    ivars[(yyvsp[-10].i)]+=step;
                    printf("%d execution: %f\n",++c,(yyvsp[-2].f));
                }
                if(c==1000)
                    yyerror("Infinity Loop\n");
            }
    }
#line 2033 "y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 448 "pro.y" /* yacc.c:1652  */
    {
                                                if(check[(yyvsp[-10].i)]!=1&&check[(yyvsp[-10].i)]!=0)
                                                    yyerror("Error Invalid Opreation");
                                                else{
                                                    int st=(yyvsp[-8].f),en=(yyvsp[-6].f),step=(yyvsp[-4].f);
                                                    if((en-st)%step!=0)
                                                        yyerror("Error Infinty Loop");
                                                    else{
                                                        check[(yyvsp[-10].i)]=1;
                                                        int c=0;
                                                        for(ivars[(yyvsp[-10].i)]=st;ivars[(yyvsp[-10].i)]!=en;ivars[(yyvsp[-10].i)]+=step,c++)
                                                            
                                                        printf("Loop executed %d times\n",c);
                                                    }
                                                }
                                            }
#line 2054 "y.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 467 "pro.y" /* yacc.c:1652  */
    {
                                    if((yyvsp[-4].f)){
                                        printf("= %f\n",(yyvsp[-2].f));
                                    }
                                }
#line 2064 "y.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 473 "pro.y" /* yacc.c:1652  */
    {
                                                if((yyvsp[-7].f))
                                                    printf("= %f\n",(yyvsp[-5].f));
                                                else
                                                    printf("= %f\n",(yyvsp[-2].f));
                                            }
#line 2075 "y.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 491 "pro.y" /* yacc.c:1652  */
    {  
                            if(check[(yyvsp[-2].i)]==0)
                                yyerror("Var Not Declared\n");
                            else if(check[(yyvsp[-2].i)]==1)
                                ivars[(yyvsp[-2].i)]=(yyvsp[0].f);
                            else if (check[(yyvsp[-2].i)]==2)
                                fvars[(yyvsp[-2].i)]=(yyvsp[0].f);
                            else if (check[(yyvsp[-2].i)]==5)
                                bvars[(yyvsp[-2].i)]=(yyvsp[0].f);
                            else
                                yyerror("Error Invalid Opreation\n");
                        }
#line 2092 "y.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 504 "pro.y" /* yacc.c:1652  */
    {  
                            if(check[(yyvsp[-2].i)]==0)
                                yyerror("Var Not Declared\n");
                            else if(check[(yyvsp[-2].i)]==1)
                                ivars[(yyvsp[-2].i)]+=(yyvsp[0].f);
                            else if (check[(yyvsp[-2].i)]==2)
                                fvars[(yyvsp[-2].i)]+=(yyvsp[0].f);
                            else if (check[(yyvsp[-2].i)]==5)
                                bvars[(yyvsp[-2].i)]+=(yyvsp[0].f);
                            else
                                yyerror("Error Invalid Opreation\n");
                        }
#line 2109 "y.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 517 "pro.y" /* yacc.c:1652  */
    {  
                            if(check[(yyvsp[-2].i)]==0)
                                yyerror("Var Not Declared\n");
                            else if(check[(yyvsp[-2].i)]==1)
                                ivars[(yyvsp[-2].i)]-=(yyvsp[0].f);
                            else if (check[(yyvsp[-2].i)]==2)
                                fvars[(yyvsp[-2].i)]-=(yyvsp[0].f);
                            else if (check[(yyvsp[-2].i)]==5)
                                bvars[(yyvsp[-2].i)]-=(yyvsp[0].f);
                            else
                                yyerror("Error Invalid Opreation\n");
                        }
#line 2126 "y.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 530 "pro.y" /* yacc.c:1652  */
    {  
                            if(check[(yyvsp[-2].i)]==0)
                                yyerror("Var Not Declared\n");
                            else if(check[(yyvsp[-2].i)]==1)
                                ivars[(yyvsp[-2].i)]*=(yyvsp[0].f);
                            else if (check[(yyvsp[-2].i)]==2)
                                fvars[(yyvsp[-2].i)]*=(yyvsp[0].f);
                            else if (check[(yyvsp[-2].i)]==5)
                                bvars[(yyvsp[-2].i)]*=(yyvsp[0].f);
                            else
                                yyerror("Error Invalid Opreation\n");
                        }
#line 2143 "y.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 543 "pro.y" /* yacc.c:1652  */
    {
                            if(check[(yyvsp[-2].i)]==0)
                                yyerror("Var Not Declared\n");
                            else if (check[(yyvsp[-2].i)]==5)
                                bvars[(yyvsp[-2].i)]=(yyvsp[0].b);
                            else
                                yyerror("Error Invalid Opreation\n");
                        }
#line 2156 "y.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 552 "pro.y" /* yacc.c:1652  */
    {
                            if(check[(yyvsp[-2].i)]==0)
                                yyerror("Var Not Declared\n");
                            else if (check[(yyvsp[-2].i)]==3)
                                cvars[(yyvsp[-2].i)]=(yyvsp[0].c);
                            else
                                yyerror("Error Invalid Opreation\n");
                        }
#line 2169 "y.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 561 "pro.y" /* yacc.c:1652  */
    {
                                if(check[(yyvsp[-2].i)]==0)
                                    yyerror("Var Not Declared\n");
                                else if (check[(yyvsp[-2].i)]==4)
                                    {
                                        char temp[1000];
                                        strcpy(temp,(yyvsp[0].s));
                                        int i;
                                        for(i=1;i<strlen(temp)-1;i++){
                                            svars[(yyvsp[-2].i)][i-1]=temp[i];
                                        }
                                        svars[(yyvsp[-2].i)][i-1]='\0';                                        
                                    }
                                else
                                    yyerror("Error Invalid Opreation\n");
                        }
#line 2190 "y.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 579 "pro.y" /* yacc.c:1652  */
    {
                            if(check[(yyvsp[-1].i)]==0)
                                yyerror("Error Not Declared Before\n");
                            else if(check[(yyvsp[-1].i)]==1)
                                printf("= %d\n",ivars[(yyvsp[-1].i)]);
                            else if(check[(yyvsp[-1].i)]==2)
                                printf("= %f\n",fvars[(yyvsp[-1].i)]);
                            else if(check[(yyvsp[-1].i)]==3)
                                printf("= %c\n",cvars[(yyvsp[-1].i)]);
                            else if(check[(yyvsp[-1].i)]==4)
                                { 
                                    printf("= %s\n",svars[(yyvsp[-1].i)]);
                                }
                            else if (check[(yyvsp[-1].i)]==5)
                                {
                                    if(bvars[(yyvsp[-1].i)])
                                        printf("= true\n");
                                    else
                                        printf("= false\n");
                                }
                        }
#line 2216 "y.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 601 "pro.y" /* yacc.c:1652  */
    {printf("= %d\n",(yyvsp[-1].i));}
#line 2222 "y.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 603 "pro.y" /* yacc.c:1652  */
    {printf("= %f\n",(yyvsp[-1].f));}
#line 2228 "y.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 605 "pro.y" /* yacc.c:1652  */
    {printf("= %d\n",(yyvsp[-1].b));}
#line 2234 "y.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 607 "pro.y" /* yacc.c:1652  */
    {printf("= %c\n",(yyvsp[-1].c));}
#line 2240 "y.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 609 "pro.y" /* yacc.c:1652  */
    {
                                char temp[1000];
                                int i;
                                for(i=1;i<strlen((yyvsp[-1].s))-1;i++)
                                    temp[i-1]=(yyvsp[-1].s)[i];
                                temp[i-1]='\0';
                                printf("= %s\n",temp);
                            }
#line 2253 "y.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 618 "pro.y" /* yacc.c:1652  */
    {printf("= %f\n",(yyvsp[-1].f));}
#line 2259 "y.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 622 "pro.y" /* yacc.c:1652  */
    {
                            if(check[(yyvsp[0].i)]!=0)
                                yyerror("Error Declared Before\n");
                            else{
                            check[(yyvsp[0].i)]=(yyvsp[-1].i);
                            (yyval.i)=(yyvsp[0].i);
                            }
                        }
#line 2272 "y.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 631 "pro.y" /* yacc.c:1652  */
    {
                            if(check[(yyvsp[-2].i)]!=0)
                                yyerror("Error Declared Before\n");
                            else{
                            check[(yyvsp[-2].i)]=(yyvsp[-3].i);
                            if((yyvsp[-3].i)==1)
                                ivars[(yyvsp[-2].i)]=(yyvsp[0].f);
                            else if((yyvsp[-3].i)==2)
                                fvars[(yyvsp[-2].i)]=(yyvsp[0].f);          
                            else
                                bvars[(yyvsp[-2].i)]=(yyvsp[0].f);
                            (yyval.i)=(yyvsp[-2].i);
                            }
                        }
#line 2291 "y.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 646 "pro.y" /* yacc.c:1652  */
    {
                            if(check[(yyvsp[-2].i)]!=0)
                                yyerror("Error Declared Before\n");
                            else{
                            check[(yyvsp[-2].i)]=5;
                            bvars[(yyvsp[-2].i)]=(yyvsp[0].b);
                            (yyval.i)=(yyvsp[-2].i);
                            }
                        }
#line 2305 "y.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 656 "pro.y" /* yacc.c:1652  */
    {
                            if(check[(yyvsp[-2].i)]!=0)
                                yyerror("Error Declared Before\n");
                            else{
                            check[(yyvsp[-2].i)]=3;
                            cvars[(yyvsp[-2].i)]=(yyvsp[0].c);
                            (yyval.i)=(yyvsp[-2].i);
                            }
                        }
#line 2319 "y.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 666 "pro.y" /* yacc.c:1652  */
    {
                            if(check[(yyvsp[-2].i)]!=0)
                                yyerror("Error Declared Before\n");
                            else{
                            check[(yyvsp[-2].i)]=4;
                            char temp[1000];
                            strcpy(temp,(yyvsp[0].s));
                            int i;
                            for(i=1;i<strlen(temp)-1;i++){
                                svars[(yyvsp[-2].i)][i-1]=temp[i];
                            }
                            svars[(yyvsp[-2].i)][i-1]='\0';
                            (yyval.i)=(yyvsp[-2].i);
                            }
                        }
#line 2339 "y.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 683 "pro.y" /* yacc.c:1652  */
    {(yyval.i)=1;}
#line 2345 "y.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 685 "pro.y" /* yacc.c:1652  */
    {(yyval.i)=2;}
#line 2351 "y.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 687 "pro.y" /* yacc.c:1652  */
    {(yyval.i)=3;}
#line 2357 "y.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 689 "pro.y" /* yacc.c:1652  */
    {(yyval.i)=4;}
#line 2363 "y.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 691 "pro.y" /* yacc.c:1652  */
    {(yyval.i)=5;}
#line 2369 "y.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 693 "pro.y" /* yacc.c:1652  */
    {(yyval.i)=6;}
#line 2375 "y.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 697 "pro.y" /* yacc.c:1652  */
    {(yyval.f)=(yyvsp[-2].f)-(yyvsp[0].f);}
#line 2381 "y.tab.c" /* yacc.c:1652  */
    break;

  case 86:
#line 699 "pro.y" /* yacc.c:1652  */
    {(yyval.f)=(yyvsp[-2].f)+(yyvsp[0].f);}
#line 2387 "y.tab.c" /* yacc.c:1652  */
    break;

  case 87:
#line 701 "pro.y" /* yacc.c:1652  */
    {(yyval.f)=(yyvsp[-2].f)*(yyvsp[0].f);}
#line 2393 "y.tab.c" /* yacc.c:1652  */
    break;

  case 88:
#line 703 "pro.y" /* yacc.c:1652  */
    {
                        if((yyvsp[0].f)==0)
                            yyerror("Error Divison by zero");
                        else
                            {(yyval.f)=(yyvsp[-2].f)/(yyvsp[0].f);}
                        }
#line 2404 "y.tab.c" /* yacc.c:1652  */
    break;

  case 89:
#line 710 "pro.y" /* yacc.c:1652  */
    {
                        if((yyvsp[0].f)==0)
                            yyerror("Error Reminder by zero");
                        else
                            {
                                int x=(yyvsp[-2].f),y=(yyvsp[0].f);
                                (yyval.f)=x%y;
                            }
                        }
#line 2418 "y.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 720 "pro.y" /* yacc.c:1652  */
    {
                        int y=(yyvsp[0].f);
                        (yyval.f)=1;
                        for(int i=0;i<y;i++)
                            (yyval.f)*=(yyvsp[-2].f);
                        }
#line 2429 "y.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 727 "pro.y" /* yacc.c:1652  */
    {
                            (yyval.f)=(yyvsp[-2].f)>(yyvsp[0].f);
                        }
#line 2437 "y.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 731 "pro.y" /* yacc.c:1652  */
    {
                            (yyval.f)=(yyvsp[-2].f)<(yyvsp[0].f);
                        }
#line 2445 "y.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 735 "pro.y" /* yacc.c:1652  */
    {
                            (yyval.f)=((yyvsp[-2].f)==(yyvsp[0].f));
                        }
#line 2453 "y.tab.c" /* yacc.c:1652  */
    break;

  case 94:
#line 739 "pro.y" /* yacc.c:1652  */
    {
                            (yyval.f)=(yyvsp[-2].f)>=(yyvsp[0].f);
                        }
#line 2461 "y.tab.c" /* yacc.c:1652  */
    break;

  case 95:
#line 743 "pro.y" /* yacc.c:1652  */
    {
                            (yyval.f)=(yyvsp[-2].f)<=(yyvsp[0].f);
                        }
#line 2469 "y.tab.c" /* yacc.c:1652  */
    break;

  case 96:
#line 747 "pro.y" /* yacc.c:1652  */
    {
                            (yyval.f)=(yyvsp[-2].f)!=(yyvsp[0].f);
                        }
#line 2477 "y.tab.c" /* yacc.c:1652  */
    break;

  case 97:
#line 751 "pro.y" /* yacc.c:1652  */
    {(yyval.f)=(yyvsp[0].i);}
#line 2483 "y.tab.c" /* yacc.c:1652  */
    break;

  case 98:
#line 753 "pro.y" /* yacc.c:1652  */
    {(yyval.f)=-(yyvsp[0].i);}
#line 2489 "y.tab.c" /* yacc.c:1652  */
    break;

  case 99:
#line 755 "pro.y" /* yacc.c:1652  */
    {(yyval.f)=(yyvsp[0].f);}
#line 2495 "y.tab.c" /* yacc.c:1652  */
    break;

  case 100:
#line 757 "pro.y" /* yacc.c:1652  */
    {(yyval.f)=-(yyvsp[0].f);}
#line 2501 "y.tab.c" /* yacc.c:1652  */
    break;

  case 101:
#line 759 "pro.y" /* yacc.c:1652  */
    {
                            if(check[(yyvsp[0].i)]==0)
                                yyerror("Var Not Defined");
                            else if(check[(yyvsp[0].i)]==1){
                                (yyval.f)=ivars[(yyvsp[0].i)];
                            }
                            else if (check[(yyvsp[0].i)]==2){
                                (yyval.f)=fvars[(yyvsp[0].i)];
                            }
                            else
                                yyerror("Error Invalid Opreation");
                        }
#line 2518 "y.tab.c" /* yacc.c:1652  */
    break;

  case 102:
#line 772 "pro.y" /* yacc.c:1652  */
    {
                            if(check[(yyvsp[0].i)]==0)
                                yyerror("Var Not Defined");
                            else if(check[(yyvsp[0].i)]==1){
                                (yyval.f)=-ivars[(yyvsp[0].i)];
                            }
                            else if (check[(yyvsp[0].i)]==2){
                                (yyval.f)=-fvars[(yyvsp[0].i)];
                            }
                            else
                                yyerror("Error Invalid Opreation");
                        }
#line 2535 "y.tab.c" /* yacc.c:1652  */
    break;


#line 2539 "y.tab.c" /* yacc.c:1652  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 786 "pro.y" /* yacc.c:1918  */

int yyerror(char *s){
    printf("%s\n",s);
    return 0;
}
int main (){
    while(3)
        yyparse();
    return 0;
}
