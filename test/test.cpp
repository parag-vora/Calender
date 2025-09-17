#include"test.hpp"

int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// 0 = Sunday, 1 = Monday, ...
int getFirstDayOfYear(int year) {
    int d = (year + (year-1)/4 - (year-1)/100 + (year-1)/400) % 7;
    return d;
}
