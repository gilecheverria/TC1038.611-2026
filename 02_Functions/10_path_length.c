/*
 * Program to compute the total distance of a route, described as a
 * series of 2D points, given in order.
 *
 * Gilberto Echeverria
 * 2026-09-02
 */

#include <stdio.h>
#include <math.h>

// Define a function
float measure_distance(float pAX, float pAY, float pBX, float pBY)
{
    float distance;
    distance = sqrt(pow(pBX - pAX, 2) + pow(pBY - pAY, 2));
    return distance;
}

float get_value(int id, char axis)
{
    float value;
    printf("Enter point %d, coordinate %c: ", id, axis);
    scanf("%f", &value);
    return value;
}

int main()
{
    // Define the variables to store the coordinates of multiple points
    // Get the coordinates of 5 points
    float p1X = get_value(1, 'X');
    float p1Y = get_value(1, 'Y');
    float p2X = get_value(2, 'X');
    float p2Y = get_value(2, 'Y');
    float p3X = get_value(3, 'X');
    float p3Y = get_value(3, 'Y');
    float p4X = get_value(4, 'X');
    float p4Y = get_value(4, 'Y');
    float p5X = get_value(5, 'X');
    float p5Y = get_value(5, 'Y');

    // Compute the distances, by calling the new function
    float distance1_2 = measure_distance(p1X, p1Y, p2X, p2Y);
    float distance2_3 = measure_distance(p2X, p2Y, p3X, p3Y);
    float distance3_4 = measure_distance(p3X, p3Y, p4X, p4Y);
    float distance4_5 = measure_distance(p4X, p4Y, p5X, p5Y);

    float total_distance = distance1_2 + distance2_3 + distance3_4 + distance4_5;

    printf("Total distance: %f\n", total_distance);

    return 0;
}
