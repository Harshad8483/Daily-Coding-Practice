#include <stdio.h>

int main()
{
    int num = 1234;

    int d1 = num % 10;
    int d2 = (num / 10) % 10;
    int d3 = (num / 100) % 10;
    int d4 = (num / 1000) % 10;

    int sum = d1 + d2 + d3 + d4;

    printf("Sum of digits = %d", sum);

    return 0;
}