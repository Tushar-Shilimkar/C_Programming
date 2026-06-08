#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;        //Bad Programmin
        }

    }
    return false;

}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;
    bool bRet = false;

    printf("Enter The number of elements :\n");
    scanf("%d",&iLength);
    
    Brr = (int *)malloc(sizeof (int)* iLength);

    printf("Enter the elements: \n");
    
    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    bRet = LinearSearch(Brr,iLength);

    if(bRet == true)
    {
        printf("Element is present");
    }
    else
    {
        printf("Element  is not present");
    }

    free(Brr);


    return 0;
}