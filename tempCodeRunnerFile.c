#include <stdio.h>
int main() {
int i,n;
int n1 =0 , n2 = 1;
int next = n1+n2;
printf("\nEnter value of n: ");
scanf("%d", &n);
printf("%d %d ", n1, n2);
for(i = 3;i<= n;i++)
{
    printf("%d ", next);

    n1 = n2;
    n2 = next;
    next = n1+n2;
    }
    return 0;
}