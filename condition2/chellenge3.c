#include <stdio.h>

int main(){
    int days;
    int daysUsed;
    int statut;
    
    printf("\nentree jours de conges accordes! : ");
    scanf("%d",&days);
    printf("\nentree jours utilises! : ");
    scanf("%d",&daysUsed);
    printf("\nentree statut l'employe! \n(0.Partiel : 1.Plein): ");
    scanf("%d",&statut);


    if(daysUsed>days){printf("alert!!les jours utilises depassent les jours accordes");}

    int leftDays;
    if(statut==0){
        leftDays = (days/2)-daysUsed;
        printf("\n Temps partiel %d",leftDays);
    }else if(statut==1){
        leftDays = days - daysUsed;
        printf("\n Temps plein %d",leftDays);
    }else{
        return 1;
    }
    
    

}