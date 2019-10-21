#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NFOIS 5 //constante
#define PI 3.14
#define NOM "Lehmann"
#define CAR "x"
//Exemple de programme en C
//comentaire ligne
/*Commenatire paragraphe*/
/*
int main()
{
    int i;
    float x;
    float racx;


    printf("Bonjour\n");
    printf("calcul de %d racines carrees\n",NFOIS);

    for(i=0;i<NFOIS;i++){
        printf("Donnez un nombre : ");
        scanf("%f",&x);
        if(x<0.0)
            printf("Le nombre %f ne possède pas de racine carree\n",x);
        else{
            racx=sqrt(x);
            printf("le nombre %f a une racine carree: %f\n",x,racx);
        }
    }
    printf("Travai Termine -Au revoir");


    return 0;
}
*/
/*void main(){

    int i;
    float x;
    float racx;


    printf("Bonjour\n");
    printf("calcul de %d racines carrees\n",NFOIS);

    for(i=0;i<NFOIS;i++){
        printf("Donnez un nombre : ");
        scanf("%f",&x);
        if(x<0.0)
            printf("Le nombre %f ne possède pas de racine carree\n",x);
        else{
            racx=sqrt(x);
            printf("le nombre %f a une racine carree: %f\n",x,racx);
        }
    }
    printf("Travai Termine -Au revoir");
}
*/
int main(){
    //integer
    short int nA;//short
    int nB;
    long int nC;//long

    const int cnt=10;
   // static  // la variable reste connue même apres arret de l'execution de la fonction
    volatile int nVolB;

    printf("taille de nA : %d",sizeof(nA));
    printf(" taille de nB : %d",sizeof(nB));
    printf(" taille de Nc : %d",sizeof(nC));

    //REAL
    float fltReelSimple; //Reel simple precision

    double dblReelDouble; // Reel double precision

    printf(" taille de fltReelSimple : %d\n",sizeof(fltReelSimple));
    printf(" taille de dblReelDouble : %d\n",sizeof(dblReelDouble));

    //caracter
    char cCaracter;

    printf("taille de cCaracter : %d\n",sizeof(cCaracter));

    //tester Define

    printf("Nom : %s\n",NOM);
    printf("Car : %c\n",CAR);
    printf("Pi : %f\n",PI);
    printf("Nfois : %d\n",NFOIS);

    //opérateur
     int nI= 0 ;

     ++nI;//pre-Incrementation
     nI++; //post-Incrementation
     // le % c'est le modulo
     // le / est la division

    //cast
     long double ldblLongDouble = 105.8933259635;

     printf("Valeur de ldblLongDouble : %lf\n",(double)ldblLongDouble);

     //opérateur relationel
     // >
     // <
     // >=
     // <=
     // ==
     // !=

     //opérateur logique
     // &
     // &&
     // |
     // ||
     // !

     //factorisation opérateur
     // +=
     // -=
     // *=
     // /= ...



     // nA+nB


         int a=0,b=0,c=0,d=0;
         //condition

         if(a==b){
            printf("ils sont egaux\n");
         }else{
            printf("ils sont differents\n");
         }

         //condition avec operateur logique

         if((a==b) && (a==c)){
            printf("Ils sont tous egaux\n");
         }else{
            printf("Ils sont differents\n");
         }

         if((a==b)|| (a==c)){
            printf("ils sont egaux\n");
         }else{
            printf("ils sont different\n");
         }


         if((a==b)||(a==c)){
            printf(("ils sont egaux\n");
         }else if((a==c)&&(a!=d)){
                    printf("blablabla...\n");
                   }
        //boucle

        int i=0;

        for (i=0;i<NFOIS,i++){
            printf("HELLO WOLRD\n");
        }

        //Tant que
        i=0;

        while(i<NFOIS){
            printf("HELLO WOLRD\n");
            i++;
        }

        //Faire tant que

        i=0;
        do{
            printf("HELLO WORLD\n");
            i++;

        }while (i<TAILLE);

        //Cas alternatif de la condition

        int choix= -1;
            printf("Veuillez entrez votre choix\n");
            scanf("%d",&choix);
        switch(choix){
            case 0: printf("Quitter\n");break;
            case 1: printf("Calculer\n");break;
            case 2: printf("jouer\n");break;
            default : printf("default\n");break;
        }

        //test ? Instruction1: Instruction 2

    (a==b) ? printf("Egaux\n"): printf("diff\n");

    //instruction break

        for (i=0;i<NFOIS;i++){
            if(i==3){
                break;
            }
        }

        //instruction continue;

        for(i=0;i<NFOIS;i++){
            printf("HELLO WOLRD\n");
            if (i<3){
                printf("continue\n");continue;
            }
        }


    return 0;
}
