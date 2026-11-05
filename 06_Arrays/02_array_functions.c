/*
* Using functions to work with arrays.
* The size of the array will be provided by the user at run time.
*
* Gilberto Echeverria
* 2026-11-05
*/

#include <stdio.h>


/*
 * A function to read as many integers as necessary to fill the array.
 * Ask the user for each of the values, and store them in order.
 */
void get_data(int data[], int size)
// void get_data(int* data, int size)
{
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        //scanf("%d", (data + i));        // Pointer syntax
        scanf("%d", &data[i]);          // Array syntax
    }
}

void show_data(int data[], int size)
{
    /*
    printf("[");
    for (int i = 0; i < size-1; i++) {
        printf(" %d,", data[i]);
    }
    printf(" %d ]\n", data[size - 1]);
    */
    for (int i = 0; i < size; i++) {
        printf(" %d", data[i]);
    }
    printf("\n");
}

void add_points(int data[], int size, int points)
{
    for (int i = 0; i < size; i++) {
        if (data[i] < 50) {
            //data[i] += points;
            data[i] = data[i] + points;
        }
    }
}

int main()
{
    int size = 0;

    // Get and validate the size
    do {
        printf("Enter array size: ");
        scanf("%d", &size);
    } while (size <= 0);

    /*
    while (size <= 0) {
        printf("Enter array size: ");
        scanf("%d", &size);
    }
    */

    // Create the array with the size provided by the user
    int data[size];

    // Ask the user for the data
    get_data(data, size);

    show_data(data, size);

    add_points(data, size, 5);

    show_data(data, size);

    return 0;
}
