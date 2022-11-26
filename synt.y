%{

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
 
%}
%union{
int ent;
char* str;
float flt;

}
%token mc_import <str>bib_io <str>bib_lang pvg <str>string commentaire mcvoid
<str>mc_private <str>mc_protected <str>mc_public <str>mc_class <str>idf
p_ou p_fr cr_ov cr_fm aco_ov aco_fr mc_main mcreturn
mc_entier mc_reel mc_chaine vrg <str>idf_tab <ent>nombre  mc_const
mc_affec <str>plus <str>moins <str>mult <str>devision
mc_input mc_out j <str>inentier <str>inreel <str>inchaine espace
mc_for egale notegale less great lessegale greategale mcwhile
mcif mcelse ch <str>re or and mcbool <str>booleen <str>inbool tiri


%%


S: LISTE_BIB HEADER_CLASS aco_ov  CORPS aco_fr {printf(" programe syntaxiquement  correcte!!!!!!\n"); 
                      }
        |LISTE_BIB FONCTION HEADER_CLASS aco_ov  CORPS aco_fr {printf(" programe syntaxiquement  correcte!!!!!!\n"); 
                      }
;
FONCTION: mcvoid string p_ou p_fr aco_ov aco_fr pvg
                |TYPE string p_ou p_fr aco_ov mcreturn  TYPE_IDF pvg aco_fr pvg
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
        if(doubledeclaration($3)==0){
                strcat(sauvTYPE,"_");
                 strcat(sauvTYPE,$2);
                // inserer($3,$2,sauvTYPE,"",1,"NOT CONST");
                affectertype($3,sauvTYPE);
                affecterconst($3,"NOT CONST");
        }
       
}
        | mc_class idf{
                if(doubledeclaration($2)==0){
                strcat(sauvTYPE,"public_");
                strcat(sauvTYPE,$1);
                // inserer($2,$1,sauvTYPE,"",1,"NOT CONST");
                affectertype($2,sauvTYPE);
                affecterconst($2,"NOT CONST");
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
        |commentaire LISTE_DEC
        |
;
DEC: DEC_VAR
        |DEC_TAB
        |DEC_CONST
;

DEC_VAR: TYPE LISTE_IDF pvg 
;
LISTE_IDF:idf vrg LISTE_IDF {
                if(doubledeclaration($1)==0)
                {
              //  inserer($1,"idf",sauvTYPE,"",1,"NOT CONST");
               affectertype($1,sauvTYPE) ;
               affecterconst($1,"NOT CONST");
               }
               else{
                       printf("erruer sementique : double declaration sur %s a la ligne %d\n",$1,nb_ligne);
               }
}
        |idf {
                if(doubledeclaration($1)==0)
                {
               //inserer($1,"idf",sauvTYPE,"",1,"NOT CONST");
               affectertype($1,sauvTYPE) ;
               affecterconst($1,"NOT CONST");
               }
               else{
                       printf("erruer sementique : double declaration sur %s a la ligne %d\n",$1,nb_ligne);
               }
        
}
;

DEC_TAB:TYPE LISTE_IDF_TAB pvg
;
LISTE_IDF_TAB:  idf_tab cr_ov nombre cr_fm vrg LISTE_IDF_TAB {
                        if(doubledeclaration($1)==0)
                        {
                                affectertype($1,sauvTYPE) ;
                                affecterconst($1,"NOT CONST");
                                if($3<0){
                                     printf("erruer sementique : taille de tab %s negative a la ligne %d\n",$1,nb_ligne);    
                                }else{
                                        affectertaille($1,$3);
                                }
                                
                                //inserer($1,"idf_tab",sauvTYPE,"",$3,"NOT CONST");
                        }else{
                                 printf("erruer sementique : double declaration sur %s a la ligne %d\n",$1,nb_ligne);
                        }
                        
                                }
                |idf_tab cr_ov nombre cr_fm {
                        if(doubledeclaration($1)==0)
                        {
                                affectertype($1,sauvTYPE) ;
                                affecterconst($1,"NOT CONST");
                                 if($3<0){
                                     printf("erruer sementique : taille de tab %s negative a la ligne %d\n",$1,nb_ligne);    
                                }else{
                                        affectertaille($1,$3);
                                }
                                //inserer($1,"idf_tab",sauvTYPE,"",$3,"NOT CONST");
                        }else{
                                 printf("erruer sementique : double declaration sur %s a la ligne %d\n",$1,nb_ligne);
                        }
                        
                                }
;
DEC_CONST:mc_const TYPE LISTE_IDF_CONST pvg
;
LISTE_IDF_CONST: idf vrg LISTE_IDF_CONST {
                if(doubledeclaration($1)==0)
                {
                       // inserer($1,"idf",sauvTYPE,"",1,"CONST NOT AFFECTED");
                        affectertype($1,sauvTYPE) ; 
                        affecterconst($1,"CONST NOT AFFECTED");
                }else{
                                 printf("erruer sementique : double declaration sur %s a la ligne %d\n",$1,nb_ligne);
                        }
              
                }
        |idf {
                if(doubledeclaration($1)==0)
                {
                        //inserer($1,"idf",sauvTYPE,"",1,"CONST NOT AFFECTED");
                        affectertype($1,sauvTYPE) ; 
                        affecterconst($1,"CONST NOT AFFECTED");
                }else{
                                 printf("erruer sementique : double declaration sur %s a la ligne %d\n",$1,nb_ligne);
                        }
              
                }
        |idf mc_affec IDF_CSNT{
                if(doubledeclaration($1)==0)
                {
                        /* char valeur[25];
                        itoa($3,valeur,10);*/
                       // inserer($1,"idf",sauvTYPE,valeur,1,"CONST AFFECTED");
                        affectertype($1,sauvTYPE) ;
                        if(strcmp(sauvTYPE,sauvTYPED)==0)
                        {
                                 affectervaleur($1,sauvaleur);
                                 strcpy(sauvaleur,"");
                                affecterconst($1,"CONST AFFECTED");
                        } else
                        {
                                affecterconst($1,"CONST NOT AFFECTED");
                                printf("erruer sementique : non compatible de type  [ %s | %s ] a la ligne %d\n",sauvTYPE,sauvTYPED,nb_ligne);
                        }
                      strcpy(sauvTYPED,"");
                }else{
                                 printf("erruer sementique : double declaration sur %s a la ligne %d\n",$1,nb_ligne);
                        }
                        strcpy(sauvTYPED,"");
                
        }
;
LISTE_INST:  INST LISTE_INST |commentaire LISTE_INST
                |
;
INST:AFFECTATION 
        |INPUT{
                 if(recherche("ISIL.io")==-1)
                 {
                printf("erreur symentique: expected io library for in/out operations a la ligne %d \n",nb_ligne);
        }
        }
        |OUTPUT{
                 if(recherche("ISIL.io")==-1)
                 {
                printf("erreur symentique: expected io library for in/out operations a la ligne %d \n",nb_ligne);
        }
        }
        |BOUCLE
        |COND
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
INIT:AFFECTATION
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

OUTPUT: mc_out p_ou j PHRASE j  p_fr pvg{
                nb_idf=0;
               nb_signe=0;
        }
        |mc_out p_ou j PHRASE j  ELEMENT p_fr pvg{
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
        }
;
PHRASE:   string PHRASE 
          | espace PHRASE
          |ARTH PHRASE
          | inentier PHRASE  {nb_signe++; insererSignePhrase(Sig,$1);}
          |inreel  PHRASE  {nb_signe++;insererSignePhrase(Sig,$1);}
          |inchaine PHRASE  {nb_signe++;insererSignePhrase(Sig,$1);}
          |inbool PHRASE  {nb_signe++;insererSignePhrase(Sig,$1);}
          |
;

INPUT: mc_input p_ou j TYPE_IN j vrg TYPE_IDF p_fr pvg{
       
                if(equaltype(sauvIDF,sauvTYPE)==-1){
                        printf("erreur symentique: verifier idf et leur signe de formatage a la ligne %d\n",nb_ligne);
                }
        
}
;
ELEMENT:vrg TYPE_IDF ELEMENT {
        nb_idf++; 
        insererSigneIdf(SIdf,sauvIDF);
        if(doubledeclaration(sauvIDF)==0 )
        {
                affectertype(sauvIDF,"non declare");
                printf("erruer sementique : variable %s non declaré dans la ligne %d \n",sauvIDF,nb_ligne);
        }
}
        |
;
TYPE_IN:inentier {strcpy(sauvTYPE,"Entier");}
        |inchaine {strcpy(sauvTYPE,"Chaine");}
        |inreel {strcpy(sauvTYPE,"Reel");}
        |inbool {strcpy(sauvTYPE,"Bool");}
;
AFFECTATION:TYPE_IDF mc_affec Expression pvg{
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
        
 }
        |TYPE_IDF mc_affec IDF_CSNT pvg{
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
        
    
        }
;
TYPE_IDF: idf 
        {
                strcpy(sauvIDF,$1);
                getType($1,sauvTYPEG);
                strcpy(final,sauvTYPEG);
                strcpy(sauvTYPED,"");
                strcpy(sauvaleur,"");
                strcpy(sauvIDFCONST,"");
        }
        |idf_tab cr_ov nombre cr_fm {
                strcpy(sauvIDF,$1);
                 getType($1,sauvTYPEG); 
                 strcpy(final,sauvTYPEG);
                 strcpy(sauvTYPED,"");
                 strcpy(sauvaleur,"");
                 strcpy(sauvIDFCONST,"");
         }
        |idf_tab cr_ov idf cr_fm {
                strcpy(sauvIDF,$1);
                 getType($1,sauvTYPEG);
                 strcpy(final,sauvTYPEG); 
                 strcpy(sauvTYPED,"");
                 strcpy(sauvaleur,"");
                 strcpy(sauvIDFCONST,"");
        }
;
Expression: Expression OPERATION IDF_CSNT  
                        {if((strcmp(sauvOP,"/")==0)&&(sauvCNST==0)) 
                                {printf("erreur sementique : DIV/0 a la ligne %d\n",nb_ligne);}}
                |IDF_CSNT
;
IDF_CSNT: nombre {
                        sauvCNST=$1;
                        sprintf(sauvaleur, "%d", $1);
                       
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
                        
                }
        |ch string ch{
                
                        strcpy(sauvaleur,$2);
                        if((strcmp(sauvTYPED,"Chaine")==0) || (strcmp(sauvTYPED,"")==0))
                        {
                                strcpy(sauvTYPED,"Chaine");
                        }else{
                                strcpy(sauvTYPED,"Erreur"); 
                        }
                }
        |booleen {
                        strcpy(sauvaleur,$1);
                        if((strcmp(sauvTYPED,"Bool")==0) || (strcmp(sauvTYPED,"")==0))
                        {
                                strcpy(sauvTYPED,"Bool");
                        }else{
                                strcpy(sauvTYPED,"Erreur"); 
                        }
                        }
        |re {
                       strcpy(sauvaleur,$1);
                       if((strcmp(sauvTYPED,"Entier")==0) || (strcmp(sauvTYPED,"Reel")==0) || (strcmp(sauvTYPED,"")==0))
                       {
                                strcpy(sauvTYPED,"Reel");
                       }else{
                               strcpy(sauvTYPED,"Erreur"); 
                       }
                       
                }
        |idf {
                strcpy(sauvIDFCONST,$1);
                compatibilitetype(sauvTYPED,$1,sauvOP);
        }
        |idf_tab cr_ov nombre cr_fm{
                        strcpy(sauvIDFCONST,$1);
                        compatibilitetype(sauvTYPED,$1,sauvOP);
                        if((tailletab($1,$3)==-1) || ($3<0))
                                printf("erruer sementique : depassement taille de tableau ou indice negative %d \n",nb_ligne);
        }
        |idf_tab cr_ov idf cr_fm {
                strcpy(sauvIDFCONST,$1);
                compatibilitetype(sauvTYPED,$1,sauvOP);
        }
                
;




OPERATION:plus 
                {        if(recherche("ISIL.lang")==-1)
                {
                                 printf("erruer sementique : expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,$1);}
                }
                       
        |moins 
                         {        if(recherche("ISIL.lang")==-1)
                         {
                                 printf("erruer sementique : expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,$1);}
                }
        |mult 
                         {        if(recherche("ISIL.lang")==-1)
                         {
                                 printf("erruer sementique : expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,$1);}
                }
        |devision 
                         {        if(recherche("ISIL.lang")==-1)
                         {
                                 printf("erruer sementique : expected lang library for arithmitiques operations a la ligne %d \n",nb_ligne);
                }else{
                                 strcpy(sauvOP,$1);}
                }
        |
                        
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
     printf("erreur synstaxique a la ligne la ligne %d \n",nb_ligne);
}