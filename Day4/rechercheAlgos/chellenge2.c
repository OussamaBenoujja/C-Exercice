#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main(void)
{   
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int min= 0;
    int max = n-1;
    bool found = false;
    while (min <= max) {
        int mid = min + (max - min) / 2;
        
        if (arr[mid] == x){
            printf("found!");
            found = true;}
        
        if (arr[mid] < x){
            min = mid + 1;}
        else{
            max = mid - 1;}
    }if(!found){printf("not Found!!");}

}