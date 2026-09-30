#include <stdio.h>

int main()
{
    int x = 0, a1 = 4;
    for (;;)
    {
        if (x++ == a1)
            break;
            continue;
    }
    printf("x=%d\n", x);
    
    return 0;
}
