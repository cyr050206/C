#include<stdio.h>
#include<conio.h>
void main()
{
    char a;
    int y;
    float r;
    printf("Enter the name of the movie \n");
    scanf("%s",&a);
    printf("Enter the year in which the movie was released \n");
    scanf("%d",&y);
    printf("Enter the rating of the movie on a scale of 1-5 \n");
    scanf("%f",&r);
    if(r<2)
    
    printf("FLOP! \n");
    
    if(r>=2 && r<=4)
  
    printf("SemiHIT! \n"); 
    
    if(r>4)
    printf("SUPERHIT!! \n");
    else
    printf("Enter a number u moron");
    getch();
    }
