///////////////////////////////////////////////////
//   
//  Function Name:  strtogglex
//  Input        :  String (Character Pointer)
//  Output       :  Void
//  Description  :  Accepts string from user and toggles the case of each character.
//  Date         :  13/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void strtogglex(char *str)
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
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    strtogglex(arr);

    printf("Modified string is %s", arr);

    return EXIT_SUCCESS;
}
