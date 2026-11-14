///////////////////////////////////////////////////
//   
//  Function Name:  Display
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Accepts one number from user and print that number of * on screen by decrementing input.
//  Date         :  04/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    while(iNo > 0)
    {
        printf("*\t");
        iNo--;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
