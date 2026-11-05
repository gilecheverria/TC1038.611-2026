/*
* My first program using while loops.
*
* Gilberto Echeverria
* 2026-10-01
*/

#include <stdio.h>

int main()
{
    // Initialize
    int i = 5;
    // Condition
    while (i < 20) {
        // Update
        i++;
        if (i % 4 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
