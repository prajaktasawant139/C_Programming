///////////////////////////////////////////////////
//   
//  Function Name:  Display
//  Input        :  None
//  Output       :  Void
//  Description  :  Prints numbers from 5 to 1 on screen.
//  Date         :  04/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}
