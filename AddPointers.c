#include<stdio.h>
#include<conio.h>
int add(int* a, int* b)
{
    int c;
    c = *a + *b;
    return c;
}

int main()

{
    int* a, c = 0, * b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    c = add(&a, &b);
    printf("The sum is %d", c);

    return 0;
}