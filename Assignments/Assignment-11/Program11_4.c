///////////////////////////////////////////////////
//   
//  Function Name:  RangeSumEven
//  Input        :  Integer, Integer
//  Output       :  Integer
//  Description  :  Accepts a range from user and return addition of all even numbers in between that range.
//  Date         :  1/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0;
    }

    int iSum = 0;

    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
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

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition is :  %d",iRet);

    return 0;
}
