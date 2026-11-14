///////////////////////////////////////////////////
//   
//  Function Name:  CheckDivisibility
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Accepts an integer and determine whether it is divisible by 5 without leaving any remainder.
//  Date         :  05/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
    if((iValue % 5) == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}
