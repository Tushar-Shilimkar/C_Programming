////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : AddTwoNumbers
//  Input :         float,float
//  Output :        float
//  Description :   Performs addition of two floats
//  Date :          08/05/2026
//  Author :        Tushar Vijay Shilimkar
//
////////////////////////////////////////////////////////////////////

float AddTwoNumbers(
                        float fNo1,         // First input 
                        float fNo2          // Second input
                    )
{
    float fAns = 0.0f;                      // Variable to store result
    fAns = fNo1 + fNo2;                     // Perform Addition
    return fAns;

}
////////////////////////////////////////////////////////////////////
//
//  Application to perform Addition of two float values
//
////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f;           // To Store first input
    float fvalue2 = 0.0f;           // To Store second input
    float fResult = 0.0f;           // To store the Result

    printf("Enter First Number: \n");
    scanf("%f",&fValue1);

    printf("Enter Second NUmber: \n");
    scanf("%f",&fvalue2);
    
    fResult = AddTwoNumbers(fValue1, fvalue2);    
    
    printf("Addition is : %f\n",fResult);

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input :      10.0    11.0
//  Output :     20.0
//
////////////////////////////////////////////////////////////////////