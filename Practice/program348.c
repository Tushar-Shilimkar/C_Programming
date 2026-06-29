#include<stdio.h>

typedef unsigned int UINT;     

// 3rd and 8th position Toggle

int main()
{
    UINT iMask1 = 0x0000004;    // 3
    UINT iMask2 = 0x0000080;    // 8
    UINT iMask = 0;

    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter Number: \n");
    scanf("%d",&iNo);

    iMask = iMask1 | iMask2;

    iResult = iNo ^ iMask;

    printf("Updated Number : %d\n",iResult);

    return 0;
}