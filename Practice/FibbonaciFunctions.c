#include<stdio.h>
#include<conio.h>
void series(int n)
{
    int n1 = 0;
    int n2 = 1;

    int n3 = 0;
    for (int i = 0;i < n;i++)
    {
        n3 = n1 + n2;
        n2 = n2 + n3;
        printf("%d", n3);
    }
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("0\n");
    printf("1");
    series(n - 2);
    return 0;
}