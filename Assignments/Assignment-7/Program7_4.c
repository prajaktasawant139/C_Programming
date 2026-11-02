

///////////////////////////////////////////////////
//   
//  Function Name:  OddDisplay 
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Prints all odd numbers up to N
//  Date         :  30/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int i = 0;
    
    for(i = 1 ; i <= iNo; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d \t",i);
        }
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}