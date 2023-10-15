/*WAP to demonstrate addition, subtraction, multiplication, Division, Modulus for any two user input values.
Write the algorithm and flowchart.*/
#include<stdio.h>
int main(){
    int a ,b;
    printf("\nEnter 2 numbers : ");
    scanf("%d %d", &a, &b);
    printf(" \nThe sum of %d and %d is %d",a,b,a+b);
    printf("\nThe difference of %d and %d is %d",a,b,a-b);
    printf("\nThe product of %d and %d is %d",a,b,a*b);
    printf("\nThe division of %d and %d is %.2f",a,b,a/(float)b);
    return 0;
}