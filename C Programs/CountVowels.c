#include<stdio.h>
#include<conio.h>
#include<String.h>
int consonants(char s[10])
{
    int i, c = 0;
    s = toupper(s);
    for (i = 0;i < sizeof(s) / sizeof(s[0]);i++)
    {
        // s[i] = toupper(s[i]);
        if (s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')
        {
            c++;
        }
    }
    return c;
}

int vowels(char s[10])
{
    int i, v = 0;
    for (i = 0;i < sizeof(s) / sizeof(s[0]);i++)
    {
        s[i] = toupper(s[i]);
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            v++;
    }
    return v;
}

int main()
{
    char s[10];
    int v, c;
    printf("\nEnter a String: ");
    scanf("%s", &s);
    v = vowels(s);
    c = consonants(s);
    printf("\nThe NUmber of vowels are %d", v);
    printf("\nThe Number of consonants are %d", c);
    return 0;
}