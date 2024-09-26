#include <stdio.h>
#include <math.h>

int main(){
    float a;
    float b;
    float c;

    printf("1ere numbre : ");
    scanf("\n");
    scanf("%f",&a);
    printf("2eme numbre : ");
    scanf("\n");
    scanf("%f",&b);
    printf("3eme numbre : ");
    scanf("\n");
    scanf("%f",&c);

    printf("**************************************\n");
    float x = a*b*c;
    float y1 = 1;
    float y2 = 3;
    float y = y1/y2;
    float moyG = powf(x,y);
    printf("\nMoyenne geometrique :%.2f ", moyG);

}
