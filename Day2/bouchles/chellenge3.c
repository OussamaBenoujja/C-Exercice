#include <stdio.h>

int main() {
    int n;

    printf("Entrez un entier n : ");
    scanf("%d", &n);

    printf("Nombres premiers de 1 a %d :\n", n);
    for (int i = 2; i <= n; i++) {
        int is_prime = 1; 

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0; 
                break;
            }
        }

        if (is_prime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
