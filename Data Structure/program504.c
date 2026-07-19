// Convert to Recurtion 

#include<stdio.h>

void Display()
{
    printf("Jay Ganesh...\n");

    Display();          // recursive call
}

int main()
{
    Display();
    
    return 0;
}