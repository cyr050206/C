//Write a C program to reverse the elements of an array.
#include<stdio.h>
#include<conio.h>
int main()
{ 
    int a[20],i=0,j,n,temp = 0;
    printf("\nEnter the number of elements in the array:\n ");
    scanf("%d", &n);
    printf("\nEnter %d elements in array", n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n / 2; i++) 
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    printf("\nThe reversed array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}