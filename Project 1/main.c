#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));

    int random_number = (rand() % 100) + 1;
    int number_of_guesses = 0;
    int guessed;
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if (guessed > random_number)
        {
            printf("Lower number please\n");
        }
        else if(guessed < random_number)
        {
            printf("Higher number please\n");
        }
        number_of_guesses++;
    } while (guessed != random_number);
    printf("You guessed the number in %d guesses.", number_of_guesses);
    return 0;
}