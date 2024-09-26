#include <stdio.h>

int main(){
    int x;
    printf("entree nemuro : \n");
    scanf("\n");
    scanf("%d", &x);

    if(x>0){
        printf("Postitive!!");
    }else if(x<0){
        printf("Negative!!");
    }else{
        printf("NULL");
    }
}