#include <stdio.h>
#include <stdlib.h>

void retour_menu()
{
    int reponse_menu;
    while(reponse_menu!=1){
    printf("Tapez:\n1. Jouer\n2. Regles du jeu\n3. Credits\n4. Quitter le jeu\n",reponse_menu);
    printf("\n");
    scanf("%i",&reponse_menu);
    switch(reponse_menu){
        case 1:
            initialisation_jeu();
            break;
        case 2:
            printf("\n");
            printf("Regles : \n");
            printf("Le vainqueur est le premier à obtenir un alignement de 4 jetons (horizontalement, verticalement ou en diagonale) de sa couleur. Si, alors que toutes les cases de la grille de jeu sont remplies, aucun des deux joueurs n'a réalisé un tel alignement, la partie est déclarée nulle.");
            printf("\n");
            break;
        case 3:
            printf("\n");
            printf("Credits : \n");
            printf("Mathieu DESSENNE \n Alice ALMELA \n Louis PECQUET \n");
            printf("\n");
            break;
        case 4:
            return 0;
            break;
        }
    }
}

void affiche(char plateau[7][6])
{
int c,l;
for(l=0;l<6;l++){
    for(c=0;c<7;c++){
printf("%c|",plateau[c][l]);
    }
    printf("\n");
}

}


void initialisation_jeu(){
char plateau[7][6];

int c,l;
for(l=0;l<6;l++){
    for(c=0;c<7;c++){
plateau[c][l]=' ';
    }
}
affiche(plateau);

int col1=6,col2=6,col3=6,col4=6,col5=6,col6=6,col7=6,rep,joueur=1;
while(1){
    do{
        if(col1== 0 && col2==0 && col3==0 && col4==0 && col5==0 && col6==0 && col7==0){
        printf("Partie terminée : égalité \n");
        return 0;
    }
    if(joueur % 2 == 1){
        printf("A vous de jouer joueur 1\n");
    }
    else{
        printf("A vous de jouer joueur 2\n");
    }
    printf("Quelle colonne ? de 1 à 7\n");
    scanf("%i",&rep);
    }while(rep>7 || rep<1);
    switch(rep){
        case 1 :
            if(col1>0){
            plateau[rep-1][col1-1]='X';
            col1=col1-1;
            printf("%i\n",col1);
            }else{
            printf("colonne pleine\n");
            }
            affiche(plateau);
        break;
        case 2 : if(col2>0){
            plateau[rep-1][col2-1]='X';
            col2=col2-1;
            printf("%i\n",col2);
            }else{
            printf("colonne pleine\n");
            }
            affiche(plateau);
        break;
        case 3 : if(col3>0){
            plateau[rep-1][col3-1]='X';
            col3=col3-1;
            printf("%i",col3);
            }else{
            printf("colonne pleine\n");
            }
            affiche(plateau);
        break;
        case 4 :if(col4>0){
            plateau[rep-1][col4-1]='X';
            col4=col4-1;
            printf("%i\n",col4);
            }else{
            printf("colonne pleine\n");
            }
            affiche(plateau);
        break;
        case 5 : if(col5>0){
            plateau[rep-1][col5-1]='X';
            col5=col5-1;
            printf("%i\n",col5);
            }else{
            printf("colonne pleine\n");
            }
            affiche(plateau);
        break;
        case 6 : if(col6>0){
            plateau[rep-1][col6-1]='X';
            col6=col6-1;
            printf("%i\n",col6);
            }else{
            printf("colonne pleine\n");
            }
            affiche(plateau);
        break;
        case 7 :if(col7>0){
            plateau[rep-1][col7-1]='X';
            col7=col7-1;
            printf("%i\n",col7);
            }else{
            printf("colonne pleine\n");
            }
            affiche(plateau);
        break;

    }


}
}
int main(){
retour_menu();

}
