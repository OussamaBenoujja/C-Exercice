#include <stdio.h>

int main() {
    int n, i;

    printf("Entrez le nombre elements dans le tableau : ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Entrez les elements du tableau 1 :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("Tableau 1 :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Tableau 2:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
