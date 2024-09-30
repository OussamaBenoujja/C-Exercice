#include <stdio.h>
#include <string.h>

typedef struct livre{
    char titre[99];
    char author[99];
    int annee;
}livre;

void set(struct livre book1,char titre[99],char author[99],int annee ){
    strcpy(book1.titre, titre);
    strcpy(book1.author, author);
    book1.annee = annee;
    printf("\n***************************************************************************");
    printf("\n\t%s %s %d",book1.titre,book1.author,book1.annee);
}

int main(){
    livre *book,_book;
    book = &_book;
    char title[99];
    strcpy(title,"FirePunch");
    char writer[99];
    strcpy(writer,"TatsukiFujimuto");
    int year = 2018;
    set(*book, title,writer, year);
    
}