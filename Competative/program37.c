/*
    Write a program which accept width and geight of rectangle from user and calculate its area.
    (Area = width * Height)

    Input : 5.3     9.78
    Output : 51.834
*/
#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    return (double) (fWidth * fHeight);
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width: \n");
    scanf("%f",&fValue1);

    printf("Enter Height : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("%.31f",dRet);

    return 0;
}