///////////////////////////////////////////////////
//   
//  Function Name:  ChkVowel
//  Input        :  String (Character Pointer)
//  Output       :  Boolean (Integer via typedef)
//  Description  :  Accepts string from user and checks whether it contains vowels in it or not.
//  Date         :  14/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    if(str == NULL)
    {
        return FALSE;
    }

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
           (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return EXIT_SUCCESS;
}
