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

    IF Num == 0
        Count = 1
    ELSE
        IF Num < 0
            Convert Num to positive
        END IF

        WHILE Num > 0
            Num = Num / 10
            Count = Count + 1
        END WHILE
    END IF

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

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0)
    {
        count = 1;
    }
    else
    {
        if (num < 0)
        {
            num = -num;
        }

        while (num > 0)
        {
            num = num / 10;
            count++;
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
