#include <stdio.h>

int main(){
    char character;

    printf("entree caractere : ");
    scanf("\n");
    scanf("%c", &character);

    switch(character){
        case 'a':
            printf("voyelle");
        case 'e':
            printf("voyelle");
        case 'i':
            printf("voyelle");
        case 'u':
            printf("voyelle");
        case 'o':
            printf("voyelle");
        case 'y':
            printf("voyelle");
        case 'A':
            printf("voyelle");
        case 'E':
            printf("voyelle");
        case 'I':
            printf("voyelle");
        case 'U':
            printf("voyelle");
        case 'O':
            printf("voyelle");
        case 'Y':
            printf("voyelle");
        default:
            printf("Non voyelle");
    }
}