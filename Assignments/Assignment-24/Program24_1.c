///////////////////////////////////////////////////
//   
//  Function Name:  ChkChar
//  Input        :  String (Character Pointer), Character
//  Output       :  Boolean (Integer via typedef)
//  Description  :  Accepts string and one character from user and checks whether that character is present in string or not.
//  Date         :  14/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    if(str == NULL)
    {
        return FALSE;
    }

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return EXIT_SUCCESS;
}
