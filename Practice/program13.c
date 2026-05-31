////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>

int CheckEvenOdd(int iNo)
{
    int iRemainder = 0;

    iRemainder = iNo % 2;

    return iRemainder;
}
int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    iRet  = CheckEvenOdd(ivalue);

    if(iRet == 0)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}