#include<stdio.h>

int main()
{
    float fValue1 = 0.0f;           //To Store first input
    float fvalue2 = 0.0f;           //To Store second input
    float fResult = 0.0f;           //To store the Result

    printf("Enter First Number: \n");
    scanf("%f",&fValue1);

    printf("Enter Second NUmber: \n");
    scanf("%f",&fvalue2);
    
    fResult = fValue1 + fvalue2;    // Perform the addition

    printf("Addition is : %f\n",fResult);

    return 0;
}