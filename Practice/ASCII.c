#include<stdio.h>
int main(){
    char c;
    int a;
    printf("\nEnter the Character: ");
    scanf("%c", &c);
    a = (int)c;
    printf("Its ASCII value is %d " ,a);
    return 0;
}