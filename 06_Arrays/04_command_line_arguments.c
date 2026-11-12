/*
* Reading command line arguments from C programs.
* Also introducing the topic of strings.
*
* Gilberto Echeverria
* 2026-11-12
*/

#include <stdio.h>

int len(char* string)
{
    int counter = 0;
    // Search for the null character, by
    // dereferencing the pointer
    while (*string != '\0') {
        counter++;
        string++;
    }
    return counter;
}

int main(int argc, char* argv[])
{
    printf("I got %d arguments\n", argc);

    for (int i = 0; i < argc; i++){
        printf("argv[%d] : %s (%d)\n", i, argv[i], len(argv[i]));
    }

    for (int i = 0; i < argc; i++) {
        for (int j = 0; j < len(argv[i]); j++) {
            printf(" %c", argv[i][j]);
        }
    }

    return 0;
}
