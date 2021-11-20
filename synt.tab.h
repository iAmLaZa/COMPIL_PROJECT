
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 13 "synt.y"

int ent;
char* str;
float flt;




/* Line 1676 of yacc.c  */
#line 117 "synt.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


