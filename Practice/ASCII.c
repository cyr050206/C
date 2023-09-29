#include<stdio.h>
int main(){
    char c;
    int s, a;
    printf("1: Character to Integer \n");
    printf("2: Integer to Character \n");
    printf("Make your choice : ");
    scanf("%d", &s);
    switch(s)
    {
    case 1:{
    printf("\nEnter the Character: ");
    scanf("%c", &c);
    a = (int)c;
    printf("Its ASCII value is %d " ,a);
    return 0;
    break;
}
case 2:{
    printf("\nEnter the Integer ");
    scanf("%d", &a);
    c = (char)a;
    printf("Its ASCII value is %c " ,c);
    return 0;
    break;
}
default:
printf("Make proper choices BOZO!");
}
}