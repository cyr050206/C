//Implement a program to merge two arrays into a third array and print the merged array.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20], b[20], c[90], i , n, n1, n2;
    printf("Enter the number of elements in array 1: ");
    scanf("%d", &n1);
    printf("Enter the number of elements in array 2: ");
    scanf("%d", &n2);
    printf("Enter the elements in array 1: ");
    for(i=0;i<n1;i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the elements in array 2: ");
    
    for(i=0;i<n2;i++)
    {
        scanf("%d", &b[i]);
    }
    
    for(i=0;i<n1;i++)
    {
        c[i] = a[i];
    }
    
    for(i=0;i<n2;i++)
    {
        c[n1+i] = b[i];
    }
    
    printf("\nThe final merged array is: ");
    
    for(i=0;i<n1+n2;i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}