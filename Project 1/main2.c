#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int random_number = rand() %100 + 1;
    int guessed_number;
    int attempts = 0;
    do{
        printf("Guess the number between 1 and 100: ");
        scanf("%d", &guessed_number);
        if(guessed_number<random_number){
            printf("Try a higher number.\n");
        }
        else if(guessed_number>random_number){
            printf("Try a lower number.\n");
        }
        attempts++;
    }while(guessed_number != random_number);
    printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
    return 0;
}