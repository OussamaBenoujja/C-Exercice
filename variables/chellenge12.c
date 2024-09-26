#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main(){
    int numbers;
    printf("entree les numero : ");
    scanf("%d", &numbers);

    if(numbers>999 && numbers<10000){
        int firstNum = numbers % 10;
        int secondNum = (numbers/10) % 10;
        int thirdNum = (numbers/100) % 10;
        int fourthNum = (numbers/1000) % 10;
        printf("%d%d%d%d",firstNum,secondNum,thirdNum,fourthNum);
    }else{
        printf("Entree quatre chiffres ?");
    }

    
}