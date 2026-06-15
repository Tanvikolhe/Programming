//Program to print 5 to 1 on screen 

#include <stdio.h>

void Display()
{
    int i = 5;
    
    do
    {
        printf("%d\n", i);
        i--;
    }
    while(i >= 1);
}
int main()
{
    Display();

    return 0;
}

