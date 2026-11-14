///////////////////////////////////////////////////
//   
//  Function Name:  Pattern
//  Input        :  Integer, Integer
//  Output       :  Void
//  Description  :  Accepts number of rows and columns from user and display alternating even and odd number rows.
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
    int iCount = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            iCount = 2;
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", iCount);
                iCount = iCount + 2;
            }
        }
        else
        {
            iCount = 1;
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", iCount);
                iCount = iCount + 2;
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
