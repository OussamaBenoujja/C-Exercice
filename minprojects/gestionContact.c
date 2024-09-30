#include <stdio.h>
#include <string.h>

#define max 100

typedef struct contact{
    char nom[max];
    char tel[max];
    char email[max];
}contact;


void add(contact *c){
    char em1[max];
    char em2[max];
    char em3[max];
    printf("\nEntrez un nom : ");
    fget(c->nom,sizeof(c->nom),stdin);
    printf("\nEntrez un Numero de téléphone : ");
    scanf("%s", c->tel);
    printf("\nEntrez un Adresse e-mail : ");
    scanf("%s@%s.%s", em1,em2,em3);
    
}


int main(){



}