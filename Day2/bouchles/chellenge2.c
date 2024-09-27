#include <stdio.h>

int main() {
    int lines;

    printf("Entrez le nombre de lignes : ");
    scanf("%d", &lines);

    for (int i = 1; i <= lines; i++) {
        for (int j = 0; j < lines - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
