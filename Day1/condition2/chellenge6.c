#include <stdio.h>
#include <math.h>


int main(){
    int kwh;
    int type;
    int contra;
    float tarif;

    printf("\nConsommation d'electricite (en kWh) : ");
    scanf("%d",&kwh);
    printf("\nType d'utilisateur (1 pour residentiel, 2 pour commercial) : ");
    scanf("%d",&type);
    printf("\nType de contrat (0 pour standard, 1 pour reduit) : ");
    scanf("%d",&contra);

    if(type=1 && contra==0){tarif=0.20;}
    else if(type=1 && contra==1){tarif=0.15;}
    else if (type==2 && contra==0){tarif=0.3;}
    else if (type==2 && contra==1){tarif=0.25;}
    float res = kwh*tarif;
    if(kwh>500){res += res *0.1;}

    printf("\nvotre facture est %.2f MAD",res);
}