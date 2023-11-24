#include <stdio.h>
#include <conio.h>
int main()
{
     int num;
    printf("\nEnter the number of elements in array: ");
    scanf("%d", &num);
    char prices[num];
    for(int j =0; j< (num); j++)
    {
        printf("\nCharacter: ");
        scanf(" %c", &prices[j]);
    }
    for (int i = 0; i < (sizeof(prices) / sizeof(prices[0])); i++)
    {
        printf("%c ", prices[i]);
    }
    return 0;
}