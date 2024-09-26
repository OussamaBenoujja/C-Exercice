#include <stdio.h>

int main(){
    float temp;
    printf("temperateur de l'eau: ");
    scanf("%f", &temp);
    printf("\n");
    if(temp<0){
        printf("etat Solide");
    }else if(temp>=0 && temp < 100){
        printf("etat Liquide");
    }else if(temp>=100){
        printf("etat Gaz");
    }
}