#include<stdio.h>
int main(){
  int x=1;
  printf("%d %d %d\n", (x<<2));
  x<<2;
  printf("%d %d %d \n", ++x , x++, ++x);
  return 0;
}