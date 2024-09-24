#include <stdio.h>

int main(){
    float a;
    float b;
    printf("Entree Num A: ");
    scanf("\n");
    scanf("%f", &a);
    printf("Entree Num B: ");
    scanf("\n");
    scanf("%f", &b);
    printf("%.3f + %.3f = %.3f", a, b, a+b);
    printf("\n%.3f - %.3f = %.3f", a, b, a-b);
    printf("\n%.3f * %.3f = %.3f", a, b, a * b);
    printf("\n%.3f / %.3f = %.3f", a, b, a/b);
}