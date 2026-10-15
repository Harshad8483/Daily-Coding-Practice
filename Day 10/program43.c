#include <stdio.h>

int main()
{
    int num = 12321;
    int temp, digit, reverse = 0;

    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if (num == reverse)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a Palindrome\n");
    }

    return 0;
}