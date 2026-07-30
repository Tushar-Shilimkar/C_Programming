/*
    Write a program which accept string from user and check whether it contains vowels in it or not.

    Input : “marvellous”

    Output : TRUE

    Input : “Demo”

    Output : TRUE

    Input : “xyz”

    Output : FALSE
*/
#include<stdio.h>

#define TRUE  1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        char ch = *str;

        if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;   
        }

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf(" %[^\n]s", arr);

    bRet = ChkVowel(arr);
    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}