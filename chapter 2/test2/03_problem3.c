// Write a program to check whether a number is divisible by 97 or not.

#include<stdio.h>
;
int main(){
    int a;
    printf("Enter the number you want to check:\n");
    scanf("%d", &a);
    int b = 97;
    if (a%b == 0)
    {
        printf("The number is divisible by 97\n");
    }
    else{
        printf("The number is not divisible by 97\n");
    }
    
    printf("The remainder is: %d", a%b);
    return 0;
}