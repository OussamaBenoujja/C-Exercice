#include <stdio.h>

int main(){
    float speedKM;
    printf("vitesse en km/h: ");
    scanf("%f",&speedKM);
    printf("\nvitesse en m/s: %.2f",speedKM * 0.27778);
}