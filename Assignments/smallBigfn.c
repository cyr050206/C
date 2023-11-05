#include<stdio.h>
#include<conio.h>
void max(int a, int b)
{
    a > b ? (printf("%d is greater\n", a)) : (printf("%d is greater\n", b));
}
void min(int a, int b)
{
    a < b ? (printf("%d is smaller\n", a)) : (printf("%d is smalller\n", b));
}
int main()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    max(a, b);
    min(a, b);
    getch();
}