#include<stdio.h>
int main(){

int num1, num2, temp;
    printf("\nEnter 1st Number: ");
    scanf("%d", &num1);
    printf("\nEnter 2nd Number: ");
    scanf("%d", &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nThe 1st Number after swapping is %d \n", num1);
    printf("\nThe 2nd Number after swapping is %d \n", num2);
    return 0;
 }