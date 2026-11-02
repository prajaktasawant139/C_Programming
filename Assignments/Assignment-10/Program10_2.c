

///////////////////////////////////////////////////
//   
//  Function Name:  RectArea
//  Input        :  Float, Float
//  Output       :  Double
//  Description  :  Calculates the area of a reactangle (Width * Height)
//  Date         :  31/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
    
}    
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of reactangle is : %lf",dRet);

    return EXIT_SUCCESS;
}