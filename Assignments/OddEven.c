#include<stdio.h>
int main(){
    printf("\nEnter your Number: ");
    int a;
    scanf("%d", &a);
    if( a % 2 == 0){
        printf("\nThe Number is even" ,a);
    }
    else{
        printf("\nThe Number is odd", a);
    }
    return 0;
}