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
/*
START
    Accept Num
    Initialize Reverse = 0

    WHILE Num > 0
        Digit = Num % 10
        Reverse = Reverse * 10 + Digit
        Num = Num / 10
    END WHILE

    Display Reverse
END
*\
//////////////////////////////////////////////////////////////////////////////

/*
Step 3 : Decide the programming language

         We select C programming language.
*/

//////////////////////////////////////////////////////////////////////////////


// Step 4 : Write the program

//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////
// Function Name : reverseNumber
// Input         : Integer and pointer to result
// Output        : Success or failure status
// Description   : Reverse an integer and check for overflow
// Author        : Harshad Rajaram Pathare
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int num;
    int reverse = 0;
    int digit;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("Reverse = %d\n", reverse);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////

/*
Step 5 : Test the program

Test Case 1:
Input: 1234

Reverse = 4321


Test Case 2:

Input: 567

Reverse = 765

*/
//////////////////////////////////////////////////////////////////////////////