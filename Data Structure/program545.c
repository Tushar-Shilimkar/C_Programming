#include<stdio.h>

int strlenX(char *str)
{
    int iSize = 0;
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("String Length is : %d\n",iRet);

    return 0;
}