///////////////////////////////////////////////////
//   
//  Function Name:  CountTwo
//  Input        :  Integer
//  Output       :  Integer
//  Description  :  Accepts number from user and count frequency of 2 in it.
//  Date         :  1/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iFrequency++;
        }
        iNo = iNo / 10;
    }

    return iFrequency;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d\n",iRet);

    return 0;
}
