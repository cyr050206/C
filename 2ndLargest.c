#include <stdio.h>
#include<conio.h>
void main()
{
    int a[100], i, n, temp, j;
    scanf("%d", &n);
    for (i = 0;i < n;i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0;i < n - 1;i++)
    {
        for (j = 0;j < n - 1 - i;j++)
        {
            if (a[j] > a[j + 1])
            {


                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

            }

        }
    }
    printf("max =%d secmax=%d", a[n - 1], a[n - 2]);
    //getch();
}