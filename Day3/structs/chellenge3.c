#include <stdio.h>


struct rect{
    int height;
    int width;
};

int surface(struct rect f){
    return f.height * f.width;
}

int main(){
    struct rect _1;

    _1.height = 10;
    _1.width = 22;

    printf("%d",surface(_1));
}