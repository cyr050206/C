#include<stdio.h>
int display(int n)
{
    int i, j;
    for (i = 0;i < n; i++)
    {
        for (j = i + 1; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

}
int main()
{
    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);
    display(n);
}