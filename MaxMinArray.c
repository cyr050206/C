#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],max = 0,i, min = 0;
    printf("\nEnter 10 elements in an array: ");
    for( i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    max = a[0];
    min = a[0];
    for( i=0;i<10;i++)
    {
        if(a[i]>max)
        max = a[i];
        if(a[i]< min)
        min = a[i];
    }
    printf("\nThe maximum value is %d", max);
    printf("\nThe minimum value is %d", min);

}