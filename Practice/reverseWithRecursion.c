#include <stdio.h>

int reverse(int n, int rev) {
    if (n == 0)
        return rev;
    else
        return reverse(n / 10, rev * 10 + n % 10);
}

int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = reverse(num, 0);
    printf("The reversed number is %d\n", result);
    return 0;
}
