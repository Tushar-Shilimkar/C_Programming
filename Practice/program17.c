////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{

    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int ivalue = 0;
    bool bRet = false;

    printf("Enter number to check whether it is Even or Odd : ");
    scanf("%d",&ivalue);

    bRet  = CheckEvenOdd(ivalue);

    if(bRet)
    {
        printf("%d is Even \n",ivalue);
    }
    else
    {
        printf("%d is Odd\n",ivalue);
    }

    return 0;
}