#include <stdio.h>

int main()
{
    float x = 23.56712;
    float y, fraction;
    int whole_number;
    // printf("The value of x is: %.2f\n", x);
    // scanf("%f", &x);
    y = 100*x; // y = 2356.712
    whole_number = (int)y; // whole_number = 2356
    fraction = y - whole_number;
    if (fraction >= 0.5)
    {
        whole_number++; // 2357
    }
    x = (float)whole_number / 100; // x = 23.57
    printf("The rounded value of x is: %f\n", x);
    return 0;
}