#include <stdio.h>
#include <stdlib.h>



int main(){
    int arr[]= {23,2344,11,50,33,32,99,34,2};
    int x = arr[0];
    for(int i = 1;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]>x){
            x = arr[i];
        }
    }printf("\n la valeur minimal est : %d",x);
}