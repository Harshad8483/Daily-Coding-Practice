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

1. Start.
2. Read the size of the array (n).
3. Check whether n is valid.
4. Read n elements into the array.
5. Initialize largest = arr[0].
6. Traverse the array from index 1 to n-1.
7. If arr[i] > largest, update largest = arr[i].
8. Display the largest element.
9. Stop.
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
#define MAX 100

// Function Name : findLargest
// Input         : Array and its size
// Output        : Largest element in the array
// Description   : Finds and returns the largest array element
// Author        : Harshad Rajaram Pathare

int findLargest(int arr[], int n)
{
    int largest = arr[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

int main()
{
    int arr[MAX], n, i, result;

    printf("Enter array size: ");

    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX)
    {
        printf("Invalid array size\n");
        return 1;
    }

    printf("Enter %d elements: ", n);

    for (i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input\n");
            return 1;
        }
    }

    result = findLargest(arr, n);

    printf("Largest element = %d\n", result);

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

Test Case 3:
Input  : 50
Output : Largest element = 50
*/

