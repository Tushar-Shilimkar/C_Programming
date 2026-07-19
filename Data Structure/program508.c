// Eteration Convert to Recurtion 

#include<stdio.h>

void Display()
{
    auto int i = 0;         // Storage class auto

    i = 1;
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