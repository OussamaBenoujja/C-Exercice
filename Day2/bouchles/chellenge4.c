#include <stdio.h>

int main() {
    int number;
    int reversed = 0;

    printf("Entrez un entier : ");
    scanf("%d", &number);

    while (number != 0) {
        int digit = number % 10; 
        reversed = reversed * 10 + digit; 
        number /= 10; 
    }

    printf("ordre inverse est : %d\n", reversed);

    return 0;
}
