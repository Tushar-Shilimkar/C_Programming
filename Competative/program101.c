/*
    Accept number form user and display below pattern.

    Input : 5
    Output : A   B   C    D     E
*/
#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = 1; i <= iNo; i++)
    {
        printf("%c ", (char)(64 + i));
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number of elements: ");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}