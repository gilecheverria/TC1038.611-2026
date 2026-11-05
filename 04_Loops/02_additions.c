/*
* Adding all the numbers from 1 to 1000.
* Using a while loop.
*
* Gilberto Echeverria
* 2026-10-01
*/

#include <stdio.h>

int main()
{
    // Initialize
    int counter = 0;
    int accumulator = 0;

    // Condition
    while (counter < 1000) {
        // Update
        counter++;
        /*printf("%d + %d = %d\n", accumulator, counter, accumulator + counter);*/
        accumulator += counter;
    }
    printf("Total sum: %d\n", accumulator);

    return 0;
}
