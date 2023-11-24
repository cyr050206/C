#include<stdio.h>
#include<conio.h>
int rev(int a[10], int n)
{
    int start = 0;
    int end = n - 1, temp;
    while (start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int a[10], x[10], n;
    printf("Enter the elements in teh array: ");
    scanf("%d", &n);
    printf("Enter the elements in teh array: ");
    for (int i = 0;i < n;i++)
    {
        scanf("%d", &a[i]);
    }
    rev(a, n);
    printf("The reversed array is : \n");
    for (int i = 0;i < n;i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}