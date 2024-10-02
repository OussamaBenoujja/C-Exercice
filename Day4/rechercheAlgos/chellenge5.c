#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    char arr[6][100] = {"ahmed","osama","waeil","jamal","kawtar","ramiz"};
    char phrase[] = "osama";
    bool found = false;
    for(int i = 0 ;i<6;i++){
        if(strcmp(arr[i], phrase)==0){
            printf("found!!!");
            found = true;
        }
    }if(!found){printf("Not Found!!!");}

}