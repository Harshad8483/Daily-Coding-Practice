/*
Step1 : Understand the problem statement
Step2 : Write the algorithm
Step3 : Decide the programming language
Step4 : Write the program
Step5 : Test the program
*/

//////////////////////////////////////////////////////////////////////
//
// Step 1 : Understand the problem statement
//
//          User is going to enter an integer.
//
//          We have to check whether the given number
//          is Even or Odd.
//
//          A number is Even if it is completely divisible
//          by 2.
//
//          A number is Odd if it leaves a remainder
//          when divided by 2.
//
//////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////
//
// Step 2 : Write the algorithm
/*

START

Create a function isEven()

    Accept a number

    Check number % 2

    If remainder is 0
        Return 1
    Otherwise
        Return 0

In main():

    Accept number

    Call isEven()

    Display Even or Odd

END

*/
//////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////
//
// Step 3 : Decide the programming language
//
//          We select C programming language.
//
//////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////
//
// Step 4 : Write the program
//
//////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////
//
// Function Name : Even or Odd
// Input         : Integer
// Output        : Even or Odd
// Description   : Check whether a number is Even or Odd
// Date          : 06/10/2026
// Author        : Harshad Rajaram Pathare
//
//////////////////////////////////////////////////////////////////////


int isEven(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num))
    {
        printf("%d is Even\n", num);
    }
    else
    {
        printf("%d is Odd\n", num);
    }

    return 0;
}

