/*
    Write a program to find even factorial of given number.

    Input : 5
    Output : 8      (4*2)

    Input : -5
    Output : 8      (4*2)

    Input : 10
    Output : 3840      (10*8*6*4*2)
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

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is : %d",iRet);

    return 0;
}