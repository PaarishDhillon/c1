#include <stdio.h>

void DisplayForward(int n){
    if(n==0){
        return;
    }

    DisplayForward(n/10);
    printf("%d",n%10);
}

int main()
{
    DisplayForward(2345);
    return 0;
}