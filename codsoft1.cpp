#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int number, guess;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Guess the number between 1 and 100\n");
    while(guess!=number)
	{
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > number) 
		{
            printf("Too high! Try again.\n");
        } 
        else if (guess < number) 
		{
            printf("Too low! Try again.\n");
        } 
        else 
		{
            printf("Congratulations! You guessed the correct number.\n");
        }

    }
    return 0;
} 

