#include<stdio.h>

int main(){
    int i=12;
    int* j=&i;
    printf("%d\n",j);
    printf("%p\n",j);
    printf("The address of i is: %p\n",&i);   
    printf("The address of i is: %u\n",&i);
    printf("The value at address is %u\n",&j);   
    printf("The value at address is %u\n",*j);   
    return 0;
}