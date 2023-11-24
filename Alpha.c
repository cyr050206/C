#include<stdio.h>
#include<conio.h>
void main(){
    char alpha;
    printf("\nEnter a character: ");
    scanf("%c", &alpha);
    alpha = alpha + 1;
    printf("%c is the next character", alpha);
}