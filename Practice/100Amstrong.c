#include<stdio.h>
#include<Math.h>
  void Arm(int n){
    float x, b;
    float s=0.0 , i;
    b=n;    //b=153
    while(n>0)
    {
    x=n%10;  //x=3  x=5 x=1
    i = x*x*x;  // i=27   i = 125  i=1
    s = s + i; // s=27  s= 152  s=153
    n=n/10;  // 15  1
    }
    if(b == s){
    printf("%.2f is armstrong\n", b);
    }
    else{
    printf("");
   }
  }
  int main(){
    int z;
    printf("\nEnetr n Numbers: ");
    scanf("%d" ,&z);
        for(int j = 0; j <z ; j++)
    {
       Arm(j);
    }
    return 0;
  }