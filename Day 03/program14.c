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

                 Accept a number as Num

                 Calculate Num % 2

                 If remainder is equal to 0
                      Display "Number is Even"

                 Otherwise
                      Display "Number is Odd"

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


int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is Even\n", num);
    }
    else
    {
        printf("%d is Odd\n", num);
    }

    return 0;
}

