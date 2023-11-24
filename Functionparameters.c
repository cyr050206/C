#include<stdio.h>
#include<conio.h>
void add(float num1, float num2){

    printf("Welcome to Addition\n");
    float total;
    total = num1 + num2;
    printf("The sum of %f and %f is %.2f", num1, num2, total);
}
void subtract(float num1, float num2){
   float total;
    total = num1 - num2;
    printf("The Difference of %f and %f is %.2f\n", num1, num2, total);
}
void divide(float num1, float num2){
    float total;
    total = num1 / num2;
    printf("%f divided by %f is %.2f\n", num1, num2, total);
}
void multiply(float num1, float num2){
    float total;
    total = num1 * num2;
    printf("The product of %f and %f is %.2f\n", num1, num2, total);
}
char c;
float num1, num2;
int main(){
    printf("Enter 1st number\n");
    scanf("%f", &num1);
    printf("Enter 2nd number\n");
    scanf("%f", &num2);
printf("Enter the operation you want to perform- (+ - * /)\n");
scanf(" %c", &c);
if(c == '+'){

    add(num1 ,num2);
}
else if(c == '-'){
    subtract(num1, num2);
}
else if(c == '*'){
    multiply(num1, num2);
}
else if(c == '/'){
    divide(num1, num2);
}
else{
    printf("Please enter a valid operator!\n");
}
return 0;
}