/*
    Accept N numbers from user and display summation of digits of each number.

    Input : N   : 6
            Elements : 8225   665   3   76  953   858

    Output : 17 17  3   13  17  21
*/
#include <stdio.h>
#include <stdlib.h>

void DigitSum(int Arr[], int iLength)
{
    printf("Output: ");
    for(int i = 0; i < iLength; i++)
    {
        int iSum = 0;
        int iNum = Arr[i];

        while(iNum > 0)
        {
            iSum = iSum + (iNum % 10);  
            iNum = iNum / 10;            
        }
        
        printf("%d ", iSum);
    }
    printf("\n");
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    
    printf("Enter number of elements: ");
    scanf("%d", &iSize);
    
    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d elements: ", iSize);
    for(int i = 0; i < iSize; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &p[i]);
    }
    
    DigitSum(p, iSize);
    
    free(p);
    return 0;
}