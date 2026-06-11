/*
    Write a program which accept number from user and check wether it contains 0 in it or not.

    Input : 2395
    Output : There is no Zero

    Input : 1018
    Output : It contains Zero

    Input : 9000
    Output : It contains Zero

    Input : 10687
    Output : It Contains Zero
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    while(iNo > 0)
    {
        if(iNo % 10 == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    bRet = ChkZero(iValue);
    
    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    
    return 0;
}