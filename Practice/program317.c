// Accept number and Position from user and check whether Specific bit ON or OFF
// Dynamic Code

#include<stdio.h>

typedef unsigned int UINT;         

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x1;      // hex
    UINT iAns = 0;
    UINT iPos = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iNo);

    printf("Enter The Position : \n");
    scanf("%d",&iPos);

    iMask = iMask << (iPos -1);
    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    return 0;
}