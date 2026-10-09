#include <stdio.h>

int main()
{
    int n, is_prime = 1;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<=1){
        printf("The number is niether prime nor composite.");
    }
    else{
        for(int i = 2; i <= n/2; i++){
            if(n % i == 0){
                is_prime = 0;
                break;
            }
        }
    }
    if(is_prime == 1){
        printf("The number is prime.");
    }
    else{
        printf("The number is not prime.");
    }
    return 0;
}