

///////////////////////////////////////////////////
//   
//  Function Name:  DollarToINR
//  Input        :  Integer
//  Output       :  Integer
//  Description  :  Converts US Dollar to Indian Rupees(INR)
//  Date         :  31/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    return iAns;
    
}    
int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return EXIT_SUCCESS;
}