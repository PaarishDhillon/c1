#include <stdio.h>

int main()
{
    int x = 42;
    int* ptr = &x;
    printf("Address: %p\n", ptr);
    printf("Address: %d\n", ptr);
    return 0;
}