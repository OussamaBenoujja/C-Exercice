#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define max 100

    char titles[max][max];
    char authors[max][max];
    float prices[max];
    int quantities[max];
    int count = 0;
    int choice;
    char rchstring[max];
    bool isNum;
    bool isNum1;
    bool quit = false;


void addbook(){
        if(count<max){
        printf("\nentrez nom de livre : ");
        scanf("\n");
        fgets(titles[count], sizeof(titles[count]), stdin);
        printf("\nentrez nom de author : ");
        scanf("\n");
        fgets(authors[count], max, stdin);
        printf("\nentrez prix : ");
        scanf("\n");
        
        while (scanf("%f", &prices[count])!= 1){
            printf("\nError entrez un nomber ");
            getchar();
        }
        printf("\nentrez quantity : ");
        scanf("\n");
        while (scanf("%d", &quantities[count])!= 1){
            printf("\nError entrez un nomber ");
            getchar();
        }
        count++;}else{printf("\nle nombre des livre est maximum!!");}
}

void print(){
        for(int i=0;i<count;i++){
        printf("\ntitre : %s author : %s prix : %.2f quantity : %d",titles[i],authors[i],prices[i],quantities[i]);
    }
}
void search(){
    printf("\nentrez titre du livre : ");
    scanf("\n");
    fgets(rchstring, max, stdin);
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
}
void updateQ(){
    printf("\nentrez titre du livre : ");
    scanf("\n");
    fgets(rchstring, max, stdin);
    bool found0 = false;
    for (int i = 0; i < count; i++) {
        if (strcmp(titles[i], rchstring) == 0) {
            printf("\nEntrez novelle Quantity :");
            while (scanf("%d", &quantities[i])!= 1){
                printf("\nError entrez un nomber ");
                getchar();
            }
            found0 = true;
        }
    }
    if (!found0) {
        printf("\nlivre pas disponible\n");
    }
}
void delete(){
    printf("\nentrez titre du livre : ");
    scanf("\n");
    fgets(rchstring, max, stdin);
    bool found1 = false;
    for (int i = 0; i < count; i++) {
        if (strcmp(titles[i], rchstring) == 0) {
            found1 = true;
        }
        if(found1){
                for(int j=0;j<max;j++){
                titles[i][j] = titles[i+1][j];
                authors[i][j] = authors[i+1][j];
                prices[i] = prices[i+1];
                quantities[i] = quantities[i+1];
            }count--;
        }
    }
    if (!found1) {
        printf("\nlivre pas disponible\n");
    }
}
void counter(){printf("\nnombre de livre est %d",count);}
int main(){
        while(true){
        printf("\n--- Systeme de Gestion de Stock ---\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher tous les livres disponibles\n");
        printf("3. Rechercher un livre par son titre\n");
        printf("4. Mettre a jour la quantite d'un livre\n");
        printf("5. Supprimer un livre du stock\n");
        printf("6. Afficher le nombre total de livres en stock\n");
        printf("7. Quitter\n");
        printf("Choisissez une option : ");
        scanf("\n");
        while (scanf("%d", &choice)!= 1){
                    printf("\nChoisissez une option : ");
                    getchar();
                }

        switch (choice){
        case 1:
                addbook();
                break;
        case 2:
                print();
                break;
        case 3:
                search();
                break;
        case 4:
                updateQ();
                break;
        case 5:
                delete();
                break;
        case 6:
                counter();
                break;
        case 7:
            quit = true;
            break;
        }
        if(quit){break;}
        }
}