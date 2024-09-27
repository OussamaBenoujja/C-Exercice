#include <stdio.h>

int main() {
    int n, i;

    printf("Entrez le nombre elements dans le tableau : ");
    scanf("%d", &n);

    int arr[n];

    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements pairs du tableau :\n");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
