// Convert to Recurtion 

#include<stdio.h>

void Display()
{
    auto int i = 1;

    printf("Jay Ganesh...%d\n",i);
    i++;

    Display();      // recursive call
}

int main()
{
    Display();
    
    return 0;
}