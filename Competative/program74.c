/*
    Accept N numbers from user and display all such numbers which contains 3 digit in it.

    Input : N : 6
            Elements : 8225    665  3   76  953   858

    Output : 665    953   858
*/
#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength)
{
    printf("Output: ");
    for(int i = 0; i < iLength; i++)
    {
        if(Arr[i] >= 100 && Arr[i] <= 999)
        {
            printf("%d ", Arr[i]);
        }
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
    
    Digits(p, iSize);
    
    free(p);
    return 0;
}