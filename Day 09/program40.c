    /*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
    */

    /////////////////////////////////////////////////////////////////////
    //
    // Step 1 : Understand the problem statement
    //
    // Problem : Check whether a given number is prime or not.
    //
    // Input   : An integer number.
    //
    // Output  : Display whether the number is Prime or Not Prime.
    //
    // Example :
    // Input   : 7
    // Output  : 7 is a Prime Number
    //
    // Input   : 10
    // Output  : 10 is Not a Prime Number
    //
    /////////////////////////////////////////////////////////////////////

    /*
    Step 2 : Write the algorithm

    1. Start.
    2. Read a number from the user.
    3. If the number is less than or equal to 1, it is not prime.
    4. Otherwise, check divisibility starting from 2.
    5. Continue checking while i <= num / i.
    6. If num % i == 0, return 0 (Not Prime).
    7. If no divisor is found, return 1 (Prime).
    8. Display the result.
    9. Stop.
    */

    /*
    Step 3 : Decide the programming language

    Language : C language 


    Step 4 : Write the program
    */

#include <stdio.h>

    // Function Name : isPrime
    // Input         : An integer number
    // Output        : 1 if prime, otherwise 0
    // Description   : Checks whether a number is prime
    // Author        : Harshad Rajaram Pathare


int main()
{
    int num = 9;
    int i;
    int isPrime = 1;

    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
    {
        printf("Prime Number\n");
    }
    else
    {
        printf("Not a Prime Number\n");
    }

    return 0;
}

    /*
    Step 5 : Test the program

    Test Case 1:
    Input  : 7
    Output : 7 is a Prime Number

    Test Case 2:
    Input  : 10
    Output : 10 is Not a Prime Number

    Test Case 3:
    Input  : 1
    Output : 1 is Not a Prime Number

    Test Case 4:
    Input  : 2
    Output : 2 is a Prime Number

    Test Case 5:
    Input  : -5
    Output : -5 is Not a Prime Number

    */

