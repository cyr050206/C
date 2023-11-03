#include<stdio.h>
int main()
{
    int n,i,j;
    for(i = 0;i <= 4; i++)
    {
        for(j=i+1; j >=1 ; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}