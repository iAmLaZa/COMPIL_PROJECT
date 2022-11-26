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
int constaffected(char entite[]){
    int i=recherche(entite);
    if(i>=0 && strcmp(ts[i].CONS,"CONST AFFECTED")==0) return 0;
    if(i>=0 && strcmp(ts[i].CONS,"CONST NOT AFFECTED")==0) return 1;
    return -1;
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
int equaltype(char entite[],char type[]){
    int i=recherche(entite);
    if(strcmp(ts[i].type,type)==0)return 0;
    return -1;
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

void getType(char entite[],char type[]){
	strcpy(type,ts[recherche(entite)].type);
}

int nb_ligne_comment(char entite[]){
        int i,nb=0;
        for ( i = 0; i < strlen(entite); i++)
        {
            if(entite[i]=='\n') nb++;
        }
        return nb;
    }

//inserer tout les signes de formatage dune idf

    void insererSigneIdf(char tab[],char entite[]){
        int pos =recherche(entite);
        if(strcmp(ts[pos].type,"Entier")==0) strcat(tab,"%d");
        if(strcmp(ts[pos].type,"Reel")==0)  strcat(tab,"%f");
        if(strcmp(ts[pos].type,"Chaine")==0) strcat(tab,"%s");
        if(strcmp(ts[pos].type,"Bool")==0) strcat(tab,"%b");
    }
//inserer tout les signes de formatage dun phrase
    void insererSignePhrase(char tab[],char suavSigne[]){
        strcat(tab,suavSigne);
    }

//verifier si un format correct
    int FormatCorrect(char tab[],char tab1[]){
        int i;

                if(strcmp(tab,tab1)!=0) {
                     for(i=0;i<strlen(tab);i++){
                    tab[i]='\0';
                    }
                    for(i=0;i<strlen(tab1);i++){
                    tab1[i]='\0';}
                    return -1;
                    }

        for(i=0;i<strlen(tab);i++){
            tab[i]='\0';
                    }
        for(i=0;i<strlen(tab1);i++){
                tab1[i]='\0';}

        return 1;
    }
void compatibilitetype(char sauvTYPED[],char entite[],char sauvOP[]){
    char temp[25];
    getType(entite, temp);
    if (((strcmp(sauvTYPED, "Entier") == 0) || (strcmp(sauvTYPED, "") == 0)))
    {
        if ((strcmp(temp, "Entier") == 0) && strcmp(sauvOP, "/") != 0)
        {
            strcpy(sauvTYPED, "Entier");
        }
        else
        {
            if ((strcmp(temp, "Reel") == 0) || ((strcmp(temp, "Entier") == 0) && (strcmp(sauvOP, "/") == 0)))
            {
                strcpy(sauvTYPED, "Reel");
                strcpy(sauvOP,"");
            }
            else
            {
                strcpy(sauvTYPED, "Erreur");
            }
        }
    }
    if ((strcmp(sauvTYPED, "Reel") == 0) || (strcmp(sauvTYPED, "") == 0))
    {
        if ((strcmp(temp, "Entier") == 0) || (strcmp(temp, "Reel") == 0))
        {
            strcpy(sauvTYPED, "Reel");
        }
        else
        {
            strcpy(sauvTYPED, "Erreur");
        }
    }
    if ((strcmp(sauvTYPED, "Chaine") == 0) || (strcmp(sauvTYPED, "") == 0))
    {
        if ((strcmp(temp, "Chaine") == 0))
        {
            strcpy(sauvTYPED, "Chaine");
        }
        else
        {
            strcpy(sauvTYPED, "Erreur");
        }
    }
        if((strcmp(sauvTYPED,"Bool")==0) ||(strcmp(sauvTYPED,"")==0)) 
        {
        if ((strcmp(temp, "Bool") == 0)){
            strcpy(sauvTYPED, "Bool");
        }else{
            strcpy(sauvTYPED, "Erreur");
        }
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
