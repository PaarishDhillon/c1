#include <stdio.h>

int main()
{
    int n, count = 0, max1, max2, min1, min2;
    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
        if (n < 0)
        {
            // printf("Negative value recognized\n");
            break;
            // return count;
        }
        count++;
        if (count == 1)
        {
            max1 = n;
            max2 = n;
            min1 = n;
            min2 = n;
        }
        else if (count == 2)
        {
            if (n > max1)
            {
                max2 = max1;
                min2 = min1 = max2;
                max1 = n;
            }
            else
            {
                max2 = n;
            }
            if (n < min1)
            {
                min2 = min1;
                min1 = n;
            }
            else
            {
                min2 = n;
            }
        }
        else
        {
            if (n > max1)
            {
                // min1 = max1;
                max2 = max1;
                max1 = n;
            }
            else if (n > max2)
            {
                max2 = n;
            }
            if (n < min1)
            {
                min2 = min1;
                min1 = n;
            }
            else if (n < min2 && n > min1)
            {
                min2 = n;
            }
        }
    } while (n >= 0);
    if (count == 1)
    {
        printf("Highest: %d\n", max1);
        printf("Second Highest: No value entered\n");
        printf("Second Lowest: No value entered\n");
        printf("Lowest: %d\n", min1);
    }
    else if (count == 2)
    {
        printf("Highest: %d\n", max1);
        printf("Second Highest: %d\n", max2);
        printf("Second Lowest: %d\n", min1);
        printf("Lowest: %d\n", min1);
    }
    // printf("%d\n",count);
    else
    {
        printf("Highest: %d\n", max1);
        printf("Second Highest: %d\n", max2);
        printf("Second Lowest: %d\n", min2);
        printf("Lowest: %d\n", min1);
    }
    return 0;
}