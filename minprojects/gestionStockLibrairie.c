#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define max 100

int main(){
    
        char titles[max][max];
        char authors[max][max];
        float prices[max];
        int quantities[max];
        int count = 0;
        int choice;
        char rchstring[max];

        while(true){
        printf("\n--- Système de Gestion de Stock ---\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher tous les livres disponibles\n");
        printf("3. Rechercher un livre par son titre\n");
        printf("4. Mettre à jour la quantité d'un livre\n");
        printf("5. Supprimer un livre du stock\n");
        printf("6. Afficher le nombre total de livres en stock\n");
        printf("7. Quitter\n");
        printf("Choisissez une option : ");
        scanf("%d", &choice);

        switch (choice){
        case 1:
                printf("\nentrez nom de livre : ");
                scanf("%s", titles[count]);
                printf("\nentrez nom de author : ");
                scanf("%s", authors[count]);
                printf("\nentrez prix : ");
                scanf("%f", &prices[count]);
                printf("\nentrez quantity : ");
                scanf("%d", &quantities[count]);
                count++;
            break;
        case 2:
            for(int i=0;i<=count;i++){
                printf("\ntitre : %s author : %s prix : %.2f quantity : %d",titles[i],authors[i],prices[i],quantities[i]);
            }
            break;
        case 3:
            
                printf("\nentrez titre du livre : ");
                scanf("%s", rchstring);
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (strcmp(titles[i], rchstring) == 0) {
                        printf("\ntitre : %s author : %s prix : %.2f quantity : %d", titles[i], authors[i], prices[i], quantities[i]);
                        found = true;
                    }
                }
                if (!found) {
                    printf("\nlivre pas disponible\n");
                }
                break;
        }}
}