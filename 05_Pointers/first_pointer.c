/*
* Learning to use pointers and memory addresses.
*
* Gilberto Echeverria
* 2026-10-22
*/

#include <stdio.h>

int main()
{
    int number1 = 76125;
    int number2 = 22222;
    // Pointer, a variable that stores addresses
    int * ptr1 = NULL;
    int * ptr2 = NULL;

    ptr1 = &number1;
    ptr2 = ptr1 + 1;

    // Print the address of the variable, using the & operator
    printf("INT Value: %d | Address: %p\n", number1, &number1);
    printf("INT Value: %d | Address: %p\n", number2, &number2);
    // Print the contents of a pointer
    printf("PTR Value: %p | Address: %p | Deref: %d\n", ptr1, &ptr1, *ptr1);
    printf("PTR Value: %p | Address: %p | Deref: %d\n", ptr2, &ptr2, *ptr2);


    return 0;
}
