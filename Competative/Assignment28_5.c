/*
    5. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4

Output : 1  2   3   4   5
         1  2           5
         1      3       5
         1          4   5
         1  2   3   4   5
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == 0 || i == iRow - 1 || j == 0 || j == iCol - 1 || i == j)
                printf("%d   ", j + 1);
            else
                printf("    ");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d   %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}