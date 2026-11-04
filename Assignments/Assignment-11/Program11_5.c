///////////////////////////////////////////////////
//   
//  Function Name:  RangeDisplayRev
//  Input        :  Integer, Integer
//  Output       :  Void
//  Description  :  Accepts a range from user and display all numbers in between that range in reverse order.
//  Date         :  1/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(int iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d ", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}
