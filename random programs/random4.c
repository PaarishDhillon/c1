#include <stdio.h>

int main()
{
    int sum = 0;
    int n = 1;
    while(n<11){
        sum += n;
        printf("Sum = %d\n",sum);
        n++;
    }
    return 0;
}