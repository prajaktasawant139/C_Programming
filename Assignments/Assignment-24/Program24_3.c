///////////////////////////////////////////////////
//   
//  Function Name:  FirstChar
//  Input        :  String (Character Pointer), Character
//  Output       :  Integer
//  Description  :  Accepts string and one character from user and returns index of first occurrence of that character.
//  Date         :  14/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;
        }
        str++;
        iIndex++;
    }

    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d", iRet);

    return EXIT_SUCCESS;
}
