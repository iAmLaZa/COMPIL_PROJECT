
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

/* Line 1676 of yacc.c  */
#line 22 "synt.y"

int ent;
char* str;
float flt;




/* Line 1676 of yacc.c  */
#line 120 "synt.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


