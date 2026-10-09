/*
Step1 : understand the problem statement
Step2 : write the algorithm
Step3 : Decide the programming lang
Step4 : write the program
Step5 : test the program

*/

/////////////////////////////////////////////////////////////////////
//
// Step 1 : understand the problem statement
//
//           User is going to enter an integer.
//
//           We have to count the total number of digits
//           present in the given integer.
//
//           If the number is negative, we ignore
//           the negative sign and count only the digits.
//
//           If the number is 0, its digit count is 1.
//
//           Example:
//
//           Number = 12345
//           Number of digits = 5
//
/////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////
//
// Step 2 : write the algorithm
/*
    START
    Accept Num
    Initialize Count = 0

    WHILE Num > 0
        Num = Num / 10
        Count = Count + 1
    END WHILE

    Display Count
    END
*/

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

/*
             Step 3 : Decide the programming lang

                      We select C programming language
*/

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////


// Step 4 : write the program

//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////
// Function Name : countDigits
// Input         : An integer
// Output        : Total number of digits
// Description   : Count the digits of an integer
// Date          : 09/10/2026
// Author        : Harshad Rajaram Pathare
//////////////////////////////////////////////////////////////////////////////


int main()
{
    int num;
    int count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num > 0)
    {
        num = num / 10;
        count++;
    }

    printf("Number of digits = %d\n", count);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////

/*
Step 5 : Test the program

Test Case 1:

Input:
12345

Output:
Number of digits = 5


Test Case 2:

Input:
786

Output:
Number of digits = 3


*/
//////////////////////////////////////////////////////////////////////////////