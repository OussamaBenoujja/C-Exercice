#include <stdio.h>

int main(){
    int day,month,year;
    

    printf("Entree Date : ");
    scanf("\n");
    scanf("%d/%d/%d",&day,&month,&year);
    char _months[][10] = {"Janvier",
     "Fevrier", "Mars","Avril",
     "mai","juin","juillet","aout","septembre","octobre","novembre","decembre"};
      for (int i = 0; i < 12; i++) 
        {
        if(i == month - 1){
            printf("%d-%s-%d",day,_months[i],year);
        }
        }


}