#include <stdio.h>
#include <math.h>
#include <stdbool.h>

struct vec2{
    int x;
    int y;
};

bool containsPoint(struct vec2 lineP,struct vec2  lineQ,struct vec2 point)
{
    float dxPQ = lineP.x - lineQ.x;
    if (dxPQ == 0.f) {
        return (point.y - lineP.y) * (point.y - lineQ.y) <= 0.f;
    }

    float dyPQ = lineP.y - lineQ.y;
    float c = lineP.y * dxPQ - lineP.x * dyPQ;
    bool xBetween = ((point.x - lineP.x) * (point.x - lineQ.x) <= 0.f);
    return xBetween && point.x * dyPQ + c * dxPQ == point.y * dxPQ;  
}

int main(){
    struct vec2 pA;
    struct vec2 pB;
    struct vec2 pC;
    

    printf("\nentree point A (x,y) : ");
    scanf("\n");
    scanf("%f,%f",&pA.x,&pA.y);

    printf("\nentree point B (x,y) : ");
    scanf("\n");
    scanf("%f,%f",&pB.x,&pB.y);

    printf("\nentree point C (x,y) : ");
    scanf("\n");
    scanf("%f,%f",&pC.x,&pC.y);
    
    bool check = containsPoint(pA, pB, pC);

    if(check==1){
        printf("le point C est dans segment AB");
    }else{
        printf("le point C est a exterieur du segment");
    }

}