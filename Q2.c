/*WAP to initialize the values 37, 106, 78, 64, 210 and print their corresponding ASCII characters.*/
#include<stdio.h>
int main(){
    int a=37,b=106,c=78,d=64,e=210;
    char p,q,r,s,t;
    p=(char)a;
    q=(char)b;
    r=(char)c;
    s=(char)d;
    t=(char)e;
    printf("The ASCII characters of %d is %c \n", a,p);
    printf("The ASCII characters of %d is %c \n", b,q);
    printf("The ASCII characters of %d is %c \n", c,r);
    printf("The ASCII characters of %d is %c \n", d,s);
    printf("The ASCII characters of %d is %c \n", e,t);
    return 0;
}