/*
    Simple program to compute the area of a circle and the volume of a cylinder
    Uses: functions
*/

#include <stdio.h>
#include <math.h>

// FUNCTION DECLARATIONS


int main()
{
    float radius;
    float height;
    float volume;

    printf("Enter the radius: ");
    scanf("%f", &radius);
    printf("Enter the height: ");
    scanf("%f", &height);

    volume = getCylinderVolume(radius, height);
    printf("The volume is: %.2f\n", volume);
}

// FUNCTION DEFINITIONS

