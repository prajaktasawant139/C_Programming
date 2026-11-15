///////////////////////////////////////////////////
//   
//  Function Name:  Reverse
//  Input        :  String (Character Pointer)
//  Output       :  Void
//  Description  :  Accepts string from user and displays it in reverse order.
//  Date         :  14/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    char *start = NULL;

    if(str == NULL)
    {
        return;
    }

    start = str;

    while(*str != '\0')
    {
        str++;
    }
    str--;

    while(str >= start)
    {
        printf("%c", *str);
        str--;
    }
    printf("\n");
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}
