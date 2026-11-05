/*
* First example of using conditionals in C.
* Checks whether a grade is good enough to pass a course.
*
* Gilberto Echeverria
* 2026-09-24
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade >= 70) {
        printf("You passed!\n");
        printf("Congratulations!!\n");
        if (grade >= 90) {
            printf("You also got a distinction!!\n");
        }
    } else {
        printf("Sorry, you failed\n");
    }

    return 0;
}
