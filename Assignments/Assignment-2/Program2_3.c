///////////////////////////////////////////////////
//   
//  Function Name:  Display
//  Input        :  Integer
//  Output       :  Void
//  Description  :  Accepts one number from user if number is less than 10 then print "Hello" otherwise print "Demo".
//  Date         :  04/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
