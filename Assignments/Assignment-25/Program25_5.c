///////////////////////////////////////////////////
//   
//  Function Name:  DisplaySchedule
//  Input        :  Character
//  Output       :  Void
//  Description  :  Accepts division of student from user and displays exam timing (case insensitive).
//  Date         :  14/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam at 7 AM\n");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid Division\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your devision : ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}
