#include <stdio.h>

#define max 100
int main(){
    char phrase[max];
    int count = 0;
    printf("\nenter a phrase : ");
    scanf("\n");
    scanf("%s",phrase);
    int i = 0;
    while(phrase[i]!='\0'){
        count++;
        i++;
    }
    printf("*******************\n%d",count);
}