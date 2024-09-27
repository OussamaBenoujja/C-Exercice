#include <stdio.h>

int main() {
    int n, i, element, found = 0;

    printf("Entrez le nombre elements dans le tableau : ");
    scanf("%d", &n);

    int arr[n];

    printf("Entrez les elements :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("rechercher : ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = 1;
            break;
        }
    }

    if (found==1) {
        printf("element %d est dans le tableau.\n", element);
    } else {
        printf("element %d n'est pas dans le tableau.\n", element);
    }

    return 0;
}
