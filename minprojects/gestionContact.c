#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define max 100

int choix = 0;
int count = 0;
int iD;

typedef struct contact{
    char nom[max];
    char tel[max];
    char email[max];
    int id;
}contact;

contact contacts[max];

int checkEmail(char phrase[max]){
    bool found1=false;
    bool found=false;
    for(int i =0;i<max;i++){
        if(phrase[i]==64){found1=true;}
    }if(found1){
        for(int i =0;i<max;i++){
            if(phrase[i]==46){found=true;}
            return 0;
        }
    }if(!found){return 1;}
}


int check(char p[max],contact _p[max],int b){
    if(b==1){
    for(int i = 0;i<max;i++){
    if(strcmp(p, _p[i].email)==1){return 0;}
    else{return 1;}
    }}else if (b==2){
    for(int i = 0;i<max;i++){
    if(strcmp(p, _p[i].tel)==1){return 0;}
    else{return 1;}
    }  
    }
    else if (b==3){
    for(int i = 0;i<max;i++){
    if(strcmp(p, _p[i].nom)==1){return 0;}
    else{return 1;}
    }  
    }
}
void add(contact c){
    char em1[max/4];
    char em2[max/4];
    char em3[max/4];
    printf("\nEntrez un nom : ");
    scanf("\n");
    fgets(c.nom,sizeof(c.nom),stdin);
    while(check(c.nom,contacts,3)==1){
        printf("\nNom deja utiliser Entrez un autre nom : ");
        scanf("\n");
        fgets(c.nom,sizeof(c.nom),stdin);
    }
    printf("\nEntrez un Numero de téléphone : ");
    scanf("\n");
    scanf("%s", c.tel);
    while(check(c.tel,contacts,2)==1){
        printf("\nNombre telephone deja utiliser Entrez un autre nombre : ");
        scanf("\n");
        scanf("%s", c.tel);
    }
    printf("\nEntrez un Adresse e-mail : ");
    scanf("\n");
    fgets(c.email,sizeof(c.nom),stdin);
    while(check(c.tel,contacts,2)==1){
        printf("\nEmail deja utiliser Entrez un autre Email : ");
        scanf("\n");
        fgets(c.email,sizeof(c.nom),stdin);
    }
    strcpy(contacts[count].nom,c.nom);
    strcpy(contacts[count].tel,c.tel);
    strcpy(contacts[count].email,c.email);
    contacts[count].id = iD++;
    count++;
}
void update(contact c[max],char name[max]){
    bool found = false;
    char em1[max/4];
    char em2[max/4];
    char em3[max/4];
    for(int i=0;i<count;i++){
        if(strcmp(c[i].nom,name)==1){
            found = true;
            printf("\nEntrez un Numero de téléphone : ");
            scanf("%s", c[i].tel);
            printf("\nEntrez un Adresse e-mail : ");
            scanf("%s@%s.%s", em1,em2,em3);
            strcat(em1,"@");
            strcat(em2,".");
            strcat(em1,em2);
            strcat(em2,em3);
            strcpy(c[i].email,em1);
        }
    }if(!found){printf("\ncontact not found !");}
}
void delete(contact c[max],char name[max]){
    bool found = false;
    for(int i=0;i<count;i++){
        if(strcmp(c[i].nom,name)==1){
            found = true;
            strcpy(c[i].nom , c[count-1].nom);
            strcpy(c[i].tel , c[count-1].tel);
            strcpy(c[i].email , c[count-1].email);
            strcpy(c[count-1].nom,"");
            strcpy(c[count-1].tel,"");
            strcpy(c[count-1].email,"");
            count--;
            }
    }if(!found){printf("\ncontact not found !");}
}
void list(contact c[max]){
    if(count>0){
    for(int i = 0;i<count;i++){
        printf("\n------------------------------------");
        printf("\n\tnom: %s", c[i].nom);
        printf("\tnom: %s", c[i].tel);
        printf("\n\tnom: %s", c[i].email);
        printf("\n------------------------------------");
    }}else{printf("\n\tContact Vide");}
}
void search(contact c[max], char name[max]){
    bool found = false;
    for(int i=0;i<count;i++){
        if(strcmp(c[i].nom,name)==1){
            found = true;
            printf("\n------------------------------------");
            printf("\n\tnom: %s", c[i].nom);
            printf("\tnom: %s", c[i].tel);
            printf("\n\tnom: %s", c[i].email);
            printf("\n------------------------------------");
            }
    }if(!found){printf("\ncontact not found !");}
}

int main(){
    while(choix!=6){
        printf("\n************************************************************************");

        printf("\n\t1. Ajouter un Contact. ");
        printf("\n\t2. Modifier un Contact. ");
        printf("\n\t3. Supprimer un Contact. ");
        printf("\n\t4. Afficher Tous les Contacts. ");
        printf("\n\t5. Rechercher un Contact. ");
        printf("\n\t6. Quitter. ");
        printf("\n\t   Entrez une Choix.");
        scanf("%d",&choix);
        switch (choix)
        {
        case 4:
        contact p;
            list(contacts);
            break;
        case 1:
            add(p);
            break;
        case 2:
            char name[max];
            printf("\nEntrez un Nom: ");
            scanf("\n");
            scanf("%s",name);
            update(contacts, name);
        case 3:
            char _name[max];
            printf("\nEntrez un Nom: ");
            scanf("\n");
            scanf("%s",_name);
            delete(contacts, _name);
            break;
        }

    }
}