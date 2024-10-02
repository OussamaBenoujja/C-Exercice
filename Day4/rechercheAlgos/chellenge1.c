#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int arr[]= {1,233,43,343,2033,33,23,7,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 33;
    for(int i = 0;i<n;i++){
        if(arr[i]==d){
            printf("found");
        }
    }
}
