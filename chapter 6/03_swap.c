#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a=10, b=14;
    swap(&a,&b);
    printf("The value of a and b is %d and %d",a,b);
    return 0;
}