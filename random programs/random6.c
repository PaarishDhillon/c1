#include <stdio.h>

void swap_by_value(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    printf("a = %d, b = %d\n",x,y);
}

void swap_by_reference(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("a = %d, b = %d\n",*x,*y);
}

int main()
{
    int a = 12;
    int b  = 13;
    printf("Initial values = %d and %d\n",a,b);
    swap_by_value(a,b);
    swap_by_reference(&a,&b);
    return 0;
}