///////////////////////////////////////////////////
//   
//  Function Name:  StrRevX
//  Input        :  String (Character Pointer)
//  Output       :  Void
//  Description  :  Accepts string from user and reverses that string in place.
//  Date         :  14/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    if(str == NULL)
    {
        return;
    }

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Modified string is %s", arr);

    return EXIT_SUCCESS;
}
