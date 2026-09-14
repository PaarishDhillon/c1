#include <stdio.h>
;
int main()
{
    int a, b;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    if ((a == 1 || a == 0) && (b == 1 || b == 0))
    {
        printf("The value of a and b is %d\n", a && b);
        printf("The value of a or b is %d\n", a || b);
        printf("The value of not(a) is %d\n", !a);
        printf("The value of not(b) is %d\n", !b);
    }
    // else{
    //     printf("The given values are not allowed");
    // }
    else
    {
        printf("The given values are not allowed.\n");
        if ((a != 1) && (a != 0))
        {
            printf("The value of a cannot be %d\n", a);
        }
        if ((b != 1) && (b != 0))
        {
            printf("The value of b cannot be %d\n", b);
        }
    }
    return 0;
}
// no other values than 1 and zero are allowed as 1 stands for true and zero stand for false