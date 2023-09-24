#include<stdio.h>
#include<conio.h>
int main(){
    int x;
    char d;
    int y;
    printf("Do you want to convert char to int or int to char?\n");
    printf("1:Char to int\n");
    printf("2:Int to char\n");
    scanf("%d",&x);    
    switch(x)
    {
    case 1:
        printf("Enter your Character\n");
        scanf(" %c", &d);
        y=(int)d;
        printf("The Integer value of %c is %d",d,d);
    break;
    case 2:
        printf("Enter the number whose ASCII value you want\n");
        scanf("%d",&y);
        d=(char)y;
        printf("The character held by the ASCII value %d is %c",y,y);
    break;
    }
    return 0;
}