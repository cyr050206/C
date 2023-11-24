#include<stdio.h>
int main(){
    int n,r,x,num=0;
    printf("\nEnetr your number: ");
    scanf("%d", &n);
    x=n;
    while(n!=0)
    {
        r=n%10;
        num = num *10 + r;
        n/=10;
    }
    if(num == x)
    printf("Palindrome");
    else
    printf("NO");
    return 0;
}