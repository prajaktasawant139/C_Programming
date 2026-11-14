///////////////////////////////////////////////////
//   
//  Function Name:  Display
//  Input        :  Integer, Integer
//  Output       :  Void
//  Description  :  Accepts two numbers from user and display first number in second number of times.
//  Date         :  04/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter frequency : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return EXIT_SUCCESS;
}
