#include <stdio.h>

int main(){
    int x;

    printf("entree nemuro : ");
    scanf("\n");
    scanf("%d",&x);
    
    float res = x % 2;
    if(res==0){
        printf("Pair!!");
    }else{
        printf("Impaire!!");
    }
}