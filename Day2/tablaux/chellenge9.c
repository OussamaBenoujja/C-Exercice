#include <stdio.h>

int main() {
    int n, i, temp;

    printf("Entrez le nombre elements dans le tableau : ");
    scanf("%d", &n);

    int arr[n];

    printf("Entrez les éléments du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Tableau inverse :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
