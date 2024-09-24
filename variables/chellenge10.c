#include <stdio.h>
#include <math.h>

int main(){
    float r;

    printf("entree rayon : ");
    scanf("\n");
    scanf("%f", &r);
    float r_ = powf(r,3);
    float nd = (float)4/3;
    printf("\nLa Volume est : %.2f", M_PI * r_ * nd);
}
