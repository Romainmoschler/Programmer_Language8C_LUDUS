#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

#define GRAND 4
#define MIN 0
#define P1 'O'
#define P2 'X'

//prototype
void initTabJ(char cTab[GRAND][GRAND]);
int verifPositionX(int nRepx);
int verifPositionY(int nRepy);
int tourJ(char j1, int nRepx, int nRepy, char cTab[GRAND][GRAND]);
void affichMorpion(char cTab[GRAND][GRAND]);
int verifVictoire(char cTab[GRAND][GRAND], char cWin);



int main(){
    char cTab [GRAND][GRAND];// appel tableau 2 Dimension
    int nRepx , nRepy;
    char j1;
    char cWin;
    //intialisation variable
    j1 = 'y';
    cWin = 'N';

    initTabJ(cTab);
    affichMorpion(cTab);

    //commencement du morpion
    while(verifVictoire(cTab,cWin)!= 'W'){
        tourJ(j1, nRepx, nRepy, cTab);
        affichMorpion(cTab);
    }
    if (j1 == 'y'){
        printf("Joueur 2 a Gagner ");
    }else{
        printf("Joueur 1 a Gagner");
    }





    return 0;
}
//initit tableau
 void initTabJ(char cTab[GRAND][GRAND]){ //initialisation du morpion et des position
        int i,j;
        cTab[0][0]= '0';
        cTab[1][0]= '1';
        cTab[2][0]= '2';
        cTab[3][0]= '3';
        cTab[0][1]= '1';
        cTab[0][2]= '2';
        cTab[0][3]= '3';
        for(i=1; i< GRAND;i++){
            for(j=1;j < GRAND;j++){
                cTab[i][j]= '*';
            }
        }
    }
    //verif position
    int verifPositionX(int nRepx){
        while(((nRepx < MIN)||(nRepx > GRAND))){
            if(nRepx < MIN || nRepx > GRAND){

            printf("Entrer une position valide pour X\n");
            scanf("%d\n",&nRepx);

            }

        }
        return nRepx;
    }

    int verifPositionY(int nRepY){
        while(((nRepY < MIN)||(nRepY > GRAND))){
            if(nRepY < MIN || nRepY > GRAND){

            printf("Entrer une position valide pour Y\n");
            scanf("%d\n",&nRepY);

            }

        }
        return nRepY;
    }

    //turn Joueur
    int tourJ(char j1, int nRepx, int nRepy, char cTab[GRAND][GRAND]){
        if (j1 == 'y'){
            printf("\n Joueur 1: Entrer 2 coordonee\n");
            scanf("%d",&nRepx);
            scanf(" %d\n",&nRepy);
            verifPositionX(nRepx);
            verifPositionY(nRepy);
            cTab[nRepx][nRepy] = P1;
            j1 = 'n';
        }else{
            printf("\n Joueur 2: Entrer 2 coordonee\n");
            scanf("%d",&nRepx);
            scanf(" %d\n",&nRepy);
            verifPositionX(nRepx);
            verifPositionY(nRepy);
            cTab[nRepx][nRepy] = P2;
            j1 = 'y';
        }
         return j1;
    }
    //affichage morpion
    void affichMorpion(char cTab[GRAND][GRAND]){

        int i,j;
        for (i= 0; i < GRAND; i++){
            for (j=0; j < GRAND;j++){
                printf("%c ",cTab[i][j]);
            }
            printf("\n");
        }
    }
    //Victoire
    int verifVictoire(char cTab[GRAND][GRAND], char cWin){
        if((cTab[0][0] == cTab[0][1] && cTab[0][0] == cTab[0][2])||
        (cTab[1][0] == cTab[1][1] && cTab[1][0] == cTab[0][2])||
        (cTab[2][0] == cTab[2][1] && cTab[2][0] == cTab[2][2])||
        (cTab[0][0] == cTab[1][0] && cTab[0][0] == cTab[2][0])||
        (cTab[0][1] == cTab[1][1] && cTab[0][1] == cTab[2][1])||
        (cTab[0][2] == cTab[1][2] && cTab[1][2] == cTab[2][2])||
        (cTab[0][0] == cTab[1][1] && cTab[0][0] == cTab[2][2])||
        (cTab[0][2] == cTab[1][1] && cTab[0][2] == cTab[2][0])){
            cWin = 'W';
        }
        return cWin;
    }

