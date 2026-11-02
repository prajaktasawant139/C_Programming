

///////////////////////////////////////////////////
//   
//  Function Name:  SquareMeter
//  Input        :  Integer
//  Output       :  Double
//  Description  :  Converts area from Square Feet to Square Meters
//  Date         :  31/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
   double dArea = 0.0;

   dArea = iValue * 0.0929;

    return dArea;
}    
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in Square feet : ");
    scanf("%d",&iValue);

    
    dRet = SquareMeter(iValue);

    printf("Area in square meter is : %lf\n",dRet);

    return EXIT_SUCCESS;
}