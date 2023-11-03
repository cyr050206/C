#include <stdio.h>
void bruh(char[], int);

void bruh(char name[], int age)
{
    printf("\nYour name is %s", name);
    printf("\nYour age is %d", age);
}
int main()
{
    char name[] = "Cyrus Rumao";
    int age = 17;
    bruh(name, age);
    return 0;
}