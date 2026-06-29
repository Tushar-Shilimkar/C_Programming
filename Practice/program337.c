#include<stdio.h>

typedef unsigned int UINT;

// 4th position OFF if it is ON

int main()
{
    UINT iNo = 0;
    UINT iMask =0xFFFFFFF7;
    UINT iPos = 0;

    printf("Enter Number : \n");
    scanf("%d",&iNo);

    iNo = iNo & iMask;

    printf("Updated Number : %d\n",iNo);

    return 0;
}