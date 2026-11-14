///////////////////////////////////////////////////
//   
//  Function Name:  CheckCharacterType
//  Input        :  Character
//  Output       :  Void
//  Description  :  Accepts a single character and determine whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
//  Date         :  06/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet\n");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet\n");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
