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


    float delta, solution1, solution2;
    
    delta = b * b - 4 * a * c;

    
    if (delta > 0) {
        
        solution1 = (-b + sqrt(delta)) / (2 * a);
        solution2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nL'équation a deux solutions réelles distinctes :\n");
        printf("\nSolution 1 : %.2lf\n", solution1);
        printf("\nSolution 2 : %.2lf\n", solution2);
    } else if (delta == 0) {
        solution1 = -b / (2 * a);
        printf("\nL'équation a une solution réelle double :\n");
        printf("\nSolution : %.2lf\n", solution1);
    } else {
        printf("\nL'équation n'a pas de solution réelle.\n");
    }


}