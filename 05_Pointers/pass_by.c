/*
* Explain the difference between pass by value arguments
* and pass by reference.
*
* Gilberto Echeverria
* 2026-10-22
*/

#include <stdio.h>

void double_by_value(float weightV)
{
    printf("BY VALUE 1: %6.2f\n", weightV);
    weightV *= 2;
    printf("BY VALUE 2: %6.2f\n", weightV);
}

void double_by_reference(float * weightR)
{
    printf("BY REF 1: %6.2f\n", *weightR);
    *weightR *= 2;
    printf("BY REF 2: %6.2f\n", *weightR);
}

int main()
{
    float weight = 7.5;

    printf("MAIN 1: %6.2f\n", weight);
    double_by_value(weight);
    printf("MAIN 2: %6.2f\n", weight);
    double_by_reference(&weight);
    printf("MAIN 3: %6.2f\n", weight);

    return 0;
}
