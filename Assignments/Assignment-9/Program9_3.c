

///////////////////////////////////////////////////
//   
//  Function Name:  EvenFactorial
//  Input        :  Integer
//  Output       :  Integer
//  Description  :  Returns the product of all even numbers up to the given number.
//  Date         :  31/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
    
}    
int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}