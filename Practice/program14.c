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

    printf("Enter number to check whether it is Even or Odd : ");
    scanf("%d",&ivalue);

    iRet  = CheckEvenOdd(ivalue);

    if(iRet == 0)
    {
        printf("%d is Even \n",ivalue);
    }
    else
    {
        printf("%d is Odd\n",ivalue);
    }

    return 0;
}