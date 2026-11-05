/*
* Basic arithmetic expressions with operator precedence
*
* Gilberto Echeverria
* 2026-08-31
*/

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Expression 1: %d\n", 5 + 3 * 2);
    printf("Expression 2: %d\n", (5 + 3) * 2);

    // Cast the return value of pow into int
    printf("Expression 4: %d\n", (int)pow(2, 3) + 5);

    float radius = 43.3;
    float height = 12.84;
    float area = M_PI * pow(radius, 2) * height;

    float side_A;
    float side_B;
    float side_C;

    printf("Enter side A: ");
    scanf("%f", &side_A);
    printf("Enter side B: ");
    scanf("%f", &side_B);

    side_C = sqrt(pow(side_A, 2) + pow(side_B, 2));

    printf("Hypotenuse: %f\n", side_C);

    return 0;
}
