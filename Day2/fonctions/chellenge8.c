#include <stdio.h>
#include <stdbool.h>

int p(int x){
    if(x%2==0){
        return 1;
    }else{return 0;}
}

int main(){
    int n;
    printf("\nEntrez un nombre : ");
    scanf("%d",&n);
    printf("%d",p(n));
}