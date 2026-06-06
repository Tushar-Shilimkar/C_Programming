/*
    Write a program which accept in kilometer and convert it into meter.
    (1 kilometer = 1000 meter)

    Input : 5
    Output : 5000

    Input : 12
    Output : 12000
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance :\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d",iRet);

    return 0;
}