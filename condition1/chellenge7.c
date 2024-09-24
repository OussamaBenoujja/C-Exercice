#include <stdio.h>
#include <math.h>

int main(){
    char character;
    printf("entree caractere : ");
    scanf("\n");
    scanf("%c",&character);

    if(character>=65 && character<=90){
        printf("\nMajuscule");
    }else {
        printf("\nNon Majuscule");
    }
}