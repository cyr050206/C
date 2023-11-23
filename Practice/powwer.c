#include<stdio.h>
int power(int y, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return y * power(y, n - 1);
}
int main()
{
    int y, n, x = 0;
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    x = power(y, n);
    printf("The ans is %d", x);
    return 0;
}

