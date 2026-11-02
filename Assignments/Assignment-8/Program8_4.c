

///////////////////////////////////////////////////
//   
//  Function Name:  Table
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Accepts a number from user and displays its multiplication table
//  Date         :  30/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(int i = 1; i <= 10; i++)
    {
        printf("%d \t", iNo * i);
    }
    printf("\n");
}    
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}