#include<stdio.h>

typedef struct vector
{
    int i,j;
}vec;


int main(){
    vec v1 = {1,2};
    printf("The vector is %di + %dj",v1.i, v1.j);
    return 0;
}