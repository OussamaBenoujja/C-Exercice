#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Entrez le nombre elements : ");
    scanf("%d", &n);

    int arr[n]; 

    
    printf("Entrez les elements:\n");
    for (i = 0; i < n; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    
    printf("La somme : %d\n", sum);

    return 0;
}
