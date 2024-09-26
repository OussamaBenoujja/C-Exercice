#include <stdio.h>
#include <math.h>


int main(){
    float revAnnuel;
    float credit;
    int anne;

    printf("\nentree Revenu annuel :");
    scanf("%f",&revAnnuel);
    printf("\nentree Score de credit :");
    scanf("%f",&credit);
    if(credit>1000){
        printf("le credit ne peut pas depasser 1000");
        return 1;
    }
    printf("\nentree Duree du pret  :");
    scanf("%f",&anne);

    int birth = 2024 - anne;
    if (revAnnuel>=30000&&credit>=700&&birth<=10)
    {
        printf("Eligible");
    }
    else if (revAnnuel>=30000&&credit>=650&&birth<=15)
    {
        printf("Eligible avec Condition");
    }else
    {
        printf("Non Eligible");
    }
}
