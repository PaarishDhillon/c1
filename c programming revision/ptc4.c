#include <stdio.h>

int main()
{
    long long int a, b, c, d;

    printf("Enter four numbers: ");
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if (a >= b && a >= c && a >= d)
    {
        printf("%lld is the greatest number.", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("%lld is the greatest number.", b);
    }
    else if (c >= a && c >= b && c >= d)
    {
        printf("%lld is the greatest number.", c);
    }
    else
    {
        printf("%lld is the greatest number.", d);
    }

    return 0;
}