#include <stdio.h>
#include <string.h>

struct person{
    char nom[99];
    char prenom[99];
    int age;
};

int main(){
    struct person ahmed;
    struct person jamal;

    strcpy(ahmed.nom,"ahmed");
    strcpy(jamal.nom,"jamal");

    strcpy(ahmed.prenom,"kamal");
    strcpy(jamal.prenom,"jamal");

    ahmed.age=13;
    jamal.age=24;

    printf("%s %s %d",ahmed.nom,ahmed.prenom,ahmed.age);
    printf("%s %s %d",jamal.nom,jamal.prenom,jamal.age);
}