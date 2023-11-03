#include<stdio.h>
#include<Math.h>
int main(){
    double n1, n2,d;
    double a,b,c;
    printf("\nEnter the value of a: ");
    scanf("%lf", &a);
    printf("\nEnter the value of b: ");
    scanf("%lf", &b);
    printf("\nEnter the value of c: ");
    scanf("%lf", &c);
    d=b*b - 4*a*c;
    n1 = ((-1)*b + sqrt((pow(b,2)) - 4*a*c)) / (double)2*a;
    n2 = ((-1)*b - sqrt((pow(b,2)) - 4*a*c)) / (double)2*a;
    if(d<0)
    {
        printf("\nThe Roots dont exist!");
    }
    if(d == 0)
    {
        printf("\nThe roots are equal and equal to %lf", n1);
    }
    if(d>0)
    {
        printf("\nThe roots are %lf and %lf", n1,n2);
    }
    
    return 0;
}