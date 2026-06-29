#include<stdio.h>

typedef unsigned int UINT;     

// 21th and 27th position Toggle

int main()
{
    UINT iMask = 0x04100000;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter Number: \n");
    scanf("%d",&iNo);

    iResult = iNo ^ iMask;

    printf("Updated Number : %d\n",iResult);

    return 0;
}