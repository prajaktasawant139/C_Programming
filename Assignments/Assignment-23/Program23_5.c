///////////////////////////////////////////////////
//   
//  Function Name:  CountWhite
//  Input        :  String (Character Pointer)
//  Output       :  Integer
//  Description  :  Accepts string from user and counts number of white spaces.
//  Date         :  13/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}
