/*
    Accept character from user and display its ASCII value in decimal,
    octal and hexadecimal format.

    Input : A
    Output : Decimal 65
    Octal 0101
    Hexadecimal 0X41
*/
#include<stdio.h>

void Display(char ch)
{
    printf("Decimal \t%d\n", ch);
    printf("Octal \t\t0%o\n", ch);
    printf("Hexadecimal \t0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}