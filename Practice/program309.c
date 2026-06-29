// Accept number from user and check whether 3rd bit ON or OFF

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 4;
    unsigned int iAns = 0;

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