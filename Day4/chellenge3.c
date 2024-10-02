#include <stdio.h>
#include <stdlib.h>


int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

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

    qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(int), compare);

    for(int d = 0;d<count;d++){
        printf(" %d,",arr[d]);
    }
}