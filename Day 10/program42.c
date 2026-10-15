#include <stdio.h>

int main()
{
    int num = 121;
    int first, last;

    last = num % 10;

    first = num;
    while (first >= 10)
    {
        first = first / 10;
    }

    if (first == last)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a Palindrome\n");
    }

    return 0;
}