#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX 100

int choix = 0;
int count = 0;
int iD = 1;

typedef struct contact {
    char nom[MAX];
    char tel[MAX];
    char email[MAX];
    int id;
} contact;

contact contacts[MAX];

int _checktel(int idx, contact p[MAX], char s[MAX]) {
    for (int i = 0; i < count; i++) {
        if (i != idx && strcmp(p[i].tel, s) == 0) {
            return 1;
        }
    }
    return 0;
}

int _checkemail(contact p[MAX], char s[MAX]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(p[i].email, s) == 0) {
            return 1;
        }
    }
    return 0;
}

int checkEmail(char phrase[MAX]) {
    bool atFound = false, dotFound = false;
    for (int i = 0; phrase[i] != '\0'; i++) {
        if (phrase[i] == '@') {
            atFound = true;
        }
        if (atFound && phrase[i] == '.') {
            dotFound = true;
        }
    }
    return (atFound && dotFound) ? 0 : 1;
}

int checknum(char phrase[MAX]) {
    if (phrase[0] == '\0' || !(isdigit(phrase[0]) || phrase[0] == '+')) {
        return 1;
    }
    for (int i = 1; phrase[i] != '\0'; i++) {
        if (!isdigit(phrase[i])) {
            return 1;
        }
    }
    return 0;
}

void add(contact d[MAX]) {
    contact c;
    printf("\nEntrez un nom : ");
    scanf(" %[^\n]", c.nom);

    printf("\nEntrez un Numero de telephone : ");
    scanf("%s", c.tel);
    while (checknum(c.tel) != 0 || _checktel(count, d, c.tel) != 0) {
        if (checknum(c.tel) != 0) {
            printf("\nNombre telephone invalid. Entrez un autre nombre : ");
        } else {
            printf("\nnombre tele deja existe. Entrez un autre nombre : ");
        }
        scanf("%s", c.tel);
    }

    printf("\nEntrez un Adresse e-mail : ");
    scanf("%s", c.email);
    while (checkEmail(c.email) != 0 || _checkemail(d, c.email) != 0) {
        if (checkEmail(c.email) != 0) {
            printf("\nEmail invalid. Entrez un autre Email : ");
        } else {
            printf("\nEmail deja existé. Entrez un autre Email : ");
        }
        scanf("%s", c.email);
    }

    strcpy(d[count].nom, c.nom);
    strcpy(d[count].tel, c.tel);
    strcpy(d[count].email, c.email);
    d[count].id = iD++;
    count++;
}

void update(contact c[MAX], char name[MAX]) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (strcmp(c[i].nom, name) == 0) {
            found = true;
            printf("\nEntrez un Numero de téléphone : ");
            scanf("%s", c[i].tel);
            while (checknum(c[i].tel) != 0 || _checktel(i, c, c[i].tel) != 0) {
                if (checknum(c[i].tel) != 0) {
                    printf("\nNombre telephone invalid. Entrez un autre nombre : ");
                } else {
                    printf("\nnombre tele deja existe. Entrez un autre nombre : ");
                }
                scanf("%s", c[i].tel);
            }
            printf("\nEntrez un Adresse e-mail : ");
            scanf("%s", c[i].email);
            while (checkEmail(c[i].email) != 0 || _checkemail(c, c[i].email) != 0) {
                if (checkEmail(c[i].email) != 0) {
                    printf("\nEmail invalid. Entrez un autre Email : ");
                } else {
                    printf("\nEmail deja existé. Entrez un autre Email : ");
                }
                scanf("%s", c[i].email);
            }
            break;
        }
    }
    if (!found) {
        printf("\nContact not found!\n");
    }
}

void delete(contact c[MAX], char name[MAX]) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (strcmp(c[i].nom, name) == 0) {
            found = true;
            c[i] = c[count - 1];
            count--;
            break;
        }
    }
    if (!found) {
        printf("\nContact not found!\n");
    }
}

void list(contact c[MAX]) {
    if (count > 0) {
        printf("\n--------------------------------------------------------");
        printf("\n|  ID  |    Nom    |       TEL      |       EMAIL      |");
        for (int i = 0; i < count; i++) {
            printf("\n|%-6d|%-11s|%-16s|%-18s|", c[i].id, c[i].nom, c[i].tel, c[i].email);
            printf("\n--------------------------------------------------------");
        }
    } else {
        printf("\n\tContact Vide\n");
    }
}

void search(contact c[MAX], char name[MAX]) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (strcmp(c[i].nom, name) == 0) {
            found = true;
            printf("\n------------------------------------");
            printf("\n\tnom: %s", c[i].nom);
            printf("\tnom: %s", c[i].tel);
            printf("\n\tnom: %s", c[i].email);
            printf("\n------------------------------------");
            break;
        }
    }
    if (!found) {
        printf("\nContact not found!\n");
    }
}

int main() {
    while (choix != 6) {
        printf("\n************************************************************************");
        printf("\n\t1. Ajouter un Contact. ");
        printf("\n\t2. Modifier un Contact. ");
        printf("\n\t3. Supprimer un Contact. ");
        printf("\n\t4. Afficher Tous les Contacts. ");
        printf("\n\t5. Rechercher un Contact. ");
        printf("\n\t6. Quitter. ");
        printf("\n\t   Entrez un Choix: ");
        while(scanf("%d", &choix)!=1){
            printf("\n\t   Entrez un Choix: ");
            getchar();
        }

        
        switch (choix) {
            case 1:
                add(contacts);
                break;
            case 2: {
                char name[MAX];
                printf("\nEntrez un Nom: ");
                scanf(" %[^\n]", name);
                update(contacts, name);
                break;
            }
            case 3: {
                char _name[MAX];
                printf("\nEntrez un Nom: ");
                scanf(" %[^\n]", _name);
                delete(contacts, _name);
                break;
            }
            case 4:
                list(contacts);
                break;
            case 5: {
                char __name[MAX];
                printf("\nEntrez un Nom: ");
                scanf(" %[^\n]", __name);
                search(contacts, __name);
                break;
            }
            case 6:
                printf("\nQuitter le programme.\n");
                break;
            default:
                printf("\nChoix invalide, veuillez réessayer.\n");
                break;
        }
    }
    return 0;
}
