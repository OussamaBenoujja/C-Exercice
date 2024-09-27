#include <stdio.h>

int main() {
    int n1, n2, i;

    printf("Entrez le nombre elements du premier tableau : ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Entrez les elements du premier tableau :\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Entrez le nombre elements du deuxieme tableau : ");
    scanf("%d", &n2);

    int arr2[n2];
    int arr3[n1 + n2];

    printf("Entrez les elements du deuxieme tableau :\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    for (i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    printf("Tableau fusionne :\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
