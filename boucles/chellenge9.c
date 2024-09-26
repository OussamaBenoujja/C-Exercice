#include <stdio.h>

int main(){
    char chf[99];

    printf("\nEntrez : ");
    scanf("\n");
    scanf("%98s",chf);
    char null = '\0';
    int length = 0;
    while(chf[length] != null){
        length++;
    }
    printf("\n%d", length);
}