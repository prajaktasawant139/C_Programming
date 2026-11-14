///////////////////////////////////////////////////
//   
//  Function Name:  DisplayConvert
//  Input        :  Character
//  Output       :  Void
//  Description  :  Accepts one character from user and convert case of that character.
//  Date         :  04/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        cValue = cValue - 32;
        printf("%c\n", cValue);
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        cValue = cValue + 32;
        printf("%c\n", cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}
