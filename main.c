#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NFOIS 5
//Exemple de programme en C

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
            printf("Le nombre %f ne poss�de pas de racine carree\n",x);
        else{
            racx=sqrt(x);
            printf("le nombre %f a une racine carree: %f\n",x,racx);
        }
    }
    printf("Travai Termine -Au revoir");


    return 0;
}
