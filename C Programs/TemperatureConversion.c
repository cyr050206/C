#include<stdio.h>
#include<ctype.h>
int main(){
    float temp;
    char unit;
    printf("Is the temperature in Celsius or Farenhiet? \n");
    scanf(" %c", &unit);
    unit=toupper(unit);

    if(unit == 'C'){
        printf("Enter the temperature \n");
        scanf(" %f", &temp);
        temp = (temp * 9 / 5) + 32;
      printf("The temperature in Farenheit is %.1f", temp);
    }
    else if(unit == 'F'){
        printf("Enter the temperature in Farenheit\n");
        scanf(" %f", &temp);
        temp = ((temp - 32) * 5 ) / 9;
        printf("The temperature in Celsius is %.1f", temp);
    }
    else{
        printf("The entered variable is not a unit of measurment");
    }
    
    return 0;
}