/* 
Write a C program to calculate area of a rectangle:
    a. Using hard coded inputs.
    b. Using inputs supplied by the user.
*/
// (a)
// #include<stdio.h>

// int main(){
//     int a = 5;
//     int b = 4;
//     printf("Area of rectangle = %d", a*b);
// }

// (b)
#include<stdio.h>

int main(){
    int a;
    int b;
    printf("Enter the length:\n");
    scanf("%d", &a);
    printf("Enter the beadth:\n");
    scanf("%d", &b);
    printf("\n The area of the rectangle = %d", a*b);
}