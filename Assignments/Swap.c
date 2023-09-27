/*Write a program to swap two variables values with and without using third variables. Write algorithm
and draw flowchart for the same.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, temp;
    printf("\n Enter 1st number ");
    scanf("%d", &num1);
    printf("\n Enter 2nd number ");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("The 1st number is %d \n", num1);
    printf("The 2nd number is %d \n ", num2);
    return 0;
}*/

#include <stdio.h>

int main()
{
    int a, b;

    // Input two numbers
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the values without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
