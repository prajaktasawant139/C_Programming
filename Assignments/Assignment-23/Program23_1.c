///////////////////////////////////////////////////
//   
//  Function Name:  strlwrx
//  Input        :  String (Character Pointer)
//  Output       :  Void
//  Description  :  Accepts string from user and converts it into lower case.
//  Date         :  13/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
    if(str == NULL)
    {
        return;
    }

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);

    printf("Modified string is %s", arr);

    return EXIT_SUCCESS;
}
