#include<stdio.h>
int main(){
    int a ,x, s=0;
    printf("\nEnter the Number: ");
    scanf("%d", &a);
    for(x=1;x<a;x++){
        if(a%x == 0)
        s = s + x;
    }
    if(s == x)
    printf("\n%d is a perfect number", a);
    else
    printf("\n%d is a not perfect number", a);

}