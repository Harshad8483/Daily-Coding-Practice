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

                 Accept an integer as Num

                 Call the countDigits(Num) function

                 Inside countDigits():

                      Convert Num into a long long value

                      If Num is negative
                           Convert Num to positive
                           safely
                      END IF

                      Initialize Count = 0

                      Repeat the following steps:

                           Divide Num by 10
                           Increase Count by 1

                      Until Num becomes 0

                      Return Count

                 Store the returned value in Result

                 Display Result

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

int countDigits(int num)
{
    long long value = num;
    int count = 0;

    if (value < 0)
    {
        value = -value;
    }

    do
    {
        value = value / 10;
        count++;
    }
    while (value > 0);

    return count;
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

    Result = countDigits(Num);

    printf("Number of digits = %d\n", Result);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////

/*
Step 5 : Test the program

Test Case 1:

Input:
Num = 12345

Checking:

12345 / 10 = 1234
1234  / 10 = 123
123   / 10 = 12
12    / 10 = 1
1     / 10 = 0

Count = 5

Output:
Number of digits = 5


Test Case 2:

Input:
Num = -786

The negative sign is ignored.

786 contains 3 digits.

Output:
Number of digits = 3


Test Case 3:

Input:
Num = 0

The do-while loop executes once.

Count = 1

Output:
Number of digits = 1


Test Case 4:

Input:
Num = 1000

1000 / 10 = 100
100  / 10 = 10
10   / 10 = 1
1    / 10 = 0

Count = 4

Output:
Number of digits = 4

*/
//////////////////////////////////////////////////////////////////////////////