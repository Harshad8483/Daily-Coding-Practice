#include <stdio.h>

int main()
{
    int num = 1234;
    int reverse = 0;
    int digit;

    digit = num % 10;
    reverse = reverse * 10 + digit;
    num = num / 10;

    digit = num % 10;
    reverse = reverse * 10 + digit;
    num = num / 10;

    digit = num % 10;
    reverse = reverse * 10 + digit;
    num = num / 10;

    digit = num % 10;
    reverse = reverse * 10 + digit;

    printf("Reverse = %d\n", reverse);

    return 0;
}