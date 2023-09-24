#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char symbol;
    printf("Enter the symbol to enter:");
    scanf("%c", &symbol);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
}