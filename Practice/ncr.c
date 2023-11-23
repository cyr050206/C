#include<stdio.h>
#include<conio.h>
int fact(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}
int main()
{
    int n, r, p, ncr = 0, npr = 0;
    int nf, rf, pf;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    nf = fact(n);

    rf = fact(r);

    pf = fact(n - r);

    ncr = nf / (rf * pf);
    npr = nf / pf;
    printf("The NCr value is %d\n", ncr);
    printf("The Npr value is %d\n", npr);
    return 0;
}