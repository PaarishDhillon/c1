#include <stdio.h>

int main()
{
    int n = 5;
    // int x = 5;
    // printf("Enter the number of rows: ");
    // scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        if (i < n)
        {
            for (int j = 0; j < i; j++)
            {
                printf("%d", i);
            }
            for (int l = 0; l < (n - i) * 2 - 1; l++)
            {
                printf(" ");
            }
            for (int j = 0; j < i; j++)
            {
                printf("%d", i);
            }
        }
        else
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                printf("%d", i);
            }
        }
        printf("\n");
    }
}