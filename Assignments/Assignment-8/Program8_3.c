

///////////////////////////////////////////////////
//   
//  Function Name:  Factorial
//  Input        :  Integer
//  Output       :  Integer
//  Description  :  Calculates and returns the factorial of a given number
//  Date         :  30/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iFact = 1;
   
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(int i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }

    return iFact;
}    
int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number %d is %d\n", iValue, iRet);

    return EXIT_SUCCESS;
}