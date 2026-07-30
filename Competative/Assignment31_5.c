/*
    Write a program which accept string from user and display it inn reverse order.

    Input : “MarvellouS”

    Output : “SuollevraM”
*/
#include<stdio.h>

void Reverse(char *str)
{
    int iLen = 0;
    int i = 0;

    while(str[iLen] != '\0')
    {
        iLen++;
    }

    for(i = iLen - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf(" %[^\n]s", arr);

    Reverse(arr);

    return 0;
}