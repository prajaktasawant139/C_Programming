///////////////////////////////////////////////////
//   
//  Function Name:  DisplayASCII
//  Input        :  None
//  Output       :  Void
//  Description  :  Displays ASCII table containing symbol, Decimal, Hexadecimal and Octal representation from 0 to 255.
//  Date         :  14/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Dec\tHex\tOct\tChar\n");
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t%X\t%o\t%c\n", iCnt, iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}
