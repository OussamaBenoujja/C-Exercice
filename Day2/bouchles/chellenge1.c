#include <stdio.h>

int main() {
    int number;

    printf("Entrez un nombre : ");
    scanf("%d", &number);

    for (int i = 10; i >= 1; i--) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}
