#include<stdio.h>
#include<String.h>
int main() {
    char c;
    char s[10];
    char cars[][10] = { "Ford", "Mustang", "Camero" };
    scanf("%s", &s);
    strcpy(cars[0], s);
    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s \n", cars[i]);
    }
    return 0;
}