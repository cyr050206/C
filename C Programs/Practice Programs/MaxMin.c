#include<stdio.h>
#include<conio.h>
int Max(int x, int y)
{
  return(x > y) ? x : y; //(condition) ? value 1(True) : value 2(False)
}
int main(){
    int num1, num2;
printf("Enter 1st number\n");
scanf("%d", &num1);
printf("Enter 2nd number\n");
scanf("%d", &num2);
int o = Max(num1, num2);

printf("The larger number is %d", o);
    getch();

}