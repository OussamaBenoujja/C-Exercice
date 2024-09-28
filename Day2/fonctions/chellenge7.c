#include <stdio.h>
#include <string.h>

void reverse(char *x){
    int first = 0;
    int last = strlen(x) - 1;
    char y;

    while(first<last){
        y = x[first];
        x[first] = x[last];
        x[last] = y;

        first++;
        last--;
    }
    printf("\n%s",x);
}

int main(){
    char arr[100];
    printf("\nEnter a phrase : ");
    scanf("%s", arr);
    reverse(arr);
}