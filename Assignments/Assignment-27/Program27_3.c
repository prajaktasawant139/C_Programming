///////////////////////////////////////////////////
//   
//  Function Name:  Difference
//  Input        :  String (Character Pointer)
//  Output       :  Integer
//  Description  :  Accepts string from user and returns difference between frequency of small characters and frequency of capital characters.
//  Date         :  14/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;

    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCnt++;
        }
        str++;
    }

    return (iSmallCnt - iCapCnt);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}
