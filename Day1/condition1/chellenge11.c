#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    char days[7][10] = {
        "Dimanche", "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi"
    };

    srand(time(0));
    int r_day = rand() % 7;
    printf("jour aleatoire : %s\n", days[r_day]);

    return 0;
}
