#include <stdio.h>
#include <math.h>

int main(){
        
        float x1;
        float y1;
        float z1;

        float x2;
        float y2;
        float z2;


    printf("entree la valeur de 1eme point  : ");
    scanf("\n");
    scanf("%f %f %f", &x1, &y1, &z1);

    printf("entree la valeur de 2eme point : ");
    scanf("\n");
    scanf("%f %f %f", &x2, &y2, &z2);
    
    float xpow = pow (x2 - x1, 2);
    float ypow = pow (y2 - y1, 2);
    float zpow = pow (z2 - z1, 2);
    float distance = sqrt(xpow + ypow + zpow);
    printf("Distance est : %.2f",distance);
}