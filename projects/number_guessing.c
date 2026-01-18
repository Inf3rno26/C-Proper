#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int max = 100;
    int min = 1;

    int answer = (rand() % (max - min + 1) + min);

    do
    {
        printf("Enter your guesses (between 1 and 100): ");
        scanf("%d", &guess);
        tries++;

        if (guess < answer)
        {
            printf("Your Guess Needs to be bigger! \n");
        }
        else if (guess > answer)
        {
            printf("You guess needs to be smaller! \n");
        }
        else
        {
            printf("Wohoo! You guessed it corrctly! \n");
        }
    } while (guess != answer);

    printf("Your answer is %d. \n", answer);
    printf("It took you %d tries.", tries);
}