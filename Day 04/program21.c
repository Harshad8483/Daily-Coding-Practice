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
//           User is going to enter two integers.
//
//           We have to compare both numbers
//           and find which number is greater.
//
//           If both numbers are equal,
//           we have to display that both numbers are equal.
//
/////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////
//
// Step2 : write the algorithm
/*
            START

                 Accept the first number as No1

                 Accept the second number as No2

                 Compare No1 and No2

                 If No1 is greater than No2
                      Display No1 as the largest number

                 Else if No2 is greater than No1
                      Display No2 as the largest number

                 Otherwise
                      Display "Both numbers are equal"

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
// Function Name : Find Largest of Two Numbers
// Input         : Two integers
// Output        : Largest number or Equal
// Description   : Compare two numbers and find the largest number
// Date          : 07/10/2026
// Author        : Harshad Rajaram Pathare
//////////////////////////////////////////////////////////////////////////////



int findLargest(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int num1, num2;
    int largest;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2)
    {
        printf("Both numbers are equal");
    }
    else
    {
        largest = findLargest(num1, num2);

        printf("%d is the largest number", largest);
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////

/*
Step5 : Test the program

Test Case 1:

Input:

No1 = 10
No2 = 20

Checking:

10 > 20  -> False
20 > 10  -> True

Therefore,

20 is the largest number

Output:

20 is the largest number


Test Case 2:

Input:

No1 = 50
No2 = 30

Checking:

50 > 30  -> True

Therefore,

50 is the largest number

Output:

50 is the largest number


Test Case 3:

Input:

No1 = 25
No2 = 25

Checking:

25 > 25  -> False
25 > 25  -> False

Therefore,

Both numbers are equal

Output:

Both numbers are equal

*/
//////////////////////////////////////////////////////////////////////////////