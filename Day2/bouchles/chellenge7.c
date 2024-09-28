#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre : ");
    scanf("%d", &n);

    int a = 0, b = 1, next;

    printf("Suite de Fibonacci : ");
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", a);
            continue;
        }
        if (i == 1) {
            printf("%d ", b);
            continue;
        }
        next = a + b; 
        printf("%d ", next);
        a = b; 
        b = next; 
    }
    printf("\n");

    return 0;
}
