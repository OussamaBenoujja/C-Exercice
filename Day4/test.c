#include <stdio.h>

int main(){

    int arr[]={13,1,22,2,42};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 1;i<n;i++){
            int s = arr[i];
            int j = i-1;
            while(j>=0&&arr[j]>s){
                arr[j+1]=arr[j];
                j = j-1;
            }arr[j+1] = s;
        }
    

    for(int d = 0;d<n;d++){
        printf(" %d,",arr[d]);
    }


}