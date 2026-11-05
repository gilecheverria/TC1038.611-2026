/*
 Print the date of the next day from a given date.
 Using if conditions.

 Gilberto Echeverria
 2026-09-28
*/

// Include the library with functions to interact with the user
#include <stdio.h>

int main()
{
    int year;
    int month;
    int day;
    int last_day;

    /*
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter day: ");
    scanf("%d", &day);
    */

    printf ("Enter date (YYYY MM DD): ");
    scanf ("%d %d %d", &year, &month, &day);

    // Get the number of days in the current month
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        last_day = 30;
    } else if (month == 2) {
        // Check if the year is leap
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            last_day = 29;
        } else {
            last_day = 30;
        }
    } else {
        last_day = 31;
    }

    // Find the next day
    if (day == last_day) {
        day = 1;
        if (month == 12) {
            month = 1;
            year = year + 1;
        } else {
            month = month + 1;
        }
    } else {
        day = day + 1;
    }

    printf("Next day: %d / %d / %d\n", year, month, day);

    return 0;
}
