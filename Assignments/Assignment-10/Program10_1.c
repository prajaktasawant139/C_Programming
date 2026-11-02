

///////////////////////////////////////////////////
//   
//  Function Name:  CircleArea
//  Input        :  Float
//  Output       :  Double
//  Description  :  Calculates the area of a circle (PI * Radius * Radius)
//  Date         :  31/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    float fPI = 3.14f;

    dArea = fPI * fRadius * fRadius;

    return dArea;
    
}    
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf",dRet);

    return EXIT_SUCCESS;
}