

///////////////////////////////////////////////////
//   
//  Function Name:  Pattern 
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Prints alternating pairs of '$' and '*'
//  Date         :  30/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1 ; i <= iNo; i++)
    {
        printf("$ \t * \t ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}