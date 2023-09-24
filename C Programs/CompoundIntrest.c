#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
void main()
{
    float p,t;
    float c,r;
    int i;
    printf("Enter the principal amount \n");
    scanf(" %f",&p);
    printf("Enter the rate of intrest \n");
    scanf(" %f",&r);
    printf("Enter the time in years \n");
    scanf(" %f",&t);
    c = p * (pow ( 1 + ( r / 100 ), t) );
    for (i=1;i<10;i++){
        printf(".");
        sleep(1);
    }
    printf("\n");
        printf("The Final amount is %f \n",c);
    printf("The compound intrest is %f \n",(c-p));
    getch();
    
}