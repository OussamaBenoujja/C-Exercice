#include <stdio.h>

int main(){
    char character;

    printf("Entree caractere :");
    scanf("\n");
    scanf("%c", &character);

    if(character>=65 && character<=90){
        printf("\nAlphabet Majuscule");
    }else if(character>=97 && character<=122){
        printf("\nAlphabet Minuscule");
    }else{
        printf("\nNon Alphabet");
    }
}