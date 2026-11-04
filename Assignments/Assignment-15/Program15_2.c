///////////////////////////////////////////////////
//   
//  Function Name:  ChkGreater
//  Input        :  Integer
//  Output       :  Boolean (Integer via typedef)
//  Description  :  Accepts a number from user and checks whether it is greater than 100 or not.
//  Date         :  03/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return EXIT_SUCCESS;
}
