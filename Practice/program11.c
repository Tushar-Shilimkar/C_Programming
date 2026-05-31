/*
    START
        Accept number as NO
        If NO is completely division by 2
            then print Even
        otherwise
            print odd
    STOP

    START 
        Accept number as NO
        Divide NO by 2
        If remainder is 0
            then print as Even 
        otherwise 
            print as Odd

    STOP
*/


////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
////////////////////////////////////////////////////////////////////
#include<stdio.h>

int main()
{
    int ivalue = 0;
    int iRemainder = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    iRemainder = ivalue % 2;

    if(iRemainder == 0)
    {
        printf("Number is Even \n");
    }
    else
    {
        printf("Number is odd \n");
    }

    return 0;
}