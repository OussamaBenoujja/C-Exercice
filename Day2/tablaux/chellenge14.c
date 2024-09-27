#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Entrez le nombre elements dans le tableau : ");
    scanf("%d", &n);

    int arr[n];

    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("La moyenne est : %.2f\n", average);

    return 0;
}
