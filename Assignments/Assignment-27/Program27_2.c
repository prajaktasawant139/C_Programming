///////////////////////////////////////////////////
//   
//  Function Name:  CountSmall
//  Input        :  String (Character Pointer)
//  Output       :  Integer
//  Description  :  Accepts string from user and counts number of small characters.
//  Date         :  14/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    iRet = CountSmall(arr);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}
