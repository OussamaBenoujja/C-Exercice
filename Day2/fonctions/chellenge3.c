#include <stdio.h>

float max(float x,float y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}
int main(){
    float a;
    float b;
    printf("\nentrez nombre 1: ");
    scanf("%f",&a);
    printf("\nentrez nombre 2: ");
    scanf("%f",&b);
    printf("%.2f",max(a,b));
}