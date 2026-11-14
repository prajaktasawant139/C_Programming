///////////////////////////////////////////////////
//   
//  Function Name:  Accept
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Accepts one number from user and print that number of * on screen.
//  Date         :  04/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return EXIT_SUCCESS;
}
