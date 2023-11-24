#include<stdio.h>
#include<String.h>
int main(){
    char ch;
    printf("\nEnter a character: ");
    scanf("%c",&ch);
    ch = toupper(ch);
    if(ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U')
    {
        printf("%c is a vowel", ch);
    }
    else{
        printf("NO");
    }
    return 0;
}