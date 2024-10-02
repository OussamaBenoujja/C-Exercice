#include <stdio.h>

#define max 100

int main(){
    int arr[5];
    int count = 5;
    int i =0;
    printf("\nentrez combine nombre : ");
    scanf("%d", &count);
    while(i<count){
        printf("\nEntrez un nombre : ");
        scanf("%d", &arr[i]);
        i++;}
    for(int j=0;j<count-1;j++){
        for(int d =j+1;d<count;d++){
            if(arr[d]>arr[d+1]){
                    int res  = arr[d];
                    arr[d]   = arr[d+1];
                    arr[d+1] = res;
                }
        }
    }
    for(int d = 0;d<count;d++){
        printf(" %d,",arr[d]);
    }
}