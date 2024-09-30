#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define max 100

typedef struct contact{
    char nom[max];
    char tel[max];
    char email[max];
}contact;

contact contacts[max];


void add(contact *c){
    char em1[max];
    char em2[max];
    char em3[max];
    printf("\nEntrez un nom : ");
    fget(*c->nom,sizeof(*c->nom),stdin);
    printf("\nEntrez un Numero de téléphone : ");
    scanf("%s", *c->tel);
    printf("\nEntrez un Adresse e-mail : ");
    scanf("%s@%s.%s", em1,em2,em3);
    strcat(em1,"@");
    strcat(em2,".");
    strcat(em1,em2);
    strcat(em1,em3);
    strcpy(*c->email,em1);
}
void update(contact *c[max],char name[max]){
    bool found = false;
    char em1[max];
    char em2[max];
    char em3[max];
    for(int i=0;i<max;i++){
        if(strcmp(c[i]->nom,name)==0){
            found = true;
            printf("\nEntrez un Numero de téléphone : ");
            scanf("%s", *c[i]->tel);
            printf("\nEntrez un Adresse e-mail : ");
            scanf("%s@%s.%s", em1,em2,em3);
            strcat(em1,"@");
            strcat(em2,".");
            strcat(em1,em2);
            strcat(em2,em3);
            strcpy(*c[i]->email,em1);
        }
    }if(!found){printf("\ncontact not found !");}
}
void delete(contact *c[max],char name[max]){
    bool found = false;
    for(int i=0;i<max;i++){
        if(strcmp(*c[i]->nom,name)==0){
            found = true;
            *c[i]->nom = *c[i+1]->nom;
            *c[i]->tel = *c[i+1]->tel;
            *c[i]->email = *c[i+1]->email;
            }
    }if(!found){printf("\ncontact not found !");}
}



int main(){
    while(true){

    }
}