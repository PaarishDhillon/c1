#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main(void)
{
    int roll[N], age[N], marks[N];
    int i, j, temp;

    srand((unsigned int)time(NULL));

    // Generate random data for 20 students
    for (i = 0; i < N; i++)
    {
        roll[i] = 1000 + rand() % 1001;
        age[i] = 15 + rand() % 11;
        marks[i] = rand() % 101;
    }

    // Display all generated data
    printf("Original student records:\n");

    for (i = 0; i < N; i++)
    {
        printf("Roll: %d  Age: %d  Marks: %d\n",
               roll[i], age[i], marks[i]);
    }

    // Sort records by age in increasing order
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - 1 - i; j++)
        {
            if (age[j] > age[j + 1])
            {
                temp = age[j];
                age[j] = age[j + 1];
                age[j + 1] = temp;

                temp = roll[j];
                roll[j] = roll[j + 1];
                roll[j + 1] = temp;

                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    // Part (a): Display students with the same age
    printf("\n(a) Students having the same age:\n");

    for (i = 0; i < N; i++)
    {
        int count = 0;

        for (j = 0; j < N; j++)
        {
            if (age[i] == age[j])
                count++;
        }

        if (count > 1 &&
            (i == 0 || age[i] != age[i - 1]))
        {
            for (j = 0; j < N; j++)
            {
                if (age[i] == age[j])
                {
                    printf("Roll: %d  Age: %d  Marks: %d\n",
                           roll[j], age[j], marks[j]);
                }
            }

            printf("\n");
        }
    }

    // Part (b): Display students having identical marks
    printf("\n(b) Students having identical marks:\n");

    for (i = 0; i < N; i++)
    {
        int count = 0;

        for (j = 0; j < N; j++)
        {
            if (marks[i] == marks[j])
                count++;
        }

        // Print each repeated mark group only once
        if (count > 1)
        {
            int already_printed = 0;

            for (j = 0; j < i; j++)
            {
                if (marks[i] == marks[j])
                {
                    already_printed = 1;
                    break;
                }
            }

            if (!already_printed)
            {
                printf("\nMarks = %d\n", marks[i]);

                for (j = 0; j < N; j++)
                {
                    if (marks[i] == marks[j])
                    {
                        printf("Roll: %d  Age: %d  Marks: %d\n",
                               roll[j], age[j], marks[j]);
                    }
                }
            }
        }
    }

    return 0;
}