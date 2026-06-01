/*
    Write a program which return difference between Even factorial and Odd factorial of given number.

    Input : 5
    Output : -7      (8-15)

    Input : -5
    Output : -7      (8-15)

    Input : 10
    Output : 2895      (3840 - 945)
*/
#include<stdio.h>

int EvenFactorial(int iNo)
{   
    int iResult = 1;
    int i;

    if(iNo < 0)
        iNo = -iNo;

    if(iNo % 2 != 0)
        iNo = iNo - 1;

    for(i = iNo; i >= 2; i = i-2)
    {
        iResult = iResult * i;
    }
    return iResult;
    
}
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
int FactorialDiff(int iNo)
{
    return EvenFactorial(iNo) - OddFactorial(iNo);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %d",iRet);

    return 0;
}