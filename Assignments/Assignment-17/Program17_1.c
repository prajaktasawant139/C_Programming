///////////////////////////////////////////////////
//   
//  Function Name:  Pattern
//  Input        :  Integer, Integer
//  Output       :  Void
//  Description  :  Accepts number of rows and columns from user and display a cyclic numbering pattern (1 to 9).
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
    int iCount = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iCount);
            iCount++;
            if(iCount > 9)
            {
                iCount = 1;
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
