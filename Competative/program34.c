/*
    Write a program to find Odd factorial of given number.

    Input : 5
    Output : 15      (5*3*1)

    Input : -5
    Output : 15      (5*3*1)

    Input : 10
    Output : 945      (9*7*5*3*1)
*/
#include<stdio.h>

int OddFactorial(int iNo)
{   
    int iResult = 1;
    int i;

    if(iNo < 0)
        iNo = -iNo;

    if(iNo % 2 == 0)
        iNo = iNo - 1;

    for(i = iNo; i >= 1; i = i-2)
    {
        iResult = iResult * i;
    }
    return iResult;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is : %d",iRet);

    return 0;
}