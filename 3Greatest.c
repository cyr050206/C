#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("\nEnter 1st number: ");
    scanf("%d", &a);
    printf("\nEnter 2nd number: ");
    scanf("%d", &b);
    printf("\nEnter 3rd number: ");
    scanf("%d", &c);
    max = (a>b) ? ((a>c) ? a:c) : ((b>c) ? b:c);
    printf("The Maximum value out of these three is %d ", max);
    return 0;
}