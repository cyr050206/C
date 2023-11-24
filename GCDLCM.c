#include <stdio.h>

int gcd(int a, int b) {
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    printf("gcd of %d and %d is %d.\n", num1, num2, gcd(num1, num2));
    printf("LCM of %d and %d is %d.\n", num1, num2, lcm(num1, num2));
    return 0;
}
