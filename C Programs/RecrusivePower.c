#include<stdio.h>
#include<conio.h>

int power(int n, int pow)
{
    if (pow == 0)
    {
        return 1;
    }
    else
    {
        return n * power(n, pow - 1);
    }
}

int main()
{
    int n, pow, g = 0;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    printf("Enter the power: ");
    scanf("%d", &pow);
    g = power(n, pow);
    printf("The ans is %d", g);
    return 0;
}