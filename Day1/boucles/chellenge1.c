#include <stdio.h>

int main(){
    float x;
    printf("\nEntree un nombre : ");
    scanf("%f", &x);

    int i = 0;
    while(i<=10){
        printf("%.0f * %d = %.0f\n", x, i, x*i);
        i++;
    }
}