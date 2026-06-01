/*
    Write a program to find factorial of given number.

    Input : 5
    Output : 120    (5*4*3*2*1)

    Input : -5
    Output : 120    (5*4*3*2*1)

    Input : 4
    Output : 24    (4*3*2*1)
*/
#include<stdio.h>

int Factorial(int iNo)
{
    int i, iFact = 1;

    if(iNo < 0)
        iNo = -iNo;

    for(i = iNo; i >= 1; i--)
    {
        iFact = iFact * i;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is %d", iRet);

    return 0;
}