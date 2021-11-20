%{

#include "synt.tab.h" 

extern nb_ligne;
extern YYSTYPE yylval;
typedef struct {
char nom[25];
char code[25];
char type[25];
int  taille;
char CONS[25];
char valeur[25];
}TypeTS;

TypeTS ts[100];
int cpt=0;

int recherche(char entite[]){
    int i=0;
    while(i<cpt){
        if(strcmp(entite,ts[i].nom)==0)return i;
        i++;
    }
    return -1;
}
int tailletab(char entite[],int nombre){
    int i=recherche(entite);
    if(ts[i].taille<nombre)return -1;
    else return 0;
}
int doubledeclaration(char entite[]){
    int i=0;
    i=recherche(entite);
    if(i>=0 && strcmp(ts[i].type,"")==0) return 0;
    else return -1;
}


void affectertype(char entite[],char type[]){
    int i=recherche(entite);
    strcpy(ts[i].type,type);
}
void affecterconst(char entite[],char cons[]){
    int i=recherche(entite);
    strcpy(ts[i].CONS,cons);
}
void affectertaille(char entite[],int taille){
    int i=recherche(entite);
    ts[i].taille=taille;
}
void affectervaleur(char entite[],char valeur[]){
    int i=recherche(entite);
    strcpy(ts[i].valeur,valeur);
}


void inserer(char nom[],char code[], char type[],char valeur[],int taille,char cons[]){
    if(recherche(nom)==-1){
        strcpy(ts[cpt].nom,nom);
        strcpy(ts[cpt].code,code);
        strcpy(ts[cpt].type,type);
        strcpy(ts[cpt].valeur,valeur);
        strcpy(ts[cpt].CONS,cons);
        ts[cpt].taille=taille;
        cpt++;
    }
    
    
}



//une fonction pour afficher la table de symbole
void afficher ()
{
printf("\t/*****************************Table des symboles **********************************************/\n");
printf("\t _____________________________________________________________________________________________\n");
printf("\t| NomEntite |  CodeEntite  |      TypeEntite  |    VALEUR  | Taille   | CONST                 |\n");
printf("\t|___________|______________|__________________|____________|__________|_______________________|\n");
int i=0;
  while(i<cpt)
  {
    printf("\t|%10s |%12s  |%16s  |%10s  |%8d  |%21s  |\n",ts[i].nom,ts[i].code,ts[i].type,ts[i].valeur,ts[i].taille,ts[i].CONS);
     i++;
   }
}
%}
lettres [a-zA-Z]
chiffres [0-9]
re {chiffres}+"."{chiffres}+
idf "$"{lettres}({lettres}|{chiffres}|_)*
idf_tab "@"{lettres}({lettres}|{chiffres}|_)*
nombre {chiffres}+
string {lettres}({lettres}|{chiffres}|_)*
commentaire "##"({string}|.|\n)*"##"
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
{re} {yylval.flt=atof(yytext);
    return re;}
{booleen} {yylval.str=strdup(yytext);
    return booleen;}
{string} {yylval.str=strdup(yytext);
    return string;}
{commentaire} return commentaire;
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
            return nombre;
            }
"\"" return j;
"'" return ch;
"" return espace;
"%d" return inentier;
"%b" return inbool;
"%f" return inreel;
"%s" return inchaine;
"=" return egale;
"!=" return notegale;
"<" return less;
">" return great;
"<=" return lessegale;
">=" return greategale;
":=" return mc_affec;
"\+" {yylval.str=strdup(yytext);
    return plus;}
"\-"  {yylval.str=strdup(yytext);
    return moins;}
"\*"  {yylval.str=strdup(yytext);
    return mult;}
"/" {yylval.str=strdup(yytext);
    return devision;}
";" return pvg;
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

