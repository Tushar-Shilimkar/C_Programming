/*
    Write a program which displays ASCII table. Table contains symbol,
    Decimal, Hexadecimal and Octal representation of every member from 0 to 255.
*/
#include<stdio.h>

void DisplayASCII()
{
    int i;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("--------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        if(i < 32 || i == 127)
        {
            printf("%s\t%d\t%X\t\t%o\n", "NPC", i, i, i);
        }
        else
        {
            printf("%c\t%d\t%X\t\t%o\n", i, i, i, i);
        }
    }
}

int main()
{
    DisplayASCII();
    return 0;
}