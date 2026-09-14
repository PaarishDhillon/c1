#include<stdio.h>

typedef struct vector
{
    int i,j;
}vec;

vec sumvector(vec v1, vec v2){
    vec v3 = {v1.i + v2.i , v1.j + v2.j};
    return v3;
};

int main(){
    vec v1 = {1,2};
    vec v2 = {6,5};
    vec v3 = sumvector(v1,v2);
    printf("The sum of vectors is %di + %dj",v3.i, v3.j);
    return 0;
}