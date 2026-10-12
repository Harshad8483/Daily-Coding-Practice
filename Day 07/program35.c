/*
Step1 : Understand the problem statement
Step2 : Write the algorithm
Step3 : Decide the programming language
Step4 : Write the program
Step5 : Test the program

*/

/////////////////////////////////////////////////////////////////////
//
// Step 1 : Understand the problem statement
//
//           User is going to enter an integer.
//
//           We have to reverse the digits of the given number.
//
//           For example:
//
//           Input  : 1234
//           Output : 4321
//
//           If the number is negative, we preserve its sign.
//
//           If the reversed number exceeds the range of int,
//           we display an appropriate error message.
//
/////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
//
// Step 2 : Write the algorithm
//
/*
            START

                 Accept an integer as Num

                 Call the reverseNumber() function

                 Inside reverseNumber():

                      Initialize Reverse = 0

                      Repeat while Num is not equal to 0

                           Extract the last digit using Num % 10

                           Check whether adding the digit
                           would cause integer overflow

                           If overflow occurs
                                Return failure
                           END IF

                           Update Reverse:
                                Reverse = Reverse * 10 + Digit

                           Remove the last digit:
                                Num = Num / 10

                      Repeat until Num becomes 0

                      Store Reverse in the output variable

                      Return success

                 In main():

                      If reversing is successful
                           Display the reversed number
                      Otherwise
                           Display an overflow message

            END
*/

//////////////////////////////////////////////////////////////////////////////

/*
Step 3 : Decide the programming language

         We select C programming language.
*/

//////////////////////////////////////////////////////////////////////////////


// Step 4 : Write the program

//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <limits.h>

//////////////////////////////////////////////////////////////////////////////
// Function Name : reverseNumber
// Input         : Integer and pointer to result
// Output        : Success or failure status
// Description   : Reverse an integer and check for overflow
// Author        : Harshad Rajaram Pathare
//////////////////////////////////////////////////////////////////////////////

int reverseNumber(int num, int *result)
{
    int reverse = 0;
    int digit;

    while (num != 0)
    {
        digit = num % 10;

        // Check positive integer overflow
        if (reverse > INT_MAX / 10 ||
            (reverse == INT_MAX / 10 &&
             digit > INT_MAX % 10))
        {
            return 0;
        }

        // Check negative integer overflow
        if (reverse < INT_MIN / 10 ||
            (reverse == INT_MIN / 10 &&
             digit < INT_MIN % 10))
        {
            return 0;
        }

        reverse = reverse * 10 + digit;

        num = num / 10;
    }

    *result = reverse;

    return 1;
}

//////////////////////////////////////////////////////////////////////////////

int main()
{
    int Num;
    int Result;

    printf("Enter an integer: ");

    if (scanf("%d", &Num) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (reverseNumber(Num, &Result))
    {
        printf("Reverse = %d\n", Result);
    }
    else
    {
        printf("Reversed number is out of range\n");
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////

/*
Step 5 : Test the program

Test Case 1:

Input:
Num = 1234

Checking:

1234 % 10 = 4
Reverse = 0 * 10 + 4 = 4

123 % 10 = 3
Reverse = 4 * 10 + 3 = 43

12 % 10 = 2
Reverse = 43 * 10 + 2 = 432

1 % 10 = 1
Reverse = 432 * 10 + 1 = 4321

Output:
Reverse = 4321


Test Case 2:

Input:
Num = -123

Output:
Reverse = -321


Test Case 3:

Input:
Num = 1200

Output:
Reverse = 21


Test Case 4:

Input:
Num = 0

Output:
Reverse = 0


Test Case 5:

Input:
Num = 1534236469

Output:
Reversed number is out of range

*/
//////////////////////////////////////////////////////////////////////////////