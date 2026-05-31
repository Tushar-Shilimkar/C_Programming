/*
    Algorithm

    START
        Accept first number as NO1
        Accept second number as NO2
        perform Addition of NO1 & NO2
        Display the Result 

    STOP
*/
#include<stdio.h>

int main()
{
    //Variable creation with Default values
    float i = 0.0f ,j = 0.0f ,k = 0.0f;

    printf("Enter First Number: \n");
    scanf("%f",&i);

    printf("Enter Second NUmber: \n");
    scanf("%f",&j);
    
    k = i+j;

    printf("Addition is : %f\n",k);

    return 0;
}