#include <stdio.h>
#include <stdbool.h>


int main(){
    while(true){
    char phrase[10];

    printf("entree les chiffres : ");
    scanf("\n");
    scanf("%s", phrase);

    int length = sizeof(phrase)/sizeof(phrase[0]);

    int i = length - 1;

    while(i>=0){
        printf("\n%c",phrase[i]);
        i--;
    }}


}