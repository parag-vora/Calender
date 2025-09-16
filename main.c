#include "inc/calender.h"

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    printf("\nCalendar for %d\n", year);
    printf("-----------------------------\n");

    int startDay = getFirstDayOfYear(year);
    for (int month = 0; month < 12; month++) {
        printMonth(year, month, &startDay);
    }

    return 0;
}
