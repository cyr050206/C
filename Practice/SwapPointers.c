#include<stdio.h>
#include<conio.h>
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("The numbers' addresses before swapping are %x and %x\n", &a, &b);
    swap(&a, &b);
    printf("The numbers' addresses after swapping are %x and %x\n", &a, &b);
    printf("The numbers after swapping are %d and %d", a, b);
    return 99;
}