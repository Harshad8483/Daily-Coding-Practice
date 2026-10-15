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
// Problem : Check whether a given integer is a palindrome.
//
// Input   : An integer number.
//
// Output  : Display whether the number is a palindrome.
//
// Example 1:
// Input   : 121
// Output  : 121 is a Palindrome
//
// Example 2:
// Input   : 123
// Output  : 123 is Not a Palindrome
//
/////////////////////////////////////////////////////////////////////

/*
Step 2 : Write the algorithm

1. Start.
2. Read an integer from the user.
3. If the input is invalid, display an error.
4. Call the isPalindrome() function.
5. If the number is negative, return 0.
6. Store the original number.
7. Initialize reverse = 0.
8. Extract the last digit using num % 10.
9. Append the digit using reverse = reverse * 10 + digit.
10. Remove the last digit using num = num / 10.
11. Repeat until num becomes 0.
12. Check for integer overflow before appending each digit.
13. Compare the original number with the reversed number.
14. If equal, return 1; otherwise, return 0.
15. Display the result.
16. Stop.
*/

/*
Step 3 : Decide the programming language

Language : C

Reason :
C supports loops, conditional statements, functions,
and arithmetic operators required to solve this problem.
*/

/*
Step 4 : Write the program
*/

#include <stdio.h>
#include <limits.h>

// Function Name : isPalindrome
// Input         : An integer number
// Output        : 1 if palindrome, otherwise 0
// Description   : Reverses the number and compares it
//                 with the original number
// Author        : Harshad Rajaram Pathare

int isPalindrome(int num)
{
    int original = num;
    int reverse = 0;
    int digit;

    // Negative numbers are not considered palindromes
    if (num < 0)
    {
        return 0;
    }

    while (num > 0)
    {
        // Extract the last digit
        digit = num % 10;

        // Check whether appending the digit causes overflow
        if (reverse > INT_MAX / 10 ||
            (reverse == INT_MAX / 10 &&
             digit > INT_MAX % 10))
        {
            return 0;
        }

        // Append the digit to the reversed number
        reverse = reverse * 10 + digit;

        // Remove the last digit
        num = num / 10;
    }

    // Compare the original and reversed numbers
    return original == reverse;
}

int main()
{
    int num;

    // Accept input from the user
    printf("Enter a number: ");

    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    // Check whether the number is a palindrome
    if (isPalindrome(num))
    {
        printf("%d is a Palindrome\n", num);
    }
    else
    {
        printf("%d is Not a Palindrome\n", num);
    }

    return 0;
}

/*
Step 5 : Test the program

Test Case 1:
Input  : 121
Output : 121 is a Palindrome

Test Case 2:
Input  : 123
Output : 123 is Not a Palindrome

Test Case 3:
Input  : 0
Output : 0 is a Palindrome

Test Case 4:
Input  : 1221
Output : 1221 is a Palindrome

Test Case 5:
Input  : -121
Output : -121 is Not a Palindrome

Test Case 6:
Input  : 10
Output : 10 is Not a Palindrome
*/
