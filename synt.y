%{
int  nb_ligne=1;
char sauvOP[20];
char sauvTYPE[25];
char sauvIDF[25];
char sauvbib[25];
char sauvaleur[25];
  
 int sauvCNST;
 int cpt;
 
%}
%union{
int ent;
char* str;
float flt;

}
%token mc_import <str>bib_io <str>bib_lang pvg <str>string commentaire
<str>mc_private <str>mc_protected <str>mc_public <str>mc_class <str>idf
p_ou p_fr cr_ov cr_fm aco_ov aco_fr mc_main
mc_entier mc_reel mc_chaine vrg <str>idf_tab <ent>nombre mc_const
mc_affec <str>plus <str>moins <str>mult <str>devision
mc_input mc_out j inentier inreel inchaine espace
mc_for egale notegale less great lessegale greategale mcwhile
mcif mcelse ch <flt>re or and mcbool <str>booleen inbool


%%


S: LISTE_BIB HEADER_CLASS aco_ov  CORPS aco_fr {printf("programe syntaxiquement !!!!!!!!!!! correcte!!!!!!\n"); 
                      }
;
LISTE_BIB: BIB LISTE_BIB 
            |
;
BIB: mc_import NOM_BIB pvg{
        if(recherche(sauvbib)==-1){
                inserer(sauvbib,"BIB","BIB",sauvbib,1,"NOT CONST");
        }
}
;
NOM_BIB:bib_io {strcpy(sauvbib,$1);}
        |bib_lang {strcpy(sauvbib,$1);}
;
HEADER_CLASS:MODIFICATEUR mc_class idf {
        if(doubledeclaration($3)!=0){
                 strcat(sauvTYPE,$2);
                // inserer($3,$2,sauvTYPE,"",1,"NOT CONST");
                affectertype($3,sauvTYPE);
                affecterconst($3,"NOT CONST");
        }
       
}
;
MODIFICATEUR:
                 mc_private  {strcpy(sauvTYPE,$1);}
                |mc_protected {strcpy(sauvTYPE,$1);}
                |mc_public {strcpy(sauvTYPE,$1);}
;
CORPS:  LISTE_DEC  mc_main p_ou p_fr aco_ov  LISTE_INST  aco_fr
        |
        ;

LISTE_DEC:  DEC  LISTE_DEC
        |
;
DEC: DEC_VAR
        |DEC_TAB
        |DEC_CONST
        |COMMDEC
        
       
;
COMMDEC:commentaire
;
DEC_VAR: TYPE LISTE_IDF pvg 
;
LISTE_IDF:idf vrg LISTE_IDF {
                if(recherche($1)==-1){
              //  inserer($1,"idf",sauvTYPE,"",1,"NOT CONST");
               affectertype($1,sauvTYPE) ;
               affecterconst($1,"NOT CONST");
               }
               else{
                       printf("double declaration sur %s a la ligne %d\n",$1,nb_ligne);
               }
}
        |idf {
                if(recherche($1)==-1){
               //inserer($1,"idf",sauvTYPE,"",1,"NOT CONST");
               affectertype($1,sauvTYPE) ;
               affecterconst($1,"NOT CONST");
               }
               else{
                       printf("double declaration sur %s a la ligne %d\n",$1,nb_ligne);
               }
        
}
;

DEC_TAB:TYPE LISTE_IDF_TAB pvg
;
LISTE_IDF_TAB:  idf_tab cr_ov nombre cr_fm vrg LISTE_IDF_TAB {
                        if(recherche($1)==-1){
                                affectertype($1,sauvTYPE) ;
                                affecterconst($1,"NOT CONST");
                                affectertaille($1,$3);
                                //inserer($1,"idf_tab",sauvTYPE,"",$3,"NOT CONST");
                        }else{
                                 printf("double declaration sur %s a la ligne %d\n",$1,nb_ligne);
                        }
                        
                                }
                |idf_tab cr_ov nombre cr_fm {
                        if(recherche($1)==-1){
                                affectertype($1,sauvTYPE) ;
                                affecterconst($1,"NOT CONST");
                                affectertaille($1,$3);
                                //inserer($1,"idf_tab",sauvTYPE,"",$3,"NOT CONST");
                        }else{
                                 printf("double declaration sur %s a la ligne %d\n",$1,nb_ligne);
                        }
                        
                                }
;
DEC_CONST:mc_const TYPE LISTE_IDF_CONST pvg
;
LISTE_IDF_CONST: idf vrg LISTE_IDF_CONST {
                if(recherche($1)==-1){
                       // inserer($1,"idf",sauvTYPE,"",1,"CONST NOT AFFECTED");
                        affectertype($1,sauvTYPE) ; 
                        affecterconst($1,"CONST NOT AFFECTED");
                }else{
                                 printf("double declaration sur %s a la ligne %d\n",$1,nb_ligne);
                        }
              
                }
        |idf {
                if(recherche($1)==-1){
                        //inserer($1,"idf",sauvTYPE,"",1,"CONST NOT AFFECTED");
                        affectertype($1,sauvTYPE) ; 
                        affecterconst($1,"CONST NOT AFFECTED");
                }else{
                                 printf("double declaration sur %s a la ligne %d\n",$1,nb_ligne);
                        }
              
                }
        |idf mc_affec IDF_CSNT{
                if(recherche($1)==-1){
                        /* char valeur[25];
                        itoa($3,valeur,10);*/
                       // inserer($1,"idf",sauvTYPE,valeur,1,"CONST AFFECTED");
                        affectertype($1,sauvTYPE) ; 
                       // affectervaleur($1,sauvaleur);
                        affecterconst($1,"CONST AFFECTED");
                }else{
                                 printf("double declaration sur %s a la ligne %d\n",$1,nb_ligne);
                        }
                
        }
;
LISTE_INST:  INST LISTE_INST
                |
;
INST:AFFECTATION 
        |INPUT
        |OUTPUT
        |BOUCLE
        |COND
        |COMINS

        
;
COMINS:commentaire
;
COND:mcif p_ou CONDITION p_fr aco_ov LISTE_INST aco_fr
        |mcif p_ou CONDITION p_fr aco_ov LISTE_INST aco_fr mcelse aco_ov LISTE_INST aco_fr
        
;
BOUCLE: FOR
        |WHILE
;
WHILE: mcwhile p_ou CONDITION  p_fr aco_ov BC aco_fr 
;
FOR: mc_for p_ou INIT CONDITION pvg INCR p_fr aco_ov BC aco_fr 
;
INIT:idf mc_affec Expression pvg
;
CONDITION:Expression ARTH Expression OPRLOGIQUE CONDITION
        |
;
OPRLOGIQUE: or
                |and
                |
;
ARTH: egale
        |notegale
        |less
        |lessegale
        |great
        |greategale
;
INCR:idf plus plus
        |idf moins moins
;
BC:LISTE_INST
;

OUTPUT: mc_out p_ou j PHRASE j p_fr pvg{
        if(recherche("ISIL.io")==-1){
                printf("expected io library for in/out operations a la ligne %d \n",nb_ligne);
        }
        }
        |mc_out p_ou j PHRASE j vrg TYPE_IDF p_fr pvg{
        if(recherche("ISIL.io")==-1){
                printf("expected io library for in/out operations a la ligne %d \n",nb_ligne);
        }
        }
;
PHRASE:string PHRASE
         |TYPE_IN PHRASE
        |espace PHRASE
        |
;

INPUT: mc_input p_ou j TYPE_IN j vrg TYPE_IDF p_fr pvg{
        if(recherche("ISIL.io")==-1){
               printf("expected io library for in/out operations a la ligne %d \n",nb_ligne);
        }
}
;
TYPE_IN:inentier
        |inchaine
        |inreel
        |inbool
;
AFFECTATION:TYPE_IDF mc_affec Expression pvg{
        if(recherche(sauvIDF)==-1){
                printf("erruer sementique variable %s non declaré dans la ligne %d \n",sauvIDF,nb_ligne);
        }
}
;
TYPE_IDF: idf {strcpy(sauvIDF,$1);}
        |idf_tab cr_ov nombre cr_fm {strcpy(sauvIDF,$1);}
        |idf_tab cr_ov idf cr_fm {strcpy(sauvIDF,$1);}
;
Expression: IDF_CSNT OPERATION Expression
                        {if((strcmp(sauvOP,"/")==0)&&(sauvCNST==0)) {printf("erreur sementique div/0 a la ligne %d\n",nb_ligne);}}
                |IDF_CSNT
                |p_ou IDF_CSNT p_fr OPERATION Expression
                        {if((strcmp(sauvOP,"/")==0)&&(sauvCNST==0)) {printf("erreur sementique div/0 a la ligne %d\n",nb_ligne);}}
                |
               
;
IDF_CSNT: nombre {
                       /* sauvCNST=$1;
                        strcpy(sauvaleur,itoa($1));*/
                }
        |ch string ch{
                
                        /*strcpy(sauvaleur,$2);*/
                        
                        }
        |booleen {
                        /*strcpy(sauvaleur,$1);*/
                        }
        |re {
                       /* strcpy(sauvaleur,ftoa($1));*/
                }
        |idf
        |idf_tab cr_ov nombre cr_fm{
                        if(tailletab($1,$3)==-1)printf("erreur sementique depassement taille de tableau %d \n",nb_ligne);
                }
        |idf_tab cr_ov idf cr_fm
                
;


OPERATION:plus 
                {        if(recherche("ISIL.lang")==-1){
                                 printf("expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,$1);}
                }
                       
                |moins 
                         {        if(recherche("ISIL.lang")==-1){
                                 printf("expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,$1);}
                }
                |mult 
                         {        if(recherche("ISIL.lang")==-1){
                                 printf("expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,$1);}
                }
                |
                devision 
                         {        if(recherche("ISIL.lang")==-1){
                                 printf("expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,$1);}
                }
                        
;
TYPE:   mc_entier 
        {strcpy(sauvTYPE,$1)}
        |mc_reel {strcpy(sauvTYPE,$1)}
        |mc_chaine {strcpy(sauvTYPE,$1)}
        |mcbool {strcpy(sauvTYPE,$1)}
;

%%
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
