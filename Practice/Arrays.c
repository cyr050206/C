#include <stdio.h>
#include <conio.h>
int main()
{
    int prices[] = {4, 6, 7, 3, 5, 78};
    for (int i = 0; i < (sizeof(prices) / sizeof(prices[0])); i++)
    {
        printf("%d ", prices[i]);
    }
    return 0;
}