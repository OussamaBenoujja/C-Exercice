#include <stdio.h>
#include <math.h>


int main(){
    int x;
    int y;

    printf("Entree deux valeur :");
    scanf("\n");
    scanf("%d %d",&x,&y);

    if(x==y){
        printf("\nidentiques %d",(x+y)*3);
    }else{
        printf("\nnon identiques %d",x+y);
    }

}