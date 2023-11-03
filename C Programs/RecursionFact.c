#include<stdio.h>
#include<conio.h>

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int n, g;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    g = fact(n);
    printf("THe factorial is %d", g);
    return 0;
}