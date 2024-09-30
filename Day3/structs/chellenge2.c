#include <stdio.h>
#include <string.h>


struct student{
    char nom[99];
    char prenom[99];
    int notes[3];
};

int main(){
    struct student ahmed;
    struct student jamal;

    strcpy(ahmed.nom,"kamal");
    strcpy(ahmed.prenom,"ahmed");

    strcpy(jamal.nom,"kamal");
    strcpy(jamal.prenom,"jamal");

    ahmed.notes[0] = 13;
    ahmed.notes[1] = 15;
    ahmed.notes[3] = 20;

    jamal.notes[0] = 13;
    jamal.notes[1] = 20;
    jamal.notes[3] = 20;

    printf("\n%s %s math:%d france:%d englais:%d ",ahmed.nom,ahmed.prenom,ahmed.notes[0],ahmed.notes[1],ahmed.notes[2]);
    printf("\n%s %s math:%d france:%d englais:%d ",jamal.nom,jamal.prenom,jamal.notes[0],jamal.notes[1],jamal.notes[2]);


}