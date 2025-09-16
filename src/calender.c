#include"../inc/calender.h"

int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}


int getFirstDayOfYear(int year) {
    int d = (year + (year-1)/4 - (year-1)/100 + (year-1)/400) % 7;
    // 0 = Sunday, 1 = Monday, ...
    return d;
}

void printMonth(int year, int month, int *startDay) {
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 1 && isLeapYear(year)) daysInMonth[1] = 29;

    printf("\n  ------------%s-------------\n", months[month]);
    printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    int day;
    for (day = 0; day < *startDay; day++) {
        printf("     ");
    }
    for (int date = 1; date <= daysInMonth[month]; date++) {
        printf("%5d", date);
        day++;
        if (day % 7 == 0) printf("\n");
    }
    if (day % 7 != 0) printf("\n");
    *startDay = day % 7;
}

