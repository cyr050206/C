#include <stdio.h>
#include <conio.h>
float add(float num1, float num2)
{
    float total = num1 + num2;
    return total;
}
float subtract(float num1, float num2)
{
    float total = num1 - num2;
    return total;
}
float multiply(float num1, float num2)
{
    float total = num1 * num2;
    return total;
}
float divide(float num1, float num2)
{
    float total = num1 / num2;
    return total;
}
void main()
{
    float num1, num2, total;
    char c;
    printf("Enter your first number\n");
    scanf("%f", &num1);
    printf("Enter 2nd number\n");
    scanf("%f", &num2);
    printf("Enter the operator\n");
    scanf("");
    scanf(" %c", &c);
    if (c == '+')
    {
        total = add(num1, num2);
    }
    if (c == '-')
    {
        total = subtract(num1, num2);
    }
    if (c == '*')
    {
        total = multiply(num1, num2);
    }
    if (c == '/')
    {
        total = divide(num1, num2);
    }
    printf("The value is %.1f", total);
}