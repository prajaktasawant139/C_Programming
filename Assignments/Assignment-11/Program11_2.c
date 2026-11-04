///////////////////////////////////////////////////
//   
//  Function Name:  RangeDisplayEven
//  Input        :  Integer, Integer
//  Output       :  Void
//  Description  :  Accepts a range from the user and displays all even numbers within it.
//  Date         :  1/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}
