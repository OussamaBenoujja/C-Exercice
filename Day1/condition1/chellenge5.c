#include <stdio.h>
#include <math.h>


int main(){
    int dateNum;
    int optionNum;

    printf("Enter date format??\n");
    printf("1.Mois\n2.Jours\n3.Heures\n4.Minutes\n5.Secondes\n");
    scanf("\n");
    scanf("%d", &optionNum);
    printf("Entree Valeur ? \n");
    scanf("\n");
    scanf("%d", &dateNum);
    
    printf("%d",optionNum);

    switch(optionNum){
        case 1:
            printf("%d months", dateNum * 12);
            break;
        case 2:
            printf("%d days", dateNum * 365);
            break;
        case 3:
            printf("%d hours", dateNum * 8760);
            break;
        case 4:
            printf("%d minutes", dateNum * 525600);
            break;
        case 5:
            printf("%d seconds", dateNum * 31536000);
            break;
    }

}