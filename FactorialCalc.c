#include <stdio.h>
int factorial(int n)
{
    if (n == 0)
    {
    return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}


int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The factorial of %d is %d\n", a, factorial(a));
    printf("The factorial of %d is %d\n", b, factorial(b));
    return 0;
}
