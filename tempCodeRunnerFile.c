#include<stdio.h>

int main()
{
    char a,b;
    int c,d,e,f,g;
    float h;
    printf("city a=");
    scanf("%s",&a);
    printf("city b=");
    scanf("%s",&b);
    printf("the distance between two cities in km=");
    scanf("%d",&c);
    d=c*1000;
    printf("the distance between two cities in metre=%d \n" ,d);
    e=c*3280;
    printf("the distance between two cities in feet=%d \n ",e);
    f=c*100000;
    printf("the distance between two cities in centimetres=%d \n" ,f);
    g=c*39370;
    printf("the distance between two cities in inches=%d \n" ,g);
    h=c*0.6921;
    printf("the distance between two cities in miles=%f \n" ,h);
    return 0;
}