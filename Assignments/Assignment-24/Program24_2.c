///////////////////////////////////////////////////
//   
//  Function Name:  CountChar
//  Input        :  String (Character Pointer), Character
//  Output       :  Integer
//  Description  :  Accepts string and one character from user and returns frequency of that character.
//  Date         :  14/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
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

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d", iRet);

    return EXIT_SUCCESS;
}
