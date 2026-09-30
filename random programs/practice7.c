#include <stdio.h>

int main()
{
    int n, count = 0;
    int max1, max2, min1, min2;

    do
    {
        printf("Enter n: ");
        if (scanf("%d", &n) != 1) {
            break; // invalid input
        }

        if (n < 0)
            break;

        count++;

        if (count == 1)
        {
            max1 = max2 = min1 = min2 = n;
        }
        else if (count == 2)
        {
            int a = max1; // first value
            int b = n;    // second value

            // Highest and second highest (duplicates allowed)
            if (a >= b) {
                max1 = a;
                max2 = b;
            } else {
                max1 = b;
                max2 = a;
            }

            // Lowest and second lowest (duplicates allowed)
            if (a <= b) {
                min1 = a;
                min2 = b;
            } else {
                min1 = b;
                min2 = a;
            }
        }
        else
        {
            // Update max1 and max2 (duplicates allowed)
            if (n > max1) {
                max2 = max1;
                max1 = n;
            } else if (n >= max2) {
                // >= so equal values can become second highest
                max2 = n;
            }

            // Update min1 and min2 (duplicates allowed)
            if (n < min1) {
                min2 = min1;
                min1 = n;
            } else if (n <= min2) {
                // <= so equal values can become second lowest
                min2 = n;
            }
        }
    } while (1);

    if (count == 0)
    {
        printf("No non-negative values entered.\n");
    }
    else if (count == 1)
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
        printf("Second Lowest: %d\n", min2);
        printf("Lowest: %d\n", min1);
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