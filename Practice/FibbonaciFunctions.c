/*#include<stdio.h>
#include<conio.h>
int series(int a)
{
    int n1 = 0;
    int n2 = 1;

    int n3;
    for (int i = 0;i < a;i++)
    {
        n3 = n1 + n2;

        printf("%d ", n3);
        n1 = n2;
        n2 = n3;

    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("0 ");
    printf("1 ");
    series(n - 2);
    return 0;
}
*/
#include<stdio.h>
#include<conio.h>
//int n3;
void series(int a, int n1, int n2)
{
    int n3;

    if (a > 0)
    {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
        series(a - 1, n1, n2);
    }
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("0 ");
    printf("1 ");
    series(n - 2, 0, 1);
    return 0;
}