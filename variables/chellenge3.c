#include <stdio.h>

int main(){
    float distance;
    printf("distance en KM : ");
    scanf("%f", &distance);
    printf("\ndistance en yards: %.2f", distance * 1093.61);
}