#include <stdio.h>

int main()
{
    int sum = 0;
    for(int n = 1; n<11; n++){
        sum+=n;
        printf("sum = %d\n",sum);
    }
    return 0;
}