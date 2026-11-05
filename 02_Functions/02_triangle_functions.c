/*
   Program to compute the area of a triangle, given one side and two angles
   One of many possible cases:
    https://www.mathsisfun.com/algebra/trig-solving-triangles.html

   Gilberto Echeverria
   2026-09-02
*/

#include <stdio.h>
#include <math.h>

// Function declarations
void userInterface();
float getArea(float base, float height);
float getBase(float alpha, float beta, float side_a);
float getHeight(float alpha, float side_a);
float getRadians(float angle);

int main()
{
    // Only call the function that gets the inputs
    userInterface();

    return 0;
}

void userInterface()
{
    float alpha;
    float beta;
    float side_a;
    float base;
    float height;
    float area;

    // Ask the user for the information
    printf("Enter the angle 'alpha' in degrees: ");
    scanf("%f", &alpha);
    printf("Enter the angle 'beta' in degrees: ");
    scanf("%f", &beta);
    printf("Enter the length of side A (next to 'alpha'): ");
    scanf("%f", &side_a);

    // Perform the calculations, calling the corresponding functions



    // Display the result
    printf("Base: %.2f | Height: %.2f | Area: %.2f\n", base, height, area);
}


// Define the functions
