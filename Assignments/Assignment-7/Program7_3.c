

///////////////////////////////////////////////////
//   
//  Function Name:  Display 
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Prints the number line from -iNo to +iNo
//  Date         :  30/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = -iNo ; i <= iNo; i++)
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