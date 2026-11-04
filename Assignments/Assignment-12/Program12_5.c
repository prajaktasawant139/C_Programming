///////////////////////////////////////////////////
//   
//  Function Name:  Count
//  Input        :  Integer
//  Output       :  Integer
//  Description  :  Accepts number from user and count frequency of such digits which are less than 6.
//  Date         :  1/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 1;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d\n",iRet);

    return 0;
}
