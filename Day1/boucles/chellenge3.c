#include <stdio.h>


int main(){
    int n;
    printf("\nEntree un nombre : ");
    scanf("%d", &n);

    int res = 1;
    if(n>=0){
    for (int i = 2; i <= n; i++){
        printf("%d+",i);
        res += i;
    }
    printf("=%d", res);}
}