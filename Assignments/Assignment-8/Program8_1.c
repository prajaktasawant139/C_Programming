

///////////////////////////////////////////////////
//   
//  Function Name:  Number 
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Prints small (<50), medium(51-99), or large(>100) based on input
//  Date         :  30/10/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    int i = 0;
    
    if(iNo < 50)
    {
        printf("Small\n");
    }
    
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("Medium\n");
    }

    else
    {
        printf("Large\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}