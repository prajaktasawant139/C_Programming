 ///////////////////////////////////////////////////
//   
//  Function Name:  RangeSum
//  Input        :  Integer, Integer
//  Output       :  Integer
//  Description  :  Accepts a range from user and return addition of all numbers in between that range.
//  Date         :  1/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0; 
    }

    int iSum = 0;

    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d",iRet);

    return 0;
}
