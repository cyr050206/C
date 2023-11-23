/*#include<stdio.h>
#include<conio.h>

int check(int n, int p)
{
    if (n % p == 1)
    {

        return 1;

    else
        return check(n, p - 1);
}
}


int main()
{
    int num1;
    int x = 0;
    printf("Enter a number: ");
    scanf("%d", &num1);
    x = check(num1, (num1 - 1));
    if (x == 1)
        printf("Prine");
    else
        printf("No prime");
    return 0;
}*/

#include <stdio.h>

int isPrime(int num, int i) {
    if (i == 1) {
        return 1;
    }
    else {
        if (num % i == 0) {
            return 0;
        }
        else {
            return isPrime(num, i - 1);
        }
    }
}
int main() {
    int num, check;
    printf("Enter a number: ");
    scanf("%d", &num);
    check = isPrime(num, num / 2);
    if (check == 1) {
        printf("%d is a prime number\n", num);
    }
    else {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}

