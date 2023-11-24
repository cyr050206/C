#include<stdio.h>
int main(){
    float basic, net;
    int a=2,b=5,c=10;
    float da, hra = 150, ta = 120, oth = 450, pf, it;
    printf("\nEnter the Basic Salary: ");
    scanf("%f", &basic);
    da = 0.12 * basic;
    pf = 0.14 * basic;
    it = 0.15 * basic;
    //Net Salary = Basic Salary + DA + HRA + TA + Others – (PF + IT)
    net = basic + da + hra + ta + oth - (pf + it);
    printf("The Net salary of the employee is %.3f \n", net);
    return 0;
}