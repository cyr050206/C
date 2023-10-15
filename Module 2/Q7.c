/*WAP to compute the perimeter and area of a circle with a given radius. Write the algorithm and flowchart.*/
#include<stdio.h>
int main(){
    double a = 9.0, area,per;
    const double pi = 3.14;
    area = pi * a * a;
    per = 2 * pi * a;
    printf("\nThe area is %.3lf", area);
    printf("\nThe perimeter is %.3lf", per);
    return 0;
}