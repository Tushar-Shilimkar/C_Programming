// Accept number from user and check whether 3rd bit ON or OFF

#include<stdio.h>

typedef unsigned int UINT;          // Any Name

int main()
{
    UINT iNo = 0;
    UINT iMask = 4;
    UINT iAns = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("3rd bit is ON\n");
    }
    else
    {
        printf("3rs bit is OFF\n");
    }

    return 0;
}