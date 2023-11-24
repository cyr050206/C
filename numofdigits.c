#include<stdio.h>
#include<conio.h>
int main() {
    int n, x, i = 0;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    do
    {
        n /= 10;
        i++;
    } while (n != 0);

    printf("The number of digits are %d", i);
    return 0;
}