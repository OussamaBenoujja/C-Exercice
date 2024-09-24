#include <stdio.h>

int main(){
    float grade;

    printf("entree grade : \n");
    scanf("\n");
    scanf("%f",&grade);

    if(grade<10){
        printf("recale.");
    }else if(grade>=10 && grade<12){
        printf("passable.");
    }else if (grade>=12 && grade<14){
        printf("assez bien.");
    }else if (grade>=14 && grade<16){
        printf("bien");
    }else if (grade>=16){
        printf("très bien.");
    }
}