#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int answer, guess;
    int guesses = 0;
    srand(time(0));
    answer = (rand() % MAX) + MIN;
    do
    {
        printf("\nEnter your guess: ");
        scanf(" %d", &guess);
        if (guess > answer)
        {
            printf("\nA lil to high!");
        }
        else if (guess < answer)
        {
            printf("\nA bit to low!");
        }
        else {
            printf("\nCorrect!!!");
        }
        guesses++;
    } while (guess != answer);
    printf("\nThe number of guesses is %d", guesses);
    printf("\nThe Answer is %d", answer);

    return 0;
}