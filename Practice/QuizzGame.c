#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main()
{
    char questions[][100] = { "Who was the first Indian prime minister?",
    "When did the first man land on the moon?",
    "When did India win their first world cup?" };
    char options[][100] = { "A. Cyrus Rumao ","B. Mahatma Gandhi ","C. Jawaharlal Nehru ","D. Indira Gandhi ",
    "A. 1956 ","B. 1987 ","C. 1969 ","D. 1983 ",
    "A. 1983 ","B. 1975 ","C. 1979 ","D. 1999 " };
    char answers[3] = { 'C', 'C', 'A' };
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;
    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("*********************\n");
        printf("%s\n", questions[i]);
        printf("*********************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf(" %s\n", options[j]);
        }
        printf("\nYour guess: ");
        scanf(" %c", &guess);
        scanf("");
        guess = toupper(guess);
        if (guess == answers[i])
        {
            printf("Correct!");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }
    }
    printf("Final Score:");
    printf(" %d/%d", score, numberOfQuestions);


    return 0;
}