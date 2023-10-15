#include<stdio.h>
int main(){
    int a;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    (a%5 == 0 && a%9 == 0)? printf("YES"):printf("NO");
}