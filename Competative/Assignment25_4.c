/*
    Accept number of rows and number of columns from user and display below pattern.

    Input : iRow = 5 iCol = 5
    Output : 1  2   3   4   5
             -1  -2   -3   -4   -5
             1  2   3   4   5
             -1  -2   -3   -4   -5
             1  2   3   4   5
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;
    int iNum;

    for(i = 1; i <= iRow; i++)
    {
        iNum = 1;

        if(i % 2 != 0)   
        {
            for(j = 0; j < iCol; j++)
            {
                printf("%d  ", iNum);
                iNum++;
            }
        }
        else          
        {
            for(j = 0; j < iCol; j++)
            {
                printf("%d  ", -iNum);
                iNum++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}