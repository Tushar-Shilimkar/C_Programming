#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDegit = 0;

    while(iNo != 0)
    {
        iDegit = iNo % 10;
        printf("%d\n",iDegit);
        iNo = iNo /10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}