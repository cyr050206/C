#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10], n, temp = 0;
    printf("Enter the elements of the array: ");
    scanf("%d", &n);
    printf("Enter the elements in the array: ");
    for (int i = 0;i < n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0;j < n;j++)
    {
        for (int i = 0;i < n;i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    for (int i = 0;i < n;i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}