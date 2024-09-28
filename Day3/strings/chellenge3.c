#include <stdio.h>
#include <string.h>

void fuse(char *arr1, char*arr2){
    int i = 0;
    int f = 0;
    while(arr1[i]!='\0'){
        i++;
    }while(arr2[i]!='\0'){
        f++;
    }
    for(int j = 0;j<100;j++){
        arr1[j+i] = arr2[j];
    }printf("\n%s",arr1);
}

int main(){
    char phrase1[100];
    char phrase2[100];
    printf("\nenter phrase one : ");
    scanf("\n");
    scanf("%s",phrase1);
    printf("\nenter phrase two :");
    scanf("\n");
    scanf("%s",phrase2);
    fuse(phrase1,phrase2);
}