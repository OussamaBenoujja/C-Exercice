#include <stdio.h>

int main(){
    int table1[] = {1, 2, 3, 87, 5, 6};

    int length = sizeof(table1)/sizeof(table1[0]);

    for(int i = 0;i<length;i++){
        printf("%d ",table1[i]);
    }
}