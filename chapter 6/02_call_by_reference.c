#include<stdio.h>
int sum(int* a, int* b){
    *a=6;
    *b=12;
    return *a + *b;
}
int main(){
    int x = 5, y = 10;
    printf("Sum: %d\n", sum(&x, &y));
    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    return 0;
}