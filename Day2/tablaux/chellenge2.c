#include <stdio.h>


int main(){
    int x;
    printf("\nEntrez nemeru de tableau?");
    scanf("%d",x);
    const int f = x;
    char array[f];

    printf("%d", sizeof(array)/sizeof(array[0]));
}