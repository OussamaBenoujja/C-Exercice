#include <stdio.h>


typedef struct vector2D{
        int x;
        int y;
}vec;


int main(){
    vec *vector_1 , vector1;
    vector_1 = &vector1;
    printf("\nentrez (x,y)");
    scanf("%d,%d",&vector_1->x, &vector_1->y);
    printf("\nVector (%d , %d)",vector_1->x, vector_1->y);
}