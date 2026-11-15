///////////////////////////////////////////////////
//   
//  Function Name:  LastChar
//  Input        :  String (Character Pointer), Character
//  Output       :  Integer
//  Description  :  Accepts string and one character from user and returns index of last occurrence of that character.
//  Date         :  14/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int iIndex = 0;
    int iLastPos = -1;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iLastPos = iIndex;
        }
        str++;
        iIndex++;
    }

    return iLastPos;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d", iRet);

    return EXIT_SUCCESS;
}
