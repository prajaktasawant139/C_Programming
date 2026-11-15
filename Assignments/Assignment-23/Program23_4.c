///////////////////////////////////////////////////
//   
//  Function Name:  DisplayDigit
//  Input        :  String (Character Pointer)
//  Output       :  Void
//  Description  :  Accepts string from user and displays only digits from that string.
//  Date         :  13/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    if(str == NULL)
    {
        return;
    }

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
        str++;
    }
    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}
