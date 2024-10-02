#include <stdio.h>

#define max 100



int main(){
    
    int count;
    int i =0;
    printf("\nentrez combine nombre");
    scanf("%d", &count);
    int arr[count];
    while(i<count){
        printf("\nEntrez un nombre : ");
        scanf("%d", &arr[i]);
        i++;}


    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 1;i<count;i++){
            int s = arr[i];
            int j = i-1;
            while(j>=0&&arr[j]>s){
                arr[j+1]=arr[j];
                j--;
            }arr[j+1] = s;
        }
    

    for(int d = 0;d<n;d++){
        printf(" %d,",arr[d]);
    }
}