#include<stdio.h>
int main(){
    int a,b,c,min;
    printf("\nEnter 1st number: ");
    scanf("%d", &a);
    printf("\nEnter 2nd number: ");
    scanf("%d", &b);
    printf("\nEnter 3rd number: ");
    scanf("%d", &c);
    min = a<b?((a<c)?a:c):((b<c)?b:c);
    printf("The Minimum value out of these three is %d ", min);
    return 0;

}