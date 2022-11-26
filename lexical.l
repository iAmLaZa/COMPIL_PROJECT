%{

#include "synt.tab.h" 
#include "fonction.h" 
extern nb_ligne;
extern YYSTYPE yylval;

%}
signe [-+]
lettres [a-zA-Z]
chiffres [0-9]
re {nombre}"."{chiffres}+
idf_tab "@"{lettres}(({lettres}|{chiffres})*|_({lettres}|{chiffres}))+
idf "$"{lettres}(({lettres}|{chiffres})*|_({lettres}|{chiffres}))+
nombre {signe}?([1-9][0-9]*|0)
string {lettres}({lettres}|{chiffres}|_)*
comment "##"
chaine_commentaire [^#]*
booleen "true"|"false"

%%
import return mc_import;
ISIL.io {yylval.str=strdup(yytext);
    return bib_io;}
ISIL.lang {yylval.str=strdup(yytext);
    return bib_lang;}
public {yylval.str=strdup(yytext);
        return mc_public;}
private {yylval.str=strdup(yytext);
        return mc_private;}
protected {yylval.str=strdup(yytext);
        return mc_protected;}
class { yylval.str=strdup(yytext);
    return mc_class;}
main return mc_main;
Entier {yylval.str=strdup(yytext);
        return mc_entier;}
Bool {yylval.str=strdup(yytext);
        return mcbool;}
Reel {yylval.str=strdup(yytext);
        return mc_reel;}
Chaine {yylval.str=strdup(yytext);
        return mc_chaine;}
CONST return mc_const;
In return mc_input;
Out return mc_out;
for return mc_for;
While return mcwhile;
if return mcif;
else return mcelse;
OR return or;
AND return and;
void return mcvoid;
return return mcreturn;
{re} {yylval.str=strdup(yytext);
    return re;}
{booleen} {yylval.str=strdup(yytext);
    return booleen;}
{string} {yylval.str=strdup(yytext);
    return string;}
{comment}{chaine_commentaire}{comment} {nb_ligne=nb_ligne+nb_ligne_comment(yytext); return commentaire;} 
{idf} {if(yyleng <=25) {    inserer(yytext,"idf","","",1,"NOT CONST");
                            yylval.str=strdup(yytext);
                            return idf;}
            else {printf("la longeur de idf %s est trop grande",yytext);}
            }
{idf_tab} {
        inserer(yytext,"idf_tab","","",0,"NOT CONST");
       yylval.str=strdup(yytext);
        return idf_tab;
}
{nombre} {  yylval.ent=atoi(yytext);
            if(atoi(yytext)>=-32768 && atoi(yytext)<=32767 ){
                return nombre;
            }
            else{
                printf("la valeur %s out of intervale [-32768|32767] a la ligne %d\n",yytext,nb_ligne);
            }
            
            }
"\"" return j;
"'" return ch;
"" return espace;
"%d" {yylval.str=strdup(yytext);return inentier;}
"%b" {yylval.str=strdup(yytext);return inbool;}
"%f" {yylval.str=strdup(yytext);return inreel;}
"%s" {yylval.str=strdup(yytext);return inchaine;}
"=" return egale;
"!=" return notegale;
"<" return less;
">" return great;
"<=" return lessegale;
">=" return greategale;
":=" return mc_affec;
"+" {yylval.str=strdup(yytext);
    return plus;}
"-"  {yylval.str=strdup(yytext);
    return moins;}
"*"  {yylval.str=strdup(yytext);
    return mult;}
"/" {yylval.str=strdup(yytext);
    return devision;}
";" return pvg;
"_" return tiri;
"," return vrg;
"(" return p_ou;
")" return p_fr;
"{" return aco_ov;
"}" return aco_fr;
"[" return cr_ov;
"]" return cr_fm;
[ \t] ;
[\n] nb_ligne++;
. {printf("erreur lexicale a ligne %d sur l'entite %s\n",nb_ligne,yytext);
    }

