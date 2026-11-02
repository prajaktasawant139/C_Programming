

///////////////////////////////////////////////////
//   
//  Function Name:  KMtoMeter
//  Input        :  Integer
//  Output       :  Integer
//  Description  :  Converts distance from Kilometeres to Meters 
//  Date         :  31/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
   int iAns = 0;

   iAns = iNo * 1000;

    return iAns;
}    
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance in KM: ");
    scanf("%d",&iValue);

    
    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is : %d\n",iRet);

    return EXIT_SUCCESS;
}