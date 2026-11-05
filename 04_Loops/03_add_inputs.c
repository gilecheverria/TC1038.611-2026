/*
* Add the numbers entered by the user.
* Stop when the user enters a 0.
*
* Gilberto Echeverria
* 2026-10-01
*/

#include <stdio.h>

int main()
{
    // Initialize
    int input = 1;
    int total = 0;

    // Condition
    while (input != 0) {
        printf("Enter an integer number: ");
        // Update
        scanf("%d", &input);

        total += input;
    }
    printf("Total sum: %d\n", total);

    return 0;
}
