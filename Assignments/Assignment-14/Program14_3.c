///////////////////////////////////////////////////
//   
//  Function Name:  NonFact
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Accepts number from user and display all its non factors.
//  Date         :  03/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}
