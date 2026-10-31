
#include <stdio.h>

int main()
{
    int n, num = 2, count = 0;

    // printf("Enter the value of an integer: ");
    // scanf("%d", &n);

    n=10;

    for (int i = 1; count < n; i++)
    {
        for (int j = 1; j <= i && count < n; j++)
        {
            int prime = 1;

            for (int k = 2; k * k <= num; k++)
            {
                if (num % k == 0)
                {
                    prime = 0;
                    break;
                }
            }

            if (prime)
            {
                printf("%d ", num);
                count++;
            }
            else
            {
                j--;  // Retry this position with the next number
            }

            num++;
        }

        printf("\n");
    }

    return 0;
}
