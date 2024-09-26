#include <stdio.h>
#include <math.h>
#include <stdbool.h>



int main(){
    while(true){
    int f;
    int nf;
    char checkChar;
    float numbers[99];
    float result = 0;
    char null = '\0';
    printf("\n1.Addition : Ajouter deux ou plusieurs nombres.\n2.Soustraction : Soustraire deux nombres.\n3.Multiplication : Multiplier deux ou plusieurs nombres.\n4.Division : Diviser deux nombres, avec gestion de la division par zéro.\n5.Moyenne : Calculer la moyenne d une série de nombres.\n6.Valeur absolue : Calculer la valeur absolue d un nombre.\n7.Exponentiation : Calculer un nombre à une certaine puissance.\n8.Racine carrée : Calculer la racine carrée d un nombre positif.");
    printf("\nEntrez un nombre : ");
    scanf("%d",&f);
    printf("%d",f);

    while(true){
    if(f==1||f==3){
        printf("\ncombien de numéros");
        scanf("%d", &nf);
        for(int ix =0;ix<nf;ix++){
            printf("\nentrez un nemuro : ");
            scanf("%f", &numbers[ix]);
        }
    }
    if(f==1){
        for(int c=0;c<nf;c++){
                result = result + numbers[c];
        }
        printf("\nresult : %.2f", result);
    }
    else if(f==3){
        result = 1;
        for(int c=0;c<nf;c++){
                result = result * numbers[c];
        }
        printf("\nresult : %.2f", result);
    }
    else if(f == 2){
        float x;
        float y;
        printf("\nentrez un nemuro : ");
        scanf("%f", &x);
        printf("\nentrez un nemuro : ");
        scanf("%f", &y);
        result = x - y;
        printf("\nresult : %.2f", result);
    }
    else if(f == 4){
        float x;
        float y;
        printf("\nentrez un nemuro : ");
        scanf("%f", &x);
        printf("\nentrez un nemuro : ");
        scanf("%f", &y);
        if(y==0){
            printf("\nError!la division par 0 n'est pas acceptée");
        }else{
            result = x / y;
            printf("\nresult : %.2f", result);
        }
    }
    else if(f == 5){
        float x;
        float y;
        printf("\nentrez un nemuro : ");
        scanf("%f", &x);
        printf("\nentrez un nemuro : ");
        scanf("%f", &y);
        result = (x + y)/2;
        printf("result : %.2f", result);
    }else if(f == 6){
        int x;
        int y;
        printf("\nentrez un nemuro : ");
        scanf("%d", &x);
        result = abs(x);
        printf("result : %.2f", result);
    }else if(f == 7){
        float x;
        float y;
        printf("\nentrez un nemuro : ");
        scanf("%f", &x);
        printf("\nentrez un nemuro : ");
        scanf("%f", &y);
        result = powf(x,y);
        printf("\nresult : %.2f", result);
    }else if(f == 5){
        float x;
        float y;
        printf("\nentrez un nemuro : ");
        scanf("%f", &x);
        printf("\nentrez un nemuro : ");
        scanf("%f", &y);
        result = (x + y)/2;
        printf("result : %.2f", result);
    }else if(f == 6){
        int x;
        int y;
        printf("\nentrez un nemuro : ");
        scanf("%d", &x);
        result = sqrt(abs(x));
        printf("\nresult : %.2f", result);
    }   
        int nh;
        printf("\n1.revenir au menu principal\n2.faire un autre calcul");
        scanf("%d",&nh);
        if(nh==1){break;}
    }

    }
}

