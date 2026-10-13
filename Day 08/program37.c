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
// Problem : Find the largest element in an array.
//
// Input   : Array size and array elements.
//
// Output  : The largest element in the array.
//
// Example :
// Input   : 12 45 7 89 23
// Output  : Largest element = 89
//
/////////////////////////////////////////////////////////////////////

/*
Step 2 : Write the algorithm

START

    Initialize the array

    Set Largest = first element of the array

    Repeat for every remaining element:

        If current element > Largest
            Update Largest with current element

    Display Largest

END
*/

/*
Step 3 : Decide the programming language

Language : C
Reason   : C supports arrays, loops, conditional statements,
           and functions to solve this problem efficiently.
*/

/*
Step 4 : Write the program
*/

#include <stdio.h>

// Function Name : findLargest
// Input         : Array and its size
// Output        : Largest element in the array
// Description   : Finds and returns the largest array element
// Author        : Harshad Rajaram Pathare


int main()
{
    int arr[] = {12, 45, 7, 89, 23};
    int n = 5;
    int largest = arr[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);

    return 0;
}

/*
Step 5 : Test the program

Test Case 1:
Input  : 12 45 7 89 23
Output : Largest element = 89

Test Case 2:
Input  : -10 -5 -20 -8
Output : Largest element = -5
*/

