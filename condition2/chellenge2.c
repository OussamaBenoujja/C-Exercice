#include <stdio.h>


int main(){
    int age, type, _Accidents;

    float prime;

    printf("\nAge : ");
    scanf("%d",&age);
    printf("\ntype (1:sportive 2:utilitaire 3:familiale) : ");
    scanf("%d",&type);
    printf("\nNumbre des accidents : ");
    scanf("%d",&_Accidents);
    printf("\nPrime : ");
    scanf("%f",&prime);

    if(age<25){
        prime *= 1.5;
    }else if(age>=65){
        prime *= 1.2;
    }
    float _prime;
    if (type==1){_prime=prime*2;}
    else if (type==2){_prime=prime*1.2;}
    else if (type==3){_prime=prime*1.1;}

    if(_Accidents>1){_prime = _prime*0.3;}

    printf("\nPrime est : %f",_prime);
}