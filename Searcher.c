// Develop a program to check if a specific element exists in an array or not.

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[10], x = 0, i, n, z = 0;

    printf("\nEnter the elements in an array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            x++;
            z = i;
        }
    }
    if (x >= 1)
    {
        printf("\nElement is there!");
        printf("\nFrequency is %d", x);
        printf("\nThe locationn of element is %d index", z + 1);
    }
    else
        printf("\nElement is not there!");
    return 0;
}
