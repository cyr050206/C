#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
int sum(int a, int b){
int total=a+b;
printf("The total is %d\n",total);
}


float sqt(float a, float b){
   float total = sqrt(a);
   float total1 = sqrt(b);
   printf("The aquare root of %f is %.3f\n", a, total);
   printf("The aquare root of %f is %.3f\n", b, total1);
}


void main(){
    float a,b;
    char c;
    printf("Enter number 1\n");
    scanf(" %f", &a);
    printf("Enter number 2\n");
    scanf(" %f", &b);
    printf("Do you want to square root or add?\n");
    printf("1:R\n");
    printf("2:A\n");
    scanf(" %c", &c);
    c=toupper(c);
    if(c == 'A'){
         sum(a, b);
    }
    else if(c == 'R'){
         sqt(a, b);
    }

getch();

}
