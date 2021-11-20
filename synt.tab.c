
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

int  nb_ligne=1;
char sauvOP[20];
char sauvTYPE[25];
char sauvIDF[25];
char sauvbib[25];
char sauvaleur[25];
  
 int sauvCNST;
 int cpt;
 


/* Line 189 of yacc.c  */
#line 87 "synt.tab.c"

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
     mc_private = 264,
     mc_protected = 265,
     mc_public = 266,
     mc_class = 267,
     idf = 268,
     p_ou = 269,
     p_fr = 270,
     cr_ov = 271,
     cr_fm = 272,
     aco_ov = 273,
     aco_fr = 274,
     mc_main = 275,
     mc_entier = 276,
     mc_reel = 277,
     mc_chaine = 278,
     vrg = 279,
     idf_tab = 280,
     nombre = 281,
     mc_const = 282,
     mc_affec = 283,
     plus = 284,
     moins = 285,
     mult = 286,
     devision = 287,
     mc_input = 288,
     mc_out = 289,
     j = 290,
     inentier = 291,
     inreel = 292,
     inchaine = 293,
     espace = 294,
     mc_for = 295,
     egale = 296,
     notegale = 297,
     less = 298,
     great = 299,
     lessegale = 300,
     greategale = 301,
     mcwhile = 302,
     mcif = 303,
     mcelse = 304,
     ch = 305,
     re = 306,
     or = 307,
     and = 308,
     mcbool = 309,
     booleen = 310,
     inbool = 311
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 13 "synt.y"

int ent;
char* str;
float flt;




/* Line 214 of yacc.c  */
#line 188 "synt.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 200 "synt.tab.c"

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
#define YYLAST   207

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNRULES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

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
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    12,    13,    17,    19,    21,    25,
      27,    29,    31,    39,    40,    43,    44,    46,    48,    50,
      52,    54,    58,    62,    64,    68,    75,    80,    85,    89,
      91,    95,    98,    99,   101,   103,   105,   107,   109,   111,
     113,   121,   133,   135,   137,   145,   156,   161,   167,   168,
     170,   172,   173,   175,   177,   179,   181,   183,   185,   189,
     193,   195,   203,   213,   216,   219,   222,   223,   233,   235,
     237,   239,   241,   246,   248,   253,   258,   262,   264,   270,
     271,   273,   277,   279,   281,   283,   288,   293,   295,   297,
     299,   301,   303,   305,   307
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    59,    62,    18,    64,    19,    -1,    60,
      59,    -1,    -1,     3,    61,     6,    -1,     4,    -1,     5,
      -1,    63,    12,    13,    -1,     9,    -1,    10,    -1,    11,
      -1,    65,    20,    14,    15,    18,    74,    19,    -1,    -1,
      66,    65,    -1,    -1,    68,    -1,    70,    -1,    72,    -1,
      67,    -1,     8,    -1,    96,    69,     6,    -1,    13,    24,
      69,    -1,    13,    -1,    96,    71,     6,    -1,    25,    16,
      26,    17,    24,    71,    -1,    25,    16,    26,    17,    -1,
      27,    96,    73,     6,    -1,    13,    24,    73,    -1,    13,
      -1,    13,    28,    94,    -1,    75,    74,    -1,    -1,    91,
      -1,    89,    -1,    87,    -1,    78,    -1,    77,    -1,    76,
      -1,     8,    -1,    48,    14,    82,    15,    18,    74,    19,
      -1,    48,    14,    82,    15,    18,    74,    19,    49,    18,
      74,    19,    -1,    80,    -1,    79,    -1,    47,    14,    82,
      15,    18,    86,    19,    -1,    40,    14,    81,    82,     6,
      85,    15,    18,    86,    19,    -1,    13,    28,    93,     6,
      -1,    93,    84,    93,    83,    82,    -1,    -1,    52,    -1,
      53,    -1,    -1,    41,    -1,    42,    -1,    43,    -1,    45,
      -1,    44,    -1,    46,    -1,    13,    29,    29,    -1,    13,
      30,    30,    -1,    74,    -1,    34,    14,    35,    88,    35,
      15,     6,    -1,    34,    14,    35,    88,    35,    24,    92,
      15,     6,    -1,     7,    88,    -1,    90,    88,    -1,    39,
      88,    -1,    -1,    33,    14,    35,    90,    35,    24,    92,
      15,     6,    -1,    36,    -1,    38,    -1,    37,    -1,    56,
      -1,    92,    28,    93,     6,    -1,    13,    -1,    25,    16,
      26,    17,    -1,    25,    16,    13,    17,    -1,    94,    95,
      93,    -1,    94,    -1,    14,    94,    15,    95,    93,    -1,
      -1,    26,    -1,    50,     7,    50,    -1,    55,    -1,    51,
      -1,    13,    -1,    25,    16,    26,    17,    -1,    25,    16,
      13,    17,    -1,    29,    -1,    30,    -1,    31,    -1,    32,
      -1,    21,    -1,    22,    -1,    23,    -1,    54,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    35,    36,    38,    44,    45,    47,    58,
      59,    60,    62,    63,    66,    67,    69,    70,    71,    72,
      76,    78,    80,    90,   103,   105,   116,   128,   130,   140,
     150,   164,   165,   167,   168,   169,   170,   171,   172,   176,
     178,   179,   182,   183,   185,   187,   189,   191,   192,   194,
     195,   196,   198,   199,   200,   201,   202,   203,   205,   206,
     208,   211,   216,   222,   223,   224,   225,   228,   234,   235,
     236,   237,   239,   245,   246,   247,   249,   251,   252,   254,
     257,   261,   266,   269,   272,   273,   276,   281,   288,   294,
     301,   309,   311,   312,   313
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_import", "bib_io", "bib_lang", "pvg",
  "string", "commentaire", "mc_private", "mc_protected", "mc_public",
  "mc_class", "idf", "p_ou", "p_fr", "cr_ov", "cr_fm", "aco_ov", "aco_fr",
  "mc_main", "mc_entier", "mc_reel", "mc_chaine", "vrg", "idf_tab",
  "nombre", "mc_const", "mc_affec", "plus", "moins", "mult", "devision",
  "mc_input", "mc_out", "j", "inentier", "inreel", "inchaine", "espace",
  "mc_for", "egale", "notegale", "less", "great", "lessegale",
  "greategale", "mcwhile", "mcif", "mcelse", "ch", "re", "or", "and",
  "mcbool", "booleen", "inbool", "$accept", "S", "LISTE_BIB", "BIB",
  "NOM_BIB", "HEADER_CLASS", "MODIFICATEUR", "CORPS", "LISTE_DEC", "DEC",
  "COMMDEC", "DEC_VAR", "LISTE_IDF", "DEC_TAB", "LISTE_IDF_TAB",
  "DEC_CONST", "LISTE_IDF_CONST", "LISTE_INST", "INST", "COMINS", "COND",
  "BOUCLE", "WHILE", "FOR", "INIT", "CONDITION", "OPRLOGIQUE", "ARTH",
  "INCR", "BC", "OUTPUT", "PHRASE", "INPUT", "TYPE_IN", "AFFECTATION",
  "TYPE_IDF", "Expression", "IDF_CSNT", "OPERATION", "TYPE", 0
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
     305,   306,   307,   308,   309,   310,   311
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    61,    61,    62,    63,
      63,    63,    64,    64,    65,    65,    66,    66,    66,    66,
      67,    68,    69,    69,    70,    71,    71,    72,    73,    73,
      73,    74,    74,    75,    75,    75,    75,    75,    75,    76,
      77,    77,    78,    78,    79,    80,    81,    82,    82,    83,
      83,    83,    84,    84,    84,    84,    84,    84,    85,    85,
      86,    87,    87,    88,    88,    88,    88,    89,    90,    90,
      90,    90,    91,    92,    92,    92,    93,    93,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    95,    95,    95,
      95,    96,    96,    96,    96
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     0,     3,     1,     1,     3,     1,
       1,     1,     7,     0,     2,     0,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     6,     4,     4,     3,     1,
       3,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       7,    11,     1,     1,     7,    10,     4,     5,     0,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     7,     9,     2,     2,     2,     0,     9,     1,     1,
       1,     1,     4,     1,     4,     4,     3,     1,     5,     0,
       1,     3,     1,     1,     1,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     4,     6,     7,     0,     1,     9,
      10,    11,     0,     0,     3,     5,    13,     0,    20,    91,
      92,    93,     0,    94,     0,     0,    15,    19,    16,    17,
      18,     0,     8,     0,     2,     0,    14,    23,     0,     0,
       0,    29,     0,     0,     0,     0,    21,    24,     0,     0,
      27,     0,    22,     0,    28,    84,     0,    80,     0,    83,
      82,    30,    32,    26,     0,     0,    39,    73,     0,     0,
       0,     0,     0,     0,     0,    32,    38,    37,    36,    43,
      42,    35,    34,    33,     0,     0,     0,     0,    81,     0,
       0,     0,     0,    79,    79,    12,    31,    79,    25,    86,
      85,     0,     0,     0,    66,     0,    79,     0,     0,     0,
      77,     0,     0,    75,    74,    68,    70,    69,    71,     0,
      66,    66,     0,    66,    79,     0,     0,     0,    52,    53,
      54,    56,    55,    57,    79,    87,    88,    89,    90,    79,
       0,    72,     0,    63,    65,     0,    64,     0,     0,     0,
      32,    51,    76,    32,     0,     0,     0,    46,     0,     0,
      79,    60,     0,    49,    50,    79,     0,     0,    61,     0,
       0,     0,     0,    78,    44,    47,    40,     0,     0,    58,
      59,    32,     0,    67,    62,     0,    32,    45,     0,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     7,    12,    13,    24,    25,    26,
      27,    28,    39,    29,    40,    30,    42,   161,    75,    76,
      77,    78,    79,    80,   106,   108,   165,   134,   159,   162,
      81,   122,    82,   123,    83,    84,   109,   110,   139,    31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -124
static const yytype_int16 yypact[] =
{
      13,   126,    34,   118,    13,  -124,  -124,    46,  -124,  -124,
    -124,  -124,    44,    60,  -124,  -124,    24,    64,  -124,  -124,
    -124,  -124,   -15,  -124,    69,    59,    48,  -124,  -124,  -124,
    -124,     2,  -124,    77,  -124,    80,  -124,    86,    85,   107,
     109,   -19,   113,   108,   123,   111,  -124,  -124,    77,    61,
    -124,   120,  -124,   122,  -124,  -124,   124,  -124,   135,  -124,
    -124,  -124,   101,   119,    37,    94,  -124,  -124,   129,   132,
     133,   136,   137,   138,   134,   101,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,   127,   131,   140,   141,  -124,    63,
     125,   128,   146,    67,    67,  -124,  -124,    70,  -124,  -124,
    -124,   144,   145,   -16,    29,   139,    -2,    61,   149,    62,
      68,   150,   148,  -124,  -124,  -124,  -124,  -124,  -124,   142,
      29,    29,   143,    29,    70,   160,   153,   151,  -124,  -124,
    -124,  -124,  -124,  -124,    70,  -124,  -124,  -124,  -124,    70,
     152,  -124,   147,  -124,  -124,    11,  -124,   166,   161,    68,
     101,   -11,  -124,   101,    12,   167,    12,  -124,   103,   164,
      70,  -124,   156,  -124,  -124,     4,   157,   165,  -124,   168,
     155,   158,   163,  -124,  -124,  -124,   154,   176,   179,  -124,
    -124,   101,   169,  -124,  -124,   170,   101,  -124,   171,  -124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,   182,  -124,  -124,  -124,  -124,  -124,   172,  -124,
    -124,  -124,   162,  -124,   106,  -124,   159,   -62,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,   -92,  -124,  -124,  -124,    14,
    -124,   -63,  -124,    89,  -124,  -123,   -96,   -46,    45,   174
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -49
static const yytype_int16 yytable[] =
{
      74,   112,   111,    61,   -48,    48,    19,    20,    21,    49,
     -48,    55,   107,    96,   125,    37,     1,    55,   107,   -48,
     115,   116,   117,    56,    57,    67,   155,    38,   147,    56,
      57,   167,    18,   169,     8,   156,   120,    68,   151,    23,
     118,   163,   164,   152,   -15,    19,    20,    21,    58,    59,
      86,    22,    15,    60,    58,    59,    18,   143,   144,    60,
     146,   126,    16,    87,   173,   115,   116,   117,   121,    19,
      20,    21,    17,   175,    55,    22,   101,    32,    23,    35,
      55,   107,   -48,    55,   107,   118,    56,    57,    34,   102,
      41,   166,    56,    57,    43,    56,    57,   135,   136,   137,
     138,    45,    23,   128,   129,   130,   131,   132,   133,    66,
      44,    58,    59,    46,    67,    47,    60,    58,    59,    50,
      58,    59,    60,    51,   188,    60,    68,     9,    10,    11,
       5,     6,   170,   171,    69,    70,    37,    53,    62,    63,
      64,    71,    65,    85,    88,    89,    90,    91,    72,    73,
      92,    93,    94,    95,   141,    97,    38,    99,   100,   105,
     103,   113,   114,   104,   127,   140,   148,   124,   149,   150,
     153,   154,   157,   168,   158,   174,   176,   142,   145,   172,
     177,   181,   183,   178,   179,   184,    14,   186,   180,   187,
     189,    98,   119,     0,   160,   185,    33,     0,    36,     0,
       0,     0,     0,   182,     0,     0,    52,    54
};

static const yytype_int16 yycheck[] =
{
      62,    97,    94,    49,     6,    24,    21,    22,    23,    28,
       6,    13,    14,    75,   106,    13,     3,    13,    14,    15,
      36,    37,    38,    25,    26,    13,    15,    25,   124,    25,
      26,   154,     8,   156,     0,    24,     7,    25,   134,    54,
      56,    52,    53,   139,    20,    21,    22,    23,    50,    51,
      13,    27,     6,    55,    50,    51,     8,   120,   121,    55,
     123,   107,    18,    26,   160,    36,    37,    38,    39,    21,
      22,    23,    12,   165,    13,    27,    13,    13,    54,    20,
      13,    14,    15,    13,    14,    56,    25,    26,    19,    26,
      13,   153,    25,    26,    14,    25,    26,    29,    30,    31,
      32,    16,    54,    41,    42,    43,    44,    45,    46,     8,
      24,    50,    51,     6,    13,     6,    55,    50,    51,     6,
      50,    51,    55,    15,   186,    55,    25,     9,    10,    11,
       4,     5,    29,    30,    33,    34,    13,    26,    18,    17,
      16,    40,     7,    24,    50,    16,    14,    14,    47,    48,
      14,    14,    14,    19,     6,    28,    25,    17,    17,    13,
      35,    17,    17,    35,    15,    15,     6,    28,    15,    18,
      18,    24,     6,     6,    13,    19,    19,    35,    35,    15,
      15,    18,     6,    15,    29,     6,     4,    18,    30,    19,
      19,    85,   103,    -1,   149,   181,    22,    -1,    26,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    44,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    58,    59,    60,     4,     5,    61,     0,     9,
      10,    11,    62,    63,    59,     6,    18,    12,     8,    21,
      22,    23,    27,    54,    64,    65,    66,    67,    68,    70,
      72,    96,    13,    96,    19,    20,    65,    13,    25,    69,
      71,    13,    73,    14,    24,    16,     6,     6,    24,    28,
       6,    15,    69,    26,    73,    13,    25,    26,    50,    51,
      55,    94,    18,    17,    16,     7,     8,    13,    25,    33,
      34,    40,    47,    48,    74,    75,    76,    77,    78,    79,
      80,    87,    89,    91,    92,    24,    13,    26,    50,    16,
      14,    14,    14,    14,    14,    19,    74,    28,    71,    17,
      17,    13,    26,    35,    35,    13,    81,    14,    82,    93,
      94,    82,    93,    17,    17,    36,    37,    38,    56,    90,
       7,    39,    88,    90,    28,    82,    94,    15,    41,    42,
      43,    44,    45,    46,    84,    29,    30,    31,    32,    95,
      15,     6,    35,    88,    88,    35,    88,    93,     6,    15,
      18,    93,    93,    18,    24,    15,    24,     6,    13,    85,
      95,    74,    86,    52,    53,    83,    74,    92,     6,    92,
      29,    30,    15,    93,    19,    82,    19,    15,    15,    29,
      30,    18,    49,     6,     6,    86,    18,    19,    74,    19
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
#line 32 "synt.y"
    {printf("programe syntaxiquement !!!!!!!!!!! correcte!!!!!!\n"); 
                      ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 38 "synt.y"
    {
        if(recherche(sauvbib)==-1){
                inserer(sauvbib,"BIB","BIB",sauvbib,1,"NOT CONST");
        }
;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 44 "synt.y"
    {strcpy(sauvbib,(yyvsp[(1) - (1)].str));;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 45 "synt.y"
    {strcpy(sauvbib,(yyvsp[(1) - (1)].str));;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 47 "synt.y"
    {
        if(doubledeclaration((yyvsp[(3) - (3)].str))!=0){
                 strcat(sauvTYPE,(yyvsp[(2) - (3)].str));
                // inserer($3,$2,sauvTYPE,"",1,"NOT CONST");
                affectertype((yyvsp[(3) - (3)].str),sauvTYPE);
                affecterconst((yyvsp[(3) - (3)].str),"NOT CONST");
        }
       
;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 58 "synt.y"
    {strcpy(sauvTYPE,(yyvsp[(1) - (1)].str));;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 59 "synt.y"
    {strcpy(sauvTYPE,(yyvsp[(1) - (1)].str));;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 60 "synt.y"
    {strcpy(sauvTYPE,(yyvsp[(1) - (1)].str));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 80 "synt.y"
    {
                if(recherche((yyvsp[(1) - (3)].str))==-1){
              //  inserer($1,"idf",sauvTYPE,"",1,"NOT CONST");
               affectertype((yyvsp[(1) - (3)].str),sauvTYPE) ;
               affecterconst((yyvsp[(1) - (3)].str),"NOT CONST");
               }
               else{
                       printf("double declaration sur %s a la ligne %d\n",(yyvsp[(1) - (3)].str),nb_ligne);
               }
;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 90 "synt.y"
    {
                if(recherche((yyvsp[(1) - (1)].str))==-1){
               //inserer($1,"idf",sauvTYPE,"",1,"NOT CONST");
               affectertype((yyvsp[(1) - (1)].str),sauvTYPE) ;
               affecterconst((yyvsp[(1) - (1)].str),"NOT CONST");
               }
               else{
                       printf("double declaration sur %s a la ligne %d\n",(yyvsp[(1) - (1)].str),nb_ligne);
               }
        
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 105 "synt.y"
    {
                        if(recherche((yyvsp[(1) - (6)].str))==-1){
                                affectertype((yyvsp[(1) - (6)].str),sauvTYPE) ;
                                affecterconst((yyvsp[(1) - (6)].str),"NOT CONST");
                                affectertaille((yyvsp[(1) - (6)].str),(yyvsp[(3) - (6)].ent));
                                //inserer($1,"idf_tab",sauvTYPE,"",$3,"NOT CONST");
                        }else{
                                 printf("double declaration sur %s a la ligne %d\n",(yyvsp[(1) - (6)].str),nb_ligne);
                        }
                        
                                ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 116 "synt.y"
    {
                        if(recherche((yyvsp[(1) - (4)].str))==-1){
                                affectertype((yyvsp[(1) - (4)].str),sauvTYPE) ;
                                affecterconst((yyvsp[(1) - (4)].str),"NOT CONST");
                                affectertaille((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].ent));
                                //inserer($1,"idf_tab",sauvTYPE,"",$3,"NOT CONST");
                        }else{
                                 printf("double declaration sur %s a la ligne %d\n",(yyvsp[(1) - (4)].str),nb_ligne);
                        }
                        
                                ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 130 "synt.y"
    {
                if(recherche((yyvsp[(1) - (3)].str))==-1){
                       // inserer($1,"idf",sauvTYPE,"",1,"CONST NOT AFFECTED");
                        affectertype((yyvsp[(1) - (3)].str),sauvTYPE) ; 
                        affecterconst((yyvsp[(1) - (3)].str),"CONST NOT AFFECTED");
                }else{
                                 printf("double declaration sur %s a la ligne %d\n",(yyvsp[(1) - (3)].str),nb_ligne);
                        }
              
                ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 140 "synt.y"
    {
                if(recherche((yyvsp[(1) - (1)].str))==-1){
                        //inserer($1,"idf",sauvTYPE,"",1,"CONST NOT AFFECTED");
                        affectertype((yyvsp[(1) - (1)].str),sauvTYPE) ; 
                        affecterconst((yyvsp[(1) - (1)].str),"CONST NOT AFFECTED");
                }else{
                                 printf("double declaration sur %s a la ligne %d\n",(yyvsp[(1) - (1)].str),nb_ligne);
                        }
              
                ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 150 "synt.y"
    {
                if(recherche((yyvsp[(1) - (3)].str))==-1){
                        /* char valeur[25];
                        itoa($3,valeur,10);*/
                       // inserer($1,"idf",sauvTYPE,valeur,1,"CONST AFFECTED");
                        affectertype((yyvsp[(1) - (3)].str),sauvTYPE) ; 
                       // affectervaleur($1,sauvaleur);
                        affecterconst((yyvsp[(1) - (3)].str),"CONST AFFECTED");
                }else{
                                 printf("double declaration sur %s a la ligne %d\n",(yyvsp[(1) - (3)].str),nb_ligne);
                        }
                
        ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 211 "synt.y"
    {
        if(recherche("ISIL.io")==-1){
                printf("expected io library for in/out operations a la ligne %d \n",nb_ligne);
        }
        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 216 "synt.y"
    {
        if(recherche("ISIL.io")==-1){
                printf("expected io library for in/out operations a la ligne %d \n",nb_ligne);
        }
        ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 228 "synt.y"
    {
        if(recherche("ISIL.io")==-1){
               printf("expected io library for in/out operations a la ligne %d \n",nb_ligne);
        }
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 239 "synt.y"
    {
        if(recherche(sauvIDF)==-1){
                printf("erruer sementique variable %s non declaré dans la ligne %d \n",sauvIDF,nb_ligne);
        }
;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 245 "synt.y"
    {strcpy(sauvIDF,(yyvsp[(1) - (1)].str));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 246 "synt.y"
    {strcpy(sauvIDF,(yyvsp[(1) - (4)].str));;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 247 "synt.y"
    {strcpy(sauvIDF,(yyvsp[(1) - (4)].str));;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 250 "synt.y"
    {if((strcmp(sauvOP,"/")==0)&&(sauvCNST==0)) {printf("erreur sementique div/0 a la ligne %d\n",nb_ligne);};}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 253 "synt.y"
    {if((strcmp(sauvOP,"/")==0)&&(sauvCNST==0)) {printf("erreur sementique div/0 a la ligne %d\n",nb_ligne);};}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 257 "synt.y"
    {
                       /* sauvCNST=$1;
                        strcpy(sauvaleur,itoa($1));*/
                ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 261 "synt.y"
    {
                
                        /*strcpy(sauvaleur,$2);*/
                        
                        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 266 "synt.y"
    {
                        /*strcpy(sauvaleur,$1);*/
                        ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 269 "synt.y"
    {
                       /* strcpy(sauvaleur,ftoa($1));*/
                ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 273 "synt.y"
    {
                        if(tailletab((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].ent))==-1)printf("erreur sementique depassement taille de tableau %d \n",nb_ligne);
                ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 282 "synt.y"
    {        if(recherche("ISIL.lang")==-1){
                                 printf("expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,(yyvsp[(1) - (1)].str));}
                ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 289 "synt.y"
    {        if(recherche("ISIL.lang")==-1){
                                 printf("expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,(yyvsp[(1) - (1)].str));}
                ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 295 "synt.y"
    {        if(recherche("ISIL.lang")==-1){
                                 printf("expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,(yyvsp[(1) - (1)].str));}
                ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 302 "synt.y"
    {        if(recherche("ISIL.lang")==-1){
                                 printf("expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,(yyvsp[(1) - (1)].str));}
                ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 310 "synt.y"
    {strcpy(sauvTYPE,(yyvsp[(1) - (1)].str));}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 311 "synt.y"
    {strcpy(sauvTYPE,(yyvsp[(1) - (1)].str));}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 312 "synt.y"
    {strcpy(sauvTYPE,(yyvsp[(1) - (1)].str));}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 313 "synt.y"
    {strcpy(sauvTYPE,(yyvsp[(1) - (1)].flt));}
    break;



/* Line 1455 of yacc.c  */
#line 1953 "synt.tab.c"
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
#line 316 "synt.y"

main()
{
     yyparse();
     afficher ();
}
yywrap() {}
yyerror (char*msg)
{
     printf("error synstaxique dans la ligne %d ",nb_ligne);
}

