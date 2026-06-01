/*
    Accept amount in US doller and return its corresponding value in Indian currency.
    Consider 1$ as 70 repees.

    Input : 10
    Output : 700

    Input : 3
    Output : 270
    
    Input : 1200
    Output : 84000
*/
#include<stdio.h>

int DollerToINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number of USD: \n");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is : %d",iRet);

    return 0;
}