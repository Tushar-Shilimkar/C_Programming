// Eteration Convert to Recurtion 

#include<stdio.h>

void Display()
{
    static int i = 0;         // Storage class static

    i = 1;    // issue
    if(i <= 4)
    {
        printf("Jay Ganesh...\n");
        i++;

        Display();          // recursive call
    }
}

int main()
{
    Display();

    return 0;
}