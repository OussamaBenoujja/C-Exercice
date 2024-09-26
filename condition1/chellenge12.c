#include <stdio.h>

int main() {
    int x_h, x_m, x_s;  
    int y_h, y_m, y_s;  

    
    printf("Entree 1ere (HH:MM:SS): ");
    scanf("%d:%d:%d", &x_h, &x_m, &x_s);

    
    printf("Entree 2eme (HH:MM:SS): ");
    scanf("%d:%d:%d", &y_h, &y_m, &y_s);

    
    if (x_h < y_h || (x_h == y_h && x_m < y_m) || (x_h == y_h && x_m == y_m && x_s < y_s)) {
        printf("Le premier instant vient avant le deuxieme.\n");
    } else if (x_h > y_h || (x_h == y_h && x_m > y_m) || (x_h == y_h && x_m == y_m && x_s > y_s)) {
        printf("Le deuxieme instant vient avant le premier.\n");
    } else {
        printf("la meme temps.\n");
    }

    return 0;
}