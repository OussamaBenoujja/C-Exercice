#include <stdio.h>

int main(){
    float temp;
    printf("Entree valeur en temperateur C°:\n");
    scanf("%f", &temp);
    printf("\n");
    printf("kelvin value is: %.2f", temp + 273.15);
}