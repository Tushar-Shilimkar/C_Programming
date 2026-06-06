/*
    Write a program accept number from user and return the count of odd digits.

    Input : 2395
    Output : 2

    Input : 1018
    Output : 2

    Input : -1018
    Output : 2

    Input : 8462
    Output : 0
*/

#include<stdio.h>

int CountOdd(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
        iNo = -iNo;

    while(iNo > 0)
    {
        if ((iNo % 10) %2 != 0)
            iCount ++;
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return 0;
}