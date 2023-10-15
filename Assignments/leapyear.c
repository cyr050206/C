#include<stdio.h>
int main(){
    int year;
    printf("\nEnter a year: ");
    scanf("%d", &year);
    year%4  == 0? printf("Leap year!"):printf("NO");
    return 0;
}