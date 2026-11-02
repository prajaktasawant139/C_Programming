

///////////////////////////////////////////////////
//   
//  Function Name:  MultipleDisplay 
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Prints the first 5 multiples of N
//  Date         :  30/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int i = 0;
    
    for(i = 1 ; i <= 5; i++)
    {
            printf("%d \t",iNo * i);
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}