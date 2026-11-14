///////////////////////////////////////////////////
//   
//  Function Name:  ChkVowel
//  Input        :  Character
//  Output       :  Boolean (Integer via typedef)
//  Description  :  Accepts one character from user and check whether that character is vowel or not.
//  Date         :  04/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cChar)
{
    if(cChar == 'a' || cChar == 'e' || cChar == 'i' || cChar == 'o' || cChar == 'u' ||
       cChar == 'A' || cChar == 'E' || cChar == 'I' || cChar == 'O' || cChar == 'U')
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return EXIT_SUCCESS;
}
