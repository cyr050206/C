//calculate the number of even and odd elements in an array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i ,x=0,y=0;
    printf("\nEnter the elements of the array: ");
    for(i=0;i<10;i++)
    {
        scanf(" %d", &a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2 == 0)
        {
        x++;
        }
        else
        {
        y++;
        }
    }
    printf("\nThe number of even elements is %d", x);
    printf("\nThe number of odd elements is %d", y);
}
  