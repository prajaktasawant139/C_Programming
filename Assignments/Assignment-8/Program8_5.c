

///////////////////////////////////////////////////
//   
//  Function Name:  TableRev
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Display table of a number in reverse order
//  Date         :  30/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{
    int i = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(int i = 10; i >= 1; i--)
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

    TableRev(iValue);

    return EXIT_SUCCESS;
}