#include<stdio.h>
int main()
{
    int n, x, s = 0, p = 0;
    printf("\nEnter your number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        x = n % 10;
        p += x;
        s = s * 10 + x;
        n /= 10;
    }
    printf("\nThe reversed number is %d", s);
    printf("\nthe sum of digits is %d", p);
    return 0;
}