#include <stdio.h>

int main(){
    int deci;
    int n;
    int binNums[99];
    printf("entree nemuro : ");
    scanf("\n");
    scanf("%d",&n);
    deci = n;
    int i = 0;
    while (n > 0) { 
        binNums[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    printf("\nvaleur Binaire :\n");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binNums[j]); 
        } 
    printf("\nValeur hexadecimal :\n%X",deci);
}