///////////////////////////////////////////////////
//   
//  Function Name:  MultFact
//  Input        :  Integer
//  Output       :  Integer
//  Description  :  Accepts number from user and return multiplication of its factors.
//  Date         :  03/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{
    int iMul = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMul = iMul * iCnt;
        }
    }

    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
