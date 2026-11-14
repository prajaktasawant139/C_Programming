///////////////////////////////////////////////////
//   
//  Function Name:  CheckAdmission
//  Input        :  Float, Integer
//  Output       :  Void
//  Description  :  Accepts student marks and age to determine admission eligibility with input validation.
//  Date         :  06/11/2026 
//  Author       :  Prajakta Tulshiram Sawant
//
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f) || (iAge < 0) || (iAge > 100))
    {
        printf("Invalid Input\n");
        return;
    }

    if((fMarks >= 60.0f) && (iAge >= 17))
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}
