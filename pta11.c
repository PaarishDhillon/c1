#include <stdio.h>

int main()
{
    int n, count = 0, max1, max2, min1, min2, sum = 0;
    do
    {
        printf("Enter digits of the number one by one: ");
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
            sum +=n;
        }
        else if (count == 2)
        {
            if (n > max1)
            {
                max2 = max1;
                min2 = min1 = max2;
                max1 = n;
                sum +=n;
            }
            else
            {
                max2 = n;
                sum +=n;
            }
            if (n < min1)
            {
                min2 = min1;
                min1 = n;
                sum +=n;
            }
            else
            {
                min2 = n;
                sum +=n;
            }
        }
        else
        {
            if (n > max1)
            {
                // min1 = max1;
                max2 = max1;
                max1 = n;
                sum +=n;
            }
            else if (n > max2)
            {
                max2 = n;
                sum +=n;
            }
            if (n < min1)
            {
                min2 = min1;
                min1 = n;
                sum +=n;
            }
            else if (n < min2 && n > min1)
            {
                min2 = n;
                sum +=n;
            }
        }
    } while (n >= 0);
    if (count == 1)
    {
        printf("Highest: %d\n", max1);
        printf("Second Highest: 0\n");
    }
    else if (count == 2)
    {
        printf("Highest: %d\n", max1);
        printf("Second Highest: %d\n", max2);
    }
    // printf("%d\n",count);
    else
    {
        printf("Highest: %d\n", max1);
        printf("Second Highest: %d\n", max2);
    }
    printf("Sum of digits: %d",sum);
    return 0;
}