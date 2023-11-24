#include<stdio.h>
int main(){
    int age;
    printf("\nEnter the age : ");
    scanf("%d", &age);
    if(age>18){
        printf("Can vote");
    }
    else {
        printf("NO");
    }
    return 0;
}