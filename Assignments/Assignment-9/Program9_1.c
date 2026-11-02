

///////////////////////////////////////////////////
//   
//  Function Name:  Display
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Displays a pattern of asterisks followed by hashes
//  Date         :  31/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(int i = 1; i <= iNo; i++)
    {
        printf("*\t");
    }
    for(int i = 1; i <= iNo; i++)
    {
        printf("#\t");
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