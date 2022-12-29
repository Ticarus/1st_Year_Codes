#include <stdio.h>
#include <stdlib.h>

// The program demonstrates functions returning a value by passing three floating point numbers (grades) and calculating the average of the three.

float gradeAvg(float test1, float test2, float test3);

int main()
{
    float grade1, grade2, grade3;
    float average;

    printf("What was the grade on the first test? ");
    scanf("%f",&grade1);

    printf("What was the grade on second test? ");
    scanf("%f",&grade2);

    printf("What was the grade on third test? ");
    scanf("%f",&grade3);

    // Pass the three grades to the function and return the average

    average = gradeAvg(grade1, grade2, grade3);

    printf("\nWith those three test scores, the average is %.2f",average);

    return 0;
}

/********************************************************************************************************************************************************/

// Receives the values of three grades

float gradeAvg(float test1, float test2, float test3)
{
    float localAverage;

    localAverage = (test1+test2+test3)/3;

    return(localAverage);  // Returns the average to the main()
}
