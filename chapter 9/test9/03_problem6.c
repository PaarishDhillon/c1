#include<stdio.h>

typedef struct c
{
    int real,imaginary;
}complex;

void display(complex c){
    printf("The complex number is: %d + %di",c.real, c.imaginary);
}

int main(){
    // int i,r;
    complex c;
    printf("Enter the value of real part: ");
    scanf("%d",&c.real);
    printf("Enter the value of imaginary part: ");
    scanf("%d",&c.imaginary);
    display(c);
    return 0;
}