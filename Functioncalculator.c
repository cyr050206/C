#include<stdio.h>
#include<conio.h>
void add(){

    printf("Welcome to Addition\n");
    float num1, num2, total;
    printf("enter the first number\n");
    scanf(" %f", &num1);
    printf("Enter Second Number\n");
    scanf(" %f", &num2);
    total = num1 + num2;
    printf("The sum of %f and %f is %.2f", num1, num2, total);
}
void subtract(){
    printf("Welcome to Subtraction\n");
    float num1, num2, total;
    printf("enter the first number\n");
    scanf(" %f", &num1);
    printf("Enter Second Number\n");
    scanf(" %f", &num2);
    total = num1 - num2;
    printf("The Difference of %f and %f is %.2f\n", num1, num2, total);
}
void divide(){
    printf("Welcome to Division\n");
    float num1, num2, total;
    printf("enter the first number\n");
    scanf(" %f", &num1);
    printf("Enter Second Number\n");
    scanf(" %f", &num2);
    total = num1 / num2;
    printf("%f divided by %f is %.2f\n", num1, num2, total);
}
void multiply(){
    printf("Welcome to Multiplication\n");
    float num1, num2, total;
    printf("enter the first number\n");
    scanf(" %f", &num1);
    printf("Enter Second Number\n");
    scanf(" %f", &num2);
    total = num1 * num2;
    printf("The product of %f and %f is %.2f\n", num1, num2, total);
}
char c;
int main(){
printf("Enter the operation you want to perform- (+ - * /)\n");
scanf(" %c", &c);
if(c == '+'){
    add();
}
else if(c == '-'){
    subtract();
}
else if(c == '*'){
    multiply();
}
else if(c == '/'){
    divide();
}
else{
    printf("Please enter a valid operator!\n");
}
return 0;
}