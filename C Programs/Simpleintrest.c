#include <stdio.h>
#include <conio.h>
void main()
{
  int p, t;
  float i, r;
  printf("Enter the principal Amount \n");
  scanf("%d", &p);
  printf("Enter the Rate of intrest \n");
  scanf("%f", &r);
  printf("Enter the Time in years \n");
  scanf("%d", &t);
  i = p * r * t / 100;
  printf("The simple intrest is $ %f \n", i);
  getch();
  //  clrscr();
}