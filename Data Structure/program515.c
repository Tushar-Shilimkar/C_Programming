// Eteration Convert to Recurtion 

#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;         // Storage class static

    if(i <= iNo)
    {
        printf("%d\n",i);
        i++;

        Display(iNo);          // recursive call
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    printf("End of main \n");

    return 0;
}