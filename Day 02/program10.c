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
//           User is going to enter an array of integers
//           and a target integer.
//
//           We have to find two different elements
//           whose sum is equal to the target.
//
//           After finding the two elements,
//           we have to display their indexes.
//
/////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////
//
// Step2 : write the algorithm
/*
            START

                 Accept the size of the array as N

                 Accept N integer elements into the array

                 Accept the target value

                 Take the first element from the array

                 Take the next element from the array

                 Add both elements

                 Check whether the sum is equal to target

                 If sum is equal to target
                      Display both indexes
                      STOP

                 Otherwise
                      Check the next pair

                 Repeat until all possible pairs are checked

                 If no pair is found
                      Display "Pair not found"

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

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////
// Function Name : Two Sum
// Input         : Array of integers and Target
// Output        : 2 Indexes
// Description   : Find two elements whose sum is equal to target
// Date          : 05/10/2026
// Author        : Harshad Rajaram Pathare
//////////////////////////////////////////////////////////////////////////////



int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;

    int n = 4;
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {

            if (nums[i] + nums[j] == target) {
                printf("Indexes: %d, %d\n", i, j);
                return 0;
            }
        }
    }

    printf("Pair not found\n");

    return 0;
}