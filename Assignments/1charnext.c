#include<stdio.h>
void main()
{
    char ch;
    int a;
    printf("\nEnter the Character: ");
    scanf("%c", &ch);
    a = (int)ch;
    a++;
    ch = (char)a;
    printf("The next character in sequence is %c", ch);
    getchar();
}