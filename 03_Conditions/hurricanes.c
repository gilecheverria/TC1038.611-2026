/*
* Program to classify hurricanes, according to wind sped.
*
* Gilberto Echeverria
* 2026-09-24
*/

#include <stdio.h>

int classify_hurricane(float wind_speed)
{
    if (wind_speed < 118) {
        return 0;
    } else if (wind_speed <= 153) {
        return 1;
    } else if (wind_speed <= 177) {
        return 2;
    } else if (wind_speed <= 208) {
        return 3;
    } else if (wind_speed <= 251) {
        return 4;
    } else {
        return 5;
    }

    /*
    if (wind_speed < 118) {
        return 0;
    } else if (wind_speed >= 119 && wind_speed <= 153) {
        return 1;
    } else if (wind_speed >= 154 && wind_speed <= 177) {
        return 2;
    } else if (wind_speed >= 178 && wind_speed <= 208) {
        return 3;
    } else if (wind_speed >= 209 && wind_speed <= 251) {
        return 4;
    } else if (wind_speed >= 252) {
        return 5;
    }
    */
}

int main()
{
    float wind_speed;
    int category;

    printf("Enter wind speed: ");
    scanf("%f", &wind_speed);
    if (wind_speed < 0) {
        printf("Invalid speed!\n");
        return 1;
    }

    category = classify_hurricane(wind_speed);
    if (category < 1) {
        printf("Not a hurricane\n");
    } else {
        printf("Hurricane of category %d\n", category);
    }

    return 0;
}
