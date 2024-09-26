#include <stdio.h>

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


    float finalres = ((a*2)+(b*3)+(c*5)) / 2+3+5;
    printf("**************************************\n");
    printf("%.2f", finalres);

}
