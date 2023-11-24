#include<stdio.h>
int main()
{
    int num1;
    int num2, num3, num4;
    printf("Enter num1 and num2 \n");
    scanf("%d%d", &num1, &num2);

    int* pNum1 = NULL;
    int* pNum2 = NULL;

    pNum1 = &num1;
    pNum2 = &num2;

    printf("the size adress of %d is %u\n", num1, pNum1);
    printf("the size adress of %d is %u\n", num2, pNum2);
    return 0;

}
