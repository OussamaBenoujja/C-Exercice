#include <stdio.h>
#include <math.h>


int main(){
    float a;
    float b;
    float c;

    printf("entree a ");
    scanf("\n");
    scanf("%f",&a);
    printf("entree b ");
    scanf("\n");
    scanf("%f",&b);
    printf("entree c ");
    scanf("\n");
    scanf("%f",&c);
    printf("\n ax^2 + bx + c");
    printf("\n %.0fx^2 + %.0fx + %.0f",a,b,c);

    if(a==0 && b!=0){
        printf("\nEquation linear!!");
    }else{
        float x1 = (-b+sqrt(powf(b,2)-(4*a*c)))/2*a;
        float x2 = (-b-sqrt(powf(b,2)-(4*a*c)))/2*a;
        printf("\nles deux solution sont \n x1 = %.2f\n x2 = %.2f",x1,x2);
    }
}