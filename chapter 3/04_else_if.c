#include <stdio.h>
;
int main()
{
    int a;
    printf("Enter your age: \n");
    scanf("%d", &a);
    if (a >= 60)
    {
        printf("YOu can drive and you are a senior citizen");
    }
    else if (a >= 40)
    {
        printf("You can drive and you are an elder");
    }
    else if (a >= 18)
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You cannot drive\n");
    }

    return 0;
}