#include<stdio.h>

typedef unsigned int UINT;

// 3rd and 7th position Toggle

int main()
{
    UINT iMask = 0x00000044;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter Number: \n");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;

    printf("Updated Number : %d\n",iResult);

    return 0;
}