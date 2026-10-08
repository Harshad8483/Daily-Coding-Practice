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

                 Create a variable Sum
                 Initialize Sum = 0

                 If Num is less than 0
                      Convert Num into a positive number

                 Repeat while Num is greater than 0

                      Extract the last digit of Num
                      and store it in Digit

                      Add Digit to Sum

                      Remove the last digit from Num

                 Call the sumOfDigits() function
                 and return the value of Sum

                 Store the returned value in Result

                 Display Result

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


int sumOfDigits(int num)
{
    int sum = 0;
    int digit;

    if(num < 0)
    {
        num = -num;
    }

    while(num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    return sum;
}

int main()
{
    int num;
    int result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = sumOfDigits(num);

    printf("Sum of digits = %d\n", result);

    return 0;
}
//////////////////////////////////////////////////////////////////////////////

/*
Step5 : Test the program

Test Case 1:
Input:
1234

Output:
Sum of digits = 10

Test Case 2:
Input:
-1234

Calculation:
1 + 2 + 3 + 4 = 10

Output:
Sum of digits = 10

Test Case 3:
Input:
567

Output:
Sum of digits = 18

Test Case 4:
Input:
0

Output:
Sum of digits = 0

*/
//////////////////////////////////////////////////////////////////////////////