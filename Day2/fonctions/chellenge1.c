#include <stdio.h>

float sum(float x,float y){
    return x + y;
}
int main(){
    float a;
    float b;
    printf("\nentrez nombre 1: ");
    scanf("%f",&a);
    printf("\nentrez nombre 2: ");
    scanf("%f",&b);
    printf("%.2f",sum(a,b));
}