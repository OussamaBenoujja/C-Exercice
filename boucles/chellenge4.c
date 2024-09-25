#include <stdio.h>


int main(){
    int n;
    printf("\nEntree un nombre : ");
    scanf("%d", &n);

    int res = 1;
    if(n>=0){
    for (int i = 0; i <= n; i++)
        if(i%2 != 0){
            printf("%d ", i);
        }
    }
    
}