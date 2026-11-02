

///////////////////////////////////////////////////
//   
//  Function Name:  FhtoCs
//  Input        :  Float
//  Output       :  Double
//  Description  :  Converts temperature from Fahrenheit to Celsius
//  Date         :  31/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
   double dCelsius = 0.0;

   dCelsius = (fTemp - 32.0) * (5.0 / 9.0);

    return dCelsius;
}    
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    
    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is : %lf\n",dRet);

    return EXIT_SUCCESS;
}