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

    printf("**************************************\n");
    printf("\n1ere moy : %.2f", (a/100) * 2);
    printf("\n2eme moy : %.2f", (b/100) * 3);
    printf("\n3eme moy : %.2f", (c/100) * 5);
}
