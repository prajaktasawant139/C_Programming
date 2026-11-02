

///////////////////////////////////////////////////
//   
//  Function Name:  FactorialDiff
//  Input        :  Integer
//  Output       :  Integer
//  Description  :  Returns the difference between Even factorial and Odd factorial
//  Date         :  31/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;


    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;

        }
    }

    return iEvenFact - iOddFact;
    
}    
int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return EXIT_SUCCESS;
}