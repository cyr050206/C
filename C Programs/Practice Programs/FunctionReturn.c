#include<stdio.h>
#include<conio.h>
float time(float minutes){
return minutes*60;
}
int main(){
    float minutes;
    printf("Enter the time in minutes\n");
    scanf("%f", &minutes);
    minutes = time(minutes);
    printf("Time in seconds is %.2f", minutes);
    return 0;
}