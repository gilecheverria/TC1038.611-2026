/*
* Program to show the basic use of an array, using indices
* and a pre-defined set of data.
*
* Gilberto Echeverria
* 2026-11-02
*/

#include <stdio.h>

float average(int data[], int size)
{
    float sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

int main()
{
    // Define an array with existing elements
    int data[] = { 99, 88, 77, 66, 55, 44, 33, 22 };
    // Compute the number of elements in an array.
    int size = sizeof data / sizeof data[0];


    printf("Size of data: %d\n", size);

    printf("Data: %p\n", data);

    printf("Value: %d\n", *data);

    // Referencing the data using pointers
    printf("New address: %p\n", data + 1);
    printf("New value: %d\n", *(data + 1));

    // Using indices in the array notation
    printf("Position 1: %d\n", data[1]);

    data[3] = data[1] - data[4];

    for (int i = 0; i < size; i++) {
        printf("Position %d: %d\n", i, data[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("Address: %p | Value: %d\n", data + i, *(data + i));
    }

    printf("Agerage: %f\n", average(data, size));

    return 0;
}
