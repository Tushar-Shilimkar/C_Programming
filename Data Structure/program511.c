// Eteration Convert to Recurtion 

#include<stdio.h>

void Display()
{
    static int i = 1;         // Storage class static

    if(i <= 4)
    {
        printf("Jay Ganesh...%d\n",i);
        i++;

        Display();          // recursive call
    }
}

int main()
{
    Display();

    return 0;
}