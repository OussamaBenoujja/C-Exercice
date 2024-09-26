#include <stdio.h>


int main(){
    int n;
    printf("\nEntree un nombre : ");
    scanf("%d", &n);
    int i = 1;
    int x = 0;
    
    while(x<n){
        if(i%2 == 0){printf("%d ", i);x++;}
        i++;
    }
    }
    
