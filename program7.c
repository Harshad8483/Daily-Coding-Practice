
/*
Step1 : understand the problem statement 
Step2 :  write the algorithm
Step3 : Decide the programming lang
Step4 : write the program
Step5 : test the program

*/

/////////////////////////////////////////////////////////////////////
//
// Step 1 : understand the problem statement 
//           user is going to enter any 2 integeger
//          And we have to perform aaddition
/////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
// Step2 :  write the algorithm
/*
            START
                 Accept the first number as No1
                 Accept the second number as No2
                 create the variable as Ans to store the result
                 perform the Addition and store into Ans
                 Display the result fro Ans

            END
*/          
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
/*
             Step3 : Decide the programming lang 
                      we  select C programming 
*/

//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////

//  Step4 : write the program

//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
// Function Name : Addition
// Input         : Two integers
// Output        : Integer
// Description   : Perform addition
// Date          : 04/10/2026  
// Author        : Harshad Rajaram Pathare
//////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2) {
    
    int iAns = 0;
    iAns = iNo1 + iNo2;    //Buisiness logic
    return iAns;                 
}
//////////////////////////////////////////////////////////////////////////////
// 
// Entry of the Application
//
//////////////////////////////////////////////////////////////////////////////
int main () {
      
    int iValue1 = 0 , iValue2 = 0 , iResult = 0;

    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    iResult = Addition(iValue1, iValue2);   

    printf("Addition is : %d\n", iResult);
 
     return 0;
}

