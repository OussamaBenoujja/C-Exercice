#include <stdio.h>

int fac(int x){
    int res=1;
    for(int i =1;i<=x;i++){
        res *=i;
    }
    return res;
}

int main(){
    int a;
    printf("\nentrez nombre : ");
    scanf("%d",&a);
    printf("\n%d",fac(a));
}