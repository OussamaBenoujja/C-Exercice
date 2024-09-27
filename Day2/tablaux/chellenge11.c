#include <stdio.h>

int main() {
    int n, i, val1, val2;

    printf("Entrez le nombre elements dans le tableau : ");
    scanf("%d", &n);

    int arr[n];

    printf("Entrez les elements :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Entrez la valeur a remplacer : ");
    scanf("%d", &val1);

    printf("Entrez la nouvelle valeur : ");
    scanf("%d", &val2);

    for (i = 0; i < n; i++) {
        if (arr[i] == val1
) {
            arr[i] = val2;
        }
    }

    printf("Tableau apres remplacement :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
