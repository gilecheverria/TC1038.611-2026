/*
* Program to demonstrate the use of pointers.
* Using functions with values passed by value, or by reference.
*
* Gilberto Echeverria
* 2026-10-22
*/

#include <stdio.h>

void double_by_value(int sizeV)
{
    printf("By Value 1: %d in %p\n", sizeV, &sizeV);
    sizeV *= 2;
    printf("By Value 2: %d in %p\n", sizeV, &sizeV);
}

// Receives a memory address as a parameter
void double_by_reference(int * sizeR)
{
    printf("By Reference 1: %d in %p\n", *sizeR, sizeR);
    *sizeR *= 2;
    printf("By Reference 2: %d in %p\n", *sizeR, sizeR);
}


int main()
{
    int size = 20;

    printf("Size step 1: %d in %p\n", size, &size);
    double_by_value(size);
    printf("Size step 2: %d in %p\n", size, &size);
    double_by_reference(&size);
    printf("Size step 3: %d in %p\n", size, &size);


    return 0;
}
