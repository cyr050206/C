#include<stdio.h>
#include<conio.h>
int main()
{
    float a, b;
    char c;
    float ans;
    printf("\nEnter 1st Number: ");
    scanf("%f", &a);
    printf("\nEnter 2nd Number: ");
    scanf("%f", &b);
    printf("\nWhat do you want to do?(+ - * / ): ");
    scanf(" %c", &c);
    switch (c)
    {
    case '+':
    {
        ans = a + b;
        printf("\nThe ans is %f", ans);
        break;
    }
    case '-':
    {
        ans = a - b;
        printf("\nThe ans is %f", ans);
        break;
    }
    case '*':
    {
        ans = a * b;
        printf("\nThe ans is %f", ans);
        break;
    }
    case '/':
    {
        ans = a / b;
        printf("The ans is %f", ans);
        break;
    }
    default:
        printf("\nWrong choice!");
    }
    return 0;
}