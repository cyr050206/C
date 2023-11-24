#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b, odd=0, even=0;
    printf("\nEnter the number: ");
    scanf("%d", &a);
    for(int i = 1;i < a;i++)
    {
        if(i%2 == 0)
        even+=i;
        else
        odd+=i;
    }
    printf("Sum of odd terms : %d",odd);
    printf("\nSum of even terms : %d",even);

    return 0;
}