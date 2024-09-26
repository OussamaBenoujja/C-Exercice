#include <stdio.h>

int main(){
    int age;
    char name[99];
    char lastName[99];
    char email[99];
    char sexe;

    printf("Nom :");
    scanf("\n");
    scanf("%s", &lastName);
    printf("Prenom :");
    scanf("\n");
    scanf("%s", &name);
    printf("Age :");
    scanf("%d", &age);
    printf("Sexe :");
    scanf("\n");
    scanf("%c", &sexe);
    printf("Email :");
    scanf("\n");
    scanf("%s", &email);

    printf("\n");
    printf("**********************************************\n");
    printf("Nom : %s\n", lastName);
    printf("Prenom : %s\n", name);
    printf("Age : %d\n", age);
    printf("Sexe : %c\n", sexe);
    printf("Email : %s\n", email);
}
