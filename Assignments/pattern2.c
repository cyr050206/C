#include <stdio.h>
int main() 
{
    int n, i, j;
    for (i = 1; i <= 5; i++) 
    {
        for (j = 1; j <= 5 - i; j++) 
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++) 
        {
            printf("%c", 'A' + j - 1);
        }

        for (j = i - 1; j >= 1; j--) 
        {
            printf("%c", 'A' + j - 1);
        }

    printf("\n");
    }

    return 0;
}
