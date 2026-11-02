

///////////////////////////////////////////////////
//   
//  Function Name:  Display 
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Perform Display numbers till that number
//  Date         :  30/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h> 

void Display(int iNo)
{
    int i = 0;

    for(i = 1 ; i <= iNo; i++)
    {
        printf("%d \t",i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}