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
//           We have to find the sum of all the digits
//           present in the given number.
//
//           For example:
//
//           If the number is 1234
//
//           Then,
//           1 + 2 + 3 + 4 = 10
//
//           Therefore, the sum of digits is 10.
//
/////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////
//
// Step2 : write the algorithm
/*
            START

                 Accept a number as Num

                 Create a variable Sum and initialize it with 0

                 Repeat while Num is greater than 0

                      Extract the last digit from Num
                      and store it into Digit

                      Add Digit to Sum

                      Remove the last digit from Num

                 Repeat the above steps until Num becomes 0

                 Display the value of Sum

            END
*/

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

/*
             Step3 : Decide the programming lang 

                      We select C programming language
*/

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

// Step4 : write the program

//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
// Function Name : Sum of Digits
// Input         : Integer
// Output        : Sum of all digits
// Description   : Calculate the sum of all digits of a given number
// Date          : 08/10/2026
// Author        : Harshad Rajaram Pathare
//////////////////////////////////////////////////////////////////////////////


int main()
{
    int num;
    int sum = 0;
    int digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////

/*
Step5 : Test the program

Input:

Num = 1234

Checking:

1234 % 10 = 4
Sum = 0 + 4 = 4

1234 / 10 = 123


123 % 10 = 3
Sum = 4 + 3 = 7

123 / 10 = 12


12 % 10 = 2
Sum = 7 + 2 = 9

12 / 10 = 1


1 % 10 = 1
Sum = 9 + 1 = 10

1 / 10 = 0

Therefore,

Sum of digits = 10

Output:

Sum of digits = 10

*/
//////////////////////////////////////////////////////////////////////////////