#include<stdio.h>
#include<String.h>
int main(){
    char c;
    char cars[][10] = {"Ford", "Mustang", "Camero"};
    strcpy(cars[0], "Ferrari");
    for(int i = 0; i< sizeof(cars)/ sizeof(cars[0]); i++)
    {
        printf("%s \n", cars[i]);
    }
    return 0;
}