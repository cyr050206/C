#include<stdio.h>
int main()
{
    int n,x,s=0;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        x=n%10;
        s+=x;
        n/=10;
    }
    printf("\nThe sum of digits is %d", s);
    return 0;
}