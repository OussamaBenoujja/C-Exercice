#include <stdio.h>

int main() {
    int n;

    printf("Entrez un nombre entier positif n : ");
    scanf("%d", &n);

    printf("Les facteurs de %d est : ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) { 
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
