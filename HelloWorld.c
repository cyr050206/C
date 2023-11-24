#include<stdio.h>
#include<conio.h>

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int n1, n2, g = 0;
    printf("\nEnter 1st number: ");
    scanf("%d", &n1);
    printf("Enter 2nd number: ");
    scanf("%d", &n2);
    g = add(n1, n2);
    printf("The sum is %d", g);
    return 0;
}