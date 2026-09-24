#include <stdio.h>

int main()
{
    int n, max1, max2, min1, min2;
    int count = 0;
    // max1 = max2 = min1 = min2 = n;
    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Negative value!\n");
            break;
        }
        else
        {
            count++;
            if (count == 1)
            {
                max1 = max2 = min1 = min2 = n;
            }
            if(count > 1)
            {
                if (n >= max1)
                {
                    max2 = max1;
                    max1 = n;
                }
                else if (n > max2 || count == 2)
                {
                    max2 = n;
                }
                if (n < min1)
                {
                    min2 = min1;
                    min1 = n;
                }
                else if (n < min2 || count == 2)
                {
                    min2 = n;
                }
            }
        }

    } while (n >= 0);
    if (count == 1)
    {
        printf("Highest: %d\n", max1);
        printf("Second Highest: No value entered\n");
        printf("Second Lowest: No value entered\n");
        printf("Lowest: %d\n", max1);
    }
    else
    {
        printf("Highest: %d\n", max1);
        printf("Second Highest: %d\n", max2);
        printf("Second Lowest: %d\n", min2);
        printf("Lowest: %d\n", min1);
    }
    return 0;
}