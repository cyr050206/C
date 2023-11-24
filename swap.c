#include<stdio.h>
int main(){

int num1, num2, temp;
    printf("\n Enter 1st Number: ");
    scanf("%d", &num1);
    printf("\n Enter 2nd Number: ");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("The 1st Number after swapping is %d \n", num1);
    printf("The 2nd Number after swapping is %d \n", num2);
    return 0;
 }