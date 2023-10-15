#include<stdio.h>
int main(){
    int marks;
    printf("\nEnter the marks: ");
    scanf("%d", &marks);
    if(marks<=100)
    {
        if(marks>60){
            printf("A grade!!");
        }
        else if(marks > 50){
            printf("B grade");
        }
        else if(marks >40){
            printf("C grade");
        }   
        else{
            printf("FAiled LMAO!");
        } 
        }
        else{
            printf("INVALID ENTRY");
        }
        return 0;
}