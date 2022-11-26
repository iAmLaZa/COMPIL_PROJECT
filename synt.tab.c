
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
#line 1 "synt.y"


int sauvCNST;
int cpt;
int  nb_ligne=1;
char sauvOP[20];
char sauvTYPE[25];
char sauvTYPEG[25];
char sauvTYPED[25];
char sauvIDF[25];
char sauvIDFCONST[25];
char sauvbib[25];
char sauvaleur[25];
char temp[25];
char final[25];
int nb_signe=0;
int nb_idf=0;
char Sig[25];
char SIdf[25];
 


/* Line 189 of yacc.c  */
#line 96 "synt.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_import = 258,
     bib_io = 259,
     bib_lang = 260,
     pvg = 261,
     string = 262,
     commentaire = 263,
     mcvoid = 264,
     mc_private = 265,
     mc_protected = 266,
     mc_public = 267,
     mc_class = 268,
     idf = 269,
     p_ou = 270,
     p_fr = 271,
     cr_ov = 272,
     cr_fm = 273,
     aco_ov = 274,
     aco_fr = 275,
     mc_main = 276,
     mcreturn = 277,
     mc_entier = 278,
     mc_reel = 279,
     mc_chaine = 280,
     vrg = 281,
     idf_tab = 282,
     nombre = 283,
     mc_const = 284,
     mc_affec = 285,
     plus = 286,
     moins = 287,
     mult = 288,
     devision = 289,
     mc_input = 290,
     mc_out = 291,
     j = 292,
     inentier = 293,
     inreel = 294,
     inchaine = 295,
     espace = 296,
     mc_for = 297,
     egale = 298,
     notegale = 299,
     less = 300,
     great = 301,
     lessegale = 302,
     greategale = 303,
     mcwhile = 304,
     mcif = 305,
     mcelse = 306,
     ch = 307,
     re = 308,
     or = 309,
     and = 310,
     mcbool = 311,
     booleen = 312,
     inbool = 313,
     tiri = 314
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 22 "synt.y"

int ent;
char* str;
float flt;




/* Line 214 of yacc.c  */
#line 200 "synt.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 212 "synt.tab.c"

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   253

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNRULES -- Number of states.  */
#define YYNSTATES  218

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    16,    24,    35,    38,    39,    43,
      45,    47,    51,    54,    56,    58,    60,    68,    69,    72,
      75,    76,    78,    80,    82,    86,    90,    92,    96,   103,
     108,   113,   117,   119,   123,   126,   129,   130,   132,   134,
     136,   138,   140,   148,   160,   162,   164,   172,   183,   185,
     191,   192,   194,   196,   197,   199,   201,   203,   205,   207,
     209,   213,   217,   219,   227,   236,   239,   242,   245,   248,
     251,   254,   257,   258,   268,   272,   273,   275,   277,   279,
     281,   286,   291,   293,   298,   303,   307,   309,   311,   315,
     317,   319,   321,   326,   331,   333,   335,   337,   339,   340,
     342,   344,   346
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    63,    66,    19,    68,    20,    -1,    63,
      62,    66,    19,    68,    20,    -1,     9,     7,    15,    16,
      19,    20,     6,    -1,    99,     7,    15,    16,    19,    22,
      95,     6,    20,     6,    -1,    64,    63,    -1,    -1,     3,
      65,     6,    -1,     4,    -1,     5,    -1,    67,    13,    14,
      -1,    13,    14,    -1,    10,    -1,    11,    -1,    12,    -1,
      69,    21,    15,    16,    19,    77,    20,    -1,    -1,    70,
      69,    -1,     8,    69,    -1,    -1,    71,    -1,    73,    -1,
      75,    -1,    99,    72,     6,    -1,    14,    26,    72,    -1,
      14,    -1,    99,    74,     6,    -1,    27,    17,    28,    18,
      26,    74,    -1,    27,    17,    28,    18,    -1,    29,    99,
      76,     6,    -1,    14,    26,    76,    -1,    14,    -1,    14,
      30,    97,    -1,    78,    77,    -1,     8,    77,    -1,    -1,
      94,    -1,    91,    -1,    89,    -1,    80,    -1,    79,    -1,
      50,    15,    84,    16,    19,    77,    20,    -1,    50,    15,
      84,    16,    19,    77,    20,    51,    19,    77,    20,    -1,
      82,    -1,    81,    -1,    49,    15,    84,    16,    19,    88,
      20,    -1,    42,    15,    83,    84,     6,    87,    16,    19,
      88,    20,    -1,    94,    -1,    96,    86,    96,    85,    84,
      -1,    -1,    54,    -1,    55,    -1,    -1,    43,    -1,    44,
      -1,    45,    -1,    47,    -1,    46,    -1,    48,    -1,    14,
      31,    31,    -1,    14,    32,    32,    -1,    77,    -1,    36,
      15,    37,    90,    37,    16,     6,    -1,    36,    15,    37,
      90,    37,    92,    16,     6,    -1,     7,    90,    -1,    41,
      90,    -1,    86,    90,    -1,    38,    90,    -1,    39,    90,
      -1,    40,    90,    -1,    58,    90,    -1,    -1,    35,    15,
      37,    93,    37,    26,    95,    16,     6,    -1,    26,    95,
      92,    -1,    -1,    38,    -1,    40,    -1,    39,    -1,    58,
      -1,    95,    30,    96,     6,    -1,    95,    30,    97,     6,
      -1,    14,    -1,    27,    17,    28,    18,    -1,    27,    17,
      14,    18,    -1,    96,    98,    97,    -1,    97,    -1,    28,
      -1,    52,     7,    52,    -1,    57,    -1,    53,    -1,    14,
      -1,    27,    17,    28,    18,    -1,    27,    17,    14,    18,
      -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,    -1,
      23,    -1,    24,    -1,    25,    -1,    56,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    43,    46,    47,    49,    50,    52,    58,
      59,    61,    71,    82,    83,    84,    86,    87,    90,    91,
      92,    94,    95,    96,    99,   101,   112,   126,   128,   145,
     162,   164,   175,   186,   211,   211,   212,   214,   215,   221,
     227,   228,   230,   231,   234,   235,   237,   239,   241,   243,
     244,   246,   247,   248,   251,   252,   253,   254,   255,   256,
     259,   260,   262,   265,   269,   283,   284,   285,   286,   287,
     288,   289,   290,   293,   301,   310,   312,   313,   314,   315,
     317,   341,   378,   387,   395,   404,   407,   409,   426,   436,
     445,   455,   459,   465,   475,   483,   490,   497,   504,   507,
     509,   510,   511
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_import", "bib_io", "bib_lang", "pvg",
  "string", "commentaire", "mcvoid", "mc_private", "mc_protected",
  "mc_public", "mc_class", "idf", "p_ou", "p_fr", "cr_ov", "cr_fm",
  "aco_ov", "aco_fr", "mc_main", "mcreturn", "mc_entier", "mc_reel",
  "mc_chaine", "vrg", "idf_tab", "nombre", "mc_const", "mc_affec", "plus",
  "moins", "mult", "devision", "mc_input", "mc_out", "j", "inentier",
  "inreel", "inchaine", "espace", "mc_for", "egale", "notegale", "less",
  "great", "lessegale", "greategale", "mcwhile", "mcif", "mcelse", "ch",
  "re", "or", "and", "mcbool", "booleen", "inbool", "tiri", "$accept", "S",
  "FONCTION", "LISTE_BIB", "BIB", "NOM_BIB", "HEADER_CLASS",
  "MODIFICATEUR", "CORPS", "LISTE_DEC", "DEC", "DEC_VAR", "LISTE_IDF",
  "DEC_TAB", "LISTE_IDF_TAB", "DEC_CONST", "LISTE_IDF_CONST", "LISTE_INST",
  "INST", "COND", "BOUCLE", "WHILE", "FOR", "INIT", "CONDITION",
  "OPRLOGIQUE", "ARTH", "INCR", "BC", "OUTPUT", "PHRASE", "INPUT",
  "ELEMENT", "TYPE_IN", "AFFECTATION", "TYPE_IDF", "Expression",
  "IDF_CSNT", "OPERATION", "TYPE", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    63,    63,    64,    65,
      65,    66,    66,    67,    67,    67,    68,    68,    69,    69,
      69,    70,    70,    70,    71,    72,    72,    73,    74,    74,
      75,    76,    76,    76,    77,    77,    77,    78,    78,    78,
      78,    78,    79,    79,    80,    80,    81,    82,    83,    84,
      84,    85,    85,    85,    86,    86,    86,    86,    86,    86,
      87,    87,    88,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    91,    92,    92,    93,    93,    93,    93,
      94,    94,    95,    95,    95,    96,    96,    97,    97,    97,
      97,    97,    97,    97,    98,    98,    98,    98,    98,    99,
      99,    99,    99
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     6,     7,    10,     2,     0,     3,     1,
       1,     3,     2,     1,     1,     1,     7,     0,     2,     2,
       0,     1,     1,     1,     3,     3,     1,     3,     6,     4,
       4,     3,     1,     3,     2,     2,     0,     1,     1,     1,
       1,     1,     7,    11,     1,     1,     7,    10,     1,     5,
       0,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     7,     8,     2,     2,     2,     2,     2,
       2,     2,     0,     9,     3,     0,     1,     1,     1,     1,
       4,     4,     1,     4,     4,     3,     1,     1,     3,     1,
       1,     1,     4,     4,     1,     1,     1,     1,     0,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,     0,     7,     9,    10,     0,     1,     0,
      13,    14,    15,     0,    99,   100,   101,   102,     0,     0,
       0,     0,     6,     8,     0,    12,     0,    17,     0,     0,
       0,    17,    20,     0,     0,     0,    20,    21,    22,    23,
       0,    11,     0,     0,     0,    19,     0,     2,     0,    18,
      26,     0,     0,     0,     0,     0,     3,    32,     0,     0,
       0,     0,    24,    27,     0,     0,     0,     0,    30,     0,
      25,     0,     0,     4,    31,    91,     0,    87,     0,    90,
      89,    33,    36,    29,    82,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,    36,    41,    40,    45,
      44,    39,    38,    37,     0,     0,     0,     0,     0,     0,
      88,    35,     0,     0,     0,    50,    50,    16,    34,     0,
      28,     0,     0,     0,    93,    92,     0,    72,    50,    48,
       0,    98,    86,     0,    98,    86,    84,    83,     5,    76,
      78,    77,    79,     0,    72,    72,    72,    72,    72,    54,
      55,    56,    58,    57,    59,    72,    72,     0,     0,     0,
      94,    95,    96,    97,     0,     0,     0,    80,    81,     0,
      65,    68,    69,    70,    66,    71,    67,     0,     0,    36,
      53,    85,    36,     0,     0,     0,     0,     0,     0,    62,
       0,    51,    52,    50,     0,     0,    63,    75,     0,     0,
       0,     0,    46,    49,    42,     0,    74,    64,    60,    61,
      36,     0,    73,     0,    36,    47,     0,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    18,     3,     4,     7,    19,    20,    34,    35,
      36,    37,    52,    38,    53,    39,    58,   189,    96,    97,
      98,    99,   100,   128,   130,   193,   156,   188,   190,   101,
     157,   102,   186,   143,   103,   104,   131,   132,   165,    40
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -115
static const yytype_int16 yypact[] =
{
      10,    24,    17,    35,    10,  -115,  -115,    31,  -115,    56,
    -115,  -115,  -115,    52,  -115,  -115,  -115,  -115,   115,    30,
      54,    66,  -115,  -115,    71,  -115,    73,    -2,    79,    89,
      95,    -2,     1,    47,    93,    94,     1,  -115,  -115,  -115,
      42,  -115,   100,    99,   109,  -115,   105,  -115,   116,  -115,
     104,   103,   133,   139,   127,   128,  -115,   -18,   141,   134,
     135,   125,  -115,  -115,   132,   149,   105,    37,  -115,   137,
    -115,   140,    61,  -115,  -115,  -115,   142,  -115,   150,  -115,
    -115,  -115,    60,   136,  -115,   143,   155,     4,   111,    60,
     151,   152,   153,   154,   156,   144,    60,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,   145,   138,    48,   157,   158,   160,
    -115,  -115,   146,   147,    61,    37,    37,  -115,  -115,    37,
    -115,   161,   162,   164,  -115,  -115,    59,    -5,    37,  -115,
     165,    90,  -115,   166,    46,   167,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,   148,    -5,    -5,    -5,    -5,    -5,  -115,
    -115,  -115,  -115,  -115,  -115,    -5,    -5,   159,   168,   169,
    -115,  -115,  -115,  -115,    37,    37,   170,  -115,  -115,   171,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,    -6,   172,    60,
      51,  -115,    60,    61,   181,    61,   174,    76,   175,  -115,
     173,  -115,  -115,    37,   178,   176,  -115,   177,   188,   179,
     163,   180,  -115,  -115,   121,   194,  -115,  -115,  -115,  -115,
      60,   182,  -115,   184,    60,  -115,   185,  -115
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,  -115,   198,  -115,  -115,   189,  -115,   183,   -21,
    -115,  -115,   186,  -115,   101,  -115,   187,   -82,  -115,  -115,
    -115,  -115,  -115,  -115,  -112,  -115,    77,  -115,    -1,  -115,
      -4,  -115,    14,  -115,    98,   -71,  -114,   -64,  -115,    28
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -21
static const yytype_int16 yytable[] =
{
      95,    86,   144,    81,   133,   134,    32,   111,    66,    32,
     184,    45,    67,     1,   118,    49,   158,     8,   108,   -20,
     185,    14,    15,    16,    14,    15,    16,    33,     5,     6,
      33,    21,   109,   145,   146,   147,   148,    23,   149,   150,
     151,   152,   153,   154,     9,    10,    11,    12,    13,    27,
     180,    75,   167,   155,    17,   135,    50,    17,    14,    15,
      16,    46,   121,    24,    76,    77,    25,    28,    89,    51,
      14,    15,    16,    29,    84,    84,   122,   160,   161,   162,
     163,   203,   160,   161,   162,   163,    30,    85,    85,    78,
      79,    17,    31,    41,    80,    90,    91,   139,   140,   141,
     194,   181,    92,    17,    42,   191,   192,   199,   200,    93,
      94,    43,   195,    47,   197,    48,    54,   142,    55,    57,
      61,   160,   161,   162,   163,    10,    11,    12,    13,    56,
      60,    59,   216,   149,   150,   151,   152,   153,   154,    62,
     170,   171,   172,   173,   174,    63,    64,    68,    65,    50,
      69,   175,   176,    71,    72,    73,    82,    88,    83,    87,
     106,   107,   105,   110,   117,    51,   112,   113,   114,   115,
     138,   116,   211,   168,   178,   119,   124,   123,   125,   136,
     137,   159,   166,   126,   127,   169,   187,   196,   179,   182,
     198,   201,   205,   202,   207,   209,   177,   183,   204,   210,
     212,   214,    22,   185,   215,   217,   120,    26,   164,   213,
     208,   206,   129,     0,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,     0,     0,     0,
       0,     0,     0,    74
};

static const yytype_int16 yycheck[] =
{
      82,    72,     7,    67,   116,   119,     8,    89,    26,     8,
      16,    32,    30,     3,    96,    36,   128,     0,    14,    21,
      26,    23,    24,    25,    23,    24,    25,    29,     4,     5,
      29,     3,    28,    38,    39,    40,    41,     6,    43,    44,
      45,    46,    47,    48,     9,    10,    11,    12,    13,    19,
     164,    14,     6,    58,    56,   119,    14,    56,    23,    24,
      25,    33,    14,     7,    27,    28,    14,    13,     8,    27,
      23,    24,    25,     7,    14,    14,    28,    31,    32,    33,
      34,   193,    31,    32,    33,    34,    15,    27,    27,    52,
      53,    56,    19,    14,    57,    35,    36,    38,    39,    40,
     182,   165,    42,    56,    15,    54,    55,    31,    32,    49,
      50,    16,   183,    20,   185,    21,    16,    58,    19,    14,
      17,    31,    32,    33,    34,    10,    11,    12,    13,    20,
      26,    15,   214,    43,    44,    45,    46,    47,    48,     6,
     144,   145,   146,   147,   148,     6,    19,     6,    20,    14,
      16,   155,   156,    28,    22,     6,    19,     7,    18,    17,
      17,     6,    26,    52,    20,    27,    15,    15,    15,    15,
       6,    15,    51,     6,     6,    30,    18,    20,    18,    18,
      18,    16,    16,    37,    37,    37,    14,     6,    19,    19,
      16,    16,    16,    20,     6,    32,    37,    26,    20,    19,
       6,    19,     4,    26,    20,    20,   105,    18,   131,   210,
      31,   197,   114,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    61,    63,    64,     4,     5,    65,     0,     9,
      10,    11,    12,    13,    23,    24,    25,    56,    62,    66,
      67,    99,    63,     6,     7,    14,    66,    19,    13,     7,
      15,    19,     8,    29,    68,    69,    70,    71,    73,    75,
      99,    14,    15,    16,    68,    69,    99,    20,    21,    69,
      14,    27,    72,    74,    16,    19,    20,    14,    76,    15,
      26,    17,     6,     6,    19,    20,    26,    30,     6,    16,
      72,    28,    22,     6,    76,    14,    27,    28,    52,    53,
      57,    97,    19,    18,    14,    27,    95,    17,     7,     8,
      35,    36,    42,    49,    50,    77,    78,    79,    80,    81,
      82,    89,    91,    94,    95,    26,    17,     6,    14,    28,
      52,    77,    15,    15,    15,    15,    15,    20,    77,    30,
      74,    14,    28,    20,    18,    18,    37,    37,    83,    94,
      84,    96,    97,    84,    96,    97,    18,    18,     6,    38,
      39,    40,    58,    93,     7,    38,    39,    40,    41,    43,
      44,    45,    46,    47,    48,    58,    86,    90,    84,    16,
      31,    32,    33,    34,    86,    98,    16,     6,     6,    37,
      90,    90,    90,    90,    90,    90,    90,    37,     6,    19,
      96,    97,    19,    26,    16,    26,    92,    14,    87,    77,
      88,    54,    55,    85,    77,    95,     6,    95,    16,    31,
      32,    16,    20,    84,    20,    16,    92,     6,    31,    32,
      19,    51,     6,    88,    19,    20,    77,    20
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
#line 41 "synt.y"
    {printf(" programe syntaxiquement  correcte!!!!!!\n"); 
                      ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 43 "synt.y"
    {printf(" programe syntaxiquement  correcte!!!!!!\n"); 
                      ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 52 "synt.y"
    {
        if(recherche(sauvbib)==-1){
                inserer(sauvbib,"BIB","BIB",sauvbib,1,"NOT CONST");
        }
;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 58 "synt.y"
    {strcpy(sauvbib,(yyvsp[(1) - (1)].str));;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 59 "synt.y"
    {strcpy(sauvbib,(yyvsp[(1) - (1)].str));;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 61 "synt.y"
    {
        if(doubledeclaration((yyvsp[(3) - (3)].str))==0){
                strcat(sauvTYPE,"_");
                 strcat(sauvTYPE,(yyvsp[(2) - (3)].str));
                // inserer($3,$2,sauvTYPE,"",1,"NOT CONST");
                affectertype((yyvsp[(3) - (3)].str),sauvTYPE);
                affecterconst((yyvsp[(3) - (3)].str),"NOT CONST");
        }
       
;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 71 "synt.y"
    {
                if(doubledeclaration((yyvsp[(2) - (2)].str))==0){
                strcat(sauvTYPE,"public_");
                strcat(sauvTYPE,(yyvsp[(1) - (2)].str));
                // inserer($2,$1,sauvTYPE,"",1,"NOT CONST");
                affectertype((yyvsp[(2) - (2)].str),sauvTYPE);
                affecterconst((yyvsp[(2) - (2)].str),"NOT CONST");
                }
        ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 82 "synt.y"
    {strcpy(sauvTYPE,(yyvsp[(1) - (1)].str));;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 83 "synt.y"
    {strcpy(sauvTYPE,(yyvsp[(1) - (1)].str));;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 84 "synt.y"
    {strcpy(sauvTYPE,(yyvsp[(1) - (1)].str));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 101 "synt.y"
    {
                if(doubledeclaration((yyvsp[(1) - (3)].str))==0)
                {
              //  inserer($1,"idf",sauvTYPE,"",1,"NOT CONST");
               affectertype((yyvsp[(1) - (3)].str),sauvTYPE) ;
               affecterconst((yyvsp[(1) - (3)].str),"NOT CONST");
               }
               else{
                       printf("erruer sementique : double declaration sur %s a la ligne %d\n",(yyvsp[(1) - (3)].str),nb_ligne);
               }
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 112 "synt.y"
    {
                if(doubledeclaration((yyvsp[(1) - (1)].str))==0)
                {
               //inserer($1,"idf",sauvTYPE,"",1,"NOT CONST");
               affectertype((yyvsp[(1) - (1)].str),sauvTYPE) ;
               affecterconst((yyvsp[(1) - (1)].str),"NOT CONST");
               }
               else{
                       printf("erruer sementique : double declaration sur %s a la ligne %d\n",(yyvsp[(1) - (1)].str),nb_ligne);
               }
        
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 128 "synt.y"
    {
                        if(doubledeclaration((yyvsp[(1) - (6)].str))==0)
                        {
                                affectertype((yyvsp[(1) - (6)].str),sauvTYPE) ;
                                affecterconst((yyvsp[(1) - (6)].str),"NOT CONST");
                                if((yyvsp[(3) - (6)].ent)<0){
                                     printf("erruer sementique : taille de tab %s negative a la ligne %d\n",(yyvsp[(1) - (6)].str),nb_ligne);    
                                }else{
                                        affectertaille((yyvsp[(1) - (6)].str),(yyvsp[(3) - (6)].ent));
                                }
                                
                                //inserer($1,"idf_tab",sauvTYPE,"",$3,"NOT CONST");
                        }else{
                                 printf("erruer sementique : double declaration sur %s a la ligne %d\n",(yyvsp[(1) - (6)].str),nb_ligne);
                        }
                        
                                ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 145 "synt.y"
    {
                        if(doubledeclaration((yyvsp[(1) - (4)].str))==0)
                        {
                                affectertype((yyvsp[(1) - (4)].str),sauvTYPE) ;
                                affecterconst((yyvsp[(1) - (4)].str),"NOT CONST");
                                 if((yyvsp[(3) - (4)].ent)<0){
                                     printf("erruer sementique : taille de tab %s negative a la ligne %d\n",(yyvsp[(1) - (4)].str),nb_ligne);    
                                }else{
                                        affectertaille((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].ent));
                                }
                                //inserer($1,"idf_tab",sauvTYPE,"",$3,"NOT CONST");
                        }else{
                                 printf("erruer sementique : double declaration sur %s a la ligne %d\n",(yyvsp[(1) - (4)].str),nb_ligne);
                        }
                        
                                ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 164 "synt.y"
    {
                if(doubledeclaration((yyvsp[(1) - (3)].str))==0)
                {
                       // inserer($1,"idf",sauvTYPE,"",1,"CONST NOT AFFECTED");
                        affectertype((yyvsp[(1) - (3)].str),sauvTYPE) ; 
                        affecterconst((yyvsp[(1) - (3)].str),"CONST NOT AFFECTED");
                }else{
                                 printf("erruer sementique : double declaration sur %s a la ligne %d\n",(yyvsp[(1) - (3)].str),nb_ligne);
                        }
              
                ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 175 "synt.y"
    {
                if(doubledeclaration((yyvsp[(1) - (1)].str))==0)
                {
                        //inserer($1,"idf",sauvTYPE,"",1,"CONST NOT AFFECTED");
                        affectertype((yyvsp[(1) - (1)].str),sauvTYPE) ; 
                        affecterconst((yyvsp[(1) - (1)].str),"CONST NOT AFFECTED");
                }else{
                                 printf("erruer sementique : double declaration sur %s a la ligne %d\n",(yyvsp[(1) - (1)].str),nb_ligne);
                        }
              
                ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 186 "synt.y"
    {
                if(doubledeclaration((yyvsp[(1) - (3)].str))==0)
                {
                        /* char valeur[25];
                        itoa($3,valeur,10);*/
                       // inserer($1,"idf",sauvTYPE,valeur,1,"CONST AFFECTED");
                        affectertype((yyvsp[(1) - (3)].str),sauvTYPE) ;
                        if(strcmp(sauvTYPE,sauvTYPED)==0)
                        {
                                 affectervaleur((yyvsp[(1) - (3)].str),sauvaleur);
                                 strcpy(sauvaleur,"");
                                affecterconst((yyvsp[(1) - (3)].str),"CONST AFFECTED");
                        } else
                        {
                                affecterconst((yyvsp[(1) - (3)].str),"CONST NOT AFFECTED");
                                printf("erruer sementique : non compatible de type  [ %s | %s ] a la ligne %d\n",sauvTYPE,sauvTYPED,nb_ligne);
                        }
                      strcpy(sauvTYPED,"");
                }else{
                                 printf("erruer sementique : double declaration sur %s a la ligne %d\n",(yyvsp[(1) - (3)].str),nb_ligne);
                        }
                        strcpy(sauvTYPED,"");
                
        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 215 "synt.y"
    {
                 if(recherche("ISIL.io")==-1)
                 {
                printf("erreur symentique: expected io library for in/out operations a la ligne %d \n",nb_ligne);
        }
        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 221 "synt.y"
    {
                 if(recherche("ISIL.io")==-1)
                 {
                printf("erreur symentique: expected io library for in/out operations a la ligne %d \n",nb_ligne);
        }
        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 265 "synt.y"
    {
                nb_idf=0;
               nb_signe=0;
        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 269 "synt.y"
    {
                 if(nb_idf==nb_signe)
                 {
                        if(FormatCorrect(Sig,SIdf)==-1)
                        {
                  printf("erreur symentique: verifier idf et leur signe de formatage a la ligne %d\n",nb_ligne);
                         }
               }else{
                     printf("erreur symentique: verifier si chaque idf a un signe a la ligne %d\n",nb_ligne);
               }
               nb_idf=0;
               nb_signe=0;
        ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 286 "synt.y"
    {nb_signe++; insererSignePhrase(Sig,(yyvsp[(1) - (2)].str));;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 287 "synt.y"
    {nb_signe++;insererSignePhrase(Sig,(yyvsp[(1) - (2)].str));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 288 "synt.y"
    {nb_signe++;insererSignePhrase(Sig,(yyvsp[(1) - (2)].str));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 289 "synt.y"
    {nb_signe++;insererSignePhrase(Sig,(yyvsp[(1) - (2)].str));;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 293 "synt.y"
    {
       
                if(equaltype(sauvIDF,sauvTYPE)==-1){
                        printf("erreur symentique: verifier idf et leur signe de formatage a la ligne %d\n",nb_ligne);
                }
        
;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 301 "synt.y"
    {
        nb_idf++; 
        insererSigneIdf(SIdf,sauvIDF);
        if(doubledeclaration(sauvIDF)==0 )
        {
                affectertype(sauvIDF,"non declare");
                printf("erruer sementique : variable %s non declaré dans la ligne %d \n",sauvIDF,nb_ligne);
        }
;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 312 "synt.y"
    {strcpy(sauvTYPE,"Entier");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 313 "synt.y"
    {strcpy(sauvTYPE,"Chaine");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 314 "synt.y"
    {strcpy(sauvTYPE,"Reel");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 315 "synt.y"
    {strcpy(sauvTYPE,"Bool");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 317 "synt.y"
    {
        if(doubledeclaration(sauvIDFCONST)==0){
                affectertype(sauvIDFCONST,"non declare");
                printf("erruer sementique : variable %s  non declaré dans la ligne %d \n",sauvIDFCONST,nb_ligne);
        }
                if(doubledeclaration(sauvIDF)==0)
        {
                affectertype(sauvIDF,"non declare");
                printf("erruer sementique : variable %s  non declaré dans la ligne %d \n",sauvIDF,nb_ligne);
        }else{
                if(constaffected(sauvIDF)==0){
                printf("erruer sementique : CONST %s deja affected a la ligne %d\n",sauvIDF,nb_ligne);
                strcpy(sauvTYPED,"");
         }
           if(strcmp(final,sauvTYPED)!=0)
                 {
                         printf("erruer sementique : non compatible de type  [ %s | %s ] a la ligne %d\n",final,sauvTYPED,nb_ligne);
                         strcpy(sauvTYPED,"");
                }
                        strcpy(sauvTYPED,"");
       
        }
        
 ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 341 "synt.y"
    {
        if(doubledeclaration(sauvIDFCONST)==0){
                affectertype(sauvIDFCONST,"non declare");
                printf("erruer sementique : variable %s  non declaré dans la ligne %d \n",sauvIDFCONST,nb_ligne);
        }
                if(doubledeclaration(sauvIDF)==0)
        {
                affectertype(sauvIDF,"non declare");
                printf("erruer sementique : variable %s non declaré dans la ligne %d \n",sauvIDF,nb_ligne);
        }else{
                if(constaffected(sauvIDF)==0){
                printf("erruer sementique : CONST %s deja affected a la ligne %d\n",sauvIDF,nb_ligne);
                }      
         else{  
                 if(constaffected(sauvIDF)==1){
                 affectervaleur(sauvIDF,sauvaleur);
                 strcpy(sauvaleur,"");
                 affecterconst(sauvIDF,"CONST AFFECTED");

         }else {
                
                if(strcmp(final,sauvTYPED)!=0){
                 printf("erruer sementique :non compatible de type  [ %s | %s ] a la ligne %d\n",final,sauvTYPED,nb_ligne);
                strcpy(sauvTYPED,"");
        }else{
                 affectervaleur(sauvIDF,sauvaleur);
                 strcpy(sauvaleur,"");
        }
                
         }
                 
        }
        }
        
    
        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 379 "synt.y"
    {
                strcpy(sauvIDF,(yyvsp[(1) - (1)].str));
                getType((yyvsp[(1) - (1)].str),sauvTYPEG);
                strcpy(final,sauvTYPEG);
                strcpy(sauvTYPED,"");
                strcpy(sauvaleur,"");
                strcpy(sauvIDFCONST,"");
        ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 387 "synt.y"
    {
                strcpy(sauvIDF,(yyvsp[(1) - (4)].str));
                 getType((yyvsp[(1) - (4)].str),sauvTYPEG); 
                 strcpy(final,sauvTYPEG);
                 strcpy(sauvTYPED,"");
                 strcpy(sauvaleur,"");
                 strcpy(sauvIDFCONST,"");
         ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 395 "synt.y"
    {
                strcpy(sauvIDF,(yyvsp[(1) - (4)].str));
                 getType((yyvsp[(1) - (4)].str),sauvTYPEG);
                 strcpy(final,sauvTYPEG); 
                 strcpy(sauvTYPED,"");
                 strcpy(sauvaleur,"");
                 strcpy(sauvIDFCONST,"");
        ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 405 "synt.y"
    {if((strcmp(sauvOP,"/")==0)&&(sauvCNST==0)) 
                                {printf("erreur sementique : DIV/0 a la ligne %d\n",nb_ligne);};}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 409 "synt.y"
    {
                        sauvCNST=(yyvsp[(1) - (1)].ent);
                        sprintf(sauvaleur, "%d", (yyvsp[(1) - (1)].ent));
                       
                        if(((strcmp(sauvTYPED,"Entier")==0) || (strcmp(sauvTYPED,"")==0)) && strcmp(sauvOP,"/")!=0) 
                        {
                                strcpy(sauvTYPED,"Entier");
                        }else{
                               if((strcmp(sauvTYPED,"Reel")==0) ||((strcmp(sauvTYPED,"Entier")==0) &&(strcmp(sauvOP,"/")==0))){
                                strcpy(sauvTYPED,"Reel");
                                strcpy(sauvOP,"");
                                }else{
                                    strcpy(sauvTYPED,"Erreur");    
                                } 
                        }
                        
                ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 426 "synt.y"
    {
                
                        strcpy(sauvaleur,(yyvsp[(2) - (3)].str));
                        if((strcmp(sauvTYPED,"Chaine")==0) || (strcmp(sauvTYPED,"")==0))
                        {
                                strcpy(sauvTYPED,"Chaine");
                        }else{
                                strcpy(sauvTYPED,"Erreur"); 
                        }
                ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 436 "synt.y"
    {
                        strcpy(sauvaleur,(yyvsp[(1) - (1)].str));
                        if((strcmp(sauvTYPED,"Bool")==0) || (strcmp(sauvTYPED,"")==0))
                        {
                                strcpy(sauvTYPED,"Bool");
                        }else{
                                strcpy(sauvTYPED,"Erreur"); 
                        }
                        ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 445 "synt.y"
    {
                       strcpy(sauvaleur,(yyvsp[(1) - (1)].str));
                       if((strcmp(sauvTYPED,"Entier")==0) || (strcmp(sauvTYPED,"Reel")==0) || (strcmp(sauvTYPED,"")==0))
                       {
                                strcpy(sauvTYPED,"Reel");
                       }else{
                               strcpy(sauvTYPED,"Erreur"); 
                       }
                       
                ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 455 "synt.y"
    {
                strcpy(sauvIDFCONST,(yyvsp[(1) - (1)].str));
                compatibilitetype(sauvTYPED,(yyvsp[(1) - (1)].str),sauvOP);
        ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 459 "synt.y"
    {
                        strcpy(sauvIDFCONST,(yyvsp[(1) - (4)].str));
                        compatibilitetype(sauvTYPED,(yyvsp[(1) - (4)].str),sauvOP);
                        if((tailletab((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].ent))==-1) || ((yyvsp[(3) - (4)].ent)<0))
                                printf("erruer sementique : depassement taille de tableau ou indice negative %d \n",nb_ligne);
        ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 465 "synt.y"
    {
                strcpy(sauvIDFCONST,(yyvsp[(1) - (4)].str));
                compatibilitetype(sauvTYPED,(yyvsp[(1) - (4)].str),sauvOP);
        ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 476 "synt.y"
    {        if(recherche("ISIL.lang")==-1)
                {
                                 printf("erruer sementique : expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,(yyvsp[(1) - (1)].str));}
                ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 484 "synt.y"
    {        if(recherche("ISIL.lang")==-1)
                         {
                                 printf("erruer sementique : expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,(yyvsp[(1) - (1)].str));}
                ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 491 "synt.y"
    {        if(recherche("ISIL.lang")==-1)
                         {
                                 printf("erruer sementique : expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,(yyvsp[(1) - (1)].str));}
                ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 498 "synt.y"
    {        if(recherche("ISIL.lang")==-1)
                         {
                                 printf("erruer sementique : expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,(yyvsp[(1) - (1)].str));}
                ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 508 "synt.y"
    {strcpy(sauvTYPE,(yyvsp[(1) - (1)].str));}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 509 "synt.y"
    {strcpy(sauvTYPE,(yyvsp[(1) - (1)].str));}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 510 "synt.y"
    {strcpy(sauvTYPE,(yyvsp[(1) - (1)].str));}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 511 "synt.y"
    {strcpy(sauvTYPE,(yyvsp[(1) - (1)].str));}
    break;



/* Line 1455 of yacc.c  */
#line 2281 "synt.tab.c"
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
#line 514 "synt.y"

main()
{
     yyparse();
     afficher ();
}
yywrap() {}
yyerror (char*msg)
{
     printf("erreur synstaxique a la ligne la ligne %d \n",nb_ligne);
}
