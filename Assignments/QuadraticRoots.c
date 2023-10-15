#include<stdio.h>
#include<Math.h>
int main(){
    double n1, n2;
    double a,b,c;
    printf("\nEnter the value of a: ");
    scanf("%lf", &a);
    printf("\nEnter the value of b: ");
    scanf("%lf", &b);
    printf("\nEnter the value of c: ");
    scanf("%lf", &c);
    n1 = ((-1)*b + sqrt((pow(b,2)) - 4*a*c)) / (double)2*a;
    n2 = ((-1)*b - sqrt((pow(b,2)) - 4*a*c)) / (double)2*a;
    printf("The Roots are %lf and %lf ", n1, n2);
    return 0;
}