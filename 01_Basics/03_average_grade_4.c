/*
* Compute the average of 4 courses
*
* Gilberto Echeverria
* 2026-08-27
*/

#include <stdio.h>

int main()
{
    float grade1;
    float grade2;
    float grade3;
    float grade4;

    float average;

    printf("Enter grade 1: ");
    scanf("%f", &grade1);
    printf("Enter grade 2: ");
    scanf("%f", &grade2);
    printf("Enter grade 3: ");
    scanf("%f", &grade3);
    printf("Enter grade 4: ");
    scanf("%f", &grade4);

    average = (grade1 + grade2 + grade3 + grade4) / 4;

    printf("Final average: %f\n", average);

    return 0;
}
