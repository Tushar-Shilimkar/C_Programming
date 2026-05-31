  /*
    Write a program which accept N and print first 5 multiples of N.

    Input : 4
    Output : 4  8   12  16  20

*/
#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i;

    for(i  = 1; i <= 5 ; i++)
    {
        printf("%d\t",iNo * i);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}