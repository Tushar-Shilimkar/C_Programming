#include<stdio.h>

int main()
{
    int iNo = 751;
    int iDegit = 0;

    iDegit = iNo % 10;
    printf("%d\n",iDegit);
    iNo = iNo /10;

    iDegit = iNo % 10;
    printf("%d\n",iDegit);
    iNo = iNo /10;

    iDegit = iNo % 10;
    printf("%d\n",iDegit);
    iNo = iNo /10;


    return 0;
}