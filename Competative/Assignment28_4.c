/*
    4. Accept number of rows and number of columns from user and display below pattern.

Input : iRow = 6 iCol = 6
Output : *  *   *   *   *   *
         *  #   #   #   *   *
         *  #   #   *   $   *
         *  #   *   $   $   *
         *  *   $   $   $   *
         *  *   *   *   *   *
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j, iDiagonal;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == 0 || i == iRow - 1 || j == 0 || j == iCol - 1)
            {
                printf("*   ");
            }
            else
            {
                iDiagonal = iCol - i - 1;

                if(j < iDiagonal)
                    printf("#   ");
                else if(j == iDiagonal)
                    printf("*   ");
                else
                    printf("$   ");
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