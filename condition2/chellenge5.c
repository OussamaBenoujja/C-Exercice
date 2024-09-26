#include <stdio.h>

int main(){
    float budget;
    int dest;
    int people;

    printf("\nentree budget : ");
    scanf("%f",&budget);
    //printf("\nentree Destination (1:Plage 2:montagne 3:ville) : ");
    //scanf("%d",&dest);
    printf("\nentree nombre de personnes : ");
    scanf("%d",&people);

    printf("\n le recommandation est :");
    
    if(budget>=1000){
        printf("\nVoyage haut de gamme");
    }else if(budget>=500&&budget<1000){
        printf("\nVoyage moyen");
    }else if(budget<500){
        printf("\nVoyage economique");
    }
    printf("\ndestination recommandees est :");

    if(budget>=1000&&people>2){
        printf("\nPlage");
    }else if(budget>=500&&people>2){
        printf("\nMontagne");
    }else{
        printf("\nVille");
    }

}