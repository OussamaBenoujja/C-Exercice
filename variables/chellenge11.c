#include <stdio.h>
#include <math.h>

int main(){
    float longeur;
    float largeur;

    printf("entree longeur : ");
    scanf("\n");
    scanf("%f", &longeur);
    printf("entree largeur : ");
    scanf("\n");
    scanf("%f", &largeur);

    printf("la surface : %.2f", largeur*longeur);

}