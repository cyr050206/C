#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10];
    int* pA;
    int i;
    printf("Enter 10 numbers: ");
    for (int i = 0;i < 9;i++)
    {
        scanf("%d", &a[i]);
    }
    *pA = a[0];
    for (int i = 0;i < 10;i++)
    {
        //*pA[i] = a[i];
        printf("%d\n", pA[i]);
    }

    return 0;
}