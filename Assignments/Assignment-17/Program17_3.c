///////////////////////////////////////////////////
//   
//  Function Name:  Pattern
//  Input        :  Integer, Integer
//  Output       :  Void
//  Description  :  Accepts number of rows and columns and displays alternating rows of alphabets and numbers.
//  Date         :  04/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            ch = 'a';
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t", ch);
                ch++;
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
