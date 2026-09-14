#include <stdio.h>

// Function prototype for sum function
int sum(int, int);
// Function definition for sum function
int sum(int x, int y)
{
    printf("The sum of %d and %d is %d\n", x, y, x + y); /*if this line is removed then no ouptut will be given by 
     the prohram but it will sum the numbers and stire the value and the output can be recieved by printing the 
     variable stroing the value of the program*/
    return x + y; //creates a return value of the sum of x and y
}

int main()
{
    // int a,b;
    // sum(a=2, b=4);
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    int b;
    printf("Enter the value of b: ");
    scanf("%d", &b);
    sum(a, b);
    // int c = sum(a, b); //creates a variable c that stores the return value of the sum function
    // printf("The sum of %d and %d is %d\n", a, b, c);
    // sum(5, 10);
    // sum(18,24);
    return 0;
}