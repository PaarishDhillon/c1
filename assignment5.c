#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char num[100];
    printf("Enter the number: ");
    scanf("%s", num);
    int n;
    int number[100];
    int count = 0, i, max1, max2, min1, min2, sum = 0;
    printf("%d\n", n);
    for (int j = 0; j <= strlen(num); j++)
    {
        number[i] = num[i] - '0';
    }
    while (i <= strlen(num))
    {
        // char ch = num[i];
        n = number[i];
        // printf("Enter digits of the number one by one: ");
        // scanf("%d", &n);
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
            sum += n;
        }
        else if (count == 2)
        {
            if (n > max1)
            {
                max2 = max1;
                min2 = min1 = max2;
                max1 = n;
                sum += n;
            }
            else
            {
                max2 = n;
                sum += n;
            }
            if (n < min1)
            {
                min2 = min1;
                min1 = n;
                sum += n;
            }
            else
            {
                min2 = n;
                sum += n;
            }
        }
        else
        {
            if (n > max1)
            {
                // min1 = max1;
                max2 = max1;
                max1 = n;
                sum += n;
            }
            else if (n > max2)
            {
                max2 = n;
                sum += n;
            }
            if (n < min1)
            {
                min2 = min1;
                min1 = n;
                sum += n;
            }
            else if (n < min2 && n > min1)
            {
                min2 = n;
                sum += n;
            }
        }
    }
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
    printf("Sum of digits: %d\b", sum);
    return 0;
}